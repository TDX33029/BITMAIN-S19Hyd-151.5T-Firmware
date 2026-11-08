// FUN_016d54e0 @ 016d54e0 size=132 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016d54e0(void)

{
  uint uVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  
  uVar1 = ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) >> 0x14;
  if (0x432 < uVar1 || in_d0 == 0.0) {
    return SUB84(in_d0,0);
  }
  if ((longlong)in_d0 < 0) {
    dVar3 = (in_d0 - 4503599627370496.0) + 4503599627370496.0;
    if (uVar1 < 0x3ff) {
      dVar2 = 0.0;
      goto LAB_016d5530;
    }
  }
  else {
    dVar3 = (in_d0 + 4503599627370496.0) - 4503599627370496.0;
    if (uVar1 < 0x3ff) {
      dVar2 = 0.0;
      goto LAB_016d5530;
    }
  }
  dVar2 = in_d0 + (dVar3 - in_d0);
  if (0.0 < dVar3 - in_d0) {
    dVar2 = dVar2 - 1.0;
  }
LAB_016d5530:
  return SUB84(dVar2,0);
}

