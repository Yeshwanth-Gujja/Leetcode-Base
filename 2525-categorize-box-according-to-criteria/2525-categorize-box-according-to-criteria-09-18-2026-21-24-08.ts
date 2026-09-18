function categorizeBox(length: number, width: number, height: number, mass: number): string {
    let bulky = (length >= 10000 ||
                  width  >= 10000 ||
                  height >= 10000 ||
                  length * width * height >= 1000000000);
    let heavy = (mass >= 100);
    if (bulky && heavy)
        return "Both";
    if (bulky)
        return "Bulky";
    if (heavy)
        return "Heavy";
    return "Neither";
};