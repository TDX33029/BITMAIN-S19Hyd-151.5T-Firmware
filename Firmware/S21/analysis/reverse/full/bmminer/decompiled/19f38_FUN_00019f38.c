// FUN_00019f38 @ 00019f38  size=100  callers=5
// program: bmminer


uint FUN_00019f38(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 200;
  iVar4 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      uVar2 = FUN_00017628(iVar4,4,0);
      uVar3 = FUN_00017628(iVar4,4,1);
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      if (uVar3 <= uVar5) {
        uVar5 = uVar3;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return uVar5;
}

