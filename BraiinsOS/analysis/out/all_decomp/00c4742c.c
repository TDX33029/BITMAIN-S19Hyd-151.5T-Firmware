// FUN_00c4742c @ 00c4742c size=1084 calls_out=7 calls_in=1
// strings: 

void FUN_00c4742c(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  int local_c0;
  uint local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 auStack_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  int local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    iVar2 = thunk_FUN_016d4a50(0x350);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x350);
    }
    iVar8 = 0;
    uVar1 = *(ushort *)(param_2 + 0x34a);
    *(undefined4 *)(iVar2 + 0x318) = 0;
    puVar13 = (ushort *)(iVar2 + 0x34a);
    *puVar13 = 0;
    if (uVar1 != 0) {
      iVar14 = 0;
      iVar9 = 199;
      do {
        iVar8 = iVar9;
        uVar3 = *(undefined4 *)(param_2 + iVar8 * 4);
        piVar15 = (int *)(param_2 + iVar14);
        FUN_00cce358(auStack_88,piVar15[0xf],piVar15[0x10]);
        local_a8 = piVar15[6];
        local_90 = *(undefined8 *)(piVar15 + 0xc);
        iStack_a4 = piVar15[7];
        local_a0 = piVar15[8];
        local_98 = piVar15[10];
        local_94 = (undefined1)piVar15[0xb];
        local_c0 = *piVar15;
        local_bc = piVar15[1];
        local_b8 = piVar15[2];
        iStack_b4 = piVar15[3];
        iStack_b0 = piVar15[4];
        iStack_ac = piVar15[5];
        uVar6 = (uint)*puVar13;
        if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018ac45c);
        }
        *puVar13 = *puVar13 + 1;
        *(undefined4 *)(iVar2 + 0x31c + uVar6 * 4) = uVar3;
        FUN_016dd1aa(iVar2 + uVar6 * 0x48,&local_c0,0x48);
        iVar14 = iVar14 + 0x48;
        iVar9 = iVar8 + 1;
      } while (iVar8 - 0xc6U < (uint)*(ushort *)(param_2 + 0x34a));
      iVar8 = iVar8 + -0xc6;
    }
    *param_1 = iVar2;
    param_1[1] = 0;
    param_1[2] = iVar8;
    return;
  }
  FUN_00c4742c(&local_c0,*(undefined4 *)(param_2 + 0x350));
  uVar6 = local_bc;
  if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac51c);
  }
  iVar2 = thunk_FUN_016d4a50(0x380);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x380);
  }
  puVar13 = (ushort *)(iVar2 + 0x34a);
  *puVar13 = 0;
  *(undefined4 *)(iVar2 + 0x318) = 0;
  *(int *)(iVar2 + 0x350) = local_c0;
  bVar16 = 0xfffffffe < local_bc;
  local_bc = local_bc + 1;
  if (bVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018af438);
  }
  *(int *)(local_c0 + 0x318) = iVar2;
  *(undefined2 *)(local_c0 + 0x348) = 0;
  local_c0 = iVar2;
  if (*(ushort *)(param_2 + 0x34a) != 0) {
    iVar9 = 0;
    uVar11 = 0;
    iVar8 = local_b8;
    do {
      iVar14 = param_2 + uVar11 * 4;
      puVar12 = (undefined4 *)(param_2 + iVar9);
      uVar3 = *(undefined4 *)(iVar14 + 0x31c);
      FUN_00cce358(auStack_40,puVar12[0xf],puVar12[0x10]);
      local_48 = *(undefined8 *)(puVar12 + 0xc);
      local_58 = puVar12[8];
      local_60 = puVar12[6];
      local_5c = puVar12[7];
      local_50 = puVar12[10];
      local_4c = *(undefined1 *)(puVar12 + 0xb);
      local_78 = *puVar12;
      uStack_74 = puVar12[1];
      uStack_70 = puVar12[2];
      uStack_6c = puVar12[3];
      uStack_68 = puVar12[4];
      uStack_64 = puVar12[5];
      FUN_00c4742c(&local_30,*(undefined4 *)(iVar14 + 0x354),param_3 + -1);
      iVar14 = local_28;
      if (local_30 == 0) {
        iVar4 = thunk_FUN_016d4a50(0x350);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x350);
        }
        *(undefined4 *)(iVar4 + 0x318) = 0;
        *(undefined2 *)(iVar4 + 0x34a) = 0;
        if (uVar6 != 0) goto LAB_00c477d8;
      }
      else {
        iVar4 = local_30;
        if (local_2c != uVar6) {
LAB_00c477d8:
          uVar3 = 0x30;
          puVar10 = &DAT_018ac46c;
          puVar7 = &DAT_00413115;
          goto LAB_00c47804;
        }
      }
      uVar5 = (uint)*puVar13;
      if (10 < uVar5) {
        uVar3 = 0x20;
        puVar7 = &DAT_00565dd0;
        puVar10 = &DAT_018af428;
LAB_00c47804:
        local_b8 = iVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar7,uVar3,puVar10);
      }
      uVar11 = uVar11 + 1;
      uVar1 = (ushort)(uVar5 + 1);
      *puVar13 = uVar1;
      *(undefined4 *)(iVar2 + 0x31c + uVar5 * 4) = uVar3;
      FUN_016dd1aa(iVar2 + uVar5 * 0x48,&local_78,0x48);
      ((int *)(iVar2 + 0x350))[uVar5 + 1] = iVar4;
      iVar9 = iVar9 + 0x48;
      *(ushort *)(iVar4 + 0x348) = uVar1;
      iVar8 = iVar14 + iVar8 + 1;
      *(int *)(iVar4 + 0x318) = iVar2;
    } while (uVar11 < *(ushort *)(param_2 + 0x34a));
    local_b8 = iVar8;
  }
  *param_1 = local_c0;
  param_1[1] = local_bc;
  param_1[2] = local_b8;
  return;
}

