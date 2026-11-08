// FUN_010bd44c @ 010bd44c size=152 calls_out=3 calls_in=0
// strings: 

void FUN_010bd44c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 1) {
    *param_1 = 0x80000000;
    param_1[1] = param_3;
    param_1[2] = 1;
    return;
  }
  iVar2 = *(int *)(param_2 + 0xc);
  uVar3 = 0;
  if (iVar2 < 0) {
LAB_010bd46c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  iVar4 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(iVar2,1);
    iVar5 = iVar2;
    if (iVar1 == 0) goto LAB_010bd46c;
  }
  FUN_01bed4e2(iVar1,iVar4 + 8,iVar2);
  param_1[2] = iVar1;
  *param_1 = &DAT_80000008;
  param_1[1] = iVar5;
  param_1[3] = iVar2;
  return;
}

