// FUN_00019f9c @ 00019f9c  size=72  callers=2
// program: bmminer


uint FUN_00019f9c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 200;
  iVar4 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if ((iVar1 != 0) && (uVar2 = FUN_00017628(iVar4,4,0), uVar2 <= uVar3)) {
      uVar3 = uVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return uVar3;
}

