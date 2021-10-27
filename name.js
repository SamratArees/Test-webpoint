let names=["Pratik Thapa", "Hari Kumar Karki", "Shyam Govind Sharma", "Wilson Karki", "Baladev Thapa"]



names.sort(function (a, b) {
    if (a.split(' ')[1] > b.split(' ')[1])
      return 1;
    if (a.split(' ')[1] < b.split(' ')[1])
      return -1;
    return 0;
});


console.log(names);