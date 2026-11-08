// FUN_007bfbdc @ 007bfbdc size=1876 calls_out=15 calls_in=4
// strings: __typename

void FUN_007bfbdc(uint *param_1,int *param_2,uint *param_3,int *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  undefined *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int local_19c;
  int local_184;
  uint local_158;
  undefined1 *local_154;
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
    iVar30 = *(int *)(uVar7 + 0xc);
    iVar8 = *(int *)(uVar7 + 0x10) * 0x5c + iVar30;
    piVar9 = param_4 + 1;
    iVar20 = *param_4;
    puVar10 = (uint *)((uint)&local_158 | 4);
    uVar21 = *param_3;
    piVar22 = (int *)param_3[5];
    piVar23 = (int *)param_3[6];
    uVar24 = param_3[7];
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar30 + 0x10) < 0) {
        if (*(int *)(iVar30 + 0x10) != -0x7fffffff) {
          iVar11 = *piVar23;
          if (*(int *)(iVar11 + 100) != 0) {
            iVar29 = *(int *)(iVar30 + 0x30);
            iVar26 = *(int *)(iVar30 + 0x34);
            uVar13 = FUN_00701e18(*(undefined4 *)(iVar11 + 0x68),*(undefined4 *)(iVar11 + 0x6c),
                                  *(undefined4 *)(iVar11 + 0x70),*(undefined4 *)(iVar11 + 0x74),
                                  iVar29,iVar26);
            uVar27 = uVar13 >> 0x19;
            uVar28 = *(uint *)(iVar11 + 0x5c);
            iVar11 = *(int *)(iVar11 + 0x58);
            local_19c = 0;
            while( true ) {
              uVar13 = uVar28 & uVar13;
              uVar14 = *(uint *)(iVar11 + uVar13);
              uVar15 = uVar14 ^ uVar27 * 0x1010101;
              uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff;
              while (uVar15 != 0) {
                uVar16 = uVar15 >> 8;
                uVar3 = uVar15 >> 0x10;
                uVar4 = uVar15 >> 0x18;
                uVar5 = uVar15 << 0x18;
                uVar15 = uVar15 - 1 & uVar15;
                uVar16 = uVar13 + ((uint)LZCOUNT(uVar5 | (uVar16 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar28;
                piVar12 = (int *)(iVar11 + -0x48 + uVar16 * -0x48);
                if ((iVar26 == piVar12[1]) &&
                   (iVar17 = thunk_FUN_01bed842(iVar29 + 8,*piVar12 + 8,iVar26), iVar17 == 0)) {
                  iVar11 = iVar11 + uVar16 * -0x48;
                  local_184 = iVar11 + -0x2c;
                  iVar11 = iVar11 + -0x18;
                  goto LAB_007bfee0;
                }
              }
              if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
              local_19c = local_19c + 4;
              uVar13 = uVar13 + local_19c;
            }
          }
          local_158 = iVar30 + 0x30;
          local_154 = &LAB_00701524;
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_158);
          local_154 = *(undefined1 **)(iVar30 + 0x14);
          local_150 = *(undefined4 *)(iVar30 + 0x18);
          local_158 = 1;
          FUN_006bd784(param_1,&local_48,&local_158);
          return;
        }
        local_184 = iVar30 + 0x28;
        if (*(int *)(iVar30 + 0x4c) == 0) {
LAB_007c00fc:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_184;
          local_34 = piVar22;
          local_30 = piVar23;
          local_2c = uVar24;
          local_28 = uVar2;
          FUN_007bfbdc(&local_158,param_2,&local_48,param_4);
        }
        else {
          iVar11 = iVar30 + 0x3c;
LAB_007bfee0:
          iVar29 = *(int *)(iVar11 + 0x14);
          iVar11 = *(int *)(iVar11 + 0x10) + 8;
          iVar26 = *(int *)(iVar20 * 4 + 0x53502c);
          puVar25 = (&PTR_DAT_01d30ad4)[iVar20];
          if ((iVar26 != iVar29) ||
             (iVar17 = thunk_FUN_01bed842(puVar25,iVar11,iVar29), iVar17 != 0)) {
            iVar17 = *piVar22;
            if (*(int *)(iVar17 + 0x44) != 0) {
              uVar13 = FUN_01a9c24c(*(undefined4 *)(iVar17 + 0x48),*(undefined4 *)(iVar17 + 0x4c),
                                    *(undefined4 *)(iVar17 + 0x50),*(undefined4 *)(iVar17 + 0x54),
                                    puVar25,iVar26);
              uVar27 = uVar13 >> 0x19;
              uVar28 = *(uint *)(iVar17 + 0x3c);
              iVar17 = *(int *)(iVar17 + 0x38);
              iVar31 = 0;
              while( true ) {
                uVar13 = uVar28 & uVar13;
                uVar14 = *(uint *)(iVar17 + uVar13);
                uVar15 = uVar14 ^ uVar27 * 0x1010101;
                for (uVar15 = ~uVar15 & 0x80808080 & uVar15 + 0xfefefeff; uVar15 != 0;
                    uVar15 = uVar15 - 1 & uVar15) {
                  uVar16 = uVar13 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                                   (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >>
                                    3) & uVar28;
                  iVar18 = iVar17 + -0x40 + uVar16 * -0x40;
                  if ((iVar26 == *(int *)(iVar18 + 8)) &&
                     (iVar18 = thunk_FUN_01bed842(puVar25,*(undefined4 *)(iVar18 + 4),iVar26),
                     iVar18 == 0)) {
                    iVar26 = FUN_006e4fc4(iVar17 + uVar16 * -0x40 + -0x30,iVar11,iVar29);
                    if (iVar26 != 0) goto LAB_007c0068;
                    goto LAB_007c00d0;
                  }
                }
                if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
                iVar31 = iVar31 + 4;
                uVar13 = uVar13 + iVar31;
              }
            }
LAB_007c00d0:
            if ((iVar29 != 0xe) || (iVar11 = thunk_FUN_01bed842(0x3e8150,iVar11,0xe), iVar11 != 0))
            goto LAB_007c0270;
            goto LAB_007c00fc;
          }
LAB_007c0068:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = local_184;
          if (iVar20 == 0) {
            local_34 = piVar22;
            local_30 = piVar23;
            local_2c = uVar24;
            local_28 = uVar2;
            FUN_0081cfac(&local_158,param_2,&local_48,piVar9);
          }
          else if (iVar20 == 1) {
            local_34 = piVar22;
            local_30 = piVar23;
            local_2c = uVar24;
            local_28 = uVar2;
            FUN_00859108(&local_158,param_2,&local_48,piVar9);
          }
          else {
            local_34 = piVar22;
            local_30 = piVar23;
            local_2c = uVar24;
            local_28 = uVar2;
            FUN_00870608(&local_158,param_2,&local_48,piVar9);
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
            iVar26 = *piVar12;
            bVar6 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar6);
          *piVar12 = iVar26 + 1;
          if (iVar26 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x7c0330);
            (*pcVar1)();
          }
          uVar27 = *(uint *)(iVar30 + iVar11 + 0x1c);
          local_154 = *(undefined1 **)(&DAT_01d30ac8 + iVar20 * 4);
          local_150 = *(undefined4 *)(iVar20 * 4 + 0x535020);
          local_158 = 0x80000000;
          FUN_0160ec7c(&local_48,&local_158);
          local_158 = local_48;
          local_154 = (undefined1 *)uStack_44;
          local_150 = uStack_40;
          local_144 = (int *)((uint)local_144 & 0xffffff00);
          local_14c = piVar12;
          local_148 = uVar27;
          puVar19 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar19 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar19 = local_158;
          puVar19[1] = (uint)local_154;
          puVar19[2] = local_150;
          puVar19[3] = (uint)local_14c;
          puVar19[4] = local_148;
          puVar19[5] = (uint)local_144;
          iVar11 = param_2[2];
          if (iVar11 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar11 + 1;
          piVar12 = (int *)(param_2[1] + iVar11 * 8);
          *piVar12 = (int)puVar19;
          puVar25 = &DAT_01c0a320;
        }
        else {
          if (uVar21 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_158 = (uint)(uVar21 != 0);
          local_134 = iVar30 + 8;
          *puVar10 = local_48;
          puVar10[1] = uStack_44;
          puVar10[2] = uStack_40;
          local_138 = CONCAT31(local_138._1_3_,uVar2);
          local_fc = 0;
          local_148 = uVar7;
          local_144 = piVar22;
          local_140 = piVar23;
          local_13c = uVar24;
          local_130 = param_4;
          iVar11 = thunk_FUN_01be5118(0x10c);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x10c);
          }
          FUN_01bed4e2(iVar11,&local_158,0x10c);
          iVar26 = param_2[2];
          if (iVar26 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar26 + 1;
          piVar12 = (int *)(param_2[1] + iVar26 * 8);
          *piVar12 = iVar11;
          puVar25 = &DAT_01c0a310;
        }
        piVar12[1] = (int)puVar25;
      }
LAB_007c0270:
      iVar30 = iVar30 + 0x5c;
    } while (iVar30 != iVar8);
  }
  *param_1 = 2;
  return;
}

