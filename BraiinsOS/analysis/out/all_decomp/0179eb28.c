// FUN_0179eb28 @ 0179eb28 size=812 calls_out=4 calls_in=2
// strings: 

uint FUN_0179eb28(int *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*param_1 == 0) {
    return 0xffffffc4;
  }
  if (*param_1 == 1) {
    uVar6 = param_6 & 1;
  }
  else {
    uVar6 = 0;
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = FUN_0179841c(param_2,param_3,param_1 + 0x2f,param_4,param_1[0x96] + -1,
                         param_1[0x97] - (uint)(param_1[0x96] == 0),param_1[0x87]);
    if (0xffffff88 < uVar2) {
      return 0xffffffba;
    }
    param_3 = param_3 - uVar2;
    param_2 = param_2 + uVar2;
    *param_1 = 2;
  }
  if (param_5 == 0) {
    return uVar2;
  }
  uVar6 = param_1[0x21a];
  iVar3 = param_1[0x21d];
  if (param_4 == uVar6 && param_1[0x234] == 0) {
    iVar7 = param_1[0x21c];
    uVar6 = param_4 + param_5;
    param_1[0x21a] = uVar6;
    if (param_4 < (uint)(iVar7 + iVar3) && (uint)(iVar7 + param_1[0x21e]) < uVar6) {
      iVar1 = uVar6 - iVar7;
      if (iVar3 <= (int)(uVar6 - iVar7)) {
        iVar1 = iVar3;
      }
      param_1[0x21e] = iVar1;
    }
    goto LAB_0179ec04;
  }
  iVar7 = param_1[0x21b];
  param_1[0x21e] = iVar3;
  iVar1 = uVar6 - iVar7;
  param_1[0x21c] = iVar7;
  param_1[0x21d] = iVar1;
  param_1[0x21b] = param_4 - iVar1;
  if ((uint)(iVar1 - iVar3) < 8) {
    param_1[0x21e] = iVar1;
    param_1[0x21a] = param_4 + param_5;
    if (param_4 < uVar6 && uVar6 < param_4 + param_5) {
LAB_0179ecd4:
      iVar7 = (param_4 + param_5) - iVar7;
      if (iVar1 <= iVar7) {
        iVar7 = iVar1;
      }
      param_1[0x21e] = iVar7;
    }
  }
  else {
    param_1[0x21a] = param_4 + param_5;
    if (param_4 < uVar6 && (uint)(iVar7 + iVar3) < param_4 + param_5) goto LAB_0179ecd4;
  }
  param_1[0x221] = iVar1;
  param_1[0x234] = 0;
LAB_0179ec04:
  uVar6 = param_4 + param_5;
  if (param_1[0x44] == 1) {
    uVar4 = param_1[200];
    iVar3 = param_1[0xcb];
    if (param_4 == uVar4) {
      iVar7 = param_1[0xca];
      uVar4 = iVar7 + iVar3;
      uVar5 = iVar7 + param_1[0xcc];
    }
    else {
      param_1[0xcc] = iVar3;
      iVar7 = param_1[0xc9];
      param_1[0xca] = iVar7;
      iVar1 = uVar4 - iVar7;
      param_1[0xcb] = iVar1;
      param_1[0xc9] = param_4 - iVar1;
      if ((uint)(iVar1 - iVar3) < 8) {
        param_1[0xcc] = iVar1;
        uVar5 = uVar4;
        iVar3 = iVar1;
      }
      else {
        uVar5 = iVar7 + iVar3;
        iVar3 = iVar1;
      }
    }
    param_1[200] = uVar6;
    if (param_4 < uVar4 && uVar5 < uVar6) {
      iVar1 = uVar6 - iVar7;
      if (iVar3 <= (int)(uVar6 - iVar7)) {
        iVar1 = iVar3;
      }
      param_1[0xcc] = iVar1;
    }
  }
  if (param_6 == 0) {
    FUN_01797c1c(param_1 + 0x21a,param_1 + 0x89,param_1 + 0x2f,param_4,uVar6);
    uVar6 = FUN_0179ce18(param_1,param_2,param_3,param_4,param_5,0);
  }
  else {
    uVar6 = FUN_0179ddec(param_1,param_2,param_3,param_4,param_5,param_7);
  }
  if (uVar6 < 0xffffff89) {
    uVar6 = uVar2 + uVar6;
    uVar4 = param_1[0x9a];
    uVar5 = param_5 + param_1[0x98];
    iVar3 = param_1[0x99] + (uint)CARRY4(param_5,param_1[0x98]);
    uVar2 = param_1[0x97];
    param_1[0x9a] = uVar4 + uVar6;
    param_1[0x98] = uVar5;
    param_1[0x99] = iVar3;
    param_1[0x9b] = param_1[0x9b] + (uint)CARRY4(uVar4,uVar6);
    if ((param_1[0x96] != 0 || uVar2 != 0) &&
       (uVar4 = iVar3 + (uint)(0xfffffffe < uVar5),
       uVar2 <= uVar4 && (uint)(uVar5 + 1 <= (uint)param_1[0x96]) <= uVar2 - uVar4)) {
      uVar6 = 0xffffffb8;
    }
  }
  return uVar6;
}

