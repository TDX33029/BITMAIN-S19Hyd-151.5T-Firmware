// FUN_01b86b50 @ 01b86b50 size=488 calls_out=0 calls_in=3
// strings: 

uint * FUN_01b86b50(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                   uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,int param_12,
                   int param_13)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_12 == 1) {
    param_11 = 0;
  }
  else if ((param_12 == 2) && (param_11 != 0 && (param_10 == 0xffffffff && param_9 == 0xffffffff)))
  {
    param_10 = 0;
    param_9 = 0x201;
  }
  if (param_11 < 0x20000001 && (param_10 == 0 && (0x20000000 < param_9) <= param_10)) {
    if (param_11 + param_9 < 0x40) {
      uVar1 = 6;
    }
    else {
      uVar1 = 0x20 - LZCOUNT((param_11 + param_9) - 1);
    }
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
  }
  else if (param_10 == 0xffffffff && param_9 == 0xffffffff) goto LAB_01b86c64;
  if (param_11 == 0) {
LAB_01b86cd4:
    uVar1 = param_2;
  }
  else {
    param_10 = param_10 + CARRY4(param_11,param_9);
    uVar2 = 1 << (param_2 - 0x20 & 0xff) | 1U >> (0x20 - param_2 & 0xff);
    uVar1 = 1 << (param_2 & 0xff);
    if (param_10 < uVar2 || uVar2 - param_10 < (uint)(param_11 + param_9 <= uVar1))
    goto LAB_01b86cd4;
    uVar2 = uVar2 + CARRY4(param_11,uVar1);
    if (uVar2 == 0 && (0x3fffffff < param_11 + uVar1) <= uVar2) {
      uVar1 = 0x20 - LZCOUNT((param_11 + uVar1) - 1);
    }
    else {
      uVar1 = 0x1e;
    }
  }
  if (uVar1 + 1 <= param_4) {
    param_4 = uVar1 + 1;
  }
  if (uVar1 < param_3 - (5 < param_8)) {
    param_3 = (5 < param_8) + uVar1;
  }
LAB_01b86c64:
  if (param_2 < 10) {
    param_2 = 10;
  }
  if ((param_12 == 2) && (param_8 - 1 < 2)) {
    if (0x17 < param_4) {
      param_4 = 0x18;
    }
    if (0x17 < param_3) {
      param_3 = 0x18;
    }
  }
  else {
    uVar1 = param_8 - 3;
    bVar4 = 1 < uVar1;
    bVar3 = uVar1 == 2;
    if (uVar1 < 3) {
      bVar4 = param_13 != 0;
      bVar3 = param_13 == 1;
    }
    if (!bVar4 || bVar3) {
      uVar1 = param_5;
      if (5 < param_5) {
        uVar1 = 6;
      }
      if (uVar1 < 4) {
        uVar1 = 4;
      }
      if (uVar1 + 0x18 <= param_4) {
        param_4 = uVar1 + 0x18;
      }
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  return param_1;
}

