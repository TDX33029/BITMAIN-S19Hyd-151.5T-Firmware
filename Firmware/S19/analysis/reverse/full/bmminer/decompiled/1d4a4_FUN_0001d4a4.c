// FUN_0001d4a4 @ 0001d4a4  size=36  callers=6
// program: bmminer


uint FUN_0001d4a4(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = DAT_000891d8 - 100;
  bVar4 = 0x61 < DAT_000891d8;
  bVar2 = DAT_000891d8 == 0x62;
  if (!bVar2) {
    bVar4 = 1 < uVar1;
  }
  bVar3 = uVar1 == 2;
  if (!bVar4 || (bVar2 || bVar3)) {
    uVar1 = 1;
  }
  if (bVar4 && (!bVar2 && !bVar3)) {
    uVar1 = 0;
  }
  return uVar1;
}

