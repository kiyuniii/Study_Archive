

/* 파일확장자에 따른 분류 */
const isImage = filePath.toLowerCase().endsWith('.jpg') || filePath.toLowerCase().endsWith('.jpeg');

/* .jpg */
fetch(filePath)
.then(response => {
    if(!response.ok) {
        throw new Error(`HTTP error! status: ${response.status}`);
    }
    return response.blob();
})
.then(buffer => {
    const blob = new Blob([buffer], { type: 'image/jpeg' });
    const link = document.createElement('a');
    link.href = URL.createObjectURL(blob);
    link.download = 'bestshot.jpg';
    document.body.appendChild(link);
    link.click();
    document.body.removeChild(link);
    URL.revokeObjectURL(link.href);
    })
    .catch(error => {
        console.error("error when read file:", error);
    });

    
/* .txt */
    fetch(filePath)
    .then(response => {
          if (!response.ok) {
              throw new Error(`HTTP error! status: ${response.status}`);
            }
        return response.text();
    })
    .then(data => {
        // console.log("file data:", data);
        parse_metadata(data);

        const blob = new Blob([data], { type: 'text/plain' });
        const link = document.createElement('a');
        link.href = URL.createObjectURL(blob);
        link.download = 'metadata.txt';
        link.click();
        URL.revokeObjectURL(link.href);
    })
    .catch(error => {
        console.error("error when read file:", error);
    });