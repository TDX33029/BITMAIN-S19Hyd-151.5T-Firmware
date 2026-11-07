// FUN_00cce8dc @ 00cce8dc size=1848 calls_out=14 calls_in=3
// strings: BosError | VoidResultevent open/boser/boser/src/metrics_scraper/filter.rs:423 | __typename | BosError | BosError | BosError

void FUN_00cce8dc(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  undefined *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int local_19c;
  int local_17c;
  uint local_158;
  char *local_154;
  uint local_150;
  int *local_14c;
  uint local_148;
  int *local_144;
  int *local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  int *local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined1 local_fc;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  undefined1 local_28;
  
  uVar7 = param_3[4];
  if (*(int *)(uVar7 + 0x10) != 0) {
    iVar28 = 8;
    iVar30 = *(int *)(uVar7 + 0xc);
    iVar8 = *(int *)(uVar7 + 0x10) * 0x5c + iVar30;
    iVar19 = *param_4;
    pcVar9 = "BosError";
    if (iVar19 == -0x80000000) {
      iVar28 = 10;
      pcVar9 = "VoidResultevent open/boser/boser/src/metrics_scraper/filter.rs:423";
    }
    puVar10 = (uint *)((uint)&local_158 | 4);
    uVar20 = *param_3;
    piVar21 = (int *)param_3[5];
    piVar22 = (int *)param_3[6];
    uVar23 = param_3[7];
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar30 + 0x10) < 0) {
        if (*(int *)(iVar30 + 0x10) != -0x7fffffff) {
          iVar11 = *piVar22;
          if (*(int *)(iVar11 + 100) != 0) {
            iVar27 = *(int *)(iVar30 + 0x30);
            iVar31 = *(int *)(iVar30 + 0x34);
            uVar13 = FUN_00701e18(*(undefined4 *)(iVar11 + 0x68),*(undefined4 *)(iVar11 + 0x6c),
                                  *(undefined4 *)(iVar11 + 0x70),*(undefined4 *)(iVar11 + 0x74),
                                  iVar27,iVar31);
            uVar26 = uVar13 >> 0x19;
            iVar25 = *(int *)(iVar11 + 0x58);
            uVar29 = *(uint *)(iVar11 + 0x5c);
            local_19c = 0;
            while( true ) {
              uVar13 = uVar29 & uVar13;
              uVar14 = *(uint *)(iVar25 + uVar13);
              uVar15 = uVar14 ^ uVar26 * 0x1010101;
              uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
              while (uVar15 != 0) {
                uVar16 = uVar15 >> 8;
                uVar3 = uVar15 >> 0x10;
                uVar4 = uVar15 >> 0x18;
                uVar5 = uVar15 << 0x18;
                uVar15 = uVar15 - 1 & uVar15;
                uVar16 = uVar13 + ((uint)LZCOUNT(uVar5 | (uVar16 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar29;
                piVar12 = (int *)(iVar25 + -0x48 + uVar16 * -0x48);
                if ((iVar31 == piVar12[1]) &&
                   (iVar11 = thunk_FUN_01bed842(iVar27 + 8,*piVar12 + 8,iVar31), iVar11 == 0)) {
                  iVar25 = iVar25 + uVar16 * -0x48;
                  local_17c = iVar25 + -0x2c;
                  iVar25 = iVar25 + -0x18;
                  goto LAB_00ccec04;
                }
              }
              if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
              local_19c = local_19c + 4;
              uVar13 = uVar13 + local_19c;
            }
          }
          local_158 = iVar30 + 0x30;
          local_154 = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_158);
          local_154 = *(char **)(iVar30 + 0x14);
          local_150 = *(undefined4 *)(iVar30 + 0x18);
          local_158 = 1;
          FUN_006bd784(param_1,&local_48,&local_158);
          return;
        }
        local_17c = iVar30 + 0x28;
        if (*(int *)(iVar30 + 0x4c) == 0) {
LAB_00ccee08:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_17c;
          local_34 = piVar21;
          local_30 = piVar22;
          local_2c = uVar23;
          local_28 = uVar2;
          FUN_00cce8dc(&local_158,param_2,&local_48,param_4);
        }
        else {
          iVar25 = iVar30 + 0x3c;
LAB_00ccec04:
          iVar27 = *(int *)(iVar25 + 0x14);
          iVar11 = *(int *)(iVar25 + 0x10) + 8;
          if ((iVar28 != iVar27) || (iVar25 = thunk_FUN_01bed842(pcVar9,iVar11,iVar28), iVar25 != 0)
             ) {
            iVar25 = *piVar21;
            if (*(int *)(iVar25 + 0x44) != 0) {
              uVar13 = FUN_01a9c24c(*(undefined4 *)(iVar25 + 0x48),*(undefined4 *)(iVar25 + 0x4c),
                                    *(undefined4 *)(iVar25 + 0x50),*(undefined4 *)(iVar25 + 0x54),
                                    pcVar9,iVar28);
              uVar26 = uVar13 >> 0x19;
              uVar29 = *(uint *)(iVar25 + 0x3c);
              iVar25 = *(int *)(iVar25 + 0x38);
              iVar31 = 0;
              while( true ) {
                uVar13 = uVar29 & uVar13;
                uVar15 = *(uint *)(iVar25 + uVar13);
                uVar14 = uVar15 ^ uVar26 * 0x1010101;
                for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
                    uVar14 = uVar14 - 1 & uVar14) {
                  uVar16 = uVar13 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                                   (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >>
                                    3) & uVar29;
                  iVar17 = iVar25 + -0x40 + uVar16 * -0x40;
                  if ((iVar28 == *(int *)(iVar17 + 8)) &&
                     (iVar17 = thunk_FUN_01bed842(pcVar9,*(undefined4 *)(iVar17 + 4),iVar28),
                     iVar17 == 0)) {
                    iVar25 = FUN_006e4fc4(iVar25 + uVar16 * -0x40 + -0x30,iVar11,iVar27);
                    if (iVar25 != 0) goto LAB_00cced74;
                    goto LAB_00ccedd8;
                  }
                }
                if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
                iVar31 = iVar31 + 4;
                uVar13 = uVar13 + iVar31;
              }
            }
LAB_00ccedd8:
            if ((iVar27 != 9) || (iVar11 = thunk_FUN_01bed842("BosResult",iVar11,9), iVar11 != 0))
            goto LAB_00ccef50;
            goto LAB_00ccee08;
          }
LAB_00cced74:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_17c;
          if (iVar19 == -0x80000000) {
            local_34 = piVar21;
            local_30 = piVar22;
            local_2c = uVar23;
            local_28 = uVar2;
            FUN_008a570c(&local_158,param_2,&local_48,param_4);
          }
          else {
            local_34 = piVar21;
            local_30 = piVar22;
            local_2c = uVar23;
            local_28 = uVar2;
            FUN_00822ef8(&local_158,param_2,&local_48,param_4);
          }
        }
        if (local_158 != 2) {
          param_1[1] = (uint)local_154;
          param_1[2] = local_150;
          param_1[3] = (uint)local_14c;
          param_1[4] = local_148;
          param_1[5] = (uint)local_144;
          param_1[6] = (uint)local_140;
          param_1[7] = local_13c;
          param_1[8] = local_138;
          param_1[9] = local_134;
          param_1[10] = (uint)local_130;
          param_1[0xb] = uStack_12c;
          param_1[0xc] = uStack_128;
          param_1[0xd] = uStack_124;
          param_1[0xe] = uStack_120;
          *param_1 = local_158;
          return;
        }
      }
      else {
        if ((*(int *)(iVar30 + 0x48) == 10) &&
           (iVar11 = thunk_FUN_01bed842(*(int *)(iVar30 + 0x44) + 8,"__typename",10), iVar11 == 0))
        {
          iVar11 = 0x3c;
          if (*(int *)(iVar30 + 0x54) == 0) {
            iVar11 = 0x2c;
          }
          piVar12 = *(int **)(iVar30 + iVar11 + 0x18);
          do {
            iVar25 = *piVar12;
            bVar6 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar6);
          *piVar12 = iVar25 + 1;
          if (iVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xccf014);
            (*pcVar1)();
          }
          uVar26 = *(uint *)(iVar30 + iVar11 + 0x1c);
          local_158 = 0x80000000;
          local_154 = pcVar9;
          local_150 = iVar28;
          FUN_0160ec7c(&local_48,&local_158);
          local_158 = local_48;
          local_154 = (char *)uStack_44;
          local_150 = uStack_40;
          local_144 = (int *)((uint)local_144 & 0xffffff00);
          local_14c = piVar12;
          local_148 = uVar26;
          puVar18 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar18 = local_158;
          puVar18[1] = (uint)local_154;
          puVar18[2] = local_150;
          puVar18[3] = (uint)local_14c;
          puVar18[4] = local_148;
          puVar18[5] = (uint)local_144;
          iVar11 = param_2[2];
          if (iVar11 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar11 + 1;
          piVar12 = (int *)(param_2[1] + iVar11 * 8);
          *piVar12 = (int)puVar18;
          puVar24 = &DAT_01c14618;
        }
        else {
          if (uVar20 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_158 = (uint)(uVar20 != 0);
          local_134 = iVar30 + 8;
          *puVar10 = local_48;
          puVar10[1] = uStack_44;
          puVar10[2] = uStack_40;
          local_138 = CONCAT31(local_138._1_3_,uVar2);
          local_fc = 0;
          local_148 = uVar7;
          local_144 = piVar21;
          local_140 = piVar22;
          local_13c = uVar23;
          local_130 = param_4;
          iVar11 = thunk_FUN_01be5118(0x10c);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x10c);
          }
          FUN_01bed4e2(iVar11,&local_158,0x10c);
          iVar25 = param_2[2];
          if (iVar25 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar25 + 1;
          piVar12 = (int *)(param_2[1] + iVar25 * 8);
          *piVar12 = iVar11;
          puVar24 = &DAT_01c142b8;
        }
        piVar12[1] = (int)puVar24;
      }
LAB_00ccef50:
      iVar30 = iVar30 + 0x5c;
    } while (iVar30 != iVar8);
  }
  *param_1 = 2;
  return;
}

