// FUN_015fc2a4 @ 015fc2a4 size=1016 calls_out=2 calls_in=0
// strings: 

undefined4
FUN_015fc2a4(int *param_1,undefined4 param_2,byte *param_3,uint param_4,int param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if (param_4 < 0x10) {
    if (param_6 <= param_4) {
      if (param_6 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        pbVar8 = param_3;
        do {
          pbVar6 = pbVar8 + 1;
          iVar7 = (uint)*pbVar8 + iVar7 * 2;
          pbVar8 = pbVar6;
        } while (pbVar6 < param_3 + param_6);
      }
      iVar13 = param_1[10];
      iVar14 = param_1[0xb];
      pbVar8 = param_3 + (param_4 - param_6);
      while ((iVar13 != iVar7 || (iVar3 = FUN_015fc218(param_3,param_5,param_6), iVar3 == 0))) {
        if (pbVar8 <= param_3) {
          return 0;
        }
        bVar1 = *param_3;
        pbVar6 = param_3 + param_6;
        param_3 = param_3 + 1;
        iVar7 = (uint)*pbVar6 + (iVar7 - iVar14 * (uint)bVar1) * 2;
      }
      return 1;
    }
  }
  else {
    uVar10 = param_1[1];
    if (*param_1 == 1) {
      if (param_6 == 0) {
        return 1;
      }
      if (param_6 <= param_4) {
        uVar12 = param_1[4];
        iVar7 = 0;
        do {
          uVar11 = iVar7 + (param_6 - 1);
          if (param_4 <= uVar11) {
            puVar5 = &DAT_01cfdd68;
LAB_015fc690:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar11,param_4,puVar5);
          }
          uVar2 = param_3[uVar11] & 0x3f;
          uVar4 = (uint)param_1[2] >> uVar2 | param_1[3] << (0x20 - uVar2 & 0xff);
          if (-1 < (int)(uVar2 - 0x20)) {
            uVar4 = (uint)param_1[3] >> (uVar2 - 0x20 & 0xff);
          }
          uVar2 = param_6;
          if ((uVar4 & 1) != 0) {
            if (uVar12 < param_6) {
              uVar4 = uVar12;
              do {
                if (param_4 <= iVar7 + uVar4) {
                  uVar12 = iVar7 + uVar12;
                  puVar5 = &DAT_01cfdd78;
LAB_015fc5f4:
                  if (uVar12 < param_4) {
                    uVar12 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar12,param_4,puVar5);
                }
                if (*(byte *)(param_5 + uVar4) != param_3[uVar4 + iVar7]) {
                  iVar7 = (iVar7 - uVar12) + uVar4 + 1;
                  goto LAB_015fc3f4;
                }
                uVar4 = uVar4 + 1;
              } while (param_6 != uVar4);
            }
            uVar4 = uVar12 - 1;
            do {
              if (uVar4 == 0xffffffff) {
                return 1;
              }
              if (param_6 <= uVar12 - 1) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar4,param_6,&DAT_01cfdd88);
              }
              uVar11 = iVar7 + uVar4;
              if (param_4 <= uVar11) {
                puVar5 = &DAT_01cfdd98;
                goto LAB_015fc690;
              }
              iVar13 = uVar4 + iVar7;
              pbVar8 = (byte *)(param_5 + uVar4);
              uVar4 = uVar4 - 1;
            } while (*pbVar8 == param_3[iVar13]);
            uVar2 = uVar10;
          }
          iVar7 = uVar2 + iVar7;
LAB_015fc3f4:
        } while (iVar7 + param_6 <= param_4);
      }
    }
    else {
      if (param_6 == 0) {
        return 1;
      }
      if (param_6 <= param_4) {
        uVar2 = param_1[4];
        iVar7 = 0;
        uVar4 = 0;
        do {
          uVar11 = iVar7 + (param_6 - 1);
          if (param_4 <= uVar11) {
            puVar5 = &DAT_01cfddb8;
            goto LAB_015fc690;
          }
          uVar12 = param_3[uVar11] & 0x3f;
          uVar11 = (uint)param_1[2] >> uVar12 | param_1[3] << (0x20 - uVar12 & 0xff);
          if (-1 < (int)(uVar12 - 0x20)) {
            uVar11 = (uint)param_1[3] >> (uVar12 - 0x20 & 0xff);
          }
          if ((uVar11 & 1) == 0) {
            uVar9 = 0;
            uVar12 = param_6;
          }
          else {
            uVar12 = uVar2;
            if (uVar2 < uVar4) {
              uVar12 = uVar4;
            }
            if (uVar12 < param_6) {
              uVar11 = uVar12;
              do {
                if (param_4 <= iVar7 + uVar11) {
                  uVar12 = uVar12 + iVar7;
                  puVar5 = &DAT_01cfddc8;
                  goto LAB_015fc5f4;
                }
                if (*(byte *)(param_5 + uVar11) != param_3[uVar11 + iVar7]) {
                  uVar9 = 0;
                  uVar12 = (uVar11 - uVar2) + 1;
                  goto LAB_015fc5d0;
                }
                uVar11 = uVar11 + 1;
              } while (param_6 != uVar11);
            }
            uVar9 = param_6 - uVar10;
            uVar12 = uVar10;
            if (uVar4 < uVar2) {
              uVar11 = uVar2;
              do {
                if (param_6 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar11,param_6,&DAT_01cfddd8);
                }
                if (param_4 <= iVar7 + uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(iVar7 + uVar11,param_4,&DAT_01cfdde8);
                }
                if (*(byte *)(param_5 + uVar11) != param_3[uVar11 + iVar7]) goto LAB_015fc5d0;
                uVar11 = uVar11 - 1;
              } while (uVar4 < uVar11);
            }
            if (param_6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar4,param_6,&DAT_01cfddf8);
            }
            uVar11 = uVar4 + iVar7;
            if (param_4 <= uVar11) {
              puVar5 = &DAT_01cfde08;
              goto LAB_015fc690;
            }
            if (*(byte *)(param_5 + uVar4) == param_3[uVar11]) {
              return 1;
            }
          }
LAB_015fc5d0:
          iVar7 = uVar12 + iVar7;
          uVar4 = uVar9;
          if (param_4 < iVar7 + param_6) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}

