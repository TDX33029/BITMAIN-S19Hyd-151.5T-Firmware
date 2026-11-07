// FUN_018f35c0 @ 018f35c0 size=304 calls_out=3 calls_in=1
// strings: 

void FUN_018f35c0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5
                 )

{
  undefined4 *puVar1;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int local_a0 [4];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 local_28;
  
  local_dc = 0;
  local_e0 = param_5;
  local_e4 = param_4;
  FUN_018e8ba4(local_a0,&local_e4,param_2);
  puVar1 = (undefined4 *)((uint)local_a0 | 4);
  local_b0 = *puVar1;
  uStack_ac = puVar1[1];
  uStack_a8 = puVar1[2];
  if (local_a0[0] == -0x7fffffff) {
    param_1[3] = local_b0;
    param_1[4] = uStack_ac;
    param_1[5] = uStack_a8;
    *param_1 = 1;
    param_1[2] = &DAT_80000016;
  }
  else {
    local_c8 = local_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_b8 = uStack_80;
    puVar1 = (undefined4 *)((uint)&local_d8 | 4);
    *puVar1 = local_b0;
    puVar1[1] = uStack_ac;
    puVar1[2] = uStack_a8;
    local_d8 = local_a0[0];
    if (local_dc < local_e0) {
      local_28 = 4;
      local_a0[0] = -0x7fffffff;
      local_a0[1] = 0x100001;
      FUN_018f1fc4(param_3,local_a0,*(char *)(param_3 + 0x31) == '\x02');
      *(undefined1 *)(param_1 + 3) = 6;
      param_1[2] = &DAT_80000016;
      *(undefined1 *)(param_3 + 0x255) = 1;
      *param_1 = 1;
      FUN_018ed678(&local_d8);
    }
    else {
      param_1[1] = local_a0[0];
      param_1[2] = uStack_d4;
      param_1[3] = uStack_d0;
      param_1[4] = uStack_cc;
      param_1[5] = local_90;
      param_1[6] = uStack_8c;
      param_1[7] = uStack_88;
      param_1[8] = uStack_84;
      param_1[9] = uStack_80;
      *param_1 = 0;
    }
  }
  return;
}

