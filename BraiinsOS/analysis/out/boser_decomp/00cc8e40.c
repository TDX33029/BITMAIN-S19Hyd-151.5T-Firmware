// FUN_00cc8e40 @ 00cc8e40 size=1904 calls_out=14 calls_in=1
// strings: HostnameOk | __typename | HostnameOk | HostnameOk | HostnameOk | HostnameResult

void FUN_00cc8e40(uint *param_1,int *param_2,uint *param_3,uint *param_4)

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
  undefined4 *puVar19;
  char *pcVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int local_1a0;
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
    iVar28 = 10;
    iVar31 = *(int *)(uVar7 + 0xc);
    iVar8 = *(int *)(uVar7 + 0x10) * 0x5c + iVar31;
    uVar25 = *param_4;
    if (uVar25 != 0) {
      iVar28 = 0xd;
    }
    pcVar20 = "H";
    if (uVar25 == 0) {
      pcVar20 = "HostnameOk";
    }
    puVar9 = (uint *)((uint)&local_158 | 4);
    uVar21 = *param_3;
    piVar22 = (int *)param_3[5];
    piVar23 = (int *)param_3[6];
    uVar24 = param_3[7];
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar31 + 0x10) < 0) {
        if (*(int *)(iVar31 + 0x10) != -0x7fffffff) {
          iVar10 = *piVar23;
          if (*(int *)(iVar10 + 100) != 0) {
            iVar29 = *(int *)(iVar31 + 0x30);
            iVar26 = *(int *)(iVar31 + 0x34);
            uVar12 = FUN_00701e18(*(undefined4 *)(iVar10 + 0x68),*(undefined4 *)(iVar10 + 0x6c),
                                  *(undefined4 *)(iVar10 + 0x70),*(undefined4 *)(iVar10 + 0x74),
                                  iVar29,iVar26);
            uVar27 = uVar12 >> 0x19;
            uVar30 = *(uint *)(iVar10 + 0x5c);
            iVar10 = *(int *)(iVar10 + 0x58);
            local_1a0 = 0;
            while( true ) {
              uVar12 = uVar30 & uVar12;
              uVar13 = *(uint *)(iVar10 + uVar12);
              uVar14 = uVar13 ^ uVar27 * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              while (uVar14 != 0) {
                uVar15 = uVar14 >> 8;
                uVar3 = uVar14 >> 0x10;
                uVar4 = uVar14 >> 0x18;
                uVar5 = uVar14 << 0x18;
                uVar14 = uVar14 - 1 & uVar14;
                uVar15 = uVar12 + ((uint)LZCOUNT(uVar5 | (uVar15 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar30;
                piVar11 = (int *)(iVar10 + -0x48 + uVar15 * -0x48);
                if ((iVar26 == piVar11[1]) &&
                   (iVar16 = thunk_FUN_01bed842(iVar29 + 8,*piVar11 + 8,iVar26), iVar16 == 0)) {
                  iVar10 = iVar10 + uVar15 * -0x48;
                  local_17c = iVar10 + -0x2c;
                  iVar10 = iVar10 + -0x18;
                  goto LAB_00cc9174;
                }
              }
              if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
              local_1a0 = local_1a0 + 4;
              uVar12 = uVar12 + local_1a0;
            }
          }
          local_158 = iVar31 + 0x30;
          local_154 = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_158);
          local_154 = *(char **)(iVar31 + 0x14);
          local_150 = *(undefined4 *)(iVar31 + 0x18);
          local_158 = 1;
          FUN_006bd784(param_1,&local_48,&local_158);
          return;
        }
        local_17c = iVar31 + 0x28;
        if (*(int *)(iVar31 + 0x4c) == 0) {
LAB_00cc9390:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_17c;
          local_34 = piVar22;
          local_30 = piVar23;
          local_2c = uVar24;
          local_28 = uVar2;
          FUN_00cc8e40(&local_158,param_2,&local_48,param_4);
        }
        else {
          iVar10 = iVar31 + 0x3c;
LAB_00cc9174:
          iVar26 = *(int *)(iVar10 + 0x14);
          iVar10 = *(int *)(iVar10 + 0x10) + 8;
          if ((iVar28 != iVar26) ||
             (iVar29 = thunk_FUN_01bed842(pcVar20,iVar10,iVar28), iVar29 != 0)) {
            iVar29 = *piVar22;
            if (*(int *)(iVar29 + 0x44) != 0) {
              uVar12 = FUN_01a9c24c(*(undefined4 *)(iVar29 + 0x48),*(undefined4 *)(iVar29 + 0x4c),
                                    *(undefined4 *)(iVar29 + 0x50),*(undefined4 *)(iVar29 + 0x54),
                                    pcVar20,iVar28);
              uVar27 = uVar12 >> 0x19;
              iVar16 = *(int *)(iVar29 + 0x38);
              uVar30 = *(uint *)(iVar29 + 0x3c);
              iVar29 = 0;
              while( true ) {
                uVar12 = uVar30 & uVar12;
                uVar14 = *(uint *)(iVar16 + uVar12);
                uVar13 = uVar14 ^ uVar27 * 0x1010101;
                for (uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff; uVar13 != 0;
                    uVar13 = uVar13 - 1 & uVar13) {
                  uVar15 = uVar12 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                   (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >>
                                    3) & uVar30;
                  iVar17 = iVar16 + -0x40 + uVar15 * -0x40;
                  if ((iVar28 == *(int *)(iVar17 + 8)) &&
                     (iVar17 = thunk_FUN_01bed842(pcVar20,*(undefined4 *)(iVar17 + 4),iVar28),
                     iVar17 == 0)) {
                    iVar29 = FUN_006e4fc4(iVar16 + uVar15 * -0x40 + -0x30,iVar10,iVar26);
                    if (iVar29 == 0) goto LAB_00cc9360;
                    goto LAB_00cc92fc;
                  }
                }
                if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
                iVar29 = iVar29 + 4;
                uVar12 = uVar12 + iVar29;
              }
            }
LAB_00cc9360:
            if ((iVar26 != 0xe) ||
               (iVar10 = thunk_FUN_01bed842("HostnameResult",iVar10,0xe), iVar10 != 0))
            goto LAB_00cc94f0;
            goto LAB_00cc9390;
          }
LAB_00cc92fc:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_17c;
          if ((uVar25 & 1) == 0) {
            local_34 = piVar22;
            local_30 = piVar23;
            local_2c = uVar24;
            local_28 = uVar2;
            FUN_0086bc78(&local_158,param_2,&local_48,param_4 + 1);
          }
          else {
            local_34 = piVar22;
            local_30 = piVar23;
            local_2c = uVar24;
            local_28 = uVar2;
            FUN_008b3a54(&local_158,param_2,&local_48,param_4 + 1);
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
      else if ((*(int *)(iVar31 + 0x48) == 10) &&
              (iVar10 = thunk_FUN_01bed842(*(int *)(iVar31 + 0x44) + 8,"__typename",10), iVar10 == 0
              )) {
        iVar10 = 0x3c;
        if (*(int *)(iVar31 + 0x54) == 0) {
          iVar10 = 0x2c;
        }
        piVar11 = *(int **)(iVar31 + iVar10 + 0x18);
        do {
          iVar26 = *piVar11;
          bVar6 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar6);
        *piVar11 = iVar26 + 1;
        if (iVar26 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xcc95b0);
          (*pcVar1)();
        }
        uVar27 = *(uint *)(iVar31 + iVar10 + 0x1c);
        local_158 = 0x80000000;
        local_154 = pcVar20;
        local_150 = iVar28;
        FUN_0160ec7c(&local_48,&local_158);
        local_158 = local_48;
        local_154 = (char *)uStack_44;
        local_150 = uStack_40;
        local_144 = (int *)((uint)local_144 & 0xffffff00);
        local_14c = piVar11;
        local_148 = uVar27;
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
        puVar19 = (undefined4 *)(param_2[1] + iVar10 * 8);
        *puVar19 = puVar18;
        puVar19[1] = &DAT_01c14618;
      }
      else {
        if (uVar21 != 0) {
          local_48 = param_3[1];
          uStack_44 = param_3[2];
          uStack_40 = param_3[3];
        }
        local_158 = (uint)(uVar21 != 0);
        local_134 = iVar31 + 8;
        *puVar9 = local_48;
        puVar9[1] = uStack_44;
        puVar9[2] = uStack_40;
        local_138 = CONCAT31(local_138._1_3_,uVar2);
        local_fc = 0;
        local_148 = uVar7;
        local_144 = piVar22;
        local_140 = piVar23;
        local_13c = uVar24;
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
        piVar11[1] = (int)&DAT_01c144a8;
      }
LAB_00cc94f0:
      iVar31 = iVar31 + 0x5c;
    } while (iVar31 != iVar8);
  }
  *param_1 = 2;
  return;
}

