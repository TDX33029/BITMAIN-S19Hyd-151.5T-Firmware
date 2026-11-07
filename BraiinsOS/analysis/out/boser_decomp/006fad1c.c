// FUN_006fad1c @ 006fad1c size=1428 calls_out=9 calls_in=2
// strings: 

void FUN_006fad1c(byte *param_1,uint param_2,byte *param_3,uint param_4,int param_5,byte *param_6)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  bool bVar20;
  byte *local_44;
  byte local_34 [8];
  int local_2c [2];
  
  if (0x20 < param_2) {
    local_44 = param_6;
    uVar16 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_006fa840(param_1,uVar16,param_3,param_4,1);
          return;
        }
        pbVar14 = param_1 + (uVar16 >> 3) * 4;
        if (uVar16 < 0x40) {
          bVar17 = param_1[(uVar16 >> 3) * 8 - (uVar16 >> 3)];
          bVar18 = *pbVar14;
          bVar2 = *param_1;
          if (bVar2 < bVar18 != bVar18 < bVar17) {
            pbVar14 = param_1 + ((uVar16 >> 3) * 8 - (uVar16 >> 3));
          }
          if (bVar2 < bVar18 != bVar2 < bVar17) {
            pbVar14 = param_1;
          }
        }
        else {
          pbVar14 = (byte *)FUN_006fa6b8(param_1,pbVar14);
        }
        uVar19 = (int)pbVar14 - (int)param_1;
        local_34[0] = *pbVar14;
        param_5 = param_5 + -1;
        if ((local_44 == (byte *)0x0) || (*local_44 < local_34[0])) break;
LAB_006fafe8:
        if (param_4 < uVar16) goto LAB_006fb27c;
        pbVar11 = param_3 + uVar16;
        uVar12 = 0;
        pbVar14 = param_1;
        uVar13 = uVar19;
        while( true ) {
          iVar6 = uVar13 - 3;
          if (uVar13 < 3) {
            iVar6 = 0;
          }
          if (pbVar14 < param_1 + iVar6) {
            bVar17 = param_1[uVar19];
            do {
              bVar18 = *pbVar14;
              bVar2 = pbVar14[1];
              bVar3 = pbVar14[2];
              pbVar15 = param_3;
              if (bVar17 < bVar18) {
                pbVar15 = pbVar11 + -1;
              }
              bVar4 = pbVar14[3];
              pbVar14 = pbVar14 + 4;
              pbVar15[uVar12] = bVar18;
              if (bVar17 >= bVar18) {
                uVar12 = uVar12 + 1;
              }
              pbVar15 = param_3;
              if (bVar17 < bVar2) {
                pbVar15 = pbVar11 + -2;
              }
              pbVar15[uVar12] = bVar2;
              if (bVar17 >= bVar2) {
                uVar12 = uVar12 + 1;
              }
              pbVar15 = param_3;
              if (bVar17 < bVar3) {
                pbVar15 = pbVar11 + -3;
              }
              pbVar11 = pbVar11 + -4;
              pbVar15[uVar12] = bVar3;
              if (bVar17 >= bVar3) {
                uVar12 = uVar12 + 1;
              }
              pbVar15 = pbVar11;
              if (bVar4 <= bVar17) {
                pbVar15 = param_3;
              }
              pbVar15[uVar12] = bVar4;
              if (bVar4 <= bVar17) {
                uVar12 = uVar12 + 1;
              }
            } while (pbVar14 < param_1 + iVar6);
          }
          pbVar15 = pbVar14;
          if (pbVar14 < param_1 + uVar13) {
            iVar6 = (int)(param_1 + uVar13) - (int)pbVar14;
            pbVar15 = param_1 + uVar13;
            bVar17 = param_1[uVar19];
            do {
              bVar18 = *pbVar14;
              pbVar11 = pbVar11 + -1;
              pbVar7 = pbVar11;
              if (bVar18 <= bVar17) {
                pbVar7 = param_3;
              }
              pbVar7[uVar12] = bVar18;
              if (bVar18 <= bVar17) {
                uVar12 = uVar12 + 1;
              }
              iVar6 = iVar6 + -1;
              pbVar14 = pbVar14 + 1;
            } while (iVar6 != 0);
          }
          if (uVar13 == uVar16) break;
          pbVar14 = pbVar15 + 1;
          pbVar11 = pbVar11 + -1;
          param_3[uVar12] = *pbVar15;
          uVar12 = uVar12 + 1;
          uVar13 = uVar16;
        }
        FUN_01bed4e2(param_1,param_3,uVar12);
        param_2 = uVar16 - uVar12;
        if (param_2 == 0) {
          return;
        }
        pbVar14 = param_3 + (uVar16 - 1);
        pbVar11 = param_1 + uVar12;
        uVar19 = param_2;
        do {
          uVar19 = uVar19 - 1;
          *pbVar11 = *pbVar14;
          pbVar14 = pbVar14 + -1;
          pbVar11 = pbVar11 + 1;
        } while (uVar19 != 0);
        if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar12,uVar16,uVar16,&DAT_01d30598);
        }
        param_1 = param_1 + uVar12;
        local_44 = (byte *)0x0;
        uVar16 = param_2;
        if (param_2 < 0x21) goto LAB_006fad40;
      }
      if (param_4 < uVar16) goto LAB_006fb27c;
      pbVar11 = param_3 + uVar16;
      param_2 = 0;
      pbVar14 = param_1;
      uVar13 = uVar19;
      bVar17 = local_34[0];
      while( true ) {
        iVar6 = uVar13 - 3;
        if (uVar13 < 3) {
          iVar6 = 0;
        }
        bVar18 = bVar17;
        if (pbVar14 < param_1 + iVar6) {
          bVar18 = param_1[uVar19];
          do {
            bVar2 = *pbVar14;
            bVar3 = pbVar14[1];
            bVar4 = pbVar14[2];
            pbVar15 = param_3;
            if (bVar17 <= bVar2) {
              pbVar15 = pbVar11 + -1;
            }
            bVar5 = pbVar14[3];
            pbVar14 = pbVar14 + 4;
            pbVar15[param_2] = bVar2;
            if (bVar17 > bVar2) {
              param_2 = param_2 + 1;
            }
            pbVar15 = param_3;
            if (bVar18 <= bVar3) {
              pbVar15 = pbVar11 + -2;
            }
            pbVar15[param_2] = bVar3;
            if (bVar18 > bVar3) {
              param_2 = param_2 + 1;
            }
            pbVar15 = param_3;
            if (bVar18 <= bVar4) {
              pbVar15 = pbVar11 + -3;
            }
            pbVar11 = pbVar11 + -4;
            pbVar15[param_2] = bVar4;
            if (bVar18 > bVar4) {
              param_2 = param_2 + 1;
            }
            pbVar15 = pbVar11;
            if (bVar5 < bVar18) {
              pbVar15 = param_3;
            }
            pbVar15[param_2] = bVar5;
            if (bVar5 < bVar18) {
              param_2 = param_2 + 1;
            }
          } while (pbVar14 < param_1 + iVar6);
        }
        pbVar15 = pbVar14;
        bVar17 = bVar18;
        if (pbVar14 < param_1 + uVar13) {
          bVar17 = param_1[uVar19];
          pbVar15 = param_1 + uVar13;
          iVar6 = (int)(param_1 + uVar13) - (int)pbVar14;
          do {
            bVar18 = *pbVar14;
            pbVar11 = pbVar11 + -1;
            pbVar7 = pbVar11;
            if (bVar18 < bVar17) {
              pbVar7 = param_3;
            }
            pbVar7[param_2] = bVar18;
            if (bVar18 < bVar17) {
              param_2 = param_2 + 1;
            }
            iVar6 = iVar6 + -1;
            pbVar14 = pbVar14 + 1;
          } while (iVar6 != 0);
        }
        if (uVar13 == uVar16) break;
        pbVar11 = pbVar11 + -1;
        pbVar14 = pbVar15 + 1;
        pbVar11[param_2] = *pbVar15;
        uVar13 = uVar16;
      }
      FUN_01bed4e2(param_1,param_3,param_2);
      iVar6 = uVar16 - param_2;
      if (iVar6 != 0) {
        pbVar14 = param_3 + (uVar16 - 1);
        pbVar11 = param_1 + param_2;
        iVar8 = iVar6;
        do {
          iVar8 = iVar8 + -1;
          *pbVar11 = *pbVar14;
          pbVar14 = pbVar14 + -1;
          pbVar11 = pbVar11 + 1;
        } while (iVar8 != 0);
      }
      if (param_2 == 0) goto LAB_006fafe8;
      if (uVar16 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_006fad1c(param_1 + param_2,iVar6,param_3,param_4,param_5,local_34);
      uVar16 = param_2;
    } while (0x20 < param_2);
  }
LAB_006fad40:
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
LAB_006fb27c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x6fb27c);
      (*pcVar1)();
    }
    uVar16 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        bVar17 = param_1[uVar16];
        uVar19 = 1;
        *param_3 = *param_1;
        param_3[uVar16] = bVar17;
      }
      else {
        FUN_00700b68(param_1,param_3);
        FUN_00700b68(param_1 + uVar16,param_3 + uVar16);
        uVar19 = 4;
      }
    }
    else {
      FUN_00700c20(param_1,param_3,param_3 + param_2);
      FUN_00700c20(param_1 + uVar16,param_3 + uVar16,param_3 + param_2 + 8);
      uVar19 = 8;
    }
    local_2c[1] = uVar16;
    local_2c[0] = 0;
    iVar6 = 0;
    do {
      iVar8 = local_2c[iVar6];
      uVar13 = uVar16;
      if (iVar8 != 0) {
        uVar13 = param_2 - uVar16;
      }
      if (uVar19 < uVar13) {
        pbVar14 = param_3 + iVar8;
        uVar12 = uVar19;
        do {
          bVar17 = param_1[uVar12 + iVar8];
          pbVar14[uVar12] = bVar17;
          bVar18 = (pbVar14 + uVar12)[-1];
          if (bVar17 < bVar18) {
            uVar9 = uVar12;
            do {
              pbVar14[uVar9] = bVar18;
              if (uVar9 == 1) {
                pbVar11 = pbVar14;
                goto LAB_006fb248;
              }
              uVar10 = uVar9 - 1;
              bVar18 = pbVar14[uVar9 - 2];
              uVar9 = uVar10;
            } while (bVar17 < bVar18);
            pbVar11 = pbVar14 + uVar10;
LAB_006fb248:
            *pbVar11 = bVar17;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar13);
      }
      bVar20 = iVar6 == 0;
      iVar6 = 1;
    } while (bVar20);
    FUN_00700c58(param_3,param_2,param_1);
  }
  return;
}

