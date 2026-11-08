// FUN_015fc9fc @ 015fc9fc size=1476 calls_out=3 calls_in=0
// strings: 

undefined8
FUN_015fc9fc(int *param_1,uint *param_2,byte *param_3,byte *param_4,int param_5,byte *param_6)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *unaff_r5;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  ulonglong uVar21;
  uint local_30;
  
  if (&DAT_0000000f < param_4) {
    pbVar6 = (byte *)param_1[1];
    if (*param_1 == 1) {
      if (param_6 == (byte *)0x0) {
LAB_015fce70:
        unaff_r5 = (byte *)0x0;
LAB_015fce74:
        pbVar13 = &DAT_00000001;
        goto LAB_015fce78;
      }
      if (param_6 <= param_4) {
        pbVar14 = (byte *)param_1[4];
        unaff_r5 = (byte *)0x0;
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        pcVar2 = (code *)param_1[6];
        uVar16 = *param_2;
        uVar18 = param_2[1];
        do {
          if (uVar16 == 0) {
            uVar16 = 0;
          }
          else if ((uVar16 < 0x33) || (uVar16 * 8 - 8 <= uVar18)) {
            if (param_4 < unaff_r5) {
              puVar12 = &DAT_01cfdd58;
LAB_015fcef4:
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(unaff_r5,param_4,param_4,puVar12);
            }
            uVar21 = (*pcVar2)(param_1 + 6,param_3 + (int)unaff_r5,(int)param_4 - (int)unaff_r5);
            uVar3 = (uint)(uVar21 >> 0x20);
            uVar9 = (int)param_4 - (int)unaff_r5;
            if ((uVar21 & 1) != 0) {
              uVar9 = uVar3;
            }
            bVar20 = CARRY4(uVar18,uVar9);
            uVar18 = uVar18 + uVar9;
            if (bVar20) {
              uVar18 = 0xffffffff;
            }
            bVar20 = uVar16 == 0xffffffff;
            uVar16 = uVar16 + 1;
            if (bVar20) {
              uVar16 = 0xffffffff;
            }
            pbVar13 = (byte *)0x0;
            *param_2 = uVar16;
            param_2[1] = uVar18;
            if ((uVar21 & 1) == 0) break;
            unaff_r5 = unaff_r5 + uVar3;
            if (param_4 < unaff_r5 + (int)param_6) goto LAB_015fce78;
          }
          else {
            uVar16 = 0;
            *param_2 = 0;
          }
          pbVar13 = unaff_r5 + (int)(param_6 + -1);
          if (param_4 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(pbVar13,param_4,&DAT_01cfdd68);
          }
          uVar3 = param_3[(int)pbVar13] & 0x3f;
          uVar9 = uVar7 >> uVar3 | uVar8 << (0x20 - uVar3 & 0xff);
          if (-1 < (int)(uVar3 - 0x20)) {
            uVar9 = uVar8 >> (uVar3 - 0x20 & 0xff);
          }
          pbVar13 = param_6;
          if ((uVar9 & 1) != 0) {
            if (pbVar14 < param_6) {
              pbVar13 = pbVar14;
              do {
                if (param_4 <= unaff_r5 + (int)pbVar13) {
                  pbVar14 = pbVar14 + (int)unaff_r5;
                  puVar12 = &DAT_01cfdd78;
LAB_015fcf1c:
                  if (pbVar14 < param_4) {
                    pbVar14 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(pbVar14,param_4,puVar12);
                }
                if (pbVar13[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar13]) {
                  unaff_r5 = pbVar13 + (int)(unaff_r5 + (1 - (int)pbVar14));
                  goto LAB_015fcc20;
                }
                pbVar13 = pbVar13 + 1;
              } while (param_6 != pbVar13);
            }
            pbVar13 = pbVar14 + -1;
            do {
              if (pbVar13 == &DAT_ffffffff) goto LAB_015fce74;
              if (param_6 <= pbVar14 + -1) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(pbVar13,param_6,&DAT_01cfdd88);
              }
              pbVar10 = unaff_r5 + (int)pbVar13;
              if (param_4 <= pbVar10) {
                puVar12 = &DAT_01cfdd98;
                goto LAB_015fcfa4;
              }
              pbVar11 = param_3 + (int)unaff_r5 + (int)pbVar13;
              pbVar10 = pbVar13 + param_5;
              pbVar13 = pbVar13 + -1;
            } while (*pbVar10 == *pbVar11);
            pbVar13 = pbVar6;
          }
          unaff_r5 = pbVar13 + (int)unaff_r5;
LAB_015fcc20:
        } while (unaff_r5 + (int)param_6 <= param_4);
      }
    }
    else {
      if (param_6 == (byte *)0x0) goto LAB_015fce70;
      if (param_6 <= param_4) {
        uVar7 = param_1[3];
        unaff_r5 = (byte *)0x0;
        uVar16 = param_1[2];
        pbVar11 = (byte *)param_1[4];
        pcVar2 = (code *)param_1[6];
        local_30 = param_2[1];
        uVar8 = *param_2;
        pbVar13 = (byte *)0x0;
        do {
          pbVar14 = pbVar11;
          if (pbVar11 < pbVar13) {
            pbVar14 = pbVar13;
          }
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else if ((uVar8 < 0x33) || (uVar8 * 8 - 8 <= local_30)) {
            if (param_4 < unaff_r5) {
              puVar12 = &DAT_01cfdda8;
              goto LAB_015fcef4;
            }
            uVar21 = (*pcVar2)(param_1 + 6,param_3 + (int)unaff_r5,(int)param_4 - (int)unaff_r5);
            uVar9 = (uint)(uVar21 >> 0x20);
            uVar18 = (int)param_4 - (int)unaff_r5;
            if ((uVar21 & 1) != 0) {
              uVar18 = uVar9;
            }
            bVar20 = CARRY4(local_30,uVar18);
            local_30 = local_30 + uVar18;
            if (bVar20) {
              local_30 = 0xffffffff;
            }
            bVar20 = uVar8 == 0xffffffff;
            uVar8 = uVar8 + 1;
            if (bVar20) {
              uVar8 = 0xffffffff;
            }
            *param_2 = uVar8;
            param_2[1] = local_30;
            if ((uVar21 & 1) == 0) break;
            unaff_r5 = unaff_r5 + uVar9;
            pbVar13 = (byte *)0x0;
            pbVar14 = pbVar11;
            if (param_4 < unaff_r5 + (int)param_6) goto LAB_015fce78;
          }
          else {
            uVar8 = 0;
            *param_2 = 0;
          }
          pbVar10 = unaff_r5 + (int)(param_6 + -1);
          if (param_4 <= pbVar10) {
            puVar12 = &DAT_01cfddb8;
LAB_015fcfa4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(pbVar10,param_4,puVar12);
          }
          uVar9 = param_3[(int)pbVar10] & 0x3f;
          uVar18 = uVar16 >> uVar9 | uVar7 << (0x20 - uVar9 & 0xff);
          if (-1 < (int)(uVar9 - 0x20)) {
            uVar18 = uVar7 >> (uVar9 - 0x20 & 0xff);
          }
          if ((uVar18 & 1) == 0) {
            pbVar4 = (byte *)0x0;
            pbVar14 = param_6;
          }
          else {
            if (pbVar14 < param_6) {
              pbVar10 = pbVar14;
              do {
                if (param_4 <= unaff_r5 + (int)pbVar10) {
                  pbVar14 = pbVar14 + (int)unaff_r5;
                  puVar12 = &DAT_01cfddc8;
                  goto LAB_015fcf1c;
                }
                if (pbVar10[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar10]) {
                  pbVar4 = (byte *)0x0;
                  pbVar14 = pbVar10 + (1 - (int)pbVar11);
                  goto LAB_015fce5c;
                }
                pbVar10 = pbVar10 + 1;
              } while (param_6 != pbVar10);
            }
            pbVar4 = param_6 + -(int)pbVar6;
            pbVar14 = pbVar6;
            if (pbVar13 < pbVar11) {
              pbVar10 = pbVar11;
              do {
                if (param_6 <= pbVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(pbVar10,param_6,&DAT_01cfddd8);
                }
                if (param_4 <= unaff_r5 + (int)pbVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(unaff_r5 + (int)pbVar10,param_4,&DAT_01cfdde8);
                }
                if (pbVar10[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar10]) goto LAB_015fce5c;
                pbVar10 = pbVar10 + -1;
              } while (pbVar13 < pbVar10);
            }
            if (param_6 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(pbVar13,param_6,&DAT_01cfddf8);
            }
            pbVar10 = unaff_r5 + (int)pbVar13;
            if (param_4 <= pbVar10) {
              puVar12 = &DAT_01cfde08;
              goto LAB_015fcfa4;
            }
            if (pbVar13[param_5] == param_3[(int)pbVar10]) goto LAB_015fce74;
          }
LAB_015fce5c:
          unaff_r5 = pbVar14 + (int)unaff_r5;
          pbVar13 = pbVar4;
        } while (unaff_r5 + (int)param_6 <= param_4);
      }
    }
  }
  else if (param_6 <= param_4) {
    if (param_6 == (byte *)0x0) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0;
      pbVar6 = param_3;
      do {
        pbVar13 = pbVar6 + 1;
        iVar15 = (uint)*pbVar6 + iVar15 * 2;
        pbVar6 = pbVar13;
      } while (pbVar13 < param_3 + (int)param_6);
    }
    iVar17 = param_1[10];
    iVar19 = param_1[0xb];
    unaff_r5 = param_3;
    while( true ) {
      if ((iVar17 == iVar15) && (iVar5 = FUN_015fc218(unaff_r5,param_5,param_6), iVar5 != 0)) {
        unaff_r5 = unaff_r5 + -(int)param_3;
        goto LAB_015fce74;
      }
      if (param_3 + (int)param_4 + -(int)param_6 <= unaff_r5) break;
      bVar1 = *unaff_r5;
      pbVar6 = unaff_r5 + (int)param_6;
      unaff_r5 = unaff_r5 + 1;
      iVar15 = (uint)*pbVar6 + (iVar15 - iVar19 * (uint)bVar1) * 2;
    }
  }
  pbVar13 = (byte *)0x0;
LAB_015fce78:
  return CONCAT44(unaff_r5,pbVar13);
}

