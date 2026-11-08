// FUN_0077eb80 @ 0077eb80 size=600 calls_out=3 calls_in=2
// strings: 

void FUN_0077eb80(uint *param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  int *piVar17;
  uint local_d8;
  uint local_d4;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  iVar10 = param_3 * 0x4c;
  uVar8 = 0;
  if (0x1af286b < param_3) {
LAB_0077ebb0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar10);
  }
  if (iVar10 == 0) {
    local_d4 = 4;
    local_d8 = 0;
  }
  else {
    uVar8 = 4;
    local_d4 = FUN_01298504(iVar10,4);
    if (local_d4 == 0) goto LAB_0077ebb0;
    local_d8 = param_3;
    if (param_3 != 0) {
      iVar13 = 0;
      puVar4 = (undefined4 *)((uint)&local_48 | 4);
      uVar14 = 0;
      puVar5 = (undefined4 *)((uint)&local_c8 | 4);
      psVar15 = param_2;
      do {
        if (iVar10 == iVar13) break;
        sVar1 = *psVar15;
        sVar3 = psVar15[0x20];
        if (sVar1 != 1) {
          uVar8 = *(undefined4 *)((int)param_2 + iVar13 + 8);
          uVar6 = *(undefined4 *)((int)param_2 + iVar13 + 0xc);
          uVar7 = *(undefined4 *)((int)param_2 + iVar13 + 0x10);
          *puVar5 = *(undefined4 *)((int)param_2 + iVar13 + 4);
          puVar5[1] = uVar8;
          puVar5[2] = uVar6;
          puVar5[3] = uVar7;
          uVar8 = *(undefined4 *)((int)param_2 + iVar13 + 0x18);
          uVar6 = *(undefined4 *)((int)param_2 + iVar13 + 0x1c);
          uVar7 = *(undefined4 *)((int)param_2 + iVar13 + 0x20);
          puVar5[4] = *(undefined4 *)((int)param_2 + iVar13 + 0x14);
          puVar5[5] = uVar8;
          puVar5[6] = uVar6;
          puVar5[7] = uVar7;
          local_c8 = (uint)*(ushort *)((int)param_2 + iVar13 + 2) << 0x10;
        }
        else {
          FUN_015e8ad4(puVar5,*(undefined4 *)((int)param_2 + iVar13 + 8),
                       *(undefined4 *)((int)param_2 + iVar13 + 0xc));
        }
        sVar2 = psVar15[0x12];
        local_c8 = CONCAT22(local_c8._2_2_,(ushort)(sVar1 == 1));
        if (sVar2 != 1) {
          uVar8 = *(undefined4 *)((int)param_2 + iVar13 + 0x2c);
          uVar6 = *(undefined4 *)((int)param_2 + iVar13 + 0x30);
          uVar7 = *(undefined4 *)((int)param_2 + iVar13 + 0x34);
          uVar9 = *(undefined4 *)((int)param_2 + iVar13 + 0x38);
          uVar11 = *(undefined4 *)((int)param_2 + iVar13 + 0x3c);
          *puVar4 = *(undefined4 *)((int)param_2 + iVar13 + 0x28);
          puVar4[1] = uVar8;
          puVar4[2] = uVar6;
          puVar4[3] = uVar7;
          puVar4[4] = uVar9;
          puVar4[5] = uVar11;
          local_48 = (uint)*(ushort *)((int)param_2 + iVar13 + 0x26) << 0x10;
        }
        else {
          FUN_015e8ad4(puVar4,*(undefined4 *)((int)param_2 + iVar13 + 0x2c),
                       *(undefined4 *)((int)param_2 + iVar13 + 0x30));
        }
        local_48 = CONCAT22(local_48._2_2_,(ushort)(sVar2 == 1));
        uVar14 = uVar14 + 1;
        local_88 = local_c8;
        iStack_84 = iStack_c4;
        iStack_80 = iStack_c0;
        iStack_7c = iStack_bc;
        local_78 = local_b8;
        local_74 = local_b4;
        iStack_70 = iStack_b0;
        iStack_6c = iStack_ac;
        iStack_68 = iStack_a8;
        iVar12 = *(int *)(psVar15 + 0x22);
        iVar16 = *(int *)(psVar15 + 0x24);
        iStack_a4 = local_48;
        local_a0 = iStack_44;
        iStack_9c = iStack_40;
        iStack_98 = local_3c;
        iStack_94 = iStack_38;
        iStack_90 = iStack_34;
        iStack_8c = iStack_30;
        piVar17 = (int *)(local_d4 + iVar13);
        iVar13 = iVar13 + 0x4c;
        *piVar17 = local_c8;
        piVar17[1] = iStack_c4;
        piVar17[2] = iStack_c0;
        piVar17[3] = iStack_bc;
        piVar17[4] = local_b8;
        piVar17[5] = local_b4;
        piVar17[6] = iStack_b0;
        piVar17[7] = iStack_ac;
        piVar17[8] = iStack_a8;
        piVar17[9] = local_48;
        piVar17[10] = iStack_44;
        piVar17[0xb] = iStack_40;
        piVar17[0xc] = local_3c;
        piVar17[0xd] = iStack_38;
        piVar17[0xe] = iStack_34;
        piVar17[0xf] = iStack_30;
        piVar17[0x11] = iVar12;
        piVar17[0x12] = iVar16;
        *(char *)(piVar17 + 0x10) = (char)sVar3;
        psVar15 = psVar15 + 0x26;
      } while (param_3 != uVar14);
    }
  }
  *param_1 = local_d8;
  param_1[1] = local_d4;
  param_1[2] = param_3;
  return;
}

