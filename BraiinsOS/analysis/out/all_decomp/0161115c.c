// FUN_0161115c @ 0161115c size=676 calls_out=6 calls_in=1
// strings: 

void FUN_0161115c(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined1 auStack_48 [36];
  
  uVar6 = *(uint *)(param_2 + 0x14);
  uVar7 = *(uint *)(param_2 + 0x1c);
  uVar1 = param_6 + param_4 + uVar6 + uVar7;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_d8 = 1;
    uVar1 = 0;
  }
  else {
    local_d8 = thunk_FUN_016d4a50(uVar1);
    if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  local_d4 = 0;
  local_dc = uVar1;
  if (uVar1 < uVar6) {
    FUN_016225b8(&local_dc,0,uVar6);
  }
  iVar5 = local_d4;
  iVar3 = local_d8;
  uVar1 = local_dc;
  FUN_016dd1aa(local_d8 + local_d4,uVar2,uVar6);
  local_d4 = iVar5 + uVar6;
  if (uVar1 - local_d4 < param_4) {
    FUN_016225b8(&local_dc,local_d4,param_4);
    uVar1 = local_dc;
    iVar3 = local_d8;
  }
  else {
  }
  iVar5 = local_d4;
  FUN_016dd1aa(iVar3 + local_d4,param_3,param_4);
  local_d4 = iVar5 + param_4;
  if (uVar1 - local_d4 < param_6) {
    FUN_016225b8(&local_dc,local_d4,param_6);
    uVar1 = local_dc;
    iVar3 = local_d8;
  }
  iVar5 = local_d4;
  FUN_016dd1aa(iVar3 + local_d4,param_5,param_6);
  local_d4 = iVar5 + param_6;
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  if (uVar1 - local_d4 < uVar7) {
    FUN_016225b8(&local_dc,local_d4,uVar7);
    iVar3 = local_d8;
  }
  iVar5 = local_d4;
  FUN_016dd1aa(iVar3 + local_d4,uVar2,uVar7);
  local_d4 = iVar5 + uVar7;
  FUN_01611424(&local_d0,iVar3,local_d4,1,0);
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 == 0) {
    local_b0 = local_d0;
    uStack_ac = uStack_cc;
    uStack_a8 = uStack_c8;
    uStack_a4 = uStack_c4;
    local_a0 = local_c0;
    uStack_9c = uStack_bc;
    uStack_98 = uStack_b8;
    uStack_94 = uStack_b4;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    local_90 = local_d0;
    uStack_8c = uStack_cc;
    uStack_88 = uStack_c8;
    uStack_84 = uStack_c4;
    local_80 = local_c0;
    uStack_7c = uStack_bc;
    uStack_78 = uStack_b8;
    uStack_74 = uStack_b4;
    do {
      local_70 = local_90;
      uStack_6c = uStack_8c;
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      local_60 = local_80;
      uStack_5c = uStack_7c;
      uStack_58 = uStack_78;
      uStack_54 = uStack_74;
      local_50 = iVar4;
      FUN_016dd1aa(auStack_48,iVar4,0x20);
      FUN_01611424(&local_90,&local_70,0x20,auStack_48,0x20);
      iVar4 = iVar4 + 0x20;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_b0 = local_90;
    uStack_ac = uStack_8c;
    uStack_a8 = uStack_88;
    uStack_a4 = uStack_84;
    local_a0 = local_80;
    uStack_9c = uStack_7c;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
  }
  FUN_016dd1aa(param_1,&local_b0,0x20);
  if (local_dc != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  return;
}

