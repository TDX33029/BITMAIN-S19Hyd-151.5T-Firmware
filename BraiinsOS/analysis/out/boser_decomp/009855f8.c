// FUN_009855f8 @ 009855f8 size=232 calls_out=1 calls_in=1
// strings: 

void FUN_009855f8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*param_2 == -0x7ffffffe) {
    *param_1 = 0x80000002;
  }
  else {
    if (*param_2 == -0x7fffffff) {
      local_48 = 0x80000001;
    }
    else {
      FUN_012e4b04(&local_48,param_2);
    }
    if (param_2[3] == -0x7fffffff) {
      local_38 = 0x80000001;
    }
    else {
      FUN_012e4b04(&local_38);
    }
    if (param_2[6] == -0x7fffffff) {
      local_28 = 0x80000001;
    }
    else {
      FUN_012e4b04(&local_28);
    }
    iVar1 = param_2[9];
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = local_38;
    param_1[4] = uStack_34;
    param_1[5] = uStack_30;
    param_1[6] = local_28;
    param_1[7] = uStack_24;
    param_1[8] = uStack_20;
    *(short *)(param_1 + 9) = (short)iVar1;
  }
  return;
}

