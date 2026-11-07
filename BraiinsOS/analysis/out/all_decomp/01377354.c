// FUN_01377354 @ 01377354 size=760 calls_out=3 calls_in=5
// strings: 

void FUN_01377354(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_120;
  undefined4 uStack_118;
  undefined4 local_ec;
  uint local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_ec = CONCAT13(local_ec._3_1_,0xa0000);
  local_d4 = local_d4 & 0xffff0000;
  local_24 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_5c = 0;
  local_64 = 0;
  local_70 = 0;
  local_44 = 0;
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = &local_70;
  local_28 = 1;
  local_38 = 4;
  local_60 = 4;
  local_6c = 4;
  local_48 = 4;
  local_54 = 4;
  local_bc = 4;
  local_c0 = 4;
  FUN_013602fc(&local_64,&local_c0);
  iVar1 = local_68;
  if (local_5c == 0) {
    if (local_68 == local_70) {
      FUN_013c402c(&local_70);
    }
    puVar2 = (undefined4 *)(local_6c + iVar1 * 0xc);
    *puVar2 = 0;
    puVar2[1] = 4;
  }
  else {
    local_5c = local_5c + -1;
    puVar2 = (undefined4 *)(local_60 + local_5c * 0xc);
    uVar4 = *puVar2;
    uVar3 = puVar2[1];
    if (local_68 == local_70) {
      FUN_013c402c(&local_70);
    }
    puVar2 = (undefined4 *)(local_6c + iVar1 * 0xc);
    *puVar2 = uVar4;
    puVar2[1] = uVar3;
  }
  iVar5 = iVar1 + 1;
  *(undefined4 *)(local_6c + iVar1 * 0xc + 8) = 0;
  local_68 = iVar5;
  if (local_5c == 0) {
    if (iVar5 == local_70) {
      FUN_013c402c(&local_70);
    }
    puVar2 = (undefined4 *)(local_6c + iVar5 * 0xc);
    *puVar2 = 0;
    puVar2[1] = 4;
  }
  else {
    local_5c = local_5c + -1;
    puVar2 = (undefined4 *)(local_60 + local_5c * 0xc);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    if (iVar5 == local_70) {
      FUN_013c402c(&local_70);
    }
    puVar2 = (undefined4 *)(local_6c + iVar5 * 0xc);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
  }
  *(undefined4 *)(local_6c + iVar5 * 0xc + 8) = 0;
  local_68 = iVar1 + 2;
  FUN_016dd1aa(&local_c0,&local_70,0x50);
  param_1[0x3a] = 1000;
  param_1[0x38] = 4;
  *(undefined4 *)((int)param_1 + 0x11) = 0x2020202;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined2 *)((int)param_1 + 0x15) = 0x202;
  param_1[6] = 0xfa;
  *(undefined1 *)((int)param_1 + 0x17) = 10;
  *(undefined4 *)((int)param_1 + 10) = 0x3020202;
  *param_1 = 2;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uStack_120;
  param_1[0xb] = 0;
  param_1[0xc] = uStack_118;
  param_1[0xd] = 0;
  param_1[0xe] = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = local_ec;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 10000;
  param_1[0x1d] = local_d4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 4;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_016dd1aa(param_1 + 0x22,&local_c0,0x50);
  param_1[0x36] = 0;
  return;
}

