// FUN_00f724d0 @ 00f724d0 size=960 calls_out=2 calls_in=4
// strings: 

void FUN_00f724d0(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *extraout_r12;
  bool bVar19;
  bool bVar20;
  uint local_48;
  int local_44;
  uint *local_38;
  uint *local_34;
  uint local_30;
  uint local_2c;
  
  puVar14 = (uint *)(param_3 * 3);
  iVar11 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (iVar11 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(iVar11);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar11);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar11 = 0;
      iVar15 = param_2 + param_3 * 0x30;
      uVar17 = param_3;
      puVar3 = extraout_r12;
      do {
        if (param_2 == iVar15) break;
        uVar18 = *(uint *)(param_2 + 8);
        uVar4 = 0;
        bVar20 = 0x1ffffffe < uVar18;
        bVar19 = uVar18 == 0x1fffffff;
        if (uVar18 < 0x20000000) {
          puVar14 = (uint *)(uVar18 << 3);
          bVar20 = (uint *)0x7ffffffb < puVar14;
          bVar19 = puVar14 == (uint *)0x7ffffffc;
          local_44 = iVar15;
        }
        if (bVar20 && !bVar19) {
LAB_00f72850:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,local_34);
        }
        uVar8 = *(uint *)(param_2 + 0x28);
        uVar5 = *(uint *)(param_2 + 0x24);
        if (puVar14 == (uint *)0x0) {
          local_34 = (uint *)&DAT_00000004;
          uVar7 = 0;
        }
        else {
          puVar16 = *(uint **)(param_2 + 4);
          local_34 = (uint *)thunk_FUN_016d4a50(puVar14);
          if (local_34 == (uint *)0x0) {
            uVar4 = 4;
            local_34 = puVar14;
            goto LAB_00f72850;
          }
          uVar7 = uVar18;
          if (uVar18 != 0) {
            uVar6 = 0;
            do {
              bVar19 = puVar14 != (uint *)0x0;
              if (bVar19) {
                puVar14 = puVar14 + -2;
                uVar9 = *puVar16;
                uVar12 = puVar16[1];
                puVar16 = puVar16 + 2;
                iVar15 = uVar6 * 2;
                local_34[iVar15] = uVar9;
                uVar6 = uVar6 + 1;
                (local_34 + iVar15)[1] = uVar12;
              }
            } while (bVar19 && uVar18 != uVar6);
          }
        }
        uVar4 = 0;
        uVar6 = *(uint *)(param_2 + 0x14);
        bVar20 = 0x1ffffffe < uVar6;
        bVar19 = uVar6 == 0x1fffffff;
        if (uVar6 < 0x20000000) {
          puVar14 = (uint *)(uVar6 << 3);
          bVar20 = (uint *)0x7ffffffb < puVar14;
          bVar19 = puVar14 == (uint *)0x7ffffffc;
        }
        if (bVar20 && !bVar19) {
LAB_00f72868:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,local_38);
        }
        uVar1 = *(undefined1 *)(param_2 + 0x2c);
        if (puVar14 == (uint *)0x0) {
          local_38 = (uint *)&DAT_00000004;
          uVar9 = 0;
        }
        else {
          puVar16 = *(uint **)(param_2 + 0x10);
          local_38 = (uint *)thunk_FUN_016d4a50(puVar14);
          if (local_38 == (uint *)0x0) {
            uVar4 = 4;
            local_38 = puVar14;
            goto LAB_00f72868;
          }
          uVar9 = uVar6;
          if (uVar6 != 0) {
            uVar12 = 0;
            do {
              if (puVar14 == (uint *)0x0) break;
              puVar14 = puVar14 + -2;
              uVar10 = *puVar16;
              uVar13 = puVar16[1];
              puVar16 = puVar16 + 2;
              iVar15 = uVar12 * 2;
              local_38[iVar15] = uVar10;
              uVar12 = uVar12 + 1;
              (local_38 + iVar15)[1] = uVar13;
            } while (uVar6 != uVar12);
          }
        }
        uVar4 = 0;
        uVar12 = *(uint *)(param_2 + 0x20);
        bVar20 = 0x1ffffffe < uVar12;
        bVar19 = uVar12 == 0x1fffffff;
        if (uVar12 < 0x20000000) {
          puVar14 = (uint *)(uVar12 << 3);
          bVar20 = (uint *)0x7ffffffb < puVar14;
          bVar19 = puVar14 == (uint *)0x7ffffffc;
        }
        if (bVar20 && !bVar19) {
LAB_00f72880:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,puVar3);
        }
        if (puVar14 == (uint *)0x0) {
          puVar3 = (uint *)&DAT_00000004;
          local_48 = 0;
        }
        else {
          puVar16 = *(uint **)(param_2 + 0x1c);
          puVar3 = (uint *)thunk_FUN_016d4a50(puVar14);
          if (puVar3 == (uint *)0x0) {
            uVar4 = 4;
            puVar3 = puVar14;
            goto LAB_00f72880;
          }
          if (uVar12 != 0) {
            uVar10 = 0;
            do {
              if (puVar14 == (uint *)0x0) break;
              uVar13 = puVar16[1];
              iVar15 = uVar10 * 2;
              puVar3[iVar15] = *puVar16;
              uVar10 = uVar10 + 1;
              puVar14 = puVar14 + -2;
              puVar16 = puVar16 + 2;
              (puVar3 + iVar15)[1] = uVar13;
            } while (uVar12 != uVar10);
          }
          local_48 = uVar12;
        }
        uVar2 = *(undefined1 *)(param_2 + 0x2d);
        uVar17 = uVar17 - 1;
        puVar14 = (uint *)(local_2c + iVar11 * 0x30);
        *puVar14 = uVar7;
        *(undefined1 *)((int)puVar14 + 0x2d) = uVar2;
        puVar14[9] = uVar5;
        *(undefined1 *)(puVar14 + 0xb) = uVar1;
        puVar14[1] = (uint)local_34;
        puVar14[2] = uVar18;
        puVar14[4] = (uint)local_38;
        puVar14[3] = uVar9;
        puVar14[6] = local_48;
        puVar14[10] = uVar8;
        puVar14[5] = uVar6;
        puVar14[7] = (uint)puVar3;
        puVar14[8] = uVar12;
        param_2 = param_2 + 0x30;
        iVar11 = iVar11 + 1;
        iVar15 = local_44;
      } while (uVar17 != 0);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

