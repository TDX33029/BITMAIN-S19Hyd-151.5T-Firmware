// FUN_0003ec70 @ 0003ec70  size=68  callers=0
// program: bmminer


undefined4 FUN_0003ec70(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_000201d8(iVar2), iVar1 == 0 || (iVar1 = FUN_0003eabc(iVar2), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 0;
    }
  }
  return 1;
}

