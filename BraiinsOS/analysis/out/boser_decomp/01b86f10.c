// FUN_01b86f10 @ 01b86f10 size=976 calls_out=5 calls_in=2
// strings: tpBasis

undefined4
FUN_01b86f10(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,uint param_7
            )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_1[0x1b] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (param_7 ^ 1) & 1;
  }
  iVar2 = FUN_01b85214(param_3[6],param_4,uVar4);
  uVar4 = (uint)(iVar2 != 0);
  uVar6 = param_3[2];
  if (iVar2 != 0) {
    uVar4 = 1 << (param_3[1] & 0xff);
  }
  uVar5 = param_7;
  uVar8 = param_7;
  if (param_7 == 1) {
    if (param_3[4] == 3) {
      uVar5 = *param_3;
      if (uVar5 == 0) {
        uVar8 = 0;
      }
      else {
        if (0x10 < uVar5) {
          uVar5 = 0x11;
        }
        uVar8 = 1 << (uVar5 & 0xff);
      }
    }
    else {
      uVar5 = 0;
      uVar8 = 0;
    }
  }
  if (param_6 == 1) {
    param_1[5] = 0;
    param_1[1] = (int)&DAT_005b2079;
    param_1[2] = (int)&DAT_005b2079;
    *param_1 = (int)"tpBasis";
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
  }
  iVar2 = *param_1 - param_1[1];
  param_1[4] = iVar2;
  param_1[3] = iVar2;
  param_1[7] = iVar2;
  param_1[8] = uVar5;
  param_1[0x37] = 0;
  param_1[6] = 0;
  param_1[0x23] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
  iVar2 = FUN_01b85030(param_2,4 << (uVar6 & 0xff));
  param_1[0x17] = iVar2;
  iVar2 = FUN_01b85030(param_2,uVar4 << 2);
  param_1[0x19] = iVar2;
  iVar2 = FUN_01b85030(param_2,uVar8 << 2);
  param_1[0x18] = iVar2;
  if (*(char *)(param_2 + 0x1c) == '\0') {
    if (param_5 != 1) {
      uVar4 = *(uint *)(param_2 + 0x10);
      if (uVar4 < *(uint *)(param_2 + 0xc)) {
        FUN_01bed93e(uVar4,0,*(uint *)(param_2 + 0xc) - uVar4);
      }
      if (*(uint *)(param_2 + 0x10) < *(uint *)(param_2 + 0xc)) {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0xc);
      }
    }
    bVar9 = param_3[6] - 3 == 2;
    if (param_3[6] - 3 < 3) {
      bVar9 = param_4 == 1;
    }
    if (bVar9) {
      iVar2 = 1 << (uVar6 & 0xff);
      if (param_7 == 1) {
        uVar6 = iVar2 + 0x3fU & 0xffffffc0;
        uVar4 = FUN_01b84f70(param_2,uVar6,1);
        if ((uVar4 != 0) && (uVar4 < *(uint *)(param_2 + 0x18))) {
          uVar5 = *(uint *)(param_2 + 0x18) - uVar4;
          if (uVar6 <= uVar5) {
            uVar5 = uVar6;
          }
          FUN_01bed93e(uVar4,0,uVar5);
          *(uint *)(param_2 + 0x18) = uVar4;
        }
        uVar6 = param_1[0x14];
        uVar5 = param_1[0x15];
        param_1[10] = uVar4;
        uVar4 = uVar6 * 0x8000 + (uVar5 >> 0x11) ^ (uVar6 >> 0x18) + uVar5 * 0x100 ^ uVar6;
        uVar8 = param_1[0x16];
        lVar1 = (ulonglong)uVar4 * 0x1e98df25;
        uVar6 = (uVar5 * 0x8000 + (uVar6 >> 0x11) ^ (uVar5 >> 0x18) + uVar6 * 0x100 ^ uVar5) *
                0x1e98df25 + uVar4 * -0x604de39b + (int)((ulonglong)lVar1 >> 0x20);
        uVar4 = (uint)lVar1 ^ (uVar6 >> 3) + 8;
        lVar1 = (ulonglong)uVar4 * 0x1e98df25;
        uVar7 = (uint)lVar1;
        uVar4 = uVar6 * 0x1e98df25 + uVar4 * -0x604de39b + (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uVar8 >> 0x18 | uVar8 << 0xf) ^ uVar8;
        lVar1 = (ulonglong)uVar6 * 0x1e98df25;
        uVar5 = (uVar8 << 8 ^ uVar8 >> 0x11) * 0x1e98df25 + uVar6 * -0x604de39b +
                (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uVar5 >> 3) + 4 ^ (uint)lVar1;
        lVar1 = (ulonglong)uVar6 * 0x1e98df25;
        uVar8 = (uint)lVar1;
        uVar5 = uVar5 * 0x1e98df25 + uVar6 * -0x604de39b + (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uVar8 >> 0x1c | uVar5 * 0x10) ^ (uVar7 >> 0x1c | uVar4 * 0x10) ^ uVar8 ^ uVar7;
        uVar4 = uVar4 ^ uVar5 ^ uVar4 >> 0x1c ^ uVar5 >> 0x1c;
      }
      else {
        iVar3 = FUN_01b85010(param_2,iVar2);
        param_1[10] = iVar3;
        FUN_01bed93e(iVar3,0,iVar2);
        uVar6 = 0;
        uVar4 = 0;
      }
      param_1[0x14] = uVar6;
      uVar6 = param_3[3];
      param_1[0x15] = uVar4;
      if (5 < uVar6) {
        uVar6 = 6;
      }
      if (uVar6 < 4) {
        iVar2 = param_3[2] - 4;
      }
      else {
        iVar2 = param_3[2] - uVar6;
      }
      param_1[9] = iVar2;
    }
    if ((param_7 == 1) && (6 < param_3[6])) {
      iVar2 = FUN_01b85010(param_2,0x400);
      param_1[0x1c] = iVar2;
      iVar2 = FUN_01b85010(param_2,0x90);
      param_1[0x1d] = iVar2;
      iVar2 = FUN_01b85010(param_2,0xd4);
      param_1[0x1e] = iVar2;
      iVar2 = FUN_01b85010(param_2,0x80);
      param_1[0x1f] = iVar2;
      iVar2 = FUN_01b85010(param_2,0x8018);
      param_1[0x20] = iVar2;
      iVar2 = FUN_01b85010(param_2,0x1c054);
      param_1[0x21] = iVar2;
    }
    uVar4 = param_3[1];
    uVar6 = param_3[2];
    uVar5 = param_3[3];
    param_1[0x2e] = *param_3;
    param_1[0x2f] = uVar4;
    param_1[0x30] = uVar6;
    param_1[0x31] = uVar5;
    uVar4 = param_3[5];
    uVar6 = param_3[6];
    param_1[0x32] = param_3[4];
    param_1[0x33] = uVar4;
    param_1[0x34] = uVar6;
    if (*(char *)(param_2 + 0x1c) == '\0') {
      return 0;
    }
  }
  return 0xffffffc0;
}

