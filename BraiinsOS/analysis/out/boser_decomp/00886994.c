// FUN_00886994 @ 00886994 size=1800 calls_out=14 calls_in=2
// strings: Preheating | NoneReason | __typename | Preheating | Preheating | Preheating

void FUN_00886994(uint *param_1,int *param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  undefined *puVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
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
  uint local_130;
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
  
  uVar8 = param_3[4];
  if (*(int *)(uVar8 + 0x10) != 0) {
    iVar29 = *(int *)(uVar8 + 0xc);
    iVar9 = *(int *)(uVar8 + 0x10) * 0x5c + iVar29;
    cVar2 = *(char *)(param_4 + 7);
    pcVar24 = "NoneReason";
    if (cVar2 != '\x02') {
      pcVar24 = "Preheating";
    }
    puVar10 = (uint *)((uint)&local_158 | 4);
    uVar19 = *param_3;
    piVar20 = (int *)param_3[5];
    piVar21 = (int *)param_3[6];
    uVar22 = param_3[7];
    uVar3 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar29 + 0x10) < 0) {
        if (*(int *)(iVar29 + 0x10) != -0x7fffffff) {
          iVar11 = *piVar21;
          if (*(int *)(iVar11 + 100) != 0) {
            iVar27 = *(int *)(iVar29 + 0x30);
            iVar30 = *(int *)(iVar29 + 0x34);
            uVar13 = FUN_00701e18(*(undefined4 *)(iVar11 + 0x68),*(undefined4 *)(iVar11 + 0x6c),
                                  *(undefined4 *)(iVar11 + 0x70),*(undefined4 *)(iVar11 + 0x74),
                                  iVar27,iVar30);
            uVar26 = uVar13 >> 0x19;
            iVar25 = *(int *)(iVar11 + 0x58);
            uVar28 = *(uint *)(iVar11 + 0x5c);
            local_180 = 0;
            while( true ) {
              uVar13 = uVar28 & uVar13;
              uVar14 = *(uint *)(iVar25 + uVar13);
              uVar15 = uVar14 ^ uVar26 * 0x1010101;
              uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
              while (uVar15 != 0) {
                uVar16 = uVar15 >> 8;
                uVar4 = uVar15 >> 0x10;
                uVar5 = uVar15 >> 0x18;
                uVar6 = uVar15 << 0x18;
                uVar15 = uVar15 - 1 & uVar15;
                uVar16 = uVar13 + ((uint)LZCOUNT(uVar6 | (uVar16 & 0xff) << 0x10 |
                                                 (uVar4 & 0xff) << 8 | uVar5) >> 3) & uVar28;
                piVar12 = (int *)(iVar25 + -0x48 + uVar16 * -0x48);
                if ((iVar30 == piVar12[1]) &&
                   (iVar11 = thunk_FUN_01bed842(iVar27 + 8,*piVar12 + 8,iVar30), iVar11 == 0)) {
                  iVar25 = iVar25 + uVar16 * -0x48;
                  local_180 = iVar25 + -0x2c;
                  iVar25 = iVar25 + -0x18;
                  goto LAB_00886ca8;
                }
              }
              if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
              local_180 = local_180 + 4;
              uVar13 = uVar13 + local_180;
            }
          }
          local_158 = iVar29 + 0x30;
          local_154 = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_158);
          local_154 = *(char **)(iVar29 + 0x14);
          local_150 = *(undefined4 *)(iVar29 + 0x18);
          local_158 = 1;
          FUN_006bd784(param_1,&local_48,&local_158);
          return;
        }
        local_180 = iVar29 + 0x28;
        if (*(int *)(iVar29 + 0x4c) == 0) {
LAB_00886e98:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_180;
          local_34 = piVar20;
          local_30 = piVar21;
          local_2c = uVar22;
          local_28 = uVar3;
          FUN_00886994(&local_158,param_2,&local_48,param_4);
        }
        else {
          iVar25 = iVar29 + 0x3c;
LAB_00886ca8:
          iVar27 = *(int *)(iVar25 + 0x14);
          iVar11 = *(int *)(iVar25 + 0x10) + 8;
          if ((iVar27 != 10) || (iVar25 = thunk_FUN_01bed842(pcVar24,iVar11,10), iVar25 != 0)) {
            iVar25 = *piVar20;
            if (*(int *)(iVar25 + 0x44) != 0) {
              uVar13 = FUN_01a9c24c(*(undefined4 *)(iVar25 + 0x48),*(undefined4 *)(iVar25 + 0x4c),
                                    *(undefined4 *)(iVar25 + 0x50),*(undefined4 *)(iVar25 + 0x54),
                                    pcVar24,10);
              uVar26 = uVar13 >> 0x19;
              iVar30 = *(int *)(iVar25 + 0x38);
              uVar28 = *(uint *)(iVar25 + 0x3c);
              iVar25 = 0;
              while( true ) {
                uVar13 = uVar28 & uVar13;
                uVar15 = *(uint *)(iVar30 + uVar13);
                uVar14 = uVar15 ^ uVar26 * 0x1010101;
                for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
                    uVar14 = uVar14 - 1 & uVar14) {
                  uVar16 = uVar13 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                                   (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >>
                                    3) & uVar28;
                  iVar17 = iVar30 + -0x40 + uVar16 * -0x40;
                  if ((*(int *)(iVar17 + 8) == 10) &&
                     (iVar17 = thunk_FUN_01bed842(pcVar24,*(undefined4 *)(iVar17 + 4),10),
                     iVar17 == 0)) {
                    iVar25 = FUN_006e4fc4(iVar30 + uVar16 * -0x40 + -0x30,iVar11,iVar27);
                    if (iVar25 != 0) goto LAB_00886e08;
                    goto LAB_00886e68;
                  }
                }
                if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
                iVar25 = iVar25 + 4;
                uVar13 = uVar13 + iVar25;
              }
            }
LAB_00886e68:
            if ((iVar27 != 8) || (iVar11 = thunk_FUN_01bed842("RunState",iVar11,8), iVar11 != 0))
            goto LAB_00886fdc;
            goto LAB_00886e98;
          }
LAB_00886e08:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_180;
          if (cVar2 == '\x02') {
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar3;
            FUN_00868554(&local_158,param_2,&local_48,param_4);
          }
          else {
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar3;
            FUN_0081fa60(&local_158,param_2,&local_48,param_4);
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
          param_1[10] = local_130;
          param_1[0xb] = uStack_12c;
          param_1[0xc] = uStack_128;
          param_1[0xd] = uStack_124;
          param_1[0xe] = uStack_120;
          *param_1 = local_158;
          return;
        }
      }
      else {
        if ((*(int *)(iVar29 + 0x48) == 10) &&
           (iVar11 = thunk_FUN_01bed842(*(int *)(iVar29 + 0x44) + 8,"__typename",10), iVar11 == 0))
        {
          iVar11 = 0x3c;
          if (*(int *)(iVar29 + 0x54) == 0) {
            iVar11 = 0x2c;
          }
          piVar12 = *(int **)(iVar29 + iVar11 + 0x18);
          do {
            iVar25 = *piVar12;
            bVar7 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar7);
          *piVar12 = iVar25 + 1;
          if (iVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x88709c);
            (*pcVar1)();
          }
          uVar26 = *(uint *)(iVar29 + iVar11 + 0x1c);
          local_150 = 10;
          local_158 = 0x80000000;
          local_154 = pcVar24;
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
          puVar23 = &DAT_01c0aca0;
        }
        else {
          if (uVar19 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_158 = (uint)(uVar19 != 0);
          local_134 = iVar29 + 8;
          *puVar10 = local_48;
          puVar10[1] = uStack_44;
          puVar10[2] = uStack_40;
          local_138 = CONCAT31(local_138._1_3_,uVar3);
          local_fc = 0;
          local_148 = uVar8;
          local_144 = piVar20;
          local_140 = piVar21;
          local_13c = uVar22;
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
          puVar23 = &DAT_01c0ac90;
        }
        piVar12[1] = (int)puVar23;
      }
LAB_00886fdc:
      iVar29 = iVar29 + 0x5c;
    } while (iVar29 != iVar9);
  }
  *param_1 = 2;
  return;
}

