function findClosest(x: number, y: number, z: number): number {
    const a: number = Math.abs(x - z);
    const b: number = Math.abs(z - y);
    return (a - b < 0) ? 1 : ((a - b === 0) ? 0 : 2);
};