// FUN_019784c8 @ 019784c8 size=132 calls_out=2 calls_in=2
// strings: 

void FUN_019784c8(uint *param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  
  do {
    if (DAT_01d4fd6c != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(&DAT_01d4fd6c);
      goto LAB_019784f8;
    }
    bVar1 = (bool)hasExclusiveAccess(0x1d4fd6c);
  } while (!bVar1);
  DAT_01d4fd6c = 1;
  DataMemoryBarrier(0xb);
LAB_019784f8:
  bVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    bVar3 = FUN_0197ac0c();
    bVar3 = bVar3 ^ 1;
  }
  cVar2 = DAT_01d4fd70;
  *(byte *)(param_1 + 2) = bVar3;
  *param_1 = (uint)(cVar2 != '\0');
  param_1[1] = (uint)&DAT_01d4fd6c;
  return;
}

