// FUN_00f69fc0 @ 00f69fc0 size=1168 calls_out=1 calls_in=2
// strings: 

void FUN_00f69fc0(undefined4 *param_1,byte *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte unaff_lr;
  bool bVar14;
  
  if (param_3 == 0 || param_4 == 0) {
    if (param_3 == 0) goto LAB_00f6a300;
    uVar6 = (uint)*param_2;
  }
  else {
    uVar6 = (uint)*param_2;
    if ((uVar6 | 0x20) == 0x7a) {
      if ((param_3 < 2) || (-0x41 < (char)param_2[1])) {
        *param_1 = param_2 + 1;
        param_1[1] = param_3 - 1;
        param_1[2] = 0;
        return;
      }
      puVar3 = &DAT_018800ac;
      goto LAB_00f6a400;
    }
  }
  if ((uint)(int)(char)uVar6 < 0x80000000) {
joined_r0x00f6a07c:
    if (uVar6 == 0x2b) goto LAB_00f6a120;
LAB_00f6a080:
    if (uVar6 == 0x2d) {
      iVar11 = 1;
      iVar7 = -1;
      if (param_3 == 1) {
        bVar14 = true;
      }
      else {
        bVar14 = true;
        if ((char)param_2[1] < -0x40) {
          puVar3 = &DAT_018800cc;
          goto LAB_00f6a400;
        }
      }
    }
    else {
      if (uVar6 != 0x2212) goto LAB_00f6a3c0;
      if (param_3 < 4) {
        if (param_3 != 3) goto LAB_00f6a0a8;
      }
      else if ((char)param_2[3] < -0x40) {
LAB_00f6a0a8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,3,param_3,&DAT_018800dc);
      }
      bVar14 = true;
      iVar11 = 3;
      iVar7 = -3;
    }
  }
  else {
    if (uVar6 < 0xe0) {
      uVar6 = param_2[1] & 0x3f | (uVar6 & 0x1f) << 6;
      goto joined_r0x00f6a07c;
    }
    uVar9 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
    if (uVar6 < 0xf0) {
      uVar6 = uVar9 | (uVar6 & 0x1f) << 0xc;
      goto joined_r0x00f6a07c;
    }
    uVar6 = param_2[3] & 0x3f | uVar9 << 6 | (uVar6 & 7) << 0x12;
    if (uVar6 != 0x2b) goto LAB_00f6a080;
LAB_00f6a120:
    bVar14 = false;
    iVar11 = 1;
    iVar7 = -1;
    if ((param_3 != 1) && ((char)param_2[1] < -0x40)) {
      puVar3 = &DAT_018800bc;
LAB_00f6a400:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,1,param_3,puVar3);
    }
  }
  param_3 = param_3 + iVar7;
  uVar5 = 4;
  if (1 < param_3) {
    param_2 = param_2 + iVar11;
    bVar1 = param_2[1];
    bVar10 = bVar1 - 0x30;
    if (bVar10 < 10) {
      unaff_lr = *param_2;
    }
    uVar5 = 3;
    if (bVar10 < 10) {
      bVar10 = unaff_lr - 0x30;
    }
    if (bVar10 < 10) {
      pbVar13 = (byte *)0x0;
      pbVar8 = (byte *)0x0;
      if (param_3 != 2) {
        if ((char)param_2[2] < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,2,param_3,&DAT_018800ec);
        }
        pbVar13 = (byte *)(param_3 - 2);
        pbVar4 = param_2 + 2;
        do {
          pbVar12 = pbVar4 + 1;
          uVar6 = (uint)*pbVar4;
          if (0x7fffffff < (uint)(int)(char)*pbVar4) {
            if (uVar6 < 0xe0) {
              uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
              pbVar12 = pbVar4 + 2;
            }
            else {
              uVar9 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
              if (uVar6 < 0xf0) {
                uVar6 = uVar9 | (uVar6 & 0x1f) << 0xc;
                pbVar12 = pbVar4 + 3;
              }
              else {
                pbVar12 = pbVar4 + 4;
                uVar6 = pbVar4[3] & 0x3f | uVar9 << 6 | (uVar6 & 7) << 0x12;
              }
            }
          }
          if ((uVar6 != 0x20 && uVar6 != 0x3a) && (4 < uVar6 - 9)) {
            if (uVar6 < 0x80) goto LAB_00f6a2d0;
            uVar9 = uVar6 >> 8;
            if (uVar9 < 0x20) {
              if (uVar9 == 0) {
                bVar10 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x00f6a2c4:
                if (bVar10 == 0) goto LAB_00f6a2d0;
              }
              else if ((uVar9 != 0x16) || (uVar6 != 0x1680)) goto LAB_00f6a2d0;
            }
            else {
              if (uVar9 == 0x20) {
                bVar10 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
                goto joined_r0x00f6a2c4;
              }
              if ((uVar9 != 0x30) || (uVar6 != 0x3000)) goto LAB_00f6a2d0;
            }
          }
          pbVar8 = pbVar12 + ((int)pbVar8 - (int)pbVar4);
          pbVar4 = pbVar12;
        } while (pbVar12 != param_2 + param_3);
        pbVar8 = pbVar13;
      }
LAB_00f6a2d0:
      param_2 = param_2 + (int)pbVar8;
      uVar6 = (int)pbVar13 - (int)pbVar8;
      pbVar4 = param_2 + 2;
      if (uVar6 < 2) {
        if (param_5 != 0) {
          iVar7 = 0;
          iVar11 = 0;
          if (pbVar13 == pbVar8) {
LAB_00f6a374:
            *param_1 = pbVar4;
            param_1[1] = iVar11;
            iVar7 = (short)(ushort)(byte)((bVar1 + unaff_lr * '\n') - 0x10) * 0xe10 + iVar7;
            if (bVar14) {
              iVar7 = -iVar7;
            }
            param_1[2] = iVar7;
            return;
          }
        }
LAB_00f6a300:
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 4;
        return;
      }
      bVar10 = *pbVar4;
      bVar2 = param_2[3];
      if ((byte)(bVar10 - 0x30) < 6) {
        if ((byte)(bVar2 - 0x30) < 10) {
          if ((uVar6 != 2) && ((char)param_2[4] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar4,uVar6,2,uVar6,&DAT_018800fc);
          }
          pbVar4 = param_2 + 4;
          iVar11 = uVar6 - 2;
          iVar7 = (uint)(byte)((bVar2 + bVar10 * '\n') - 0x10) * 0x3c;
          goto LAB_00f6a374;
        }
      }
      else {
        bVar14 = 8 < (byte)(bVar2 - 0x30);
        if ((byte)(bVar2 - 0x30) < 10) {
          bVar14 = 3 < (byte)(bVar10 - 0x36);
        }
        if (!bVar14) {
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
      }
LAB_00f6a3c0:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 0;
  return;
}

