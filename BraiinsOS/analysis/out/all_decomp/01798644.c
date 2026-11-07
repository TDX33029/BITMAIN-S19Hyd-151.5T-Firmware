// FUN_01798644 @ 01798644 size=688 calls_out=0 calls_in=1
// strings: 

uint * FUN_01798644(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                   uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,int param_12,
                   int param_13)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_12 == 1) {
    if (param_10 == 0 && (0x20000000 < param_9) <= param_10) {
      if (param_9 < 0x40) {
        if (5 < param_2) {
          param_2 = 6;
        }
      }
      else {
        uVar3 = 0x20 - LZCOUNT(param_9 - 1);
        if (uVar3 <= param_2) {
          param_2 = uVar3;
        }
      }
LAB_01798844:
      if (param_2 + 1 <= param_4) {
        param_4 = param_2 + 1;
      }
      if (param_2 < param_3 - (5 < param_8)) {
        param_3 = (5 < param_8) + param_2;
        if (param_2 < 10) {
          param_2 = 10;
        }
        goto LAB_01798770;
      }
    }
    else if (param_10 != 0xffffffff || param_9 != 0xffffffff) goto LAB_01798844;
    if (param_2 < 10) {
      param_2 = 10;
    }
  }
  else {
    if ((param_12 == 2) && (param_11 != 0 && (param_10 == 0xffffffff && param_9 == 0xffffffff))) {
      if (param_11 < 0x20000001) {
        param_9 = 0x201;
        uVar3 = 0x20 - LZCOUNT(param_11 + 0x200);
        if (uVar3 <= param_2) {
          param_2 = uVar3;
        }
        param_10 = 0;
      }
      else {
        param_10 = 0;
        param_9 = 0x201;
      }
LAB_017986d8:
      param_10 = param_10 + CARRY4(param_11,param_9);
      uVar2 = 1 << (param_2 - 0x20 & 0xff) | 1U >> (0x20 - param_2 & 0xff);
      uVar3 = 1 << (param_2 & 0xff);
      if (param_10 < uVar2 || uVar2 - param_10 < (uint)(param_11 + param_9 <= uVar3)) {
LAB_017988bc:
        uVar2 = param_2 + 1;
        uVar3 = param_2;
      }
      else {
        uVar2 = uVar2 + CARRY4(uVar3,param_11);
        if (uVar2 == 0 && (0x3fffffff < uVar3 + param_11) <= uVar2) {
          iVar1 = LZCOUNT((uVar3 + param_11) - 1);
          uVar2 = 0x21 - iVar1;
          uVar3 = 0x20 - iVar1;
        }
        else {
          uVar2 = 0x1f;
          uVar3 = 0x1e;
        }
      }
      if (uVar2 <= param_4) {
        param_4 = uVar2;
      }
      if (uVar3 < param_3 - (5 < param_8)) {
        param_3 = (5 < param_8) + uVar3;
      }
    }
    else {
      if (param_11 < 0x20000001 && (param_10 == 0 && (0x20000000 < param_9) <= param_10)) {
        if (param_11 + param_9 < 0x40) {
          uVar3 = 6;
        }
        else {
          uVar3 = 0x20 - LZCOUNT((param_11 + param_9) - 1);
        }
        if (uVar3 <= param_2) {
          param_2 = uVar3;
        }
LAB_017986cc:
        if (param_11 != 0) goto LAB_017986d8;
        goto LAB_017988bc;
      }
      if (param_10 != 0xffffffff || param_9 != 0xffffffff) goto LAB_017986cc;
    }
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
      goto LAB_01798784;
    }
  }
LAB_01798770:
  uVar3 = param_8 - 3;
  bVar5 = 1 < uVar3;
  bVar4 = uVar3 == 2;
  if (uVar3 < 3) {
    bVar5 = param_13 != 0;
    bVar4 = param_13 == 1;
  }
  if (!bVar5 || bVar4) {
    uVar3 = param_5;
    if (5 < param_5) {
      uVar3 = 6;
    }
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    if (uVar3 + 0x18 <= param_4) {
      param_4 = uVar3 + 0x18;
    }
  }
LAB_01798784:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  return param_1;
}

