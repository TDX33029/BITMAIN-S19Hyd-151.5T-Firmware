// FUN_00d426e0 @ 00d426e0 size=144 calls_out=2 calls_in=0
// strings: 

void FUN_00d426e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)*param_2 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  FUN_00c7d390(&local_38,(int *)*param_2,*param_3);
  uVar1 = 7;
  if (local_38 != 8 || local_34 != 0) {
    local_c8 = local_38;
    iStack_c4 = local_34;
    uStack_c0 = uStack_30;
    uStack_bc = uStack_2c;
    local_b8 = local_28;
    uStack_b4 = uStack_24;
    uStack_b0 = uStack_20;
    uStack_ac = uStack_1c;
    uVar1 = 4;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  FUN_016dd1aa(param_1 + 2,&local_c8,0x90);
  return;
}

