// FUN_006d6da0 @ 006d6da0 size=1596 calls_out=20 calls_in=2
// strings: __typename | Unknown field '__typename' on type 'Subscription'.

void FUN_006d6da0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  undefined4 unaff_r9;
  int iVar23;
  undefined8 uVar24;
  int local_58;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  
  uVar4 = CONCAT44(local_34,unaff_r9);
  iVar17 = *(int *)(param_3 + 0x10);
  if (iVar17 != 0) {
    FUN_006bfb7c(param_1[6],*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    iVar23 = *(int *)(param_3 + 0xc);
    iVar17 = iVar17 * 0x5c + iVar23;
    do {
      uVar5 = *(int *)(iVar23 + 0x10) + 0x80000001U & *(int *)(iVar23 + 0x10) >> 0x1f;
      if (uVar5 == 0) {
        iVar18 = *(int *)(iVar23 + 0x48);
        if (iVar18 == 10) {
          iVar10 = thunk_FUN_01bed842(*(int *)(iVar23 + 0x44) + 8,"__typename",10);
          iVar22 = *(int *)(param_2 + 0x10);
          iVar21 = *(int *)(param_2 + 0x14);
          if (iVar10 == 0) {
            if (iVar21 != 0) {
              piVar20 = (int *)(iVar22 + iVar21 * 4 + -4);
              iVar18 = 0;
              if (piVar20 != (int *)0x0) {
                iVar18 = *piVar20;
              }
              if (((piVar20 != (int *)0x0 && iVar18 != 0) &&
                  (*(int *)(iVar18 + 0x10) == -0x7fffffff)) && ((*(byte *)(iVar18 + 0x9d) & 1) != 0)
                 ) {
                puVar11 = (undefined4 *)thunk_FUN_01be5118(8);
                if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,8);
                }
                uVar12 = *(undefined4 *)(iVar23 + 0xc);
                *puVar11 = *(undefined4 *)(iVar23 + 8);
                puVar11[1] = uVar12;
                local_28 = 1;
                local_30 = 1;
                local_2c = puVar11;
                FUN_006d6cb4(param_2,&local_30,
                             "Unknown field \"__typename\" on type \"Subscription\".",0x32);
              }
            }
            goto LAB_006d7358;
          }
        }
        else {
          iVar22 = *(int *)(param_2 + 0x10);
          iVar21 = *(int *)(param_2 + 0x14);
        }
        uVar12 = 0;
        if (iVar21 != 0) {
          piVar20 = (int *)(iVar22 + iVar21 * 4 + -4);
          iVar21 = 0;
          if (piVar20 != (int *)0x0) {
            iVar21 = *piVar20;
          }
          if (piVar20 != (int *)0x0 && iVar21 != 0) {
            uVar5 = 2;
            if ((int)*(uint *)(iVar21 + 0x10) < 0) {
              uVar5 = *(uint *)(iVar21 + 0x10) ^ 0x80000000;
            }
            if (uVar5 != 2) {
              if (uVar5 != 1) goto LAB_006d70b8;
              iVar21 = iVar21 + 0x18;
            }
            iVar18 = FUN_006e05dc(iVar21,*(int *)(iVar23 + 0x44) + 8,iVar18);
            if (iVar18 != 0) {
              uVar12 = FUN_006b1524(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                                    *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                                    *(undefined4 *)(iVar18 + 0x8c),*(undefined4 *)(iVar18 + 0x90));
            }
          }
        }
LAB_006d70b8:
        iVar18 = *(int *)(param_2 + 0x14);
        if (iVar18 == *(int *)(param_2 + 0xc)) {
          FUN_007b4428(param_2 + 0xc);
        }
        *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar18 * 4) = uVar12;
        iVar21 = param_1[8];
        puVar15 = (uint *)param_1[7];
        *(int *)(param_2 + 0x14) = iVar18 + 1;
        uVar6 = iVar21 + 1;
        uVar12 = *(undefined4 *)(iVar23 + 0x44);
        uVar19 = *(undefined4 *)(iVar23 + 0x48);
        param_1[8] = uVar6;
        iVar21 = *param_1;
        iVar22 = param_1[2];
        uVar5 = *puVar15;
        if (*puVar15 < uVar6) {
          uVar5 = uVar6;
        }
        uVar14 = *(undefined4 *)(param_2 + 0x10);
        *puVar15 = uVar5;
        if (iVar22 == iVar21) {
          FUN_01a54b48(param_1,uVar14,puVar15,uVar12);
        }
        iVar21 = param_1[6];
        *(undefined4 *)(param_1[1] + iVar22 * 4) = 0;
        param_1[2] = iVar22 + 1;
        FUN_006bfab4(iVar21,uVar14,iVar18 + 1,uVar12,uVar19);
        if (*(int *)(iVar23 + 0x18) != 0) {
          puVar11 = (undefined4 *)(*(int *)(iVar23 + 0x14) + 0xc);
          iVar18 = *(int *)(iVar23 + 0x18) * 0x48;
          do {
            uVar12 = 3;
            if (1 < *(uint *)(param_2 + 0x14)) {
              piVar20 = (int *)(*(int *)(param_2 + 0x10) + *(uint *)(param_2 + 0x14) * 4 + -8);
              iVar21 = 0;
              if (piVar20 != (int *)0x0) {
                iVar21 = *piVar20;
              }
              if (piVar20 != (int *)0x0 && iVar21 != 0) {
                uVar5 = 2;
                if ((int)*(uint *)(iVar21 + 0x10) < 0) {
                  uVar5 = *(uint *)(iVar21 + 0x10) ^ 0x80000000;
                }
                if (uVar5 != 2) {
                  if (uVar5 != 1) goto LAB_006d71a8;
                  iVar21 = iVar21 + 0x18;
                }
                iVar21 = FUN_006e05dc(iVar21,*(int *)(iVar23 + 0x44) + 8,
                                      *(undefined4 *)(iVar23 + 0x48));
                if ((iVar21 != 0) &&
                   (iVar21 = FUN_006e0794(iVar21 + 8,puVar11[-1] + 8,*puVar11), iVar21 != 0)) {
                  uVar19 = *(undefined4 *)(iVar21 + 0x14);
                  uVar12 = *(undefined4 *)(iVar21 + 0x10);
                  uVar4 = *(undefined8 *)(iVar21 + 0x10);
                  uVar24 = FUN_00700b3c(uVar12,uVar19,0x21);
                  if ((int)uVar24 == 0) {
                    uVar24 = FUN_006a4c58(uVar12,uVar19);
                    if ((int)uVar24 == 0) {
                      uVar12 = 2;
                    }
                    else {
                      uVar12 = 0;
                      uVar4 = uVar24;
                    }
                  }
                  else {
                    uVar12 = 1;
                    uVar4 = uVar24;
                  }
                }
              }
            }
LAB_006d71a8:
            local_34 = (undefined4)((ulonglong)uVar4 >> 0x20);
            iVar21 = *(int *)(param_2 + 0x20);
            if (iVar21 == *(int *)(param_2 + 0x18)) {
              FUN_00b68760(param_2 + 0x18);
            }
            puVar13 = (undefined4 *)(*(int *)(param_2 + 0x1c) + iVar21 * 0xc);
            *puVar13 = uVar12;
            *(undefined8 *)(puVar13 + 1) = uVar4;
            local_28 = local_34;
            *(int *)(param_2 + 0x20) = iVar21 + 1;
            local_30 = uVar12;
            local_2c = (undefined4 *)uVar4;
            FUN_006dcb48(param_2,&local_30,puVar11 + 3);
            puVar11 = puVar11 + 0x12;
            if (*(int *)(param_2 + 0x20) != 0) {
              *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
            }
            iVar18 = iVar18 + -0x48;
          } while (iVar18 != 0);
        }
        FUN_006d73e4(param_2,*(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24));
        FUN_006d6da0(param_1,param_2,iVar23 + 0x28);
        param_1[8] = param_1[8] + -1;
        FUN_006c7ac8(param_1,param_2,iVar23 + 8);
LAB_006d7320:
        if (*(int *)(param_2 + 0x14) != 0) {
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
        }
      }
      else if (uVar5 == 1) {
        FUN_006d73e4(param_2,*(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24));
        piVar20 = *(int **)(param_2 + 0x28);
        if (piVar20[3] != 0) {
          iVar18 = *(int *)(iVar23 + 0x34);
          iVar22 = *(int *)(iVar23 + 0x30) + 8;
          uVar6 = FUN_01a60560(piVar20[4],piVar20[5],piVar20[6],piVar20[7],iVar22,iVar18);
          uVar5 = uVar6 >> 0x19;
          uVar16 = piVar20[1];
          iVar21 = *piVar20;
          local_58 = 0;
          while( true ) {
            uVar6 = uVar16 & uVar6;
            uVar7 = *(uint *)(iVar21 + uVar6);
            uVar8 = uVar7 ^ uVar5 * 0x1010101;
            uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
            while (uVar8 != 0) {
              uVar9 = uVar8 >> 8;
              uVar1 = uVar8 >> 0x10;
              uVar2 = uVar8 >> 0x18;
              uVar3 = uVar8 << 0x18;
              uVar8 = uVar8 - 1 & uVar8;
              uVar9 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar9 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                             uVar2) >> 3) & uVar16;
              piVar20 = (int *)(iVar21 + -0x48 + uVar9 * -0x48);
              if ((iVar18 == piVar20[1]) &&
                 (iVar10 = thunk_FUN_01bed842(iVar22,*piVar20 + 8,iVar18), iVar10 == 0)) {
                iVar18 = iVar21 + uVar9 * -0x48 + -0x2c;
                goto LAB_006d734c;
              }
            }
            if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
            local_58 = local_58 + 4;
            uVar6 = uVar6 + local_58;
          }
        }
      }
      else {
        if (*(int *)(iVar23 + 0x4c) != 0) {
          uVar12 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                                *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),
                                *(int *)(iVar23 + 0x4c) + 8,*(undefined4 *)(iVar23 + 0x50));
          iVar18 = *(int *)(param_2 + 0x14);
          if (iVar18 == *(int *)(param_2 + 0xc)) {
            FUN_007b4428(param_2 + 0xc);
          }
          *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar18 * 4) = uVar12;
          *(int *)(param_2 + 0x14) = iVar18 + 1;
          FUN_006d73e4(param_2,*(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24));
          FUN_006d6da0(param_1,param_2,iVar23 + 0x28);
          goto LAB_006d7320;
        }
        FUN_006d73e4(param_2,*(undefined4 *)(iVar23 + 0x20),*(undefined4 *)(iVar23 + 0x24));
        iVar18 = iVar23 + 0x28;
LAB_006d734c:
        FUN_006d6da0(param_1,param_2,iVar18);
      }
LAB_006d7358:
      iVar23 = iVar23 + 0x5c;
    } while (iVar23 != iVar17);
  }
  return;
}

