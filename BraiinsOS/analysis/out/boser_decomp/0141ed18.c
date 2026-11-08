// FUN_0141ed18 @ 0141ed18 size=960 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0141ed18(int *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint local_d4;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint local_88;
  int local_84;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = *(ushort *)(param_1 + 0xe);
  uVar13 = (uint)uVar2;
  uVar18 = 0x141ed30;
  uVar21 = FUN_01ac635c(param_1[6],param_1[7]);
  uVar11 = param_1[10];
  uVar12 = 0;
  iVar1 = uVar11 * 0x30;
  if (0x2aaaaaa < uVar11) {
LAB_0141ed5c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,iVar1);
  }
  if (iVar1 == 0) {
    local_84 = 4;
    local_88 = 0;
    puVar17 = extraout_r12;
  }
  else {
    puVar6 = (uint *)param_1[9];
    uVar12 = 4;
    uVar18 = 0x141ed9c;
    local_84 = FUN_01298504(iVar1,4);
    if (local_84 == 0) goto LAB_0141ed5c;
    puVar17 = extraout_r12_00;
    local_88 = uVar11;
    if (uVar11 != 0) {
      iVar14 = 0;
      uVar13 = 0;
      puVar9 = puVar6;
      do {
        if (iVar1 == iVar14) break;
        uVar15 = puVar9[0xb];
        if ((undefined4 *)puVar9[7] == (undefined4 *)0x0) {
          local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)((int)puVar6 + iVar14 + 0x20));
          local_48 = 0;
        }
        else {
          (**(code **)puVar9[7])
                    (&local_48,(int)puVar6 + iVar14 + 0x28,
                     *(undefined4 *)((int)puVar6 + iVar14 + 0x20),
                     *(undefined4 *)((int)puVar6 + iVar14 + 0x24));
        }
        local_58 = local_48;
        local_54 = local_44;
        local_50 = uStack_40;
        uStack_4c = uStack_3c;
        uVar18 = 0x141ee48;
        (**(code **)puVar9[3])(&local_48,puVar9 + 6,puVar9[4],puVar9[5]);
        uVar7 = *puVar9;
        puVar17 = &local_68;
        bVar19 = uVar7 == 1;
        uVar13 = uVar13 + 1;
        if (bVar19) {
          uVar7 = *(uint *)((int)puVar6 + iVar14 + 4);
        }
        if (bVar19) {
          uVar18 = *(uint *)((int)puVar6 + iVar14 + 8);
          local_d4 = uVar7;
        }
        puVar9 = puVar9 + 0xc;
        local_68 = local_48;
        uStack_64 = local_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        puVar8 = (uint *)(local_84 + iVar14);
        *puVar8 = (uint)bVar19;
        iVar14 = iVar14 + 0x30;
        puVar8[1] = local_d4;
        puVar8[2] = uVar18;
        puVar8[3] = local_48;
        puVar8[4] = local_44;
        puVar8[5] = uStack_40;
        puVar8[6] = uStack_3c;
        puVar8[7] = local_58;
        puVar8[8] = local_54;
        puVar8[9] = local_50;
        puVar8[10] = uStack_4c;
        *(short *)(puVar8 + 0xb) = (short)uVar15;
      } while (uVar11 != uVar13);
    }
  }
  uVar12 = 0;
  local_68 = local_88;
  uStack_64 = local_84;
  uVar7 = param_1[0xd];
  bVar20 = 0x7fffffe < uVar7;
  bVar19 = uVar7 == 0x7ffffff;
  uVar15 = uVar7 * 0x20;
  if (uVar7 < 0x8000000) {
    bVar20 = 0x7ffffffb < uVar15;
    bVar19 = uVar15 == 0x7ffffffc;
  }
  uStack_60 = uVar11;
  if (bVar20 && !bVar19) {
LAB_0141ef2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,uVar15);
  }
  if (uVar15 == 0) {
    local_54 = 4;
    local_58 = 0;
  }
  else {
    uVar12 = 4;
    puVar6 = (uint *)param_1[0xc];
    uVar18 = 0x141ef60;
    uVar13 = FUN_01298504(uVar15,4);
    if (uVar13 == 0) goto LAB_0141ef2c;
    puVar17 = extraout_r12_01;
    local_58 = uVar7;
    local_54 = uVar13;
    if (uVar7 != 0) {
      uVar11 = 0;
      do {
        if (uVar15 == 0) break;
        uVar18 = 0x141efa8;
        (**(code **)puVar6[4])(&local_38,puVar6 + 7,puVar6[5],puVar6[6]);
        local_48 = *puVar6;
        local_44 = puVar6[1];
        uStack_40 = puVar6[2];
        uStack_3c = puVar6[3];
        puVar17 = &local_48;
        uVar15 = uVar15 - 0x20;
        puVar6 = puVar6 + 8;
        puVar9 = (uint *)(uVar13 + uVar11 * 0x20);
        uVar11 = uVar11 + 1;
        *puVar9 = local_48;
        puVar9[1] = local_44;
        puVar9[2] = uStack_40;
        puVar9[3] = uStack_3c;
        puVar9[4] = local_38;
        puVar9[5] = uStack_34;
        puVar9[6] = uStack_30;
        puVar9[7] = uStack_2c;
      } while (uVar7 != uVar11);
    }
  }
  uVar5 = local_54;
  uVar4 = local_58;
  uVar3 = uStack_60;
  uVar15 = uStack_64;
  uVar11 = local_68;
  local_48 = local_58;
  local_44 = local_54;
  uVar16 = uVar7;
  if (*param_1 == 0) {
    uVar12 = 0;
  }
  else if (*param_1 == 1) {
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
    uVar13 = param_1[5];
    puVar17 = (uint *)param_1[2];
    uVar18 = param_1[3];
    uVar16 = param_1[4];
  }
  local_90 = CONCAT22(local_90._2_2_,uVar2);
  local_50 = uVar7;
  uStack_40 = uVar7;
  puVar10 = (undefined4 *)thunk_FUN_01be5118(0x40);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  *puVar10 = uVar12;
  puVar10[1] = 0;
  puVar10[2] = puVar17;
  puVar10[3] = uVar18;
  puVar10[4] = uVar16;
  puVar10[5] = uVar13;
  *(undefined8 *)(puVar10 + 6) = uVar21;
  puVar10[8] = uVar11;
  puVar10[9] = uVar15;
  puVar10[10] = uVar3;
  puVar10[0xb] = uVar4;
  puVar10[0xc] = uVar5;
  puVar10[0xd] = uVar7;
  puVar10[0xe] = local_90;
  puVar10[0xf] = uStack_8c;
  return;
}

