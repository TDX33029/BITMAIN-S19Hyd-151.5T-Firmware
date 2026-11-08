// FUN_017d3d2c @ 017d3d2c size=292 calls_out=5 calls_in=2
// strings: 

void FUN_017d3d2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_68;
  undefined2 local_30;
  undefined1 *local_2c;
  undefined *local_28;
  
  local_70 = 0;
  local_78[0] = 0;
  local_68 = 0;
  FUN_01ac814c(&local_108,local_78,param_2,param_3);
  if (local_108 == 2) {
    local_2c = (undefined1 *)thunk_FUN_01be5118(1);
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,1);
    }
    *local_2c = (undefined1)local_104;
    local_30 = 0;
    local_78[0] = 2;
    local_28 = &DAT_01d1c16c;
    iVar1 = thunk_FUN_01be5118(0x54);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x54);
    }
    FUN_01bed4e2(iVar1,local_78,0x54);
    *param_1 = 2;
    param_1[1] = iVar1;
  }
  else {
    local_b8 = local_100;
    uStack_b4 = uStack_fc;
    uStack_b0 = uStack_f8;
    uStack_ac = uStack_f4;
    uStack_a8 = uStack_f0;
    local_a4 = local_ec;
    uStack_a0 = uStack_e8;
    uStack_9c = uStack_e4;
    uStack_98 = uStack_e0;
    uStack_94 = uStack_dc;
    local_90 = local_d8;
    local_8c = uStack_d4;
    uVar2 = local_8c;
    uStack_88 = uStack_d0;
    uStack_84 = uStack_cc;
    uStack_80 = uStack_c8;
    uStack_7c = uStack_c4;
    local_8c._0_1_ = (char)uStack_d4;
    local_bc = local_104;
    local_c0 = local_108;
    local_8c = uVar2;
    if ((char)local_8c == '\0') {
      uVar2 = FUN_017f06bc(&local_c0);
      *param_1 = 2;
      param_1[1] = uVar2;
    }
    else {
      FUN_01bed4e2(param_1,&local_c0,0x48);
    }
  }
  return;
}

