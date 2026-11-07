// FUN_00be4a44 @ 00be4a44 size=404 calls_out=7 calls_in=6
// strings: 

void FUN_00be4a44(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined2 *local_28;
  
  lVar5 = FUN_00700b3c(param_4,param_5,0x21);
  iVar2 = (int)((ulonglong)lVar5 >> 0x20);
  if ((int)lVar5 == 0) {
    lVar5 = FUN_006a4c58(param_4,param_5);
    iVar2 = (int)((ulonglong)lVar5 >> 0x20);
    if ((int)lVar5 == 0) {
      uStack_30 = param_5;
      uStack_34 = param_4;
      iVar2 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),param_4,
                           param_5);
      if (iVar2 == 0) {
        local_2c = &uStack_34;
        local_28 = &DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005b8d1a,&local_2c,&DAT_01c21b9c);
      }
      param_1[4] = param_2;
      param_1[5] = param_3;
      *param_1 = 0;
      param_1[1] = iVar2;
      return;
    }
    uVar3 = 0;
    if (lVar5 < 0) goto LAB_00be4ab8;
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar4 = 0;
    }
    else {
      uVar3 = 1;
      iVar1 = FUN_01298504(iVar2,1);
      iVar4 = iVar2;
      if (iVar1 == 0) goto LAB_00be4ab8;
    }
    FUN_01bed4e2(iVar1,(int)lVar5,iVar2);
    *param_1 = 2;
    param_1[1] = iVar4;
    param_1[2] = iVar1;
  }
  else {
    uVar3 = 0;
    if (lVar5 < 0) {
LAB_00be4ab8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,iVar2);
    }
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar4 = 0;
    }
    else {
      uVar3 = 1;
      iVar1 = FUN_01298504(iVar2,1);
      iVar4 = iVar2;
      if (iVar1 == 0) goto LAB_00be4ab8;
    }
    FUN_01bed4e2(iVar1,(int)lVar5,iVar2);
    param_1[2] = iVar1;
    *param_1 = 1;
    param_1[1] = iVar4;
  }
  param_1[3] = iVar2;
  param_1[4] = param_2;
  param_1[5] = param_3;
  return;
}

