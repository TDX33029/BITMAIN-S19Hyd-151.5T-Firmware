// FUN_00f93be8 @ 00f93be8 size=1108 calls_out=7 calls_in=1
// strings: 

void FUN_00f93be8(uint *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  double *pdVar3;
  uint uVar4;
  undefined4 *puVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *extraout_r2;
  double *extraout_r2_00;
  double *extraout_r2_01;
  double *extraout_r2_02;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 extraout_s1;
  double dVar23;
  uint local_a0;
  uint local_98;
  int local_94;
  uint local_90;
  uint local_84;
  double *local_7c;
  double *local_78;
  uint local_74;
  double *local_70;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  
  local_84 = param_4[2];
  iVar19 = 0;
  local_70 = (double *)param_4[3];
  uVar9 = param_4[7];
  local_78 = (double *)param_4[4];
  local_7c = (double *)param_4[8];
  local_74 = param_4[5];
  pdVar10 = (double *)param_4[9];
  pdVar11 = (double *)param_4[0xb];
  uVar17 = *param_4;
  pdVar6 = (double *)param_4[1];
  pdVar3 = (double *)param_4[6];
  pdVar18 = (double *)param_4[10];
  local_94 = 8;
  pdVar12 = (double *)0x0;
  local_90 = 0;
  local_60 = 8;
  local_5c = 0;
  local_64 = 0;
  do {
    uVar16 = local_64;
    if (uVar17 == 2) {
      pdVar8 = pdVar6;
LAB_00f93e70:
      if (pdVar18 != (double *)0x0) {
        pdVar8 = pdVar11;
      }
      if (pdVar18 != (double *)0x0 && pdVar18 != pdVar8) {
        pdVar12 = pdVar18 + 5;
        uVar17 = 1;
        local_70 = *(double **)((int)pdVar18 + 0x24);
        local_84 = *(uint *)(pdVar18 + 0x24);
        piVar15 = (int *)((int)pdVar18 + 0x11c);
        pdVar18 = (double *)((int)pdVar18 + 0x16c);
        local_78 = (double *)((int)local_70 + *(int *)pdVar12 * 0xc);
        pdVar8 = (double *)*piVar15;
        uVar16 = local_84;
        pdVar6 = (double *)0x0;
      }
      else {
        if (local_74 == 2) {
LAB_00f93f08:
          local_50 = local_64;
          local_54 = local_94;
          iVar20 = local_94 + local_90 * 0x18;
          local_58 = local_94;
          iVar13 = local_94;
          local_4c = iVar20;
          if (local_90 == 0) {
            local_40 = 0;
            local_44 = (undefined4 *)&DAT_00000004;
            local_48 = 0;
            iVar19 = 0;
          }
          else {
            local_44 = (undefined4 *)thunk_FUN_016d4a50(local_90 * 0xc);
            if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,local_90 * 0xc);
            }
            local_48 = local_90;
            local_40 = (local_90 * 0x18 - 0x18) / 0x18 + 1;
            puVar5 = local_44;
            do {
              puVar1 = (undefined4 *)(iVar13 + 8);
              iVar19 = iVar19 + -0x18;
              uVar14 = *(undefined4 *)(iVar13 + 0xc);
              uVar22 = *(undefined4 *)(iVar13 + 0x10);
              iVar13 = iVar13 + 0x18;
              *puVar5 = *puVar1;
              puVar5[1] = uVar14;
              puVar5[2] = uVar22;
              puVar5 = puVar5 + 3;
            } while (iVar19 != 0);
            iVar19 = ((uint)(iVar20 - iVar13) >> 3) * -0x55555555;
          }
          piVar15 = (int *)(iVar13 + 8);
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            if (*piVar15 != 0) {
              thunk_FUN_016d3fb4(piVar15[1]);
            }
            piVar15 = piVar15 + 6;
          }
          if (uVar16 != 0) {
            thunk_FUN_016d3fb4(local_94);
          }
          *param_1 = local_48;
          param_1[1] = (uint)local_44;
          param_1[2] = local_40;
          return;
        }
        if ((local_74 & 1) == 0) {
          pdVar12 = pdVar3;
        }
        else {
          pdVar12 = (double *)0x0;
          if (pdVar3 != (double *)0x0) {
            uVar17 = 2;
            local_74 = 1;
            pdVar8 = pdVar3;
            uVar16 = uVar9;
            pdVar3 = (double *)0x0;
            goto LAB_00f93cb8;
          }
        }
        if (local_7c != (double *)0x0) {
          pdVar3 = pdVar10;
        }
        if (local_7c == (double *)0x0 || local_7c == pdVar3) goto LAB_00f93f08;
        pdVar8 = *(double **)local_7c;
        puVar2 = (uint *)((int)local_7c + 4);
        local_7c = (double *)((int)local_7c + 0xc);
        uVar17 = 2;
        local_74 = 0;
        uVar16 = *puVar2;
        pdVar3 = pdVar12;
      }
    }
    else if ((uVar17 & 1) == 0) {
      pdVar8 = pdVar6;
LAB_00f93e5c:
      pdVar6 = pdVar8;
      if (local_70 != (double *)0x0) {
        pdVar12 = local_78;
      }
      pdVar8 = local_70;
      if (local_70 == (double *)0x0 || local_70 == pdVar12) goto LAB_00f93e70;
      pdVar8 = *(double **)local_70;
      uVar16 = *(uint *)((int)local_70 + 4);
      uVar17 = 0;
      local_70 = (double *)((int)local_70 + 0xc);
    }
    else {
      uVar17 = 1;
      pdVar8 = (double *)0x0;
      if (pdVar6 == (double *)0x0) goto LAB_00f93e5c;
      pdVar8 = pdVar6;
      uVar16 = local_84;
      pdVar6 = (double *)0x0;
    }
LAB_00f93cb8:
    uVar22 = FUN_016232c0(param_2,param_3,pdVar8,uVar16);
    dVar23 = (double)CONCAT44(extraout_s1,uVar22);
    pdVar12 = extraout_r2;
    if (0.7 < dVar23) {
      uVar22 = 0;
      if ((int)uVar16 < 0) {
LAB_00f94030:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar22,local_98);
      }
      uVar21 = 0;
      if (uVar16 == 0) {
        local_98 = 1;
        local_a0 = 0;
      }
      else {
        local_98 = thunk_FUN_016d4a50(uVar16);
        if (local_98 == 0) {
          uVar22 = 1;
          local_98 = uVar16;
          goto LAB_00f94030;
        }
        local_a0 = uVar16;
      }
      FUN_016dd1aa(local_98,pdVar8,uVar16);
      uVar4 = 0;
      pdVar12 = extraout_r2_00;
      if (local_90 != 0) {
        if (local_90 != 1) {
          uVar21 = 0;
          uVar4 = local_90;
          do {
            uVar7 = uVar21 + (uVar4 >> 1);
            uVar4 = uVar4 - (uVar4 >> 1);
            pdVar12 = (double *)(local_94 + uVar7 * 0x18);
            if (*pdVar12 <= dVar23) {
              uVar21 = uVar7;
            }
          } while (1 < uVar4);
        }
        uVar4 = uVar21;
        if (*(double *)(local_94 + uVar21 * 0x18) <= dVar23) {
          uVar4 = uVar21 + 1;
        }
      }
      if (local_90 == local_64) {
        FUN_00f98e48(&local_64);
        local_94 = local_60;
        pdVar12 = extraout_r2_01;
      }
      pdVar8 = (double *)(local_94 + uVar4 * 0x18);
      if (uVar4 < local_90) {
        FUN_016dd52c(pdVar8 + 3,pdVar8,(local_90 - uVar4) * 0x18);
        pdVar12 = extraout_r2_02;
      }
      local_90 = local_90 + 1;
      *(uint *)(pdVar8 + 1) = local_a0;
      iVar19 = iVar19 + 0x18;
      *(uint *)((int)pdVar8 + 0xc) = local_98;
      *(uint *)(pdVar8 + 2) = uVar16;
      *pdVar8 = dVar23;
      local_5c = local_90;
    }
  } while( true );
}

