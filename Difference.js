const difference = (A, B) => {
    if (A < 0 || B < 0) return;
    if (A > 100 || B > 100) return;
    console.log(Math.abs(A - B));
}