// FUN_011e6e04 @ 011e6e04 size=572 calls_out=1 calls_in=1
// strings: 

void FUN_011e6e04(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = param_4 - ((param_3 < 0xfff44180) + 0x3a);
  if (uVar2 < 0xffffff6d || -uVar2 - 0x93 < (uint)(param_3 + 0xbbe80 < 0xf110a00)) {
    param_1[1] = 9;
    param_1[2] = 0xf054b80;
    param_1[3] = 0xffffffa8;
    *(undefined1 *)((int)param_1 + 0x12) = 0xf4;
    *(undefined2 *)(param_1 + 4) = 0x417f;
    param_1[5] = 0x3a;
    *(undefined1 *)((int)param_1 + 0x13) = 0xff;
    param_1[6] = param_3;
    param_1[7] = param_4;
    *param_1 = &DAT_004c1920;
    param_1[8] = 0;
  }
  else {
    iVar1 = FUN_01bf0ff0(param_3,param_4,0x15180,0);
    uVar3 = iVar1 * 4 + 0x57408bc3;
    param_3 = param_3 + iVar1 * -0x15180;
    uVar4 = uVar3 % 0x23ab1 | 3;
    uVar2 = uVar4 * 0x2cdb61;
    iVar1 = (short)(uVar3 / 0x23ab1) * 100 + uVar4 / 0x5b5;
    uVar3 = iVar1 - 1000000;
    if (0xd678e7c7 < uVar2) {
      uVar3 = iVar1 - 999999;
    }
    uVar5 = uVar3 * 0x5c29 + 0x51c;
    uVar6 = 3;
    uVar4 = uVar3 << 10;
    if (((uVar5 & 0xffff) >> 2 | uVar5 * 0x4000 & 0xffff) < 0x28f) {
      uVar6 = 0xf;
    }
    bVar7 = (uVar6 & uVar3) == 0;
    if (bVar7) {
      uVar4 = uVar3 << 10 | 0x200;
    }
    uVar3 = uVar2 / 0xb36d84;
    if (bVar7) {
      uVar3 = uVar2 / 0xb36d84 + 1;
    }
    uVar3 = uVar3 + 0x3c;
    if (0xd678e7c7 < uVar2) {
      uVar3 = uVar2 / 0xb36d84 + 0xfecf;
    }
    param_1[1] = 0;
    param_1[2] = (param_3 % 0xe10) * 0x8889 >> 0xd & 0xffffff00 | param_3 / 0xe10 << 0x10 |
                 param_3 + ((param_3 / 0x3c) * 0x10 - param_3 / 0x3c) * -4;
    param_1[3] = uVar3 & 0xffff | uVar4;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x13) = 0xff;
    *param_1 = 0;
  }
  return;
}

