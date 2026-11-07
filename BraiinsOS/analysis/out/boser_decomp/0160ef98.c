// FUN_0160ef98 @ 0160ef98 size=336 calls_out=6 calls_in=8
// strings: 

void FUN_0160ef98(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_28;
  undefined1 *local_24;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
  }
  else {
    uVar2 = 0;
    if (*(char *)(param_2 + param_3 + -1) == '\0') {
      param_3 = param_3 + -1;
    }
    if (param_3 < 0) {
LAB_0160efd0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,param_3);
    }
    if (param_3 == 0) {
      iVar1 = 1;
      iVar3 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_01298504(param_3,1);
      iVar3 = param_3;
      if (iVar1 == 0) goto LAB_0160efd0;
    }
    local_38 = iVar3;
    local_34 = iVar1;
    FUN_01bed4e2(iVar1,param_2,param_3);
    local_30 = param_3;
    FUN_012fbd94(&local_4c,iVar1,param_3);
    local_3c = local_44;
    local_40 = local_48;
    if (local_4c == 0) {
      *param_1 = 0;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = param_3;
    }
    else {
      local_44 = local_30;
      local_48 = local_34;
      local_24 = &LAB_006667bc;
      local_4c = iVar3;
      local_28 = &local_4c;
      FUN_00664898(&local_38,&DAT_005a4fc7,&local_28);
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      FUN_0134bd64(local_4c,local_48);
      *param_1 = 1;
    }
  }
  return;
}

