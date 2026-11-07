// FUN_01b8d6d4 @ 01b8d6d4 size=432 calls_out=4 calls_in=1
// strings: 

undefined1
FUN_01b8d6d4(int *param_1,int param_2,int param_3,uint param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,uint param_9,int param_10,uint param_11)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  if (param_4 == param_5) {
    *param_1 = 0;
    return 2 < param_4 || param_10 == 0;
  }
  if (param_11 < 4) {
    if (param_10 != 0) {
      if (param_5 < 1000 && *param_1 == 2) {
        return 3;
      }
      if ((param_5 < (10 - param_11 << (param_9 & 0xff)) >> 3) ||
         (param_4 < param_5 >> (param_9 - 1 & 0xff))) goto LAB_01b8d7a4;
    }
  }
  else {
    if (param_10 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = FUN_01b8d670(param_8,param_9,param_2,param_3);
    }
    if (*param_1 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = FUN_01b8d5ac(param_7,param_2,param_3);
    }
    iVar1 = FUN_01b8d4c0(param_2,param_3,param_5,param_6);
    piVar8 = (int *)(param_2 + -4);
    uVar4 = 0;
    do {
      piVar8 = piVar8 + 1;
      iVar6 = *piVar8;
      if (iVar6 == 0 || param_5 <= (uint)(iVar6 << 8)) {
        iVar2 = FUN_01bf1250(iVar6 << 8,param_5);
      }
      else {
        iVar2 = 1;
      }
      uVar4 = *(int *)(&DAT_0056296c + iVar2 * 4) * iVar6 + uVar4;
    } while ((int *)(param_2 + param_3 * 4) != piVar8);
    uVar4 = iVar1 * 8 + (uVar4 >> 8);
    if (uVar5 < uVar4) {
      uVar3 = uVar5;
    }
    else {
      uVar3 = uVar4;
    }
    if (uVar7 <= uVar3) {
LAB_01b8d7a4:
      *param_1 = 0;
      return false;
    }
    if (uVar5 <= uVar4) {
      return 3;
    }
  }
  *param_1 = 1;
  return 2;
}

