// FUN_0121e368 @ 0121e368 size=1500 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_0121e368(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  int *local_64 [4];
  int *local_54;
  undefined1 *local_50;
  int *local_4c;
  undefined1 *local_48;
  int *local_44;
  undefined1 *local_40;
  int *local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined1 *local_30;
  int *local_2c;
  undefined1 *local_28;
  
  iVar13 = 0;
  iVar3 = *(int *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 8);
  local_c4 = 0;
  local_c8 = 1;
  local_cc = 0;
  if (iVar7 != 0) {
    do {
      iVar10 = local_c4;
      iVar5 = local_c8;
      iVar16 = 0;
      iVar14 = 1;
      iVar15 = iVar3 + iVar13;
      local_b8 = 0;
      local_bc = 1;
      local_c0 = 0;
      iVar8 = 0;
      iVar9 = 1;
      local_b4 = *(undefined4 *)(iVar15 + 0x40);
      local_b0 = *(undefined4 *)(iVar15 + 0x44);
      if (*(int *)(iVar15 + 0x3c) == -0x80000000) {
        local_b4 = 1;
        local_b0 = 0;
      }
      iVar11 = 0;
      if (*(int *)(iVar3 + iVar13) == 1) {
        iVar4 = FUN_012fc81c(*(undefined4 *)(iVar15 + 4),local_64);
        iVar11 = 10 - iVar4;
        if (iVar4 == 10) {
          iVar9 = 1;
          iVar8 = 0;
        }
        else {
          iVar9 = FUN_01298504(iVar11,1);
          iVar8 = iVar11;
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar11);
          }
        }
        FUN_01bed4e2(iVar9,(int)local_64 + iVar4,iVar11);
      }
      iVar4 = 0;
      local_ac = iVar8;
      local_a8 = iVar9;
      iStack_a4 = iVar11;
      if (*(int *)(iVar15 + 8) == 1) {
        iVar8 = FUN_012fc81c(*(undefined4 *)(iVar15 + 0xc),local_64);
        iVar4 = 10 - iVar8;
        if (iVar8 == 10) {
          iVar14 = 1;
          iVar16 = 0;
        }
        else {
          iVar14 = FUN_01298504(iVar4,1);
          iVar16 = iVar4;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar4);
          }
        }
        FUN_01bed4e2(iVar14,(int)local_64 + iVar8,iVar4);
      }
      iVar8 = 0;
      iVar9 = 0;
      iVar17 = 1;
      iVar11 = 1;
      iVar12 = 0;
      local_a0 = iVar16;
      local_9c = iVar14;
      local_98 = iVar4;
      if (*(int *)(iVar15 + 0x10) == 1) {
        iVar16 = FUN_012fc81c(*(undefined4 *)(iVar15 + 0x14),local_64);
        iVar12 = 10 - iVar16;
        if (iVar16 == 10) {
          iVar11 = 1;
          iVar8 = 0;
        }
        else {
          iVar11 = FUN_01298504(iVar12,1);
          iVar8 = iVar12;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar12);
          }
        }
        FUN_01bed4e2(iVar11,(int)local_64 + iVar16,iVar12);
      }
      iVar16 = 0;
      local_94 = iVar8;
      local_90 = iVar11;
      iStack_8c = iVar12;
      if (*(int *)(iVar15 + 0x18) == 1) {
        iVar8 = FUN_012fc81c(*(undefined4 *)(iVar15 + 0x1c),local_64);
        iVar16 = 10 - iVar8;
        if (iVar8 == 10) {
          iVar17 = 1;
          iVar9 = 0;
        }
        else {
          iVar17 = FUN_01298504(iVar16,1);
          iVar9 = iVar16;
          if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar16);
          }
        }
        FUN_01bed4e2(iVar17,(int)local_64 + iVar8,iVar16);
      }
      iVar8 = 0;
      iVar14 = 0;
      iVar11 = 1;
      iVar12 = 0;
      iVar4 = 1;
      local_88 = iVar9;
      local_84 = iVar17;
      local_80 = iVar16;
      if (*(int *)(iVar15 + 0x20) == 1) {
        iVar16 = FUN_012fc81c(*(undefined4 *)(iVar15 + 0x24),local_64);
        iVar12 = 10 - iVar16;
        if (iVar16 == 10) {
          iVar11 = 1;
          iVar8 = 0;
        }
        else {
          iVar11 = FUN_01298504(iVar12,1);
          iVar8 = iVar12;
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar12);
          }
        }
        FUN_01bed4e2(iVar11,(int)local_64 + iVar16,iVar12);
      }
      iVar16 = 0;
      local_7c = iVar8;
      local_78 = iVar11;
      iStack_74 = iVar12;
      if (*(int *)(iVar15 + 0x28) == 1) {
        iVar8 = FUN_012fc81c(*(undefined4 *)(iVar15 + 0x2c),local_64);
        iVar16 = 10 - iVar8;
        if (iVar8 == 10) {
          iVar4 = 1;
          iVar14 = 0;
        }
        else {
          iVar4 = FUN_01298504(iVar16,1);
          iVar14 = iVar16;
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar16);
          }
        }
        FUN_01bed4e2(iVar4,(int)local_64 + iVar8,iVar16);
      }
      local_2c = &local_70;
      local_34 = &local_7c;
      local_3c = &local_88;
      local_44 = &local_94;
      local_4c = &local_a0;
      local_54 = &local_ac;
      local_28 = &LAB_00632348;
      local_30 = &LAB_00632348;
      local_38 = &LAB_00632348;
      local_40 = &LAB_00632348;
      local_48 = &LAB_00632348;
      local_50 = &LAB_00632348;
      local_64[1] = (int *)&LAB_00632348;
      local_64[3] = (int *)&DAT_0132b6a0;
      local_64[2] = &local_b4;
      local_64[0] = (int *)(iVar3 + 0x30 + iVar13);
      local_70 = iVar14;
      local_6c = iVar4;
      local_68 = iVar16;
      iVar8 = FUN_012fa178(&local_c0,&DAT_01c244ec,&DAT_0057ca9e,local_64);
      FUN_019bb7e0(local_70,local_6c);
      FUN_019bb7e0(local_7c,local_78);
      FUN_019bb7e0(local_88,local_84);
      FUN_019bb7e0(local_94,local_90);
      FUN_019bb7e0(local_a0,local_9c);
      FUN_019bb7e0(local_ac,local_a8);
      uVar2 = local_b8;
      uVar1 = local_bc;
      uVar6 = local_c0;
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,local_64,&DAT_01c24504,&DAT_01d30334);
      }
      if ((uint)(local_cc - iVar10) < local_b8) {
        FUN_0132b898(&local_cc,iVar10,local_b8,1,1);
        iVar5 = local_c8;
        iVar10 = local_c4;
      }
      else {
      }
      FUN_01bed4e2(iVar5 + iVar10,uVar1,uVar2);
      iVar10 = local_c4 + uVar2;
      local_c4 = iVar10;
      FUN_019bb7e0(uVar6,uVar1);
      iVar5 = iVar10;
      if (local_cc == iVar10) {
        FUN_0132b898(&local_cc,iVar10,1,1,1);
        iVar5 = local_c4;
      }
      iVar13 = iVar13 + 0x48;
      *(undefined1 *)(local_c8 + iVar5) = 10;
      local_c4 = iVar10 + 1;
    } while (iVar7 * 0x48 != iVar13);
  }
  local_64[0] = &local_cc;
  local_64[1] = (int *)&LAB_00632348;
  uVar6 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,local_64);
  FUN_019bb7e0(local_cc,local_c8);
  return uVar6;
}

