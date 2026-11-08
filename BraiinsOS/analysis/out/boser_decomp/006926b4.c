// FUN_006926b4 @ 006926b4 size=196 calls_out=5 calls_in=3
// strings: 

void FUN_006926b4(undefined1 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x04') {
    *param_1 = 4;
  }
  else {
    uVar4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)(param_2 + 4);
    local_40 = uVar4;
    uStack_3c = uVar5;
    uVar1 = FUN_005ef5e8(&local_40);
    if (param_4 < 0) {
      uVar2 = 0;
LAB_006926fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,param_4);
    }
    if (param_4 == 0) {
      local_34 = 1;
      iVar3 = 0;
    }
    else {
      uVar2 = 1;
      local_34 = FUN_01298504(param_4,1);
      if (local_34 == 0) goto LAB_006926fc;
      iVar3 = param_4;
    }
    FUN_01bed4e2(local_34,param_3,param_4);
    local_38 = iVar3;
    local_30 = param_4;
    uStack_2c = uVar4;
    uStack_28 = uVar5;
    FUN_019d1d70(param_1,uVar1,&local_38);
  }
  return;
}

