// FUN_012676bc @ 012676bc size=1640 calls_out=3 calls_in=0
// strings: 

longlong FUN_012676bc(int *param_1,uint *param_2,byte *param_3,byte *param_4,int param_5,
                     byte *param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *unaff_r5;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  bool bVar18;
  ulonglong uVar19;
  uint local_2c;
  
  if (&DAT_0000000f < param_4) {
    pbVar13 = (byte *)param_1[1];
    if (*param_1 == 0) {
      if (param_6 == (byte *)0x0) {
        return 1;
      }
      if (param_6 <= param_4) {
        uVar9 = param_1[3];
        uVar10 = param_1[2];
        unaff_r5 = (byte *)0x0;
        pbVar8 = (byte *)param_1[4];
        pcVar1 = (code *)param_1[6];
        local_2c = param_2[1];
        uVar12 = *param_2;
        pbVar17 = (byte *)0x0;
        do {
          pbVar6 = pbVar8;
          if (pbVar8 < pbVar17) {
            pbVar6 = pbVar17;
          }
          if (uVar12 == 0) {
            uVar12 = 0;
          }
          else if ((uVar12 < 0x33) || (uVar12 * 8 - 8 <= local_2c)) {
            if (param_4 < unaff_r5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(unaff_r5,param_4,param_4,&DAT_0188b07c);
            }
            uVar4 = (int)param_4 - (int)unaff_r5;
            uVar19 = (*pcVar1)(param_1 + 6,param_3 + (int)unaff_r5,uVar4);
            uVar15 = (uint)(uVar19 >> 0x20);
            if ((uVar19 & 1) == 0) {
              uVar9 = local_2c + uVar4;
              if (CARRY4(local_2c,uVar4)) {
                uVar9 = 0xffffffff;
              }
              goto LAB_01267bec;
            }
            bVar18 = uVar12 == 0xffffffff;
            uVar12 = uVar12 + 1;
            if (bVar18) {
              uVar12 = 0xffffffff;
            }
            bVar18 = CARRY4(local_2c,uVar15);
            local_2c = local_2c + uVar15;
            if (bVar18) {
              local_2c = 0xffffffff;
            }
            unaff_r5 = unaff_r5 + uVar15;
            *param_2 = uVar12;
            param_2[1] = local_2c;
            pbVar17 = (byte *)0x0;
            pbVar6 = pbVar8;
            if (param_4 < unaff_r5 + (int)param_6) break;
          }
          else {
            uVar12 = 0;
            *param_2 = 0;
          }
          pbVar5 = param_6 + -1 + (int)unaff_r5;
          if (param_4 <= pbVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pbVar5,param_4,&DAT_0188b01c);
          }
          uVar4 = param_3[(int)pbVar5] & 0x3f;
          uVar15 = uVar10 >> uVar4 | uVar9 << (0x20 - uVar4 & 0xff);
          if (-1 < (int)(uVar4 - 0x20)) {
            uVar15 = uVar9 >> (uVar4 - 0x20 & 0xff);
          }
          if ((uVar15 & 1) == 0) {
            unaff_r5 = unaff_r5 + (int)param_6;
            pbVar17 = (byte *)0x0;
          }
          else {
            if (pbVar6 < param_6) {
              pbVar5 = pbVar6;
              do {
                if (param_4 <= unaff_r5 + (int)pbVar5) {
                  pbVar13 = pbVar6 + (int)unaff_r5;
                  if (pbVar6 + (int)unaff_r5 < param_4) {
                    pbVar13 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar13,param_4,&DAT_0188b02c);
                }
                if (pbVar5[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar5]) {
                  pbVar5 = pbVar5 + (1 - (int)pbVar8);
                  pbVar6 = (byte *)0x0;
                  goto LAB_01267b28;
                }
                pbVar5 = pbVar5 + 1;
              } while (param_6 != pbVar5);
            }
            if (pbVar17 < pbVar8) {
              pbVar6 = pbVar8;
              do {
                if (param_6 <= pbVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar6,param_6,&DAT_0188b03c);
                }
                if (param_4 <= unaff_r5 + (int)pbVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(unaff_r5 + (int)pbVar6,param_4,&DAT_0188b04c);
                }
                if (pbVar6[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar6]) {
                  unaff_r5 = pbVar13 + (int)unaff_r5;
                  pbVar17 = param_6 + -(int)pbVar13;
                  goto LAB_01267960;
                }
                pbVar6 = pbVar6 + -1;
              } while (pbVar17 < pbVar6);
            }
            if (param_6 <= pbVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pbVar17,param_6,&DAT_0188b05c);
            }
            pbVar7 = unaff_r5 + (int)pbVar17;
            if (param_4 <= pbVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(pbVar7,param_4,&DAT_0188b06c);
            }
            pbVar6 = param_6 + -(int)pbVar13;
            pbVar5 = pbVar13;
            if (pbVar17[param_5] == param_3[(int)pbVar7]) {
LAB_01267bc8:
              return CONCAT44(unaff_r5,1);
            }
LAB_01267b28:
            unaff_r5 = pbVar5 + (int)unaff_r5;
            pbVar17 = pbVar6;
          }
LAB_01267960:
        } while (unaff_r5 + (int)param_6 <= param_4);
      }
    }
    else {
      if (param_6 == (byte *)0x0) {
        return 1;
      }
      if (param_6 <= param_4) {
        pbVar17 = (byte *)param_1[4];
        uVar9 = param_1[2];
        unaff_r5 = (byte *)0x0;
        uVar10 = param_1[3];
        pcVar1 = (code *)param_1[6];
        uVar12 = *param_2;
        uVar15 = param_2[1];
        do {
          if (uVar12 == 0) {
            uVar12 = 0;
          }
          else if ((uVar12 < 0x33) || (uVar12 * 8 - 8 <= uVar15)) {
            if (param_4 < unaff_r5) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(unaff_r5,param_4,param_4,&DAT_0188b00c);
            }
            uVar2 = (int)param_4 - (int)unaff_r5;
            uVar19 = (*pcVar1)(param_1 + 6,param_3 + (int)unaff_r5,uVar2);
            uVar4 = (uint)(uVar19 >> 0x20);
            if ((uVar19 & 1) == 0) {
              uVar9 = uVar15 + uVar2;
              if (CARRY4(uVar15,uVar2)) {
                uVar9 = 0xffffffff;
              }
LAB_01267bec:
              uVar10 = uVar12 + 1;
              if (uVar12 == 0xffffffff) {
                uVar10 = 0xffffffff;
              }
              *param_2 = uVar10;
              param_2[1] = uVar9;
              break;
            }
            bVar18 = uVar12 == 0xffffffff;
            uVar12 = uVar12 + 1;
            if (bVar18) {
              uVar12 = 0xffffffff;
            }
            bVar18 = CARRY4(uVar15,uVar4);
            uVar15 = uVar15 + uVar4;
            if (bVar18) {
              uVar15 = 0xffffffff;
            }
            unaff_r5 = unaff_r5 + uVar4;
            *param_2 = uVar12;
            param_2[1] = uVar15;
            if (param_4 < unaff_r5 + (int)param_6) break;
          }
          else {
            uVar12 = 0;
            *param_2 = 0;
          }
          pbVar8 = param_6 + -1 + (int)unaff_r5;
          if (param_4 <= pbVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pbVar8,param_4,&DAT_0188afcc);
          }
          uVar2 = param_3[(int)pbVar8] & 0x3f;
          uVar4 = uVar9 >> uVar2 | uVar10 << (0x20 - uVar2 & 0xff);
          if (-1 < (int)(uVar2 - 0x20)) {
            uVar4 = uVar10 >> (uVar2 - 0x20 & 0xff);
          }
          pbVar8 = param_6;
          if ((uVar4 & 1) != 0) {
            if (pbVar17 < param_6) {
              pbVar8 = pbVar17;
              do {
                if (param_4 <= unaff_r5 + (int)pbVar8) {
                  pbVar13 = pbVar17 + (int)unaff_r5;
                  if (pbVar17 + (int)unaff_r5 < param_4) {
                    pbVar13 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(pbVar13,param_4,&DAT_0188afdc);
                }
                if (pbVar8[param_5] != (param_3 + (int)unaff_r5)[(int)pbVar8]) {
                  unaff_r5 = pbVar8 + (int)(unaff_r5 + (1 - (int)pbVar17));
                  goto LAB_012678e8;
                }
                pbVar8 = pbVar8 + 1;
              } while (param_6 != pbVar8);
            }
            pbVar8 = pbVar17 + -1;
            do {
              if (pbVar8 == (byte *)0xffffffff) goto LAB_01267bc8;
              if (param_6 <= pbVar17 + -1) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(pbVar8,param_6,&DAT_0188afec);
              }
              if (param_4 <= unaff_r5 + (int)pbVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(unaff_r5 + (int)pbVar8,param_4,&DAT_0188affc);
              }
              pbVar6 = param_3 + (int)unaff_r5 + (int)pbVar8;
              pbVar5 = pbVar8 + param_5;
              pbVar8 = pbVar8 + -1;
            } while (*pbVar5 == *pbVar6);
            pbVar8 = pbVar13;
          }
          unaff_r5 = pbVar8 + (int)unaff_r5;
LAB_012678e8:
        } while (unaff_r5 + (int)param_6 <= param_4);
      }
    }
  }
  else if (param_6 <= param_4) {
    iVar11 = param_1[10];
    iVar16 = param_1[0xb];
    param_4 = param_3 + (int)param_4;
    pbVar13 = param_3;
    if (param_6 == (byte *)0x0) {
      iVar14 = 0;
      unaff_r5 = param_3;
      if (iVar11 != 0) goto LAB_01267bb0;
      goto LAB_01267b88;
    }
    iVar14 = 0;
    pbVar17 = param_3;
    do {
      pbVar8 = pbVar17 + 1;
      iVar14 = (uint)*pbVar17 + iVar14 * 2;
      pbVar17 = pbVar8;
    } while (pbVar8 < param_3 + (int)param_6);
    param_4 = param_4 + -(int)param_6;
    while( true ) {
      unaff_r5 = pbVar13;
      if (iVar11 == iVar14) {
LAB_01267b88:
        iVar3 = FUN_01266e60(pbVar13,param_5,param_6);
        unaff_r5 = pbVar13;
        if (iVar3 != 0) {
          return CONCAT44((int)pbVar13 - (int)param_3,1);
        }
      }
LAB_01267bb0:
      if (param_4 <= unaff_r5) break;
      pbVar13 = unaff_r5 + 1;
      iVar14 = (uint)unaff_r5[(int)param_6] + (iVar14 - iVar16 * (uint)*unaff_r5) * 2;
    }
  }
  return ZEXT48(unaff_r5) << 0x20;
}

