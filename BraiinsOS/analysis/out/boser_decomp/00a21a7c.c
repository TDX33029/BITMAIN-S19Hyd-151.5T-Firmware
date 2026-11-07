// FUN_00a21a7c @ 00a21a7c size=1208 calls_out=2 calls_in=1
// strings: overflow subtracting duration from date | resulting value is out of range

void FUN_00a21a7c(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char extraout_r2;
  char extraout_r2_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  
  uVar15 = FUN_01bf0ff0(param_3,param_4,0x3c,0);
  FUN_01bf0ff0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x3c,0);
  iVar10 = param_2[1];
  puVar13 = (undefined1 *)(*param_2 - param_5);
  uVar3 = (uint)(char)((char)iVar10 + ((char)uVar15 * '<' - (char)param_3) +
                      (char)((int)puVar13 >> 0x1f));
  uVar9 = (uint)(char)(((char)((uint)iVar10 >> 8) - extraout_r2) + (char)(uVar3 >> 7));
  uVar15 = FUN_01bf0ff0(param_3,param_4,0xe10,0);
  FUN_01bf0ff0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0x18,0);
  uVar12 = (uint)(char)(((char)((uint)iVar10 >> 0x10) - extraout_r2_00) + (char)(uVar9 >> 7));
  if ((int)uVar12 < 0) {
    if (param_4 < 0xa8c0) {
      iVar10 = (param_2[2] >> 10) + 999999;
      iVar7 = (int)((ulonglong)((longlong)iVar10 * -0x51eb851f) >> 0x20);
      lVar2 = (longlong)iVar10 * 0x5b5 + ((ulonglong)((longlong)iVar10 * 0x5b5) >> 0x3e);
      iVar8 = (param_2[2] & 0x1ffU) + ((iVar7 >> 5) - (iVar7 >> 0x1f)) + iVar10 / 400 +
              ((uint)lVar2 >> 2 | (int)((ulonglong)lVar2 >> 0x20) << 0x1e) + -0x15aae433;
      iVar10 = FUN_01bf0ff0(param_3,param_4,0x15180,0);
      iVar7 = iVar8 - iVar10;
      if ((!SBORROW4(iVar8,iVar10)) && (0xff908adb < iVar7 - 0x51fe2dU)) {
        uVar4 = iVar7 * 4 + 0x56ab9593;
        uVar5 = uVar4 % 0x23ab1 | 3;
        uVar6 = uVar5 * 0x2cdb61;
        iVar10 = (short)(uVar4 / 0x23ab1) * 100 + uVar5 / 0x5b5;
        uVar4 = iVar10 - 1000000;
        if (0xd678e7c7 < uVar6) {
          uVar4 = iVar10 - 999999;
        }
        uVar5 = uVar4 * 0x5c29 + 0x51c;
        uVar11 = 3;
        if (((uVar5 & 0xffff) >> 2 | uVar5 * 0x4000 & 0xffff) < 0x28f) {
          uVar11 = 0xf;
        }
        uVar5 = uVar6 / 0xb36d84;
        if ((uVar11 & uVar4) == 0) {
          uVar5 = uVar6 / 0xb36d84 + 1;
        }
        uVar5 = uVar5 + 0x3c;
        if (0xd678e7c7 < uVar6) {
          uVar5 = uVar6 / 0xb36d84 + 0xfecf;
        }
        uVar6 = uVar4 << 10;
        if ((uVar11 & uVar4) == 0) {
          uVar6 = uVar4 << 10 | 0x200;
        }
        iVar10 = uVar6 + (uVar5 & 0xffff);
        if (iVar10 != 0) {
          if ((uVar5 & 0x1ff) == 1) {
            if (iVar10 == -0x9c3bff) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("resulting value is out of range",0x1f,param_6);
            }
            uVar4 = (iVar10 >> 10) - 1;
            uVar5 = 3;
            uVar6 = uVar4 * 0x400;
            if ((uVar4 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar4 * 0x40000000) < 0x28f5c29) {
              uVar5 = 0xf;
            }
            bVar14 = (uVar5 & uVar4) == 0;
            if (bVar14) {
              uVar6 = uVar4 * 0x400 | 0x200;
            }
            uVar4 = 0x16d;
            if (bVar14) {
              uVar4 = 0x16e;
            }
            uVar6 = uVar6 | uVar4;
          }
          else {
            uVar6 = iVar10 - 1;
          }
          goto LAB_00a21e9c;
        }
      }
    }
  }
  else if (param_4 < 0xa8c0) {
    iVar10 = (param_2[2] >> 10) + 999999;
    iVar7 = (int)((ulonglong)((longlong)iVar10 * -0x51eb851f) >> 0x20);
    lVar2 = (longlong)iVar10 * 0x5b5 + ((ulonglong)((longlong)iVar10 * 0x5b5) >> 0x3e);
    iVar8 = (param_2[2] & 0x1ffU) + ((iVar7 >> 5) - (iVar7 >> 0x1f)) + iVar10 / 400 +
            ((uint)lVar2 >> 2 | (int)((ulonglong)lVar2 >> 0x20) << 0x1e) + -0x15aae433;
    iVar10 = FUN_01bf0ff0(param_3,param_4,0x15180,0);
    iVar7 = iVar8 - iVar10;
    if ((!SBORROW4(iVar8,iVar10)) && (0xff908adb < iVar7 - 0x51fe2dU)) {
      uVar4 = iVar7 * 4 + 0x56ab9593;
      uVar5 = uVar4 % 0x23ab1 | 3;
      uVar6 = uVar5 * 0x2cdb61;
      iVar10 = (short)(uVar4 / 0x23ab1) * 100 + uVar5 / 0x5b5;
      uVar4 = iVar10 - 1000000;
      if (0xd678e7c7 < uVar6) {
        uVar4 = iVar10 - 999999;
      }
      uVar5 = uVar4 * 0x5c29 + 0x51c;
      uVar11 = 3;
      if (((uVar5 & 0xffff) >> 2 | uVar5 * 0x4000 & 0xffff) < 0x28f) {
        uVar11 = 0xf;
      }
      uVar5 = uVar6 / 0xb36d84;
      if ((uVar11 & uVar4) == 0) {
        uVar5 = uVar6 / 0xb36d84 + 1;
      }
      uVar5 = uVar5 + 0x3c;
      if (0xd678e7c7 < uVar6) {
        uVar5 = uVar6 / 0xb36d84 + 0xfecf;
      }
      uVar6 = uVar4 << 10;
      if ((uVar11 & uVar4) == 0) {
        uVar6 = uVar4 << 10 | 0x200;
      }
      uVar6 = uVar6 + (uVar5 & 0xffff);
      if (uVar6 != 0) {
LAB_00a21e9c:
        if ((int)puVar13 < 0) {
          puVar13 = &DAT_3b9aca00 + (int)puVar13;
        }
        if ((int)uVar12 < 0) {
          uVar12 = uVar12 + 0x18;
        }
        iVar10 = param_2[3];
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 0x3c;
        }
        uVar1 = *(undefined1 *)((int)param_2 + 0xe);
        param_1[2] = uVar6;
        *(undefined1 *)((int)param_1 + 0xe) = uVar1;
        *(short *)(param_1 + 3) = (short)iVar10;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0x3c;
        }
        *param_1 = puVar13;
        param_1[1] = (uVar12 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar3 & 0xff;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("overflow subtracting duration from date",0x27,param_6);
}

