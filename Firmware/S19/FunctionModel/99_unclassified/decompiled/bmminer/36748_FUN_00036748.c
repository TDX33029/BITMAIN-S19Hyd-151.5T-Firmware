// FUN_00036748 @ 00036748  size=64  callers=1
// program: bmminer


uint FUN_00036748(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = FUN_000201d8(iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_0003670c(iVar3);
      uVar4 = uVar4 | uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar4;
}

