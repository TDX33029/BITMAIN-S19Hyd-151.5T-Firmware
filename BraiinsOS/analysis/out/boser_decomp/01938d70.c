// FUN_01938d70 @ 01938d70 size=176 calls_out=4 calls_in=5
// strings: 

void FUN_01938d70(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*param_2 == -0x80000000) {
    iVar2 = param_2[2];
    uVar3 = 0;
    if (iVar2 < 0) {
LAB_01938d98:
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
      if (iVar1 == 0) goto LAB_01938d98;
    }
    FUN_01bed4e2(iVar1,iVar4,iVar2);
    local_30 = iVar5;
    local_2c = iVar1;
    local_28 = iVar2;
  }
  else {
    FUN_006666fc(&local_30,param_2[1],param_2[2]);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

