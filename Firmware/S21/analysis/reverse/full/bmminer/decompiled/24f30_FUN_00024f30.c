// FUN_00024f30 @ 00024f30  size=36  callers=3
// program: bmminer


uint FUN_00024f30(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = DAT_000c0428 - 100;
  bVar4 = 0x61 < DAT_000c0428;
  bVar2 = DAT_000c0428 == 0x62;
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

