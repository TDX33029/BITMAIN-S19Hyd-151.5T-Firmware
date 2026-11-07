// FUN_00798dec @ 00798dec size=264 calls_out=2 calls_in=0
// strings: 

void FUN_00798dec(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int *local_38;
  undefined1 *local_34;
  int *local_30;
  undefined4 *local_2c;
  int *local_28;
  code *local_24;
  int **local_20;
  undefined4 *local_1c;
  
  if (*param_2 != -0x80000000) {
    iVar1 = param_2[3];
    local_48 = (int *)&DAT_0185d184;
    local_44 = &DAT_0157d360;
    FUN_00600d2c(&local_38,&DAT_005740cd,&local_48);
    if ((char)iVar1 != '\0') {
      local_40 = local_30;
      local_44 = (undefined4 *)local_34;
      goto LAB_00798e78;
    }
    if (local_38 != (int *)0x0) {
      thunk_FUN_016d3fb4(local_34);
    }
  }
  local_38 = (int *)0x0;
  local_44 = (undefined4 *)0x1;
  local_40 = 0;
LAB_00798e78:
  local_20 = &local_48;
  local_1c = &DAT_006043a8;
  local_24 = FUN_00fac370;
  local_2c = &DAT_006043a8;
  local_34 = &LAB_007969b8;
  local_48 = local_38;
  local_38 = param_2;
  local_30 = param_2 + 0x3c;
  local_28 = param_2 + 0x42;
  FUN_00600d2c(&local_58,&DAT_00596e6d,&local_38);
  if (local_48 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_44);
  }
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  return;
}

