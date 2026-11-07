// FUN_015fdb14 @ 015fdb14 size=700 calls_out=5 calls_in=1
// strings: 

void FUN_015fdb14(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint *param_5,
                 int param_6)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar8 = 0;
  if ((int)param_3 < 0) {
LAB_015fdb2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,param_3);
  }
  if (param_3 == 0) {
    pbVar1 = &DAT_00000001;
    uVar9 = 0;
  }
  else {
    uVar8 = 1;
    pbVar1 = (byte *)FUN_01298504(param_3,1);
    uVar9 = param_3;
    if (pbVar1 == (byte *)0x0) goto LAB_015fdb2c;
  }
  FUN_01bed4e2(pbVar1,param_2,param_3);
  if (param_4 != 0) {
    if (param_4 < param_3) {
      if ((char)pbVar1[param_4] < -0x40) {
LAB_015fdba4:
        uVar11 = 0;
        puVar2 = &DAT_01cfde58;
LAB_015fdd9c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar1,param_3,uVar11,param_4,puVar2);
      }
    }
    else if (param_4 != param_3) goto LAB_015fdba4;
    pbVar3 = pbVar1;
    do {
      bVar4 = *pbVar3;
      if (bVar4 - 0x41 < 0x1a) {
        bVar4 = bVar4 | 0x20;
      }
      *pbVar3 = bVar4;
      param_4 = param_4 - 1;
      pbVar3 = pbVar3 + 1;
    } while (param_4 != 0);
  }
  if (param_6 != 0) {
    puVar10 = param_5 + param_6 * 4;
    do {
      uVar11 = *param_5;
      param_4 = param_5[1];
      if (param_4 < uVar11) goto LAB_015fdd90;
      if (uVar11 != 0) {
        if (uVar11 < param_3) {
          if (-0x41 < (char)pbVar1[uVar11]) goto LAB_015fdc24;
        }
        else if (uVar11 == param_3) goto LAB_015fdc24;
        goto LAB_015fdd90;
      }
LAB_015fdc24:
      if (param_4 != 0) {
        if (param_4 < param_3) {
          if ((char)pbVar1[param_4] < -0x40) {
LAB_015fdd90:
            puVar2 = &DAT_01cfde68;
            goto LAB_015fdd9c;
          }
        }
        else if (param_4 != param_3) goto LAB_015fdd90;
      }
      pbVar3 = pbVar1 + uVar11;
      iVar5 = param_4 - uVar11;
      if (iVar5 != 0) {
        pbVar6 = pbVar3;
        iVar7 = iVar5;
        do {
          bVar4 = *pbVar6;
          if (bVar4 - 0x41 < 0x1a) {
            bVar4 = bVar4 | 0x20;
          }
          *pbVar6 = bVar4;
          iVar7 = iVar7 + -1;
          pbVar6 = pbVar6 + 1;
        } while (iVar7 != 0);
      }
      if (uVar11 != 0) {
        if (uVar11 < param_3) {
          if (-0x41 < (char)*pbVar3) goto LAB_015fdca0;
        }
        else if (uVar11 == param_3) goto LAB_015fdca0;
        goto LAB_015fddc8;
      }
LAB_015fdca0:
      if (param_4 != 0) {
        if (param_4 < param_3) {
          if ((char)pbVar1[param_4] < -0x40) {
LAB_015fddc8:
            puVar2 = &DAT_01cfde78;
            goto LAB_015fdd9c;
          }
        }
        else if (param_4 != param_3) goto LAB_015fddc8;
      }
      if ((iVar5 == 7) && (iVar5 = thunk_FUN_01bed842(pbVar3,&DAT_0050c55c,7), iVar5 == 0)) {
        uVar11 = param_5[2];
        param_4 = param_5[3];
        if (param_4 < uVar11) goto LAB_015fddb8;
        if (uVar11 != 0) {
          if (uVar11 < param_3) {
            if (-0x41 < (char)pbVar1[uVar11]) goto LAB_015fdd1c;
          }
          else if (uVar11 == param_3) goto LAB_015fdd1c;
          goto LAB_015fddb8;
        }
LAB_015fdd1c:
        if (param_4 != 0) {
          if (param_4 < param_3) {
            if ((char)pbVar1[param_4] < -0x40) {
LAB_015fddb8:
              puVar2 = &UNK_01cfde88;
              goto LAB_015fdd9c;
            }
          }
          else if (param_4 != param_3) goto LAB_015fddb8;
        }
        iVar5 = param_4 - uVar11;
        if (iVar5 != 0) {
          pbVar3 = pbVar1 + uVar11;
          do {
            bVar4 = *pbVar3;
            if (bVar4 - 0x41 < 0x1a) {
              bVar4 = bVar4 | 0x20;
            }
            *pbVar3 = bVar4;
            iVar5 = iVar5 + -1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != 0);
        }
      }
      param_5 = param_5 + 4;
    } while (param_5 != puVar10);
  }
  *param_1 = uVar9;
  param_1[1] = (uint)pbVar1;
  param_1[2] = param_3;
  return;
}

