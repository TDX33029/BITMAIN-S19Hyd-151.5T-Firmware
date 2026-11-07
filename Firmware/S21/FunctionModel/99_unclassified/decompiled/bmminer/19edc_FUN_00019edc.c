// FUN_00019edc @ 00019edc  size=92  callers=0
// program: bmminer


uint FUN_00019edc(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  do {
    iVar1 = FUN_0002a6f0(iVar4);
    if (iVar1 != 0) {
      iVar1 = 2;
      do {
        iVar3 = iVar1 + 1;
        uVar2 = FUN_00017628(iVar4,4,iVar1);
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        iVar1 = iVar3;
      } while (iVar3 != 7);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return uVar5;
}

