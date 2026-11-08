// FUN_016d6168 @ 016d6168 size=138 calls_out=0 calls_in=16
// strings: 

undefined4 FUN_016d6168(void)

{
  uint uVar1;
  uint uVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  
  uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar1 = (uVar2 & 0x7fffffff) >> 0x14;
  if (0x432 < uVar1) {
    return SUB84(in_d0,0);
  }
  dVar3 = in_d0;
  if ((longlong)in_d0 < 0) {
    dVar3 = -in_d0;
  }
  if (uVar1 < 0x3fe) {
    return SUB84((double)(((ulonglong)uVar2 << 0x20) + ((ulonglong)in_d0 & 0xffffffff)) * 0.0,0);
  }
  dVar4 = ((dVar3 + 4503599627370496.0) - 4503599627370496.0) - dVar3;
  dVar3 = dVar3 + dVar4;
  if (dVar4 <= 0.5) {
    if (dVar4 <= -0.5) {
      dVar3 = dVar3 + 1.0;
    }
  }
  else {
    dVar3 = dVar3 - 1.0;
  }
  if ((longlong)in_d0 < 0) {
    return SUB84(-dVar3,0);
  }
  return SUB84(dVar3,0);
}

