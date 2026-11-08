// FUN_011e5f50 @ 011e5f50 size=1376 calls_out=3 calls_in=1
// strings: overflow subtracting duration from date | resulting value is out of range

void FUN_011e5f50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char extraout_r2;
  char extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40 [2];
  int local_38;
  uint local_34;
  int local_30;
  
  local_58 = param_5;
  local_4c = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = param_3;
  uStack_5c = param_4;
  FUN_019ac248(local_40,&local_60,&local_50);
  uVar11 = FUN_01bf0ff0(local_38,local_34,0x3c,0);
  uVar8 = local_38 + (int)uVar11 * -0x3c;
  if ((local_40[0] & 1) != 0) {
    uVar11 = FUN_01bf0ff0(local_38,local_34,0x3c,0);
    FUN_01bf0ff0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x3c,0);
    uVar11 = FUN_01bf0ff0(local_38,local_34,0xe10,0);
    FUN_01bf0ff0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x18,0);
    cVar1 = '\0';
    if (local_30 != 0) {
      cVar1 = -1;
    }
    uVar7 = (uint)(char)(cVar1 - (char)uVar8);
    uVar9 = (uint)(char)((char)(uVar7 >> 7) - extraout_r2);
    uVar8 = (uint)(char)((char)(uVar9 >> 7) - extraout_r2_00);
    if ((int)uVar8 < 0) {
      if ((0xa8bf < local_34) ||
         (iVar2 = FUN_01bf0ff0(local_38,local_34,0x15180,0), iVar2 - 0x42b484U < 0xff908adc))
      goto LAB_011e6468;
      uVar5 = iVar2 * -4 + 0x57408bc3;
      uVar4 = uVar5 % 0x23ab1 | 3;
      uVar3 = uVar4 * 0x2cdb61;
      iVar2 = (short)(uVar5 / 0x23ab1) * 100 + uVar4 / 0x5b5;
      uVar4 = iVar2 - 1000000;
      if (0xd678e7c7 < uVar3) {
        uVar4 = iVar2 - 999999;
      }
      uVar5 = uVar4 * 0x5c29 + 0x51c;
      uVar6 = 3;
      if (((uVar5 & 0xffff) >> 2 | uVar5 * 0x4000 & 0xffff) < 0x28f) {
        uVar6 = 0xf;
      }
      uVar5 = uVar4 << 10;
      bVar10 = (uVar6 & uVar4) == 0;
      if (bVar10) {
        uVar5 = uVar4 << 10 | 0x200;
      }
      uVar4 = uVar3 / 0xb36d84;
      if (bVar10) {
        uVar4 = uVar3 / 0xb36d84 + 1;
      }
      uVar4 = uVar4 + 0x3c;
      if (0xd678e7c7 < uVar3) {
        uVar4 = uVar3 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar4 & 0xffff | uVar5;
      if ((uVar4 & 0x1ff) == 1) {
        if (uVar5 == 0xff63c401) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("resulting value is out of range",0x1f,&DAT_01d284b0);
        }
        uVar3 = ((int)uVar5 >> 10) - 1;
        uVar4 = 3;
        uVar5 = uVar3 * 0x400;
        if ((uVar3 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar3 * 0x40000000) < 0x28f5c29) {
          uVar4 = 0xf;
        }
        bVar10 = (uVar4 & uVar3) == 0;
        if (bVar10) {
          uVar5 = uVar3 * 0x400 | 0x200;
        }
        uVar3 = 0x16d;
        if (bVar10) {
          uVar3 = 0x16e;
        }
        uVar5 = uVar5 | uVar3;
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    else {
      if ((0xa8bf < local_34) ||
         (iVar2 = FUN_01bf0ff0(local_38,local_34,0x15180,0), iVar2 - 0x42b484U < 0xff908adc)) {
LAB_011e6468:
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
      uVar6 = 3;
      if (((uVar4 & 0xffff) >> 2 | uVar4 * 0x4000 & 0xffff) < 0x28f) {
        uVar6 = 0xf;
      }
      uVar4 = uVar5 / 0xb36d84;
      if ((uVar6 & uVar3) == 0) {
        uVar4 = uVar5 / 0xb36d84 + 1;
      }
      uVar4 = uVar4 + 0x3c;
      if (0xd678e7c7 < uVar5) {
        uVar4 = uVar5 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar3 << 10;
      if ((uVar6 & uVar3) == 0) {
        uVar5 = uVar3 << 10 | 0x200;
      }
      uVar5 = uVar4 & 0xffff | uVar5;
    }
    if ((int)uVar8 < 0) {
      uVar8 = uVar8 + 0x18;
    }
    if ((int)uVar9 < 0) {
      uVar9 = uVar9 + 0x3c;
    }
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 0x3c;
    }
    uVar8 = (uVar8 & 0xff) << 0x10 | (uVar9 & 0xff) << 8 | uVar7 & 0xff;
    if (local_30 != 0) {
      local_30 = (int)&DAT_3b9aca00 - local_30;
    }
LAB_011e6440:
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    *param_1 = local_30;
    param_1[1] = uVar8;
    param_1[2] = uVar5;
    return;
  }
  FUN_01bf0ff0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x3c,0);
  uVar11 = FUN_01bf0ff0(local_38,local_34,0xe10,0);
  FUN_01bf0ff0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x18,0);
  if (local_34 < 0xa8c0) {
    iVar2 = FUN_01bf0ff0(local_38,local_34,0x15180,0);
    if ((!SCARRY4(iVar2,0x253d8c)) && (0xff908adb < iVar2 - 0x2cc0a1U)) {
      uVar7 = (int)(&UNK_00253d8c + iVar2) * 4 + 0x56ab9593;
      uVar9 = uVar7 % 0x23ab1 | 3;
      uVar5 = uVar9 * 0x2cdb61;
      iVar2 = (short)(uVar7 / 0x23ab1) * 100 + uVar9 / 0x5b5;
      uVar9 = 3;
      uVar7 = iVar2 - 1000000;
      if (0xd678e7c7 < uVar5) {
        uVar7 = iVar2 - 999999;
      }
      if ((uVar7 * -0x3d70a3d7 >> 2 | uVar7 * 0x40000000) < 0x28f5c29) {
        uVar9 = 0xf;
      }
      uVar3 = uVar5 / 0xb36d84;
      if ((uVar9 & uVar7) == 0) {
        uVar3 = uVar5 / 0xb36d84 + 1;
      }
      uVar3 = uVar3 + 0x3c;
      if (0xd678e7c7 < uVar5) {
        uVar3 = uVar5 / 0xb36d84 + 0xfecf;
      }
      uVar5 = uVar7 << 10;
      if ((uVar9 & uVar7) == 0) {
        uVar5 = uVar7 << 10 | 0x200;
      }
      uVar5 = uVar3 & 0xffff | uVar5;
      uVar8 = extraout_r2_02 << 0x10 | extraout_r2_01 << 8 | uVar8;
      goto LAB_011e6440;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_0056c1e8,0x20,&DAT_01d284a0);
}

