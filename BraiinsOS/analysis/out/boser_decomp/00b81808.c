// FUN_00b81808 @ 00b81808 size=1496 calls_out=4 calls_in=4
// strings: overflow subtracting duration from date | resulting value is out of range

longlong FUN_00b81808(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char extraout_r2;
  char extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  FUN_019ac130(&local_38,0);
  local_44 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = local_38;
  uStack_54 = uStack_34;
  iStack_50 = local_30;
  FUN_019ac248(&local_38,&local_58,&local_48);
  uVar13 = FUN_01bf0ff0(local_30,local_2c,0x3c,0);
  uVar11 = local_30 + (int)uVar13 * -0x3c;
  if ((local_38 & 1) != 0) {
    uVar13 = FUN_01bf0ff0(local_30,local_2c,0x3c,0);
    FUN_01bf0ff0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x3c,0);
    uVar13 = FUN_01bf0ff0(local_30,local_2c,0xe10,0);
    FUN_01bf0ff0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x18,0);
    cVar9 = '\0';
    if (local_28 != 0) {
      cVar9 = -1;
    }
    uVar11 = (uint)(char)(cVar9 - (char)uVar11);
    uVar8 = (uint)(char)((char)(uVar11 >> 7) - extraout_r2);
    uVar10 = (uint)(char)((char)(uVar8 >> 7) - extraout_r2_00);
    if ((int)uVar10 < 0) {
      if ((0xa8bf < local_2c) ||
         (iVar2 = FUN_01bf0ff0(local_30,local_2c,0x15180,0), iVar2 - 0x42b484U < 0xff908adc))
      goto LAB_00b81d98;
      uVar3 = iVar2 * -4 + 0x57408bc3;
      uVar4 = uVar3 % 0x23ab1 | 3;
      uVar5 = uVar4 * 0x2cdb61;
      iVar2 = (short)(uVar3 / 0x23ab1) * 100 + uVar4 / 0x5b5;
      uVar3 = iVar2 - 1000000;
      if (0xd678e7c7 < uVar5) {
        uVar3 = iVar2 - 999999;
      }
      uVar4 = uVar3 * 0x5c29 + 0x51c;
      uVar7 = 3;
      if (((uVar4 & 0xffff) >> 2 | uVar4 * 0x4000 & 0xffff) < 0x28f) {
        uVar7 = 0xf;
      }
      uVar4 = uVar5 / 0xb36d84;
      if ((uVar7 & uVar3) == 0) {
        uVar4 = uVar5 / 0xb36d84 + 1;
      }
      uVar4 = uVar4 + 0x3c;
      if (0xd678e7c7 < uVar5) {
        uVar4 = uVar5 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar3 << 10;
      if ((uVar7 & uVar3) == 0) {
        uVar5 = uVar3 << 10 | 0x200;
      }
      iVar2 = uVar5 + (uVar4 & 0xffff);
      if (iVar2 == 0) goto LAB_00b81d98;
      if ((uVar4 & 0x1ff) == 1) {
        if (iVar2 == -0x9c3bff) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("resulting value is out of range",0x1f,&DAT_01d284b0);
        }
        uVar3 = (iVar2 >> 10) - 1;
        uVar4 = 3;
        uVar5 = uVar3 * 0x400;
        if ((uVar3 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar3 * 0x40000000) < 0x28f5c29) {
          uVar4 = 0xf;
        }
        bVar12 = (uVar4 & uVar3) == 0;
        if (bVar12) {
          uVar5 = uVar3 * 0x400 | 0x200;
        }
        uVar3 = 0x16d;
        if (bVar12) {
          uVar3 = 0x16e;
        }
        uVar5 = uVar5 | uVar3;
      }
      else {
        uVar5 = iVar2 - 1;
      }
    }
    else {
      if ((0xa8bf < local_2c) ||
         (iVar2 = FUN_01bf0ff0(local_30,local_2c,0x15180,0), iVar2 - 0x42b484U < 0xff908adc)) {
LAB_00b81d98:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow subtracting duration from date",0x27,&DAT_01d284b0);
      }
      uVar3 = iVar2 * -4 + 0x57408bc3;
      uVar4 = uVar3 % 0x23ab1 | 3;
      uVar5 = uVar4 * 0x2cdb61;
      iVar2 = (short)(uVar3 / 0x23ab1) * 100 + uVar4 / 0x5b5;
      uVar3 = iVar2 - 1000000;
      if (0xd678e7c7 < uVar5) {
        uVar3 = iVar2 - 999999;
      }
      uVar4 = uVar3 * 0x5c29 + 0x51c;
      uVar7 = 3;
      if (((uVar4 & 0xffff) >> 2 | uVar4 * 0x4000 & 0xffff) < 0x28f) {
        uVar7 = 0xf;
      }
      uVar4 = uVar5 / 0xb36d84;
      if ((uVar7 & uVar3) == 0) {
        uVar4 = uVar5 / 0xb36d84 + 1;
      }
      uVar4 = uVar4 + 0x3c;
      if (0xd678e7c7 < uVar5) {
        uVar4 = uVar5 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar3 << 10;
      if ((uVar7 & uVar3) == 0) {
        uVar5 = uVar3 << 10 | 0x200;
      }
      uVar5 = uVar5 + (uVar4 & 0xffff);
      if (uVar5 == 0) goto LAB_00b81d98;
    }
    if ((int)uVar10 < 0) {
      uVar10 = uVar10 + 0x18;
    }
    if ((int)uVar8 < 0) {
      uVar8 = uVar8 + 0x3c;
    }
    if ((int)uVar11 < 0) {
      uVar11 = uVar11 + 0x3c;
    }
    uVar8 = (uVar10 & 0xff) << 0x10 | (uVar8 & 0xff) << 8;
    uVar11 = uVar11 & 0xff;
LAB_00b81cec:
    iVar2 = ((int)uVar5 >> 10) + 999999;
    iVar6 = (int)((ulonglong)((longlong)iVar2 * -0x51eb851f) >> 0x20);
    lVar1 = (longlong)iVar2 * 0x5b5 + ((ulonglong)((longlong)iVar2 * 0x5b5) >> 0x3e);
    return (longlong)
           (int)((uVar5 & 0x1ff) + ((iVar6 >> 5) - (iVar6 >> 0x1f)) + iVar2 / 400 +
                 ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + -0x15d021bf) *
           0x15180 + (ulonglong)
                     ((uVar8 >> 0x10) * 0xe10 + (uVar11 & 0x3f) + ((uVar8 & 0x3fff) >> 8) * 0x3c);
  }
  FUN_01bf0ff0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x3c,0);
  uVar13 = FUN_01bf0ff0(local_30,local_2c,0xe10,0);
  FUN_01bf0ff0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0x18,0);
  if (local_2c < 0xa8c0) {
    iVar2 = FUN_01bf0ff0(local_30,local_2c,0x15180,0);
    if ((!SCARRY4(iVar2,0x253d8c)) && (0xff908adb < iVar2 - 0x2cc0a1U)) {
      uVar10 = (int)(&UNK_00253d8c + iVar2) * 4 + 0x56ab9593;
      uVar5 = uVar10 % 0x23ab1 | 3;
      uVar8 = uVar5 * 0x2cdb61;
      iVar2 = (short)(uVar10 / 0x23ab1) * 100 + uVar5 / 0x5b5;
      uVar3 = 3;
      uVar10 = iVar2 - 1000000;
      if (0xd678e7c7 < uVar8) {
        uVar10 = iVar2 - 999999;
      }
      if ((uVar10 * -0x3d70a3d7 >> 2 | uVar10 * 0x40000000) < 0x28f5c29) {
        uVar3 = 0xf;
      }
      uVar4 = uVar8 / 0xb36d84;
      if ((uVar3 & uVar10) == 0) {
        uVar4 = uVar8 / 0xb36d84 + 1;
      }
      uVar4 = uVar4 + 0x3c;
      if (0xd678e7c7 < uVar8) {
        uVar4 = uVar8 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar10 << 10;
      if ((uVar3 & uVar10) == 0) {
        uVar5 = uVar10 << 10 | 0x200;
      }
      uVar5 = uVar5 + (uVar4 & 0xffff);
      uVar8 = extraout_r2_02 << 0x10 | extraout_r2_01 << 8;
      goto LAB_00b81cec;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_0056c1e8,0x20,&DAT_01d284a0);
}

