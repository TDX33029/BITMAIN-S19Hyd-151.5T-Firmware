// FUN_01b847d8 @ 01b847d8 size=328 calls_out=4 calls_in=2
// strings: 

uint FUN_01b847d8(uint param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  
  if ((param_8 & 2) == 0) {
    uVar7 = 0x20U - LZCOUNT(param_2);
    if (0x21U - LZCOUNT(param_3) <= 0x20U - LZCOUNT(param_2)) {
      uVar7 = 0x21U - LZCOUNT(param_3);
    }
    if (param_1 == 0) {
      param_1 = 0xb;
    }
    uVar4 = 0x1e - LZCOUNT(param_2 + -1);
    if (uVar4 <= param_1) {
      param_1 = uVar4;
    }
    if (param_1 < uVar7) {
      param_1 = uVar7;
    }
    if (0xb < param_1) {
      param_1 = 0xc;
    }
    if (param_1 < 5) {
      param_1 = 5;
    }
    return param_1;
  }
  uVar1 = FUN_01b847a8(param_7,param_3);
  uVar6 = 0x20 - LZCOUNT(uVar1);
  uVar7 = uVar6;
  uVar4 = 0xfffffffe;
  local_30 = param_1;
  do {
    if (param_1 < uVar7) {
      return local_30;
    }
    uVar2 = FUN_01b84024(param_6,param_7,param_3,uVar7,param_4,param_5);
    if (uVar2 < 0xffffff89) {
      if (uVar2 < uVar6) {
        uVar5 = uVar6;
      }
      else {
        uVar5 = uVar2;
      }
      if (uVar5 < uVar7) {
        return local_30;
      }
      uVar2 = FUN_01b83ae8(param_4 + 0x2ec,param_5 + -0x2ec,param_6,param_3,uVar2,param_4,param_5);
      if (0xffffff88 < uVar2) goto LAB_01b848d8;
      iVar3 = FUN_01b846ac(param_6,param_7,param_3);
      uVar2 = iVar3 + uVar2;
      if (uVar4 + 1 < uVar2) {
        return local_30;
      }
      if (uVar4 <= uVar2) goto LAB_01b848d8;
      local_30 = uVar7;
    }
    else {
LAB_01b848d8:
      uVar2 = uVar4;
    }
    uVar7 = uVar7 + 1;
    uVar4 = uVar2;
  } while( true );
}

