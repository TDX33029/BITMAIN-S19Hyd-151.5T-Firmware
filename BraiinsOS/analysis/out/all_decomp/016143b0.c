// FUN_016143b0 @ 016143b0 size=368 calls_out=4 calls_in=0
// strings: BUG: Faulty V2 Message couldn't be represented as StringV2MiningMessage

undefined4 FUN_016143b0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_80;
  undefined4 local_68;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  char local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_dc = 0;
  local_e4 = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_80 = 0x80000001;
  local_54 = 0x200;
  local_60 = &local_e4;
  local_e0 = 1;
  local_d4 = 0x80;
  local_d8 = 1;
  FUN_01616fdc(local_50,param_1,&local_d8);
  uVar3 = local_dc;
  uVar2 = local_e0;
  iVar1 = local_e4;
  if (local_50[0] != '3') {
    FUN_01623208();
    if (local_e4 != 0) {
      thunk_FUN_016d3fb4(local_e0);
    }
    local_cc = local_44;
    local_d0 = local_48;
    local_d4 = local_4c;
    local_c8 = local_40;
    uStack_c4 = uStack_3c;
    uStack_c0 = uStack_38;
    uStack_bc = uStack_34;
    uStack_b8 = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: Faulty V2 Message couldn\'t be represented as StringV2MiningMessage",0x38,
                 &local_d8,&DAT_018aba60,&DAT_018aba30);
  }
  FUN_01623208(&local_d8);
  uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,uVar2,uVar3);
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return uVar3;
}

