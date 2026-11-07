// FUN_00c9d6fc @ 00c9d6fc size=1948 calls_out=15 calls_in=1
// strings: TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63 | TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63 | __typename | TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63 | TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63 | TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63

void FUN_00c9d6fc(uint *param_1,int *param_2,uint *param_3,uint *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  undefined *puVar23;
  uint uVar24;
  char *pcVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int local_19c;
  int local_180;
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
  uint *local_130;
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
    iVar32 = *(int *)(uVar7 + 0xc);
    iVar30 = *(int *)(uVar7 + 0x10) * 0x5c + iVar32;
    uVar24 = param_4[1];
    uVar27 = *param_4;
    pcVar25 = "AttributeError";
    if (uVar24 != 0x80000000) {
      pcVar25 = &DAT_00569068;
    }
    iVar8 = 0x10;
    if (uVar24 == 0x80000000) {
      iVar8 = 0xe;
    }
    if (uVar27 == 0) {
      iVar8 = 0xe;
      pcVar25 = 
      "TempAndFansOutMAXEXACTevent open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:63"
      ;
    }
    puVar9 = (uint *)((uint)&local_158 | 4);
    uVar19 = *param_3;
    piVar20 = (int *)param_3[5];
    piVar21 = (int *)param_3[6];
    uVar22 = param_3[7];
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar32 + 0x10) < 0) {
        if (*(int *)(iVar32 + 0x10) != -0x7fffffff) {
          iVar10 = *piVar21;
          if (*(int *)(iVar10 + 100) != 0) {
            iVar31 = *(int *)(iVar32 + 0x30);
            iVar26 = *(int *)(iVar32 + 0x34);
            uVar12 = FUN_00701e18(*(undefined4 *)(iVar10 + 0x68),*(undefined4 *)(iVar10 + 0x6c),
                                  *(undefined4 *)(iVar10 + 0x70),*(undefined4 *)(iVar10 + 0x74),
                                  iVar31,iVar26);
            uVar28 = uVar12 >> 0x19;
            uVar29 = *(uint *)(iVar10 + 0x5c);
            iVar10 = *(int *)(iVar10 + 0x58);
            local_19c = 0;
            while( true ) {
              uVar12 = uVar29 & uVar12;
              uVar13 = *(uint *)(iVar10 + uVar12);
              uVar14 = uVar13 ^ uVar28 * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              while (uVar14 != 0) {
                uVar15 = uVar14 >> 8;
                uVar3 = uVar14 >> 0x10;
                uVar4 = uVar14 >> 0x18;
                uVar5 = uVar14 << 0x18;
                uVar14 = uVar14 - 1 & uVar14;
                uVar15 = uVar12 + ((uint)LZCOUNT(uVar5 | (uVar15 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar29;
                piVar11 = (int *)(iVar10 + -0x48 + uVar15 * -0x48);
                if ((iVar26 == piVar11[1]) &&
                   (iVar16 = thunk_FUN_01bed842(iVar31 + 8,*piVar11 + 8,iVar26), iVar16 == 0)) {
                  iVar10 = iVar10 + uVar15 * -0x48;
                  local_180 = iVar10 + -0x2c;
                  iVar10 = iVar10 + -0x18;
                  goto LAB_00c9da5c;
                }
              }
              if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
              local_19c = local_19c + 4;
              uVar12 = uVar12 + local_19c;
            }
          }
          local_158 = iVar32 + 0x30;
          local_154 = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_158);
          local_154 = *(char **)(iVar32 + 0x14);
          local_150 = *(undefined4 *)(iVar32 + 0x18);
          local_158 = 1;
          FUN_006bd784(param_1,&local_48,&local_158);
          return;
        }
        local_180 = iVar32 + 0x28;
        if (*(int *)(iVar32 + 0x4c) == 0) {
LAB_00c9dc74:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_180;
          local_34 = piVar20;
          local_30 = piVar21;
          local_2c = uVar22;
          local_28 = uVar2;
          FUN_00c9d6fc(&local_158,param_2,&local_48,param_4);
        }
        else {
          iVar10 = iVar32 + 0x3c;
LAB_00c9da5c:
          iVar26 = *(int *)(iVar10 + 0x14);
          iVar10 = *(int *)(iVar10 + 0x10) + 8;
          if ((iVar8 != iVar26) || (iVar31 = thunk_FUN_01bed842(pcVar25,iVar10,iVar8), iVar31 != 0))
          {
            iVar31 = *piVar20;
            if (*(int *)(iVar31 + 0x44) != 0) {
              uVar12 = FUN_01a9c24c(*(undefined4 *)(iVar31 + 0x48),*(undefined4 *)(iVar31 + 0x4c),
                                    *(undefined4 *)(iVar31 + 0x50),*(undefined4 *)(iVar31 + 0x54),
                                    pcVar25,iVar8);
              uVar28 = uVar12 >> 0x19;
              iVar16 = *(int *)(iVar31 + 0x38);
              uVar29 = *(uint *)(iVar31 + 0x3c);
              iVar31 = 0;
              while( true ) {
                uVar12 = uVar29 & uVar12;
                uVar14 = *(uint *)(iVar16 + uVar12);
                uVar13 = uVar14 ^ uVar28 * 0x1010101;
                for (uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff; uVar13 != 0;
                    uVar13 = uVar13 - 1 & uVar13) {
                  uVar15 = uVar12 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >>
                                    3) & uVar29;
                  iVar17 = iVar16 + -0x40 + uVar15 * -0x40;
                  if ((iVar8 == *(int *)(iVar17 + 8)) &&
                     (iVar17 = thunk_FUN_01bed842(pcVar25,*(undefined4 *)(iVar17 + 4)), iVar17 == 0)
                     ) {
                    iVar31 = FUN_006e4fc4(iVar16 + uVar15 * -0x40 + -0x30,iVar10,iVar26);
                    if (iVar31 == 0) goto LAB_00c9dc44;
                    goto LAB_00c9dbd8;
                  }
                }
                if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
                iVar31 = iVar31 + 4;
                uVar12 = uVar12 + iVar31;
              }
            }
LAB_00c9dc44:
            if ((iVar26 != 0x11) ||
               (iVar10 = thunk_FUN_01bed842("TempAndFansResult",iVar10,0x11), iVar10 != 0))
            goto LAB_00c9ddd8;
            goto LAB_00c9dc74;
          }
LAB_00c9dbd8:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_180;
          if ((uVar27 & 1) == 0) {
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar2;
            FUN_008a70c0(&local_158,param_2,&local_48,param_4 + 2);
          }
          else if (uVar24 == 0x80000000) {
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar2;
            FUN_00870608(&local_158,param_2,&local_48,param_4 + 2);
          }
          else {
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar2;
            FUN_008ab15c(&local_158,param_2,&local_48,param_4 + 1);
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
        if ((*(int *)(iVar32 + 0x48) == 10) &&
           (iVar10 = thunk_FUN_01bed842(*(int *)(iVar32 + 0x44) + 8,"__typename",10), iVar10 == 0))
        {
          iVar10 = 0x3c;
          if (*(int *)(iVar32 + 0x54) == 0) {
            iVar10 = 0x2c;
          }
          piVar11 = *(int **)(iVar32 + iVar10 + 0x18);
          do {
            iVar26 = *piVar11;
            bVar6 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar6);
          *piVar11 = iVar26 + 1;
          if (iVar26 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xc9de98);
            (*pcVar1)();
          }
          uVar28 = *(uint *)(iVar32 + iVar10 + 0x1c);
          local_158 = 0x80000000;
          local_154 = pcVar25;
          local_150 = iVar8;
          FUN_0160ec7c(&local_48,&local_158);
          local_158 = local_48;
          local_154 = (char *)uStack_44;
          local_150 = uStack_40;
          local_144 = (int *)((uint)local_144 & 0xffffff00);
          local_14c = piVar11;
          local_148 = uVar28;
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
          iVar10 = param_2[2];
          if (iVar10 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar10 + 1;
          piVar11 = (int *)(param_2[1] + iVar10 * 8);
          *piVar11 = (int)puVar18;
          puVar23 = &DAT_01c14618;
        }
        else {
          if (uVar19 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_158 = (uint)(uVar19 != 0);
          local_134 = iVar32 + 8;
          *puVar9 = local_48;
          puVar9[1] = uStack_44;
          puVar9[2] = uStack_40;
          local_138 = CONCAT31(local_138._1_3_,uVar2);
          local_fc = 0;
          local_148 = uVar7;
          local_144 = piVar20;
          local_140 = piVar21;
          local_13c = uVar22;
          local_130 = param_4;
          iVar10 = thunk_FUN_01be5118(0x10c);
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x10c);
          }
          FUN_01bed4e2(iVar10,&local_158,0x10c);
          iVar26 = param_2[2];
          if (iVar26 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar26 + 1;
          piVar11 = (int *)(param_2[1] + iVar26 * 8);
          *piVar11 = iVar10;
          puVar23 = &DAT_01c14358;
        }
        piVar11[1] = (int)puVar23;
      }
LAB_00c9ddd8:
      iVar32 = iVar32 + 0x5c;
    } while (iVar32 != iVar30);
  }
  *param_1 = 2;
  return;
}

