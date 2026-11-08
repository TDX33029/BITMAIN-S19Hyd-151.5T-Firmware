// FUN_0080272c @ 0080272c size=1804 calls_out=12 calls_in=2
// strings: __typename | BosminerConfig | BosminerConfig | BosminerConfig | BosminerConfig | BosminerConfig

void FUN_0080272c(uint *param_1,int *param_2,uint *param_3,uint param_4)

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
  int local_274;
  uint local_238;
  char *local_234;
  uint local_230;
  int *local_22c;
  uint local_228;
  int *local_224;
  int *local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  undefined1 local_1dc;
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
    puVar21 = (uint *)((uint)&local_238 | 4);
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
            local_274 = 0;
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
                  goto LAB_00802a28;
                }
              }
              if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
              local_274 = local_274 + 4;
              uVar10 = uVar10 + local_274;
            }
          }
          local_238 = iVar28 + 0x30;
          local_234 = "\t";
          FUN_00664898(&local_48,&DAT_0057cfdf,&local_238);
          local_234 = *(char **)(iVar28 + 0x14);
          local_230 = *(undefined4 *)(iVar28 + 0x18);
          local_238 = 1;
          FUN_006bd784(param_1,&local_48,&local_238);
          return;
        }
        iVar23 = iVar28 + 0x28;
        if (*(int *)(iVar28 + 0x4c) == 0) {
LAB_00802c44:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar23;
          local_34 = piVar18;
          local_30 = piVar19;
          local_2c = uVar20;
          local_28 = uVar2;
          FUN_0080272c(&local_238,param_2,&local_48,param_4);
        }
        else {
          iVar8 = iVar28 + 0x3c;
LAB_00802a28:
          iVar29 = *(int *)(iVar8 + 0x14);
          iVar8 = *(int *)(iVar8 + 0x10) + 8;
          if ((iVar29 != 0xe) ||
             (iVar14 = thunk_FUN_01bed842("BosminerConfig",iVar8,0xe), iVar14 != 0)) {
            iVar14 = *piVar18;
            if (*(int *)(iVar14 + 0x44) != 0) {
              uVar10 = FUN_01a9c24c(*(undefined4 *)(iVar14 + 0x48),*(undefined4 *)(iVar14 + 0x4c),
                                    *(undefined4 *)(iVar14 + 0x50),*(undefined4 *)(iVar14 + 0x54),
                                    "BosminerConfig",0xe);
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
                  if ((*(int *)(iVar15 + 8) == 0xe) &&
                     (iVar15 = thunk_FUN_01bed842("BosminerConfig",*(undefined4 *)(iVar15 + 4),0xe),
                     iVar15 == 0)) {
                    iVar14 = FUN_006e4fc4(iVar26 + uVar13 * -0x40 + -0x30,iVar8,iVar29);
                    if (iVar14 != 0) goto LAB_00802bac;
                    goto LAB_00802c14;
                  }
                }
                if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
                iVar14 = iVar14 + 4;
                uVar10 = uVar10 + iVar14;
              }
            }
LAB_00802c14:
            if ((iVar29 != 0xe) ||
               (iVar8 = thunk_FUN_01bed842("BosminerConfig",iVar8,0xe), iVar8 != 0))
            goto LAB_008028c0;
            goto LAB_00802c44;
          }
LAB_00802bac:
          local_48 = *param_3;
          uStack_44 = param_3[1];
          uStack_40 = param_3[2];
          uStack_3c = param_3[3];
          local_38 = iVar23;
          local_34 = piVar18;
          local_30 = piVar19;
          local_2c = uVar20;
          local_28 = uVar2;
          FUN_0080272c(&local_238,param_2,&local_48,param_4);
        }
        if (local_238 != 2) {
          param_1[1] = (uint)local_234;
          param_1[2] = local_230;
          param_1[3] = (uint)local_22c;
          param_1[4] = local_228;
          param_1[5] = (uint)local_224;
          param_1[6] = (uint)local_220;
          param_1[7] = local_21c;
          param_1[8] = local_218;
          param_1[9] = local_214;
          param_1[10] = local_210;
          param_1[0xb] = uStack_20c;
          param_1[0xc] = uStack_208;
          param_1[0xd] = uStack_204;
          param_1[0xe] = uStack_200;
          *param_1 = local_238;
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
            pcVar1 = (code *)software_udf(0xfdee,0x802e38);
            (*pcVar1)();
          }
          uVar27 = *(uint *)(iVar28 + iVar8 + 0x1c);
          local_230 = 0xe;
          local_234 = "BosminerConfig";
          local_238 = 0x80000000;
          FUN_0160ec7c(&local_48,&local_238);
          local_238 = local_48;
          local_234 = (char *)uStack_44;
          local_230 = uStack_40;
          local_224 = (int *)((uint)local_224 & 0xffffff00);
          local_22c = piVar9;
          local_228 = uVar27;
          puVar16 = (uint *)thunk_FUN_01be5118(0x18);
          if (puVar16 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar16 = local_238;
          puVar16[1] = (uint)local_234;
          puVar16[2] = local_230;
          puVar16[3] = (uint)local_22c;
          puVar16[4] = local_228;
          puVar16[5] = (uint)local_224;
          iVar8 = param_2[2];
          if (iVar8 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar8 + 1;
          piVar9 = (int *)(param_2[1] + iVar8 * 8);
          *piVar9 = (int)puVar16;
          puVar22 = &DAT_01c0a500;
        }
        else {
          if (uVar17 != 0) {
            local_48 = param_3[1];
            uStack_44 = param_3[2];
            uStack_40 = param_3[3];
          }
          local_238 = (uint)(uVar17 != 0);
          local_214 = iVar28 + 8;
          *puVar21 = local_48;
          puVar21[1] = uStack_44;
          puVar21[2] = uStack_40;
          local_218 = CONCAT31(local_218._1_3_,uVar2);
          local_1dc = 0;
          local_228 = uVar7;
          local_224 = piVar18;
          local_220 = piVar19;
          local_21c = uVar20;
          local_210 = param_4;
          iVar8 = thunk_FUN_01be5118(0x1f0);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x1f0);
          }
          FUN_01bed4e2(iVar8,&local_238,0x1f0);
          iVar23 = param_2[2];
          if (iVar23 == *param_2) {
            FUN_01aa1bc0(param_2);
          }
          param_2[2] = iVar23 + 1;
          piVar9 = (int *)(param_2[1] + iVar23 * 8);
          *piVar9 = iVar8;
          puVar22 = &DAT_01c0a4f0;
        }
        piVar9[1] = (int)puVar22;
      }
LAB_008028c0:
      iVar28 = iVar28 + 0x5c;
    } while (iVar28 != iVar25);
  }
  *param_1 = 2;
  return;
}

