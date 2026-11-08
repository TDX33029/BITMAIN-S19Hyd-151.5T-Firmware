// FUN_01b8d888 @ 01b8d888 size=416 calls_out=6 calls_in=1
// strings: 

uint FUN_01b8d888(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,int param_6,uint param_7,undefined1 *param_8,uint param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,
                 int param_15,undefined4 param_16)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  switch(param_5) {
  case 0:
    uVar3 = FUN_01b82320(param_3,param_10,param_12,param_11,param_15,param_16);
    if (0xffffff88 < uVar3) {
      return uVar3;
    }
    goto LAB_01b8d930;
  case 1:
    uVar3 = FUN_01b82c0c(param_3,param_7 & 0xff);
    if (uVar3 < 0xffffff89) {
      if (param_2 == 0) {
        uVar3 = 0xffffffba;
      }
      else {
        *param_1 = *param_8;
        uVar3 = param_5;
      }
    }
    break;
  case 2:
    uVar1 = FUN_01b82770(param_4,param_9,param_7);
    uVar3 = *(uint *)(param_6 + (uint)(byte)param_8[param_9 - 1] * 4);
    if (1 < uVar3) {
      *(uint *)(param_6 + (uint)(byte)param_8[param_9 - 1] * 4) = uVar3 - 1;
      param_9 = param_9 - 1;
    }
    uVar3 = FUN_01b82788(param_15,uVar1,param_6,param_9,param_7,0x7ff < param_9);
    if ((uVar3 < 0xffffff89) &&
       ((uVar2 = FUN_01b82680(param_1,param_2,param_15,param_7,uVar1), 0xffffff88 < uVar2 ||
        (uVar3 = FUN_01b82320(param_3,param_15,param_7,uVar1,param_15 + 0x6c,0x474),
        uVar3 < 0xffffff89)))) {
      uVar3 = uVar2;
    }
    break;
  case 3:
    FUN_01bed4e2(param_3,param_13,param_14);
LAB_01b8d930:
    uVar3 = 0;
    break;
  default:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

