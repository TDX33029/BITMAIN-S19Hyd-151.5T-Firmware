// FUN_00831fdc @ 00831fdc size=1836 calls_out=12 calls_in=2
// strings: __typename | NoneLicense | LicenseState

void FUN_00831fdc(uint *param_1,int *param_2,uint *param_3,byte *param_4)

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
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  undefined *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int local_180;
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
  byte *local_130;
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
    uVar18 = (uint)*param_4;
    puVar9 = (uint *)((uint)&local_158 | 4);
    uVar19 = *param_3;
    piVar20 = (int *)param_3[5];
    piVar21 = (int *)param_3[6];
    uVar22 = param_3[7];
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar30 + 0x10) < 0) {
        if (*(int *)(iVar30 + 0x10) != -0x7fffffff) {
          iVar10 = *piVar21;
          if (*(int *)(iVar10 + 100) != 0) {
            iVar27 = *(int *)(iVar30 + 0x34);
            iVar29 = *(int *)(iVar30 + 0x30);
            uVar12 = FUN_00701e18(*(undefined4 *)(iVar10 + 0x68),*(undefined4 *)(iVar10 + 0x6c),
                                  *(undefined4 *)(iVar10 + 0x70),*(undefined4 *)(iVar10 + 0x74),
                                  iVar29,iVar27);
            uVar26 = uVar12 >> 0x19;
            iVar24 = *(int *)(iVar10 + 0x58);
            uVar28 = *(uint *)(iVar10 + 0x5c);
            local_180 = 0;
            while( true ) {
              uVar12 = uVar28 & uVar12;
              uVar13 = *(uint *)(iVar24 + uVar12);
              uVar14 = uVar13 ^ uVar26 * 0x1010101;
              uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff;
              while (uVar14 != 0) {
                uVar15 = uVar14 >> 8;
                uVar3 = uVar14 >> 0x10;
                uVar4 = uVar14 >> 0x18;
                uVar5 = uVar14 << 0x18;
                uVar14 = uVar14 - 1 & uVar14;
                uVar15 = uVar12 + ((uint)LZCOUNT(uVar5 | (uVar15 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar28;
                piVar11 = (int *)(iVar24 + -0x48 + uVar15 * -0x48);
                if ((iVar27 == piVar11[1]) &&
                   (iVar10 = thunk_FUN_01bed842(iVar29 + 8,*piVar11 + 8,iVar27), iVar10 == 0)) {
                  iVar24 = iVar24 + uVar15 * -0x48;
                  local_180 = iVar24 + -0x2c;
                  iVar24 = iVar24 + -0x18;
                  goto LAB_008322f0;
                }
              }
              if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
              local_180 = local_180 + 4;
              uVar12 = uVar12 + local_180;
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
        local_180 = iVar30 + 0x28;
        if (*(int *)(iVar30 + 0x4c) != 0) {
          iVar24 = iVar30 + 0x3c;
LAB_008322f0:
          iVar27 = *(int *)(iVar24 + 0x14);
          iVar10 = *(int *)(iVar24 + 0x10) + 8;
          iVar24 = *(int *)(&DAT_00568b18 + uVar18 * 4);
          puVar23 = (&PTR_s_NoneLicense_01d30b18)[uVar18];
          if ((iVar24 == iVar27) &&
             (iVar29 = thunk_FUN_01bed842(puVar23,iVar10,iVar27), iVar29 == 0)) {
LAB_00832488:
            local_48 = *param_3;
            uStack_44 = param_3[1];
            uStack_40 = param_3[2];
            uStack_3c = param_3[3];
            local_38 = local_180;
                    /* WARNING: Could not recover jumptable at 0x008324d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            local_34 = piVar20;
            local_30 = piVar21;
            local_2c = uVar22;
            local_28 = uVar2;
            (*(code *)(&DAT_008324d8 + *(int *)(&DAT_008324d8 + uVar18 * 4)))();
            return;
          }
          iVar29 = *piVar20;
          if (*(int *)(iVar29 + 0x44) != 0) {
            uVar12 = FUN_01a9c24c(*(undefined4 *)(iVar29 + 0x48),*(undefined4 *)(iVar29 + 0x4c),
                                  *(undefined4 *)(iVar29 + 0x50),*(undefined4 *)(iVar29 + 0x54),
                                  puVar23,iVar24);
            uVar26 = uVar12 >> 0x19;
            iVar25 = *(int *)(iVar29 + 0x38);
            uVar28 = *(uint *)(iVar29 + 0x3c);
            iVar29 = 0;
            while( true ) {
              uVar12 = uVar28 & uVar12;
              uVar14 = *(uint *)(iVar25 + uVar12);
              uVar13 = uVar14 ^ uVar26 * 0x1010101;
              for (uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff; uVar13 != 0;
                  uVar13 = uVar13 - 1 & uVar13) {
                uVar15 = uVar12 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                                 (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3
                                  ) & uVar28;
                iVar16 = iVar25 + -0x40 + uVar15 * -0x40;
                if ((iVar24 == *(int *)(iVar16 + 8)) &&
                   (iVar16 = thunk_FUN_01bed842(puVar23,*(undefined4 *)(iVar16 + 4),iVar24),
                   iVar16 == 0)) {
                  iVar24 = FUN_006e4fc4(iVar25 + uVar15 * -0x40 + -0x30,iVar10,iVar27);
                  if (iVar24 != 0) goto LAB_00832488;
                  goto LAB_00832500;
                }
              }
              if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
              iVar29 = iVar29 + 4;
              uVar12 = uVar12 + iVar29;
            }
          }
LAB_00832500:
          if ((iVar27 != 0xc) ||
             (iVar10 = thunk_FUN_01bed842("LicenseState",iVar10,0xc), iVar10 != 0))
          goto LAB_008326b4;
        }
        local_48 = *param_3;
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        local_38 = local_180;
        local_34 = piVar20;
        local_30 = piVar21;
        local_2c = uVar22;
        local_28 = uVar2;
        FUN_00831fdc(&local_158,param_2,&local_48,param_4);
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
           (iVar10 = thunk_FUN_01bed842(*(int *)(iVar30 + 0x44) + 8,"__typename",10), iVar10 == 0))
        {
          iVar10 = 0x3c;
          if (*(int *)(iVar30 + 0x54) == 0) {
            iVar10 = 0x2c;
          }
          piVar11 = *(int **)(iVar30 + iVar10 + 0x18);
          do {
            iVar24 = *piVar11;
            bVar6 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar6);
          *piVar11 = iVar24 + 1;
          if (iVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x832774);
            (*pcVar1)();
          }
          uVar26 = *(uint *)(iVar30 + iVar10 + 0x1c);
          local_154 = *(undefined1 **)(&DAT_01d30b08 + uVar18 * 4);
          local_150 = *(uint *)(&DAT_00568b18 + uVar18 * 4);
          local_158 = 0x80000000;
          FUN_0160ec7c(&local_48,&local_158);
          local_158 = local_48;
          local_154 = (undefined1 *)uStack_44;
          local_150 = uStack_40;
          local_144 = (int *)((uint)local_144 & 0xffffff00);
          local_14c = piVar11;
          local_148 = uVar26;
          puVar17 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar17 = local_158;
          puVar17[1] = (uint)local_154;
          puVar17[2] = local_150;
          puVar17[3] = (uint)local_14c;
          puVar17[4] = local_148;
          puVar17[5] = (uint)local_144;
          iVar10 = param_2[2];
          if (iVar10 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar10 + 1;
          piVar11 = (int *)(param_2[1] + iVar10 * 8);
          *piVar11 = (int)puVar17;
          puVar23 = &DAT_01c0ae20;
        }
        else {
          if (uVar19 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_158 = (uint)(uVar19 != 0);
          local_134 = iVar30 + 8;
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
          iVar24 = param_2[2];
          if (iVar24 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar24 + 1;
          piVar11 = (int *)(param_2[1] + iVar24 * 8);
          *piVar11 = iVar10;
          puVar23 = &DAT_01c0ae10;
        }
        piVar11[1] = (int)puVar23;
      }
LAB_008326b4:
      iVar30 = iVar30 + 0x5c;
    } while (iVar30 != iVar8);
  }
  *param_1 = 2;
  return;
}

