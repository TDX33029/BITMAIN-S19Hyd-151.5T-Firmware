// FUN_00c46aa4 @ 00c46aa4 size=1008 calls_out=6 calls_in=2
// strings: 

void FUN_00c46aa4(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  bool bVar16;
  int local_90;
  uint local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar2 = thunk_FUN_016d4a50(0x248);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x248);
    }
    uVar1 = *(ushort *)(param_2 + 0x242);
    iVar7 = 0;
    *(undefined4 *)(iVar2 + 0x210) = 0;
    puVar9 = (ushort *)(iVar2 + 0x242);
    *puVar9 = 0;
    if (uVar1 != 0) {
      iVar12 = 0;
      iVar13 = 0x85;
      do {
        iVar7 = iVar13;
        uVar14 = *(undefined4 *)(param_2 + iVar7 * 4);
        FUN_00cce358(&iStack_70,*(undefined4 *)(param_2 + iVar12 + 0x24),
                     *(undefined4 *)(param_2 + iVar12 + 0x28));
        uVar5 = (uint)*puVar9;
        piVar8 = (int *)(param_2 + iVar12);
        local_90 = *piVar8;
        local_78 = *(undefined8 *)(piVar8 + 6);
        local_80 = piVar8[4];
        local_8c = piVar8[1];
        local_88 = piVar8[2];
        local_7c = CONCAT31(local_7c._1_3_,(char)piVar8[5]);
        if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar9 = *puVar9 + 1;
        iVar12 = iVar12 + 0x30;
        *(undefined4 *)(iVar2 + 0x214 + uVar5 * 4) = uVar14;
        piVar8 = (int *)(iVar2 + uVar5 * 0x30);
        *piVar8 = local_90;
        piVar8[1] = local_8c;
        piVar8[2] = local_88;
        piVar8[3] = iStack_84;
        piVar8[4] = local_80;
        piVar8[5] = local_7c;
        local_78._4_4_ = (int)((ulonglong)local_78 >> 0x20);
        piVar8[6] = (int)local_78;
        piVar8[7] = local_78._4_4_;
        piVar8[8] = iStack_70;
        piVar8[9] = iStack_6c;
        piVar8[10] = iStack_68;
        piVar8[0xb] = iStack_64;
        iVar13 = iVar7 + 1;
      } while (iVar7 - 0x84U < (uint)*(ushort *)(param_2 + 0x242));
      iVar7 = iVar7 + -0x84;
    }
    *param_1 = iVar2;
    param_1[1] = 0;
    param_1[2] = iVar7;
    return;
  }
  FUN_00c46aa4(&local_90,*(undefined4 *)(param_2 + 0x248));
  uVar5 = local_8c;
  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar2 = thunk_FUN_016d4a50(0x278);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x278);
  }
  puVar9 = (ushort *)(iVar2 + 0x242);
  *puVar9 = 0;
  *(undefined4 *)(iVar2 + 0x210) = 0;
  *(int *)(iVar2 + 0x248) = local_90;
  bVar16 = 0xfffffffe < local_8c;
  local_8c = local_8c + 1;
  if (bVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_90 + 0x210) = iVar2;
  *(undefined2 *)(local_90 + 0x240) = 0;
  local_90 = iVar2;
  if (*(ushort *)(param_2 + 0x242) != 0) {
    iVar13 = 0;
    uVar15 = 0;
    iVar7 = local_88;
    do {
      iVar12 = param_2 + uVar15 * 4;
      uVar14 = *(undefined4 *)(iVar12 + 0x214);
      FUN_00cce358(&uStack_40,*(undefined4 *)(param_2 + iVar13 + 0x24),
                   *(undefined4 *)(param_2 + iVar13 + 0x28));
      puVar3 = (undefined4 *)(param_2 + iVar13);
      local_60 = *puVar3;
      local_5c = puVar3[1];
      local_58 = puVar3[2];
      local_50 = puVar3[4];
      local_48 = *(undefined8 *)(puVar3 + 6);
      local_4c = CONCAT31(local_4c._1_3_,*(undefined1 *)(puVar3 + 5));
      FUN_00c46aa4(&local_30,*(undefined4 *)(iVar12 + 0x24c),param_3 + -1);
      iVar12 = local_28;
      if (local_30 == 0) {
        iVar4 = thunk_FUN_016d4a50(0x248);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x248);
        }
        *(undefined2 *)(iVar4 + 0x242) = 0;
        *(undefined4 *)(iVar4 + 0x210) = 0;
        if (uVar5 != 0) goto LAB_00c46dfc;
      }
      else {
        iVar4 = local_30;
        if (local_2c != uVar5) {
LAB_00c46dfc:
          uVar14 = 0x30;
          puVar10 = &DAT_018ac46c;
          puVar11 = &DAT_00413115;
          goto LAB_00c46e28;
        }
      }
      uVar6 = (uint)*puVar9;
      if (10 < uVar6) {
        uVar14 = 0x20;
        puVar11 = &DAT_00565dd0;
        puVar10 = &DAT_018af428;
LAB_00c46e28:
        local_88 = iVar7;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar11,uVar14,puVar10);
      }
      uVar1 = (ushort)(uVar6 + 1);
      *puVar9 = uVar1;
      uVar15 = uVar15 + 1;
      iVar13 = iVar13 + 0x30;
      *(undefined4 *)(iVar2 + 0x214 + uVar6 * 4) = uVar14;
      puVar3 = (undefined4 *)(iVar2 + uVar6 * 0x30);
      *puVar3 = local_60;
      puVar3[1] = local_5c;
      puVar3[2] = local_58;
      puVar3[3] = uStack_54;
      puVar3[4] = local_50;
      puVar3[5] = local_4c;
      puVar3[6] = (undefined4)local_48;
      puVar3[7] = local_48._4_4_;
      puVar3[8] = uStack_40;
      puVar3[9] = uStack_3c;
      puVar3[10] = uStack_38;
      puVar3[0xb] = uStack_34;
      ((int *)(iVar2 + 0x248))[uVar6 + 1] = iVar4;
      *(ushort *)(iVar4 + 0x240) = uVar1;
      *(int *)(iVar4 + 0x210) = iVar2;
      iVar7 = iVar12 + iVar7 + 1;
    } while (uVar15 < *(ushort *)(param_2 + 0x242));
    local_88 = iVar7;
  }
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = local_88;
  return;
}

