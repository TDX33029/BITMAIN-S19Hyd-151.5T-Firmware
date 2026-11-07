// FUN_00cad07c @ 00cad07c size=1688 calls_out=12 calls_in=3
// strings: __typename

void FUN_00cad07c(uint *param_1,int *param_2,uint *param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined *puVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  int local_244;
  uint local_208;
  undefined *local_204;
  uint local_200;
  int *local_1fc;
  uint local_1f8;
  int *local_1f4;
  int *local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  undefined1 local_1ac;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  undefined1 local_28;
  
  uVar6 = param_3[4];
  if (*(int *)(uVar6 + 0x10) != 0) {
    iVar28 = *(int *)(uVar6 + 0xc);
    iVar7 = *(int *)(uVar6 + 0x10) * 0x5c + iVar28;
    puVar15 = (uint *)((uint)&local_208 | 4);
    uVar18 = *param_3;
    piVar19 = (int *)param_3[5];
    piVar20 = (int *)param_3[6];
    uVar21 = param_3[7];
    uVar5 = param_3[8];
    do {
      if (*(int *)(iVar28 + 0x10) < 0) {
        if (*(int *)(iVar28 + 0x10) != -0x7fffffff) {
          iVar8 = *piVar20;
          if (*(int *)(iVar8 + 100) != 0) {
            iVar26 = *(int *)(iVar28 + 0x30);
            iVar29 = *(int *)(iVar28 + 0x34);
            uVar10 = FUN_00701e18(*(undefined4 *)(iVar8 + 0x68),*(undefined4 *)(iVar8 + 0x6c),
                                  *(undefined4 *)(iVar8 + 0x70),*(undefined4 *)(iVar8 + 0x74),iVar26
                                  ,iVar29);
            uVar27 = uVar10 >> 0x19;
            iVar23 = *(int *)(iVar8 + 0x58);
            uVar24 = *(uint *)(iVar8 + 0x5c);
            local_244 = 0;
            while( true ) {
              uVar10 = uVar24 & uVar10;
              uVar11 = *(uint *)(iVar23 + uVar10);
              uVar12 = uVar11 ^ uVar27 * 0x1010101;
              uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
              while (uVar12 != 0) {
                uVar13 = uVar12 >> 8;
                uVar2 = uVar12 >> 0x10;
                uVar3 = uVar12 >> 0x18;
                uVar4 = uVar12 << 0x18;
                uVar12 = uVar12 - 1 & uVar12;
                uVar13 = uVar10 + ((uint)LZCOUNT(uVar4 | (uVar13 & 0xff) << 0x10 |
                                                 (uVar2 & 0xff) << 8 | uVar3) >> 3) & uVar24;
                piVar9 = (int *)(iVar23 + -0x48 + uVar13 * -0x48);
                if ((iVar29 == piVar9[1]) &&
                   (iVar8 = thunk_FUN_01bed842(iVar26 + 8,*piVar9 + 8,iVar29), iVar8 == 0)) {
                  iVar23 = iVar23 + uVar13 * -0x48;
                  iVar8 = iVar23 + -0x2c;
                  iVar23 = iVar23 + -0x18;
                  goto LAB_00cad360;
                }
              }
              if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
              local_244 = local_244 + 4;
              uVar10 = uVar10 + local_244;
            }
          }
          local_208 = iVar28 + 0x30;
          local_204 = &LAB_00701524;
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_208);
          local_204 = *(undefined **)(iVar28 + 0x14);
          local_200 = *(undefined4 *)(iVar28 + 0x18);
          local_208 = 1;
          FUN_006bd784(param_1,&local_48,&local_208);
          return;
        }
        iVar8 = iVar28 + 0x28;
        if (*(int *)(iVar28 + 0x4c) == 0) {
LAB_00cad518:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar8;
        }
        else {
          iVar23 = iVar28 + 0x3c;
LAB_00cad360:
          iVar26 = *(int *)(iVar23 + 0x14);
          piVar9 = (int *)(*(int *)(iVar23 + 0x10) + 8);
          if ((iVar26 != 4) || (*piVar9 != 0x68747541)) {
            iVar23 = *piVar19;
            if (*(int *)(iVar23 + 0x44) != 0) {
              uVar10 = FUN_01a9c24c(*(undefined4 *)(iVar23 + 0x48),*(undefined4 *)(iVar23 + 0x4c),
                                    *(undefined4 *)(iVar23 + 0x50),*(undefined4 *)(iVar23 + 0x54),
                                    &DAT_0056d9b0,4);
              uVar27 = uVar10 >> 0x19;
              iVar22 = *(int *)(iVar23 + 0x38);
              iVar29 = 0;
              while( true ) {
                uVar10 = *(uint *)(iVar23 + 0x3c) & uVar10;
                uVar11 = *(uint *)(iVar22 + uVar10);
                uVar24 = uVar11 ^ uVar27 * 0x1010101;
                for (uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff; uVar24 != 0;
                    uVar24 = uVar24 - 1 & uVar24) {
                  uVar12 = uVar10 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                                   (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >>
                                    3) & *(uint *)(iVar23 + 0x3c);
                  iVar30 = iVar22 + -0x40 + uVar12 * -0x40;
                  iVar25 = *(int *)(iVar30 + 8);
                  bVar31 = iVar25 == 4;
                  iVar17 = iVar29;
                  if (bVar31) {
                    iVar17 = 0x68747541;
                    iVar25 = **(int **)(iVar30 + 4);
                  }
                  if (bVar31 && iVar25 == iVar17) {
                    iVar23 = FUN_006e4fc4(iVar22 + uVar12 * -0x40 + -0x30,piVar9,iVar26);
                    if (iVar23 != 0) goto LAB_00cad4a4;
                    goto LAB_00cad4f4;
                  }
                }
                if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
                iVar29 = iVar29 + 4;
                uVar10 = uVar10 + iVar29;
              }
            }
LAB_00cad4f4:
            if ((iVar26 != 4) || (*piVar9 != 0x68747541)) goto LAB_00cad570;
            goto LAB_00cad518;
          }
LAB_00cad4a4:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar8;
        }
        local_34 = piVar19;
        local_30 = piVar20;
        local_2c = uVar21;
        local_28 = (char)uVar5;
        FUN_00cad07c(&local_208,param_2,&local_48,param_4);
        if (local_208 != 2) {
          param_1[1] = (uint)local_204;
          param_1[2] = local_200;
          param_1[3] = (uint)local_1fc;
          param_1[4] = local_1f8;
          param_1[5] = (uint)local_1f4;
          param_1[6] = (uint)local_1f0;
          param_1[7] = local_1ec;
          param_1[8] = local_1e8;
          param_1[9] = local_1e4;
          param_1[10] = local_1e0;
          param_1[0xb] = uStack_1dc;
          param_1[0xc] = uStack_1d8;
          param_1[0xd] = uStack_1d4;
          param_1[0xe] = uStack_1d0;
          *param_1 = local_208;
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
            bVar31 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar31);
          *piVar9 = iVar23 + 1;
          if (iVar23 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0xcad714);
            (*pcVar1)();
          }
          uVar27 = *(uint *)(iVar28 + iVar8 + 0x1c);
          local_200 = 4;
          local_204 = &DAT_0056d9b0;
          local_208 = 0x80000000;
          FUN_0160ec7c(&local_48,&local_208);
          local_208 = local_48;
          local_204 = (undefined *)uStack_44;
          local_200 = uStack_40;
          local_1f4 = (int *)((uint)local_1f4 & 0xffffff00);
          local_1fc = piVar9;
          local_1f8 = uVar27;
          puVar14 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar14 = local_208;
          puVar14[1] = (uint)local_204;
          puVar14[2] = local_200;
          puVar14[3] = (uint)local_1fc;
          puVar14[4] = local_1f8;
          puVar14[5] = (uint)local_1f4;
          iVar8 = param_2[2];
          if (iVar8 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar8 + 1;
          piVar9 = (int *)(param_2[1] + iVar8 * 8);
          *piVar9 = (int)puVar14;
          puVar16 = &DAT_01c14618;
        }
        else {
          if (uVar18 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_208 = (uint)(uVar18 != 0);
          local_1e4 = iVar28 + 8;
          *puVar15 = local_48;
          puVar15[1] = uStack_44;
          puVar15[2] = uStack_40;
          local_1e8 = CONCAT31(local_1e8._1_3_,(char)uVar5);
          local_1ac = 0;
          local_1f8 = uVar6;
          local_1f4 = piVar19;
          local_1f0 = piVar20;
          local_1ec = uVar21;
          local_1e0 = param_4;
          iVar8 = thunk_FUN_01be5118(0x1c0);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x1c0);
          }
          FUN_01bed4e2(iVar8,&local_208,0x1c0);
          iVar23 = param_2[2];
          if (iVar23 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar23 + 1;
          piVar9 = (int *)(param_2[1] + iVar23 * 8);
          *piVar9 = iVar8;
          puVar16 = &DAT_01c14228;
        }
        piVar9[1] = (int)puVar16;
      }
LAB_00cad570:
      iVar28 = iVar28 + 0x5c;
    } while (iVar28 != iVar7);
  }
  *param_1 = 2;
  return;
}

