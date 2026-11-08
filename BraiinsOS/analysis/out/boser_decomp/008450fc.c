// FUN_008450fc @ 008450fc size=1840 calls_out=12 calls_in=1
// strings: __typename | GroupConfigurator | GroupConfigurator | GroupConfigurator | GroupConfigurator | GroupConfigurator

void FUN_008450fc(uint *param_1,int *param_2,uint *param_3,uint param_4)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  uint *puVar21;
  undefined *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int local_87c;
  uint local_840;
  char *local_83c;
  uint local_838;
  int *local_834;
  uint local_830;
  int *local_82c;
  int *local_828;
  uint local_824;
  uint local_820;
  uint local_81c;
  uint local_818;
  uint uStack_814;
  uint uStack_810;
  uint uStack_80c;
  uint uStack_808;
  undefined1 local_7e4;
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
    iVar28 = *(int *)(uVar7 + 0xc);
    iVar25 = *(int *)(uVar7 + 0x10) * 0x5c + iVar28;
    uVar17 = *param_3;
    piVar18 = (int *)param_3[5];
    piVar19 = (int *)param_3[6];
    uVar20 = param_3[7];
    puVar21 = (uint *)((uint)&local_840 | 4);
    uVar2 = (undefined1)param_3[8];
    do {
      if (*(int *)(iVar28 + 0x10) < 0) {
        if (*(int *)(iVar28 + 0x10) != -0x7fffffff) {
          iVar8 = *piVar19;
          if (*(int *)(iVar8 + 100) != 0) {
            iVar23 = *(int *)(iVar28 + 0x30);
            iVar29 = *(int *)(iVar28 + 0x34);
            uVar10 = FUN_00701e18(*(undefined4 *)(iVar8 + 0x68),*(undefined4 *)(iVar8 + 0x6c),
                                  *(undefined4 *)(iVar8 + 0x70),*(undefined4 *)(iVar8 + 0x74),iVar23
                                  ,iVar29);
            uVar27 = uVar10 >> 0x19;
            uVar24 = *(uint *)(iVar8 + 0x5c);
            iVar8 = *(int *)(iVar8 + 0x58);
            local_87c = 0;
            while( true ) {
              uVar10 = uVar24 & uVar10;
              uVar11 = *(uint *)(iVar8 + uVar10);
              uVar12 = uVar11 ^ uVar27 * 0x1010101;
              uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
              while (uVar12 != 0) {
                uVar13 = uVar12 >> 8;
                uVar3 = uVar12 >> 0x10;
                uVar4 = uVar12 >> 0x18;
                uVar5 = uVar12 << 0x18;
                uVar12 = uVar12 - 1 & uVar12;
                uVar13 = uVar10 + ((uint)LZCOUNT(uVar5 | (uVar13 & 0xff) << 0x10 |
                                                 (uVar3 & 0xff) << 8 | uVar4) >> 3) & uVar24;
                piVar9 = (int *)(iVar8 + -0x48 + uVar13 * -0x48);
                if ((iVar29 == piVar9[1]) &&
                   (iVar14 = thunk_FUN_01bed842(iVar23 + 8,*piVar9 + 8,iVar29), iVar14 == 0)) {
                  iVar8 = iVar8 + uVar13 * -0x48;
                  iVar23 = iVar8 + -0x2c;
                  iVar8 = iVar8 + -0x18;
                  goto LAB_00845404;
                }
              }
              if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
              local_87c = local_87c + 4;
              uVar10 = uVar10 + local_87c;
            }
          }
          local_840 = iVar28 + 0x30;
          local_83c = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_840);
          local_83c = *(char **)(iVar28 + 0x14);
          local_838 = *(undefined4 *)(iVar28 + 0x18);
          local_840 = 1;
          FUN_006bd784(param_1,&local_48,&local_840);
          return;
        }
        iVar23 = iVar28 + 0x28;
        if (*(int *)(iVar28 + 0x4c) == 0) {
LAB_00845628:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar23;
          local_34 = piVar18;
          local_30 = piVar19;
          local_2c = uVar20;
          local_28 = uVar2;
          FUN_008450fc(&local_840,param_2,&local_48,param_4);
        }
        else {
          iVar8 = iVar28 + 0x3c;
LAB_00845404:
          iVar29 = *(int *)(iVar8 + 0x14);
          iVar8 = *(int *)(iVar8 + 0x10) + 8;
          if ((iVar29 != 0x11) ||
             (iVar14 = thunk_FUN_01bed842("GroupConfigurator",iVar8,0x11), iVar14 != 0)) {
            iVar14 = *piVar18;
            if (*(int *)(iVar14 + 0x44) != 0) {
              uVar10 = FUN_01a9c24c(*(undefined4 *)(iVar14 + 0x48),*(undefined4 *)(iVar14 + 0x4c),
                                    *(undefined4 *)(iVar14 + 0x50),*(undefined4 *)(iVar14 + 0x54),
                                    "GroupConfigurator",0x11);
              uVar27 = uVar10 >> 0x19;
              iVar26 = *(int *)(iVar14 + 0x38);
              uVar24 = *(uint *)(iVar14 + 0x3c);
              iVar14 = 0;
              while( true ) {
                uVar10 = uVar24 & uVar10;
                uVar11 = *(uint *)(iVar26 + uVar10);
                uVar12 = uVar11 ^ uVar27 * 0x1010101;
                for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
                    uVar12 = uVar12 - 1 & uVar12) {
                  uVar13 = uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                                   (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >>
                                    3) & uVar24;
                  iVar15 = iVar26 + -0x40 + uVar13 * -0x40;
                  if ((*(int *)(iVar15 + 8) == 0x11) &&
                     (iVar15 = thunk_FUN_01bed842("GroupConfigurator",*(undefined4 *)(iVar15 + 4),
                                                  0x11), iVar15 == 0)) {
                    iVar14 = FUN_006e4fc4(iVar26 + uVar13 * -0x40 + -0x30,iVar8,iVar29);
                    if (iVar14 != 0) goto LAB_0084558c;
                    goto LAB_008455f8;
                  }
                }
                if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
                iVar14 = iVar14 + 4;
                uVar10 = uVar10 + iVar14;
              }
            }
LAB_008455f8:
            if ((iVar29 != 0x11) ||
               (iVar8 = thunk_FUN_01bed842("GroupConfigurator",iVar8,0x11), iVar8 != 0))
            goto LAB_00845298;
            goto LAB_00845628;
          }
LAB_0084558c:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar23;
          local_34 = piVar18;
          local_30 = piVar19;
          local_2c = uVar20;
          local_28 = uVar2;
          FUN_008450fc(&local_840,param_2,&local_48,param_4);
        }
        if (local_840 != 2) {
          param_1[1] = (uint)local_83c;
          param_1[2] = local_838;
          param_1[3] = (uint)local_834;
          param_1[4] = local_830;
          param_1[5] = (uint)local_82c;
          param_1[6] = (uint)local_828;
          param_1[7] = local_824;
          param_1[8] = local_820;
          param_1[9] = local_81c;
          param_1[10] = local_818;
          param_1[0xb] = uStack_814;
          param_1[0xc] = uStack_810;
          param_1[0xd] = uStack_80c;
          param_1[0xe] = uStack_808;
          *param_1 = local_840;
          return;
        }
      }
      else {
        if ((*(int *)(iVar28 + 0x48) == 10) &&
           (iVar8 = thunk_FUN_01bed842(*(int *)(iVar28 + 0x44) + 8,"__typename",10), iVar8 == 0)) {
          iVar8 = 0x3c;
          if (*(int *)(iVar28 + 0x54) == 0) {
            iVar8 = 0x2c;
          }
          piVar9 = *(int **)(iVar28 + iVar8 + 0x18);
          do {
            iVar23 = *piVar9;
            bVar6 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar6);
          *piVar9 = iVar23 + 1;
          if (iVar23 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x84582c);
            (*pcVar1)();
          }
          uVar27 = *(uint *)(iVar28 + iVar8 + 0x1c);
          local_838 = 0x11;
          local_83c = "GroupConfigurator";
          local_840 = 0x80000000;
          FUN_0160ec7c(&local_48,&local_840);
          local_840 = local_48;
          local_83c = (char *)uStack_44;
          local_838 = uStack_40;
          local_82c = (int *)((uint)local_82c & 0xffffff00);
          local_834 = piVar9;
          local_830 = uVar27;
          puVar16 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar16 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar16 = local_840;
          puVar16[1] = (uint)local_83c;
          puVar16[2] = local_838;
          puVar16[3] = (uint)local_834;
          puVar16[4] = local_830;
          puVar16[5] = (uint)local_82c;
          iVar8 = param_2[2];
          if (iVar8 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar8 + 1;
          piVar9 = (int *)(param_2[1] + iVar8 * 8);
          *piVar9 = (int)puVar16;
          puVar22 = &DAT_01c0a880;
        }
        else {
          if (uVar17 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_840 = (uint)(uVar17 != 0);
          local_81c = iVar28 + 8;
          *puVar21 = local_48;
          puVar21[1] = uStack_44;
          puVar21[2] = uStack_40;
          local_820 = CONCAT31(local_820._1_3_,uVar2);
          local_7e4 = 0;
          local_830 = uVar7;
          local_82c = piVar18;
          local_828 = piVar19;
          local_824 = uVar20;
          local_818 = param_4;
          iVar8 = thunk_FUN_01be5118(0x7f8);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x7f8);
          }
          FUN_01bed4e2(iVar8,&local_840,0x7f8);
          iVar23 = param_2[2];
          if (iVar23 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar23 + 1;
          piVar9 = (int *)(param_2[1] + iVar23 * 8);
          *piVar9 = iVar8;
          puVar22 = &DAT_01c0a870;
        }
        piVar9[1] = (int)puVar22;
      }
LAB_00845298:
      iVar28 = iVar28 + 0x5c;
    } while (iVar28 != iVar25);
  }
  *param_1 = 2;
  return;
}

