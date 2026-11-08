// FUN_019d21ac @ 019d21ac size=132 calls_out=2 calls_in=2
// strings: 

void FUN_019d21ac(uint *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  
  do {
    if (DAT_01d50418 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(&DAT_01d50418);
      goto LAB_019d21e0;
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d50418);
  } while (!bVar1);
  DAT_01d50418 = 1;
  DataMemoryBarrier(0xb);
LAB_019d21e0:
  bVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bVar3 = FUN_0197ac0c();
    bVar3 = bVar3 ^ 1;
  }
  cVar2 = DAT_01d5041c;
  *(byte *)(param_1 + 2) = bVar3;
  *param_1 = (uint)(cVar2 != '\0');
  param_1[1] = (uint)&DAT_01d50418;
  return;
}

