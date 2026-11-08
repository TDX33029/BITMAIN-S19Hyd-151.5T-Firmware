// FUN_0106dd3c @ 0106dd3c size=864 calls_out=5 calls_in=5
// strings: 

void FUN_0106dd3c(uint *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint unaff_r6;
  uint uVar7;
  int *unaff_r10;
  undefined2 unaff_r11;
  uint uVar8;
  uint uVar9;
  undefined6 uVar10;
  undefined2 local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined2 local_c8;
  undefined2 local_c4;
  undefined2 local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined1 local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined2 local_3a;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined2 local_26;
  
  puVar6 = (undefined1 *)param_2[2];
  if (puVar6 == &DAT_3b9aca00) {
    local_d8 = *param_2;
    uVar3 = thunk_FUN_016d4a50(0x44);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_010538f4(&local_98,local_d8);
    uVar10 = FUN_016dd1aa(uVar3,&local_98,0x44);
    uVar7 = uVar3;
    goto LAB_0106dfd4;
  }
  local_b0 = (undefined1)param_2[0x16];
  if ((short)param_2[6] == 1) {
    local_d8 = param_2[9];
    if ((int)local_d8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_d8);
    }
    uVar3 = param_2[8];
    if (local_d8 == 0) {
      unaff_r6 = 1;
      local_d4 = 0;
    }
    else {
      unaff_r6 = thunk_FUN_016d4a50(local_d8);
      local_d4 = local_d8;
      if (unaff_r6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_d8);
      }
    }
    FUN_016dd1aa(unaff_r6,uVar3);
    local_dc = 1;
    if ((short)param_2[0xf] == 1) goto LAB_0106de04;
LAB_0106deac:
    local_bc = param_2[0x10];
    local_b8 = param_2[0x11];
    local_b4 = param_2[0x12];
    local_38 = param_2[0x13];
    local_34 = param_2[0x14];
    local_30 = param_2[0x15];
    local_26 = *(undefined2 *)((int)param_2 + 0x3e);
    unaff_r11 = 0;
  }
  else {
    local_d4 = param_2[7];
    local_d8 = param_2[9];
    local_a8 = (uint)*(ushort *)((int)param_2 + 0x1a);
    unaff_r6 = param_2[8];
    local_98 = param_2[10];
    uStack_94 = param_2[0xb];
    uStack_90 = param_2[0xc];
    uStack_8c = param_2[0xd];
    uStack_88 = param_2[0xe];
    local_dc = 0;
    if ((short)param_2[0xf] != 1) goto LAB_0106deac;
LAB_0106de04:
    local_b4 = param_2[0x12];
    uVar4 = 0;
    if ((int)local_b4 < 0) {
LAB_0106de14:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar4,local_b4);
    }
    uVar3 = param_2[0x11];
    if (local_b4 == 0) {
      local_bc = 0;
      local_b8 = 1;
    }
    else {
      local_b8 = thunk_FUN_016d4a50(local_b4);
      local_bc = local_b4;
      if (local_b8 == 0) {
        uVar4 = 1;
        goto LAB_0106de14;
      }
    }
    unaff_r11 = 1;
    FUN_016dd1aa(local_b8,uVar3);
  }
  uVar10 = CONCAT24(local_dc,local_d4);
  local_3a = (undefined2)local_a8;
  local_50 = local_98;
  uStack_4c = uStack_94;
  uStack_48 = uStack_90;
  uStack_44 = uStack_8c;
  uStack_40 = uStack_88;
  unaff_r10 = (int *)param_2[4];
  local_c4 = *(undefined2 *)((int)param_2 + 0x5e);
  local_c0 = (undefined2)param_2[0x17];
  uVar7 = (uint)*(ushort *)((int)param_2 + 0x62);
  local_c8 = (undefined2)param_2[0x18];
  do {
    iVar5 = *unaff_r10;
    bVar2 = (bool)hasExclusiveAccess(unaff_r10);
  } while (!bVar2);
  *unaff_r10 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x106e09c);
    (*pcVar1)();
  }
  local_d0 = param_2[1];
  local_cc = param_2[5];
  local_9a = (undefined2)local_a8;
  uVar3 = *param_2;
  local_a8 = local_38;
  local_a0 = local_30;
  local_a4 = local_34;
  local_9c = local_26;
LAB_0106dfd4:
  *(short *)(param_1 + 6) = (short)((uint6)uVar10 >> 0x20);
  param_1[4] = (uint)unaff_r10;
  param_1[5] = local_cc;
  param_1[1] = local_d0;
  param_1[2] = (uint)puVar6;
  param_1[7] = (uint)uVar10;
  param_1[8] = unaff_r6;
  param_1[9] = local_d8;
  *param_1 = uVar3;
  *(undefined2 *)((int)param_1 + 0x1a) = local_9a;
  uVar8 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  uVar9 = param_2[0x1c];
  param_1[10] = local_98;
  param_1[0xb] = uStack_94;
  param_1[0xc] = uStack_90;
  param_1[0xd] = uStack_8c;
  param_1[0xe] = uStack_88;
  *(undefined2 *)(param_1 + 0x18) = local_c8;
  *(undefined2 *)((int)param_1 + 0x5e) = local_c4;
  *(undefined2 *)(param_1 + 0x17) = local_c0;
  *(undefined2 *)((int)param_1 + 0x3e) = local_9c;
  param_1[0x10] = local_bc;
  param_1[0x11] = local_b8;
  param_1[0x12] = local_b4;
  *(undefined2 *)(param_1 + 0xf) = unaff_r11;
  param_1[0x1a] = uVar8;
  param_1[0x1b] = uVar3;
  param_1[0x1c] = uVar9;
  *(short *)((int)param_1 + 0x62) = (short)uVar7;
  *(undefined1 *)(param_1 + 0x16) = local_b0;
  param_1[0x13] = local_a8;
  param_1[0x14] = local_a4;
  param_1[0x15] = local_a0;
  return;
}

