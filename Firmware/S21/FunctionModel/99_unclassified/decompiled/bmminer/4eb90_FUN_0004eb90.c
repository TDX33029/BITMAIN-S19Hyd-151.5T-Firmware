// FUN_0004eb90 @ 0004eb90  size=64  callers=0
// program: bmminer


uint FUN_0004eb90(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0004eb54(iVar3);
      uVar4 = uVar4 | uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar4;
}

