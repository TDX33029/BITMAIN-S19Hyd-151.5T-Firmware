// FUN_0155ca1c @ 0155ca1c size=856 calls_out=7 calls_in=2
// strings: 

void FUN_0155ca1c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar15 = *(undefined4 *)(param_2 + 0x54);
  uVar16 = thunk_FUN_016de0ee(0,0x2c0);
  puVar11 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar11[4] == '\0') {
    FUN_015f62e4(&local_88);
    *puVar11 = local_88;
    puVar11[1] = local_84;
    puVar11[2] = local_80;
    puVar11[3] = local_7c;
    *(undefined1 *)(puVar11 + 4) = 1;
  }
  uVar1 = *puVar11;
  uVar13 = puVar11[1];
  uVar7 = puVar11[2];
  uVar8 = puVar11[3];
  *puVar11 = uVar1 + 1;
  puVar11[1] = uVar13 + (0xfffffffe < uVar1);
  iVar2 = thunk_FUN_016d4a50(0x2444);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x2444);
  }
  FUN_016dd606(iVar2 + 0x2400U,0xff,0x44);
  local_40 = 0x38;
  local_44 = 0x3f;
  local_3c = 0;
  local_48 = iVar2 + 0x2400U;
  local_38 = uVar1;
  local_34 = uVar13;
  local_30 = uVar7;
  local_2c = uVar8;
  local_74 = thunk_FUN_016d4a50(0x280);
  if (local_74 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x280);
  }
  local_68 = local_48;
  local_64 = local_44;
  local_60 = local_40;
  uStack_5c = local_3c;
  local_58 = local_38;
  uStack_54 = local_34;
  uStack_50 = local_30;
  uStack_4c = local_2c;
  local_78 = 0x20;
  local_84 = 1;
  local_88 = 1;
  local_6c = 0;
  local_70 = 0;
  local_7c = local_7c & 0xffffff00;
  local_80 = 0;
  puVar11 = (uint *)thunk_FUN_016d4a50(0x40);
  if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x40);
  }
  *puVar11 = local_88;
  puVar11[1] = local_84;
  puVar11[2] = local_80;
  puVar11[3] = local_7c;
  puVar11[4] = local_78;
  puVar11[5] = local_74;
  puVar11[6] = local_70;
  puVar11[7] = local_6c;
  puVar11[8] = local_68;
  puVar11[9] = local_64;
  puVar11[10] = local_60;
  puVar11[0xb] = uStack_5c;
  puVar11[0xc] = local_58;
  puVar11[0xd] = uStack_54;
  puVar11[0xe] = uStack_50;
  puVar11[0xf] = uStack_4c;
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar14 = *(undefined4 *)(param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 0x50);
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  uVar9 = *(undefined4 *)(param_2 + 0x5c);
  *puVar5 = 1;
  puVar5[1] = 1;
  uVar1 = thunk_FUN_016d4a50(0x10);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x10);
  }
  local_64 = 4;
  local_68 = 0;
  local_6c = 0;
  local_74 = 4;
  local_78 = local_78 & 0xffffff00;
  local_7c = 0;
  local_80 = 1;
  local_84 = 1;
  local_88 = 1;
  local_70 = uVar1;
  puVar6 = (uint *)thunk_FUN_016d4a50(0x28);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *puVar6 = local_88;
  puVar6[1] = local_84;
  puVar6[2] = local_80;
  puVar6[3] = local_7c;
  puVar6[4] = local_78;
  puVar6[5] = local_74;
  puVar6[6] = local_70;
  puVar6[7] = local_6c;
  puVar6[8] = local_68;
  puVar6[9] = local_64;
  FUN_016dd1aa(param_1 + 0xb,param_2,0x44);
  param_1[0x22] = &DAT_018a8c78;
  param_1[0x23] = uVar10;
  param_1[0x24] = uVar9;
  param_1[0x26] = uVar3;
  param_1[2] = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  param_1[6] = 4;
  param_1[9] = 4;
  param_1[0x1c] = puVar11;
  param_1[0x1d] = &DAT_018a7908;
  param_1[0x27] = uVar4;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x28] = puVar6;
  param_1[0x20] = param_4;
  param_1[0x29] = uVar14;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 0xaf) = 0;
  *(undefined2 *)((int)param_1 + 0xad) = 0;
  param_1[0x1f] = param_3;
  param_1[0x21] = puVar5;
  param_1[0x25] = uVar15;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x2a] = uVar12;
  return;
}

