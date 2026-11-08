// FUN_01a07dac @ 01a07dac size=6640 calls_out=23 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01a07dac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 uVar17;
  int iVar18;
  uint *puVar19;
  int ****ppppiVar20;
  int *piVar22;
  int *piVar21;
  bool bVar23;
  undefined8 uVar24;
  int ***local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  uint local_170;
  int local_16c;
  uint local_168;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 ****local_140;
  int ****local_13c;
  uint *local_138;
  undefined4 ****local_130;
  int ****local_12c;
  uint *local_128;
  int local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 ****local_110;
  int ****local_10c;
  uint *local_108;
  char local_c1;
  undefined4 ****local_c0;
  int ****local_bc;
  uint *local_b8;
  int ****local_b0;
  int ****local_ac;
  uint *local_a8;
  undefined4 ****local_a0;
  int ****local_9c;
  uint *local_98;
  undefined4 ****local_88;
  int ****local_84;
  uint *local_80;
  int ****local_74;
  int ****local_70;
  uint *local_6c;
  int ***local_68;
  int ****local_64;
  int ****local_60;
  int ****local_5c;
  uint *local_58;
  int ****local_54;
  int ****local_50;
  uint *local_4c;
  int ****local_48;
  int ****local_44;
  int ****local_40;
  int ****local_3c;
  uint *local_38;
  int ****local_30;
  int ****local_2c;
  uint *local_28;
  
  puVar19 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0xe5)) {
  case 0:
    *(undefined1 *)(param_1 + 0x39) = 0;
    param_1[0x38] = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[2] = param_1[10];
    param_1[0x30] = param_1[0x36];
    param_1[0x31] = param_1[0x37];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29cc0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29cc0);
  case 3:
    goto switchD_01a07de0_caseD_3;
  case 4:
    goto switchD_01a07de0_caseD_4;
  case 5:
    uVar24 = *(undefined8 *)(param_1 + 0x3a);
    goto LAB_01a08d94;
  case 6:
    uVar24 = *(undefined8 *)(param_1 + 0x3a);
    goto LAB_01a07e60;
  }
  while( true ) {
    param_1[0x3a] = param_1;
    *(undefined1 *)(param_1 + 0x41) = 0;
switchD_01a07de0_caseD_3:
    FUN_01a09da0(&local_1a0,param_1 + 0x3a,*param_2);
    if (local_1a0 == (int ***)0x4 && local_19c == 0) {
      uVar15 = 1;
      uVar17 = 3;
      goto LAB_01a089fc;
    }
    FUN_01bed4e2(&local_1f0,&local_1a0,0x50);
    *(undefined1 *)(param_1 + 0x39) = 1;
    if (*(char *)(param_1 + 0x41) == '\x03') {
      FUN_009cdcac(param_1 + 0x3b);
    }
    if (local_1f0 == (int ***)0x3 && local_1ec == 0) break;
    ppppiVar20 = (int ****)(param_1 + 0xc);
    *ppppiVar20 = local_1f0;
    *(undefined1 *)(param_1 + 0x39) = 0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = local_1e8;
    param_1[0xf] = uStack_1e4;
    *(undefined2 *)((int)param_1 + 0xe1) = 0x101;
    param_1[0x10] = local_1e0;
    param_1[0x11] = local_1dc;
    param_1[0x12] = local_1d8;
    param_1[0x13] = uStack_1d4;
    param_1[0x14] = uStack_1d0;
    param_1[0x15] = uStack_1cc;
    param_1[0x16] = uStack_1c8;
    param_1[0x17] = uStack_1c4;
    param_1[0x18] = local_1c0;
    param_1[0x19] = uStack_1bc;
    param_1[0x1a] = uStack_1b8;
    param_1[0x1b] = uStack_1b4;
    param_1[0x1c] = uStack_1b0;
    param_1[0x1d] = uStack_1ac;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *local_1a8;
      bVar23 = (bool)hasExclusiveAccess(local_1a8);
    } while (!bVar23);
    *local_1a8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404();
    }
    if (*ppppiVar20 == (int ***)0x2 && param_1[0xd] == 0) {
      if (((DAT_01d50f88 < 5) &&
          ((DAT_01d50504 - 1 < 2 ||
           ((DAT_01d50504 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d504fc), cVar2 != '\0')))))) &&
         (iVar4 = FUN_01aaa278(DAT_01d504fc), iVar4 != 0)) {
        if (*(int *)(DAT_01d504fc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d20);
        }
        local_84 = (int ****)&local_54;
        local_198 = *(undefined4 *)(DAT_01d504fc + 0x24);
        local_194 = *(undefined4 *)(DAT_01d504fc + 0x28);
        local_28 = (uint *)(DAT_01d504fc + 0x1c);
        local_1a0 = (int ***)*local_28;
        local_30 = (int ****)&local_88;
        local_190 = 0;
        local_2c = (int ****)&DAT_00000001;
        local_50 = (int ****)&local_40;
        local_80 = (uint *)&DAT_01d2ea4c;
        local_54 = (int ****)&DAT_00588d5b;
        local_3c = (int ****)FUN_01a0a1d8;
        local_19c = *(int *)(DAT_01d504fc + 0x20);
        local_88 = (undefined4 ****)&local_1a0;
        local_40 = ppppiVar20;
        FUN_01aaaecc(DAT_01d504fc,&local_30);
        iVar4 = DAT_01d504fc;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_9c = *(int *****)(DAT_01d504fc + 0x14);
          local_98 = *(uint **)(DAT_01d504fc + 0x18);
          local_a0 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar8 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar11 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar11[3])(pcVar8,&local_a0);
          if (iVar5 != 0) {
            local_110 = local_a0;
            local_10c = local_9c;
            local_108 = local_98;
            FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_110,&local_30);
          }
        }
      }
      else {
        iVar4 = DAT_01d504fc;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_13c = *(int *****)(DAT_01d504fc + 0x14);
          local_138 = *(uint **)(DAT_01d504fc + 0x18);
          local_140 = (undefined4 ****)&DAT_00000001;
          DataMemoryBarrier(0xb);
          pcVar8 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar11 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
          }
          iVar5 = (*(code *)puVar11[3])(pcVar8,&local_140);
          if (iVar5 != 0) {
            if (*(int *)(DAT_01d504fc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d20);
            }
            local_198 = *(undefined4 *)(DAT_01d504fc + 0x24);
            local_88 = &local_a0;
            local_194 = *(undefined4 *)(DAT_01d504fc + 0x28);
            local_9c = (int ****)&local_40;
            local_84 = (int ****)&DAT_00000001;
            local_3c = (int ****)&local_30;
            local_190 = 0;
            local_98 = (uint *)&DAT_01d2ea4c;
            local_40 = (int ****)&DAT_00588d5b;
            local_2c = (int ****)FUN_01a0a1d8;
            local_110 = local_140;
            local_10c = local_13c;
            local_108 = local_138;
            local_1a0 = *(int ****)(DAT_01d504fc + 0x1c);
            local_19c = *(int *)(DAT_01d504fc + 0x20);
            local_a0 = (undefined4 ****)&local_1a0;
            local_80 = (uint *)(DAT_01d504fc + 0x1c);
            local_30 = ppppiVar20;
            FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_110,&local_88);
          }
        }
      }
LAB_01a094bc:
      if (*(char *)((int)param_1 + 0xe2) != '\0') {
        FUN_0134c054(param_1[0x18],param_1[0x19],4,4);
      }
      if (*(char *)((int)param_1 + 0xe1) != '\0') {
        FUN_019bb7e0(param_1[0x1b],param_1[0x1c]);
      }
      *(undefined1 *)(param_1 + 0x39) = 0;
      *(undefined2 *)((int)param_1 + 0xe1) = 0;
    }
    else {
      bVar23 = (param_1[0x12] & 1) == 0;
      puVar9 = (uint *)0x0;
      if (!bVar23) {
        puVar9 = param_1 + 0x14;
      }
      param_1[0x32] = puVar9;
      if (bVar23) {
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d50510 - 1 < 2 ||
             ((DAT_01d50510 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50508), cVar2 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d50508), iVar4 != 0)) {
          if (*(int *)(DAT_01d50508 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d10);
          }
          local_84 = (int ****)&local_54;
          local_198 = *(undefined4 *)(DAT_01d50508 + 0x24);
          local_194 = *(undefined4 *)(DAT_01d50508 + 0x28);
          local_28 = (uint *)(DAT_01d50508 + 0x1c);
          local_1a0 = (int ***)*local_28;
          local_30 = (int ****)&local_88;
          local_190 = 0;
          local_2c = (int ****)&DAT_00000001;
          local_50 = (int ****)&local_40;
          local_80 = (uint *)&DAT_01d2ea4c;
          local_54 = (int ****)&DAT_005ad98e;
          local_3c = (int ****)FUN_01a0a1d8;
          local_19c = *(int *)(DAT_01d50508 + 0x20);
          local_88 = (undefined4 ****)&local_1a0;
          local_40 = ppppiVar20;
          FUN_01aaaecc(DAT_01d50508,&local_30);
          iVar4 = DAT_01d50508;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_9c = *(int *****)(DAT_01d50508 + 0x14);
            local_98 = *(uint **)(DAT_01d50508 + 0x18);
            local_a0 = (undefined4 ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_a0);
            if (iVar5 != 0) {
              local_110 = local_a0;
              local_10c = local_9c;
              local_108 = local_98;
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_110,&local_30);
            }
          }
        }
        else {
          iVar4 = DAT_01d50508;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_12c = *(int *****)(DAT_01d50508 + 0x14);
            local_128 = *(uint **)(DAT_01d50508 + 0x18);
            local_130 = (undefined4 ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_130);
            if (iVar5 != 0) {
              if (*(int *)(DAT_01d50508 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d10);
              }
              local_198 = *(undefined4 *)(DAT_01d50508 + 0x24);
              local_88 = &local_a0;
              local_194 = *(undefined4 *)(DAT_01d50508 + 0x28);
              local_9c = (int ****)&local_40;
              local_84 = (int ****)&DAT_00000001;
              local_3c = (int ****)&local_30;
              local_190 = 0;
              local_98 = (uint *)&DAT_01d2ea4c;
              local_40 = (int ****)&DAT_005ad98e;
              local_2c = (int ****)FUN_01a0a1d8;
              local_110 = local_130;
              local_10c = local_12c;
              local_108 = local_128;
              local_1a0 = *(int ****)(DAT_01d50508 + 0x1c);
              local_19c = *(int *)(DAT_01d50508 + 0x20);
              local_a0 = (undefined4 ****)&local_1a0;
              local_80 = (uint *)(DAT_01d50508 + 0x1c);
              local_30 = ppppiVar20;
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_110,&local_88);
            }
          }
        }
        goto LAB_01a094bc;
      }
      uVar6 = param_1[0x14];
      uVar12 = param_1[0x15];
      uVar10 = param_1[0x16];
      uVar16 = param_1[0x17];
      *(undefined1 *)(param_1 + 0x45) = 0;
      param_1[5] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                   uVar6 >> 0x18;
      param_1[6] = uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                   uVar16 >> 0x18;
      *puVar19 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
      param_1[7] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
      param_1[0x3a] = param_1[0x30] + 8;
switchD_01a07de0_caseD_4:
      FUN_006177f4(&local_120,param_1 + 0x3a,param_2);
      if (local_120 == 0) {
        uVar15 = 1;
        uVar17 = 4;
        goto LAB_01a089fc;
      }
      param_1[0x33] = local_120;
      param_1[0x34] = uStack_11c;
      param_1[0x35] = uStack_118;
      cVar2 = *(char *)(param_1 + 0x45);
      bVar23 = cVar2 == '\x03';
      if (bVar23) {
        cVar2 = *(char *)(param_1 + 0x44);
      }
      if (bVar23 && cVar2 == '\x03') {
        FUN_0193c3cc(param_1 + 0x3c);
      }
      local_1a0 = (int ***)*puVar19;
      local_19c = param_1[5];
      local_198 = param_1[6];
      local_194 = param_1[7];
      uVar24 = (**(code **)(((undefined4 *)param_1[0x35])[1] + 0xc))(*(undefined4 *)param_1[0x35]);
      *(undefined8 *)(param_1 + 0x3a) = uVar24;
LAB_01a08d94:
      (**(code **)((int)((ulonglong)uVar24 >> 0x20) + 0xc))(&local_1a0,(int)uVar24,param_2);
      if (local_1a0 == (int ***)0x5 && local_19c == 0) {
        uVar15 = 1;
        uVar17 = 5;
        goto LAB_01a089fc;
      }
      puVar9 = param_1 + 0x1e;
      *(undefined1 *)(param_1 + 0x38) = 1;
      FUN_01bed4e2(puVar9,&local_1a0,0x48);
      FUN_01139b38(param_1[0x3a],param_1[0x3b]);
      if (-(param_1[0x1f] - (uint)(*puVar9 < 3)) < (uint)(*puVar9 - 3 < 2)) {
        *(undefined1 *)((int)param_1 + 0xe3) = 1;
        *(undefined2 *)((int)param_1 + 0xe1) = 0;
        FUN_01bed4e2(&local_110,param_1 + 0xc,0x48);
      }
      else {
        FUN_01bed4e2(&local_1a0,puVar9,0x48);
        uVar15 = param_1[0x18];
        piVar7 = (int *)param_1[0x19];
        iVar4 = param_1[0x1a];
        *(undefined1 *)((int)param_1 + 0xe2) = 0;
        if (iVar4 != 0) {
          iVar5 = local_16c;
          uVar6 = local_168;
          piVar21 = piVar7;
LAB_01a08e78:
          piVar22 = piVar21 + 1;
          iVar18 = *piVar21;
          uVar10 = uVar6 & 0x1ffffff0;
          iVar13 = iVar5;
          do {
            if (uVar10 == 0) {
              iVar14 = (uVar6 & 0x1ffffff0) << 2;
              iVar13 = (uVar6 & 0xf) << 2;
              goto LAB_01a08edc;
            }
            iVar14 = 0;
            bVar23 = false;
            do {
              iVar1 = iVar14 * 4;
              iVar14 = iVar14 + 1;
              bVar23 = (bool)(bVar23 | *(int *)(iVar13 + iVar1) == iVar18);
            } while (iVar14 != 0x10);
            uVar10 = uVar10 - 0x10;
            iVar13 = iVar13 + 0x40;
          } while (!bVar23);
          goto LAB_01a08f38;
        }
LAB_01a08f40:
        FUN_0134c054(uVar15,piVar7,4,4);
        *(undefined1 *)((int)param_1 + 0xe3) = 1;
        FUN_01bed4e2(&local_110,&local_1a0,0x48);
      }
      uVar15 = *(undefined4 *)param_1[0x35];
      iVar4 = ((undefined4 *)param_1[0x35])[1];
      *(undefined1 *)((int)param_1 + 0xe3) = 0;
      FUN_01bed4e2(&local_1a0,&local_110,0x48);
      uVar24 = (**(code **)(iVar4 + 0x10))(uVar15,&local_1a0);
      *(undefined8 *)(param_1 + 0x3a) = uVar24;
LAB_01a07e60:
      cVar2 = (**(code **)((int)((ulonglong)uVar24 >> 0x20) + 0xc))((int)uVar24,param_2);
      if (cVar2 == '\x1c') {
        uVar15 = 1;
        uVar17 = 6;
        goto LAB_01a089fc;
      }
      FUN_01139b38(param_1[0x3a],param_1[0x3b]);
      if (cVar2 != '\x1b') {
        local_c1 = cVar2;
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d5051c - 1 < 2 ||
             ((DAT_01d5051c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50514), cVar3 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d50514), iVar4 != 0)) {
          if (*(int *)(DAT_01d50514 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29cd0);
          }
          local_2c = (int ****)&local_74;
          local_198 = *(undefined4 *)(DAT_01d50514 + 0x24);
          local_194 = *(undefined4 *)(DAT_01d50514 + 0x28);
          local_38 = (uint *)(DAT_01d50514 + 0x1c);
          local_1a0 = (int ***)*local_38;
          local_30 = (int ****)&local_1a0;
          local_40 = (int ****)&local_30;
          local_190 = 0;
          local_3c = (int ****)&DAT_00000001;
          local_70 = (int ****)&local_54;
          local_50 = (int ****)FUN_01a04ca8;
          local_54 = (int ****)&local_c1;
          local_28 = (uint *)&DAT_01d2ea4c;
          local_74 = (int ****)&DAT_0057d4fd;
          local_19c = *(int *)(DAT_01d50514 + 0x20);
          FUN_01aaaecc(DAT_01d50514,&local_40);
          iVar4 = DAT_01d50514;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_84 = *(int *****)(DAT_01d50514 + 0x14);
            local_80 = *(uint **)(DAT_01d50514 + 0x18);
            local_88 = (undefined4 ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_88);
            if (iVar5 != 0) {
              local_a0 = local_88;
              local_9c = local_84;
              local_98 = local_80;
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_a0,&local_40);
            }
          }
        }
        else {
          iVar4 = DAT_01d50514;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_bc = *(int *****)(DAT_01d50514 + 0x14);
            local_b8 = *(uint **)(DAT_01d50514 + 0x18);
            local_c0 = (undefined4 ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_c0);
            if (iVar5 != 0) {
              if (*(int *)(DAT_01d50514 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29cd0);
              }
              local_198 = *(undefined4 *)(DAT_01d50514 + 0x24);
              local_84 = (int ****)&local_54;
              local_194 = *(undefined4 *)(DAT_01d50514 + 0x28);
              local_88 = (undefined4 ****)&local_1a0;
              local_30 = (int ****)&local_88;
              local_2c = (int ****)&DAT_00000001;
              local_50 = (int ****)&local_40;
              local_54 = (int ****)&DAT_0057d4fd;
              local_40 = (int ****)&local_c1;
              local_190 = 0;
              local_80 = (uint *)&DAT_01d2ea4c;
              local_3c = (int ****)FUN_01a04ca8;
              local_a0 = local_c0;
              local_9c = local_bc;
              local_98 = local_b8;
              local_1a0 = *(int ****)(DAT_01d50514 + 0x1c);
              local_19c = *(int *)(DAT_01d50514 + 0x20);
              local_28 = (uint *)(DAT_01d50514 + 0x1c);
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_a0,&local_30);
            }
          }
        }
        FUN_01bed4e2((int)&local_1a0 + 2,puVar19,0x10);
        local_1a0 = (int ***)CONCAT22(local_1a0._2_2_,0x100);
        local_1a0 = (int ***)CONCAT31(local_1a0._1_3_,cVar2);
        FUN_01a14e4c(&local_a0,param_1[0x31],&local_1a0);
        if ((char)local_a0 == '\x01') {
          FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
          if ((DAT_01d50f88 < 5) &&
             (((DAT_01d504f8 - 1 < 2 ||
               ((DAT_01d504f8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d504f0), cVar2 != '\0')))) &&
              (iVar4 = FUN_01aaa278(DAT_01d504f0), iVar4 != 0)))) {
            if (*(int *)(DAT_01d504f0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ce0);
            }
            local_50 = &local_68;
            local_198 = *(undefined4 *)(DAT_01d504f0 + 0x24);
            local_194 = *(undefined4 *)(DAT_01d504f0 + 0x28);
            local_6c = (uint *)(DAT_01d504f0 + 0x1c);
            local_1a0 = (int ***)*local_6c;
            local_74 = (int ****)&local_54;
            local_190 = 0;
            local_70 = (int ****)&DAT_00000001;
            local_64 = (int ****)&local_48;
            local_4c = (uint *)&DAT_01d2ea4c;
            local_68 = (int ***)&DAT_00589122;
            local_44 = (int ****)FUN_01a04ce4;
            local_19c = *(int *)(DAT_01d504f0 + 0x20);
            local_54 = (int ****)&local_1a0;
            local_48 = (int ****)&local_88;
            FUN_01aaaecc(DAT_01d504f0,&local_74);
            iVar4 = DAT_01d504f0;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_3c = *(int *****)(DAT_01d504f0 + 0x14);
              local_38 = *(uint **)(DAT_01d504f0 + 0x18);
              local_40 = (int ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar8 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar11 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
              }
              iVar5 = (*(code *)puVar11[3])(pcVar8,&local_40);
              if (iVar5 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_30,&local_74);
              }
            }
          }
          else {
            iVar4 = DAT_01d504f0;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_ac = *(int *****)(DAT_01d504f0 + 0x14);
              local_a8 = *(uint **)(DAT_01d504f0 + 0x18);
              local_b0 = (int ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar8 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar11 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
              }
              iVar5 = (*(code *)puVar11[3])(pcVar8,&local_b0);
              if (iVar5 != 0) {
                if (*(int *)(DAT_01d504f0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29ce0);
                }
                local_198 = *(undefined4 *)(DAT_01d504f0 + 0x24);
                local_3c = (int ****)&local_48;
                local_194 = *(undefined4 *)(DAT_01d504f0 + 0x28);
                local_54 = (int ****)&local_40;
                local_50 = (int ****)&DAT_00000001;
                local_44 = (int ****)&local_74;
                local_190 = 0;
                local_38 = (uint *)&DAT_01d2ea4c;
                local_70 = (int ****)FUN_01a04ce4;
                local_48 = (int ****)&DAT_00589122;
                local_30 = local_b0;
                local_2c = local_ac;
                local_28 = local_a8;
                local_1a0 = *(int ****)(DAT_01d504f0 + 0x1c);
                local_19c = *(int *)(DAT_01d504f0 + 0x20);
                local_74 = (int ****)&local_88;
                local_4c = (uint *)(DAT_01d504f0 + 0x1c);
                local_40 = (int ****)&local_1a0;
                FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_30,&local_54);
              }
            }
          }
        }
        *(undefined1 *)((int)param_1 + 0xe3) = 0;
        if (param_1[0x1e] != 4 || param_1[0x1f] != 0) {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
        *(undefined1 *)(param_1 + 0x38) = 0;
        FUN_019f8c54(param_1[0x33],param_1[0x34]);
        goto LAB_01a094bc;
      }
      FUN_01bed4e2((int)&local_1a0 + 2,puVar19,0x10);
      local_1a0._0_2_ = CONCAT11(2,(undefined1)local_1a0);
      FUN_01a14e4c(&local_a0,param_1[0x31],&local_1a0);
      if ((char)local_a0 == '\x01') {
        FUN_01bed4e2(&local_88,(uint)&local_a0 | 1,0x12);
        if (((DAT_01d50f88 < 4) &&
            ((DAT_01d50528 - 1 < 2 ||
             ((DAT_01d50528 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50520), cVar2 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d50520), iVar4 != 0)) {
          if (*(int *)(DAT_01d50520 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29cf0);
          }
          local_50 = &local_68;
          local_198 = *(undefined4 *)(DAT_01d50520 + 0x24);
          local_194 = *(undefined4 *)(DAT_01d50520 + 0x28);
          local_6c = (uint *)(DAT_01d50520 + 0x1c);
          local_1a0 = (int ***)*local_6c;
          local_74 = (int ****)&local_54;
          local_190 = 0;
          local_70 = (int ****)&DAT_00000001;
          local_64 = (int ****)&local_48;
          local_4c = (uint *)&DAT_01d2ea4c;
          local_68 = (int ***)&DAT_005bb76e;
          local_44 = (int ****)FUN_01a04ce4;
          local_19c = *(int *)(DAT_01d50520 + 0x20);
          local_54 = (int ****)&local_1a0;
          local_48 = (int ****)&local_88;
          FUN_01aaaecc(DAT_01d50520,&local_74);
          iVar4 = DAT_01d50520;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_3c = *(int *****)(DAT_01d50520 + 0x14);
            local_38 = *(uint **)(DAT_01d50520 + 0x18);
            local_40 = (int ****)0x2;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_40);
            if (iVar5 != 0) {
              local_30 = local_40;
              local_2c = local_3c;
              local_28 = local_38;
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_30,&local_74);
            }
          }
        }
        else {
          iVar4 = DAT_01d50520;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_5c = *(int *****)(DAT_01d50520 + 0x14);
            local_58 = *(uint **)(DAT_01d50520 + 0x18);
            local_60 = (int ****)0x2;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar11 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar11 = &DAT_01cfc5e0;
            }
            iVar5 = (*(code *)puVar11[3])(pcVar8,&local_60);
            if (iVar5 != 0) {
              if (*(int *)(DAT_01d50520 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29cf0);
              }
              local_198 = *(undefined4 *)(DAT_01d50520 + 0x24);
              local_3c = (int ****)&local_48;
              local_194 = *(undefined4 *)(DAT_01d50520 + 0x28);
              local_54 = (int ****)&local_40;
              local_50 = (int ****)&DAT_00000001;
              local_44 = (int ****)&local_74;
              local_190 = 0;
              local_38 = (uint *)&DAT_01d2ea4c;
              local_70 = (int ****)FUN_01a04ce4;
              local_48 = (int ****)&DAT_005bb76e;
              local_30 = local_60;
              local_2c = local_5c;
              local_28 = local_58;
              local_1a0 = *(int ****)(DAT_01d50520 + 0x1c);
              local_19c = *(int *)(DAT_01d50520 + 0x20);
              local_74 = (int ****)&local_88;
              local_4c = (uint *)(DAT_01d50520 + 0x1c);
              local_40 = (int ****)&local_1a0;
              FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_30,&local_54);
            }
          }
        }
      }
      *(undefined1 *)((int)param_1 + 0xe3) = 0;
      if (param_1[0x1e] != 4 || param_1[0x1f] != 0) {
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
      FUN_019f8c54(param_1[0x33],param_1[0x34]);
      if (*(char *)((int)param_1 + 0xe1) != '\0') {
        FUN_019bb7e0(param_1[0x1b],param_1[0x1c]);
      }
      *(undefined1 *)(param_1 + 0x39) = 0;
      *(undefined2 *)((int)param_1 + 0xe1) = 0;
    }
  }
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d50534 - 1 < 2 ||
       ((DAT_01d50534 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d5052c), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d5052c), iVar4 != 0)))) {
    if (*(int *)(DAT_01d5052c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d00);
    }
    local_84 = (int ****)&local_54;
    local_198 = *(undefined4 *)(DAT_01d5052c + 0x24);
    local_194 = *(undefined4 *)(DAT_01d5052c + 0x28);
    local_28 = (uint *)(DAT_01d5052c + 0x1c);
    local_1a0 = (int ***)*local_28;
    local_30 = (int ****)&local_88;
    local_190 = 0;
    local_2c = (int ****)&DAT_00000001;
    local_50 = (int ****)&local_40;
    local_40 = (int ****)&local_110;
    local_80 = (uint *)&DAT_01d2ea4c;
    local_54 = (int ****)&DAT_0057e1fc;
    local_3c = (int ****)&LAB_01a03334;
    local_19c = *(int *)(DAT_01d5052c + 0x20);
    local_88 = (undefined4 ****)&local_1a0;
    FUN_01aaaecc(DAT_01d5052c,&local_30);
    iVar4 = DAT_01d5052c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_9c = *(int *****)(DAT_01d5052c + 0x14);
      local_98 = *(uint **)(DAT_01d5052c + 0x18);
      local_a0 = (undefined4 ****)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar8 = DAT_01d4edc4;
      }
      puVar11 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar11 = DAT_01d4edc8;
      }
      iVar5 = (*(code *)puVar11[3])(pcVar8,&local_a0);
      if (iVar5 != 0) {
        FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_a0,&local_30);
      }
    }
  }
  else {
    iVar4 = DAT_01d5052c;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_148 = *(undefined4 *)(DAT_01d5052c + 0x14);
      local_144 = *(undefined4 *)(DAT_01d5052c + 0x18);
      local_14c = 1;
      DataMemoryBarrier(0xb);
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar8 = DAT_01d4edc4;
      }
      puVar11 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar11 = DAT_01d4edc8;
      }
      iVar5 = (*(code *)puVar11[3])(pcVar8,&local_14c);
      if (iVar5 != 0) {
        if (*(int *)(DAT_01d5052c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29d00);
        }
        local_198 = *(undefined4 *)(DAT_01d5052c + 0x24);
        local_194 = *(undefined4 *)(DAT_01d5052c + 0x28);
        local_9c = (int ****)&local_40;
        local_84 = (int ****)&DAT_00000001;
        local_3c = (int ****)&local_30;
        local_88 = &local_a0;
        local_30 = (int ****)&local_110;
        local_190 = 0;
        local_98 = (uint *)&DAT_01d2ea4c;
        local_40 = (int ****)&DAT_0057e1fc;
        local_2c = (int ****)&LAB_01a03334;
        local_1a0 = *(int ****)(DAT_01d5052c + 0x1c);
        local_19c = *(int *)(DAT_01d5052c + 0x20);
        local_a0 = (undefined4 ****)&local_1a0;
        local_80 = (uint *)(DAT_01d5052c + 0x1c);
        FUN_01aaa328(iVar4,pcVar8,puVar11[4],&local_14c,&local_88);
      }
    }
  }
  FUN_01a0a180(&local_1f0);
  *(undefined1 *)(param_1 + 0x39) = 0;
  FUN_0193c71c(param_1 + 0x31);
  FUN_019fcf58(param_1);
  piVar7 = (int *)param_1[0x30];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar7;
    bVar23 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar23);
  *piVar7 = iVar4 + -1;
  uVar15 = 0;
  uVar17 = 1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x30]);
  }
LAB_01a089fc:
  *(undefined1 *)((int)param_1 + 0xe5) = uVar17;
  return uVar15;
  while( true ) {
    piVar21 = (int *)(iVar5 + iVar14);
    iVar13 = iVar13 + -4;
    iVar14 = iVar14 + 4;
    if (*piVar21 == iVar18) break;
LAB_01a08edc:
    if (iVar13 == 0) {
      if (uVar6 == local_170) {
        FUN_019ee1a8(&local_170);
        iVar5 = local_16c;
      }
      *(int *)(iVar5 + uVar6 * 4) = iVar18;
      uVar6 = uVar6 + 1;
      local_168 = uVar6;
      break;
    }
  }
LAB_01a08f38:
  piVar21 = piVar22;
  if (piVar22 == piVar7 + iVar4) goto LAB_01a08f40;
  goto LAB_01a08e78;
}

