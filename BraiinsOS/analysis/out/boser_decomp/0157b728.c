// FUN_0157b728 @ 0157b728 size=176 calls_out=3 calls_in=1
// strings: 

void FUN_0157b728(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4,
                 int param_5)

{
  char *pcVar1;
  int unaff_r5;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char acStack_28 [16];
  
  if (param_3 != 0) {
    unaff_r5 = param_5;
  }
  if (param_3 != 0 && unaff_r5 != 0) {
    if (unaff_r5 == 1) {
      uVar2 = *param_4;
      FUN_0164a9cc(acStack_28);
      FUN_01646e78(acStack_28,uVar2);
    }
    else {
      if (param_3 != 1) {
        FUN_01646fc8(&local_38);
        goto LAB_0157b7b4;
      }
      uVar2 = *param_2;
      FUN_0164a9cc(acStack_28,param_4,unaff_r5);
      FUN_01646e78(acStack_28,uVar2);
    }
    pcVar1 = acStack_28;
  }
  else {
    pcVar1 = "";
  }
  local_38 = *(undefined4 *)pcVar1;
  uStack_34 = *(undefined4 *)(pcVar1 + 4);
  uStack_30 = *(undefined4 *)(pcVar1 + 8);
LAB_0157b7b4:
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  return;
}

