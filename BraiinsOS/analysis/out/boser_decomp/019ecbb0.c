// FUN_019ecbb0 @ 019ecbb0 size=320 calls_out=4 calls_in=3
// strings: stream did not conta

void FUN_019ecbb0(undefined4 *param_1,char *param_2,int *param_3,uint param_4,int *param_5,
                 int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  if (*param_2 == '\x04') {
    if (*param_3 != -0x80000000) {
      local_30 = *param_3;
      iStack_2c = param_3[1];
      iStack_28 = param_3[2];
      FUN_019ecd30(param_5,&local_30,*(undefined4 *)(param_2 + 4));
      FUN_019a18a8(param_1,0x15,"stream did not conta",0x22);
      return;
    }
    FUN_019bb7e0(*param_5,param_5[1]);
    iVar4 = param_3[2];
    iVar5 = param_3[3];
    *param_5 = param_3[1];
    param_5[1] = iVar4;
    param_5[2] = iVar5;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar2;
  }
  else {
    uVar6 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 4);
    if (*param_3 == -0x80000000) {
      FUN_019bb7e0(*param_5,param_5[1]);
      iVar4 = param_3[2];
      iVar5 = param_3[3];
      *param_5 = param_3[1];
      param_5[1] = iVar4;
      param_5[2] = iVar5;
      if (param_6 != 0) {
        uVar3 = param_5[2];
        uVar1 = uVar3 - param_4;
        if (param_4 <= uVar3) {
          if (((uVar3 != param_4) && (uVar1 < uVar3)) && (*(char *)(param_5[1] + uVar1) < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d295d0);
          }
          param_5[2] = uVar1;
        }
      }
    }
    else {
      local_30 = *param_3;
      iStack_2c = param_3[1];
      iStack_28 = param_3[2];
      FUN_019ecd30(param_5,&local_30,param_4);
    }
    *param_1 = uVar6;
    param_1[1] = uVar2;
  }
  return;
}

