// FUN_0160ec7c @ 0160ec7c size=144 calls_out=3 calls_in=264
// strings: 

void FUN_0160ec7c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_2 != -0x80000000) {
    iVar2 = param_2[1];
    iVar4 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar2;
    param_1[2] = iVar4;
    return;
  }
  iVar2 = param_2[2];
  uVar3 = 0;
  if (iVar2 < 0) {
LAB_0160eca0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  iVar4 = param_2[1];
  if (iVar2 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(iVar2,1);
    iVar5 = iVar2;
    if (iVar1 == 0) goto LAB_0160eca0;
  }
  FUN_01bed4e2(iVar1,iVar4,iVar2);
  *param_1 = iVar5;
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  return;
}

