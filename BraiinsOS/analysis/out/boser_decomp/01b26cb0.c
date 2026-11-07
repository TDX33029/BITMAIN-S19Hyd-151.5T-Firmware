// FUN_01b26cb0 @ 01b26cb0 size=344 calls_out=2 calls_in=3
// strings: 

undefined4
FUN_01b26cb0(code *param_1,undefined4 param_2,int param_3,uint *param_4,int *param_5,uint *param_6,
            int param_7,uint param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_8 == 0) {
    return 0;
  }
  uVar3 = *param_6;
  if (CARRY4(uVar3,param_8 * 8)) {
    *param_5 = *param_5 + 1;
  }
  *param_5 = *param_5 + (param_8 >> 0x1d);
  *param_6 = uVar3 + param_8 * 8;
  uVar3 = *param_4;
  if (uVar3 == 0) {
    if (param_8 < 0x40) goto LAB_01b26d90;
LAB_01b26de8:
    uVar3 = param_8 >> 6;
    iVar2 = param_7 + uVar3 * 0x40;
    param_8 = param_8 & 0x3f;
    (*param_1)(param_2,param_7,uVar3);
  }
  else {
    if ((param_8 + uVar3 | param_8) < 0x40) {
      FUN_01b26974(param_3 + uVar3,param_7,param_8);
      *param_4 = *param_4 + param_8;
      return 0;
    }
    FUN_01b26974(param_3 + uVar3,param_7,0x40 - uVar3);
    (*param_1)(param_2,param_3,1);
    param_8 = param_8 + (uVar3 - 0x40);
    *param_4 = 0;
    param_7 = param_7 + (0x40 - uVar3);
    FUN_01b257dc(param_3,0,0x40);
    iVar2 = param_7;
    if (0x3f < param_8) goto LAB_01b26de8;
  }
  param_7 = iVar2;
  if (param_8 == 0) {
    return 0;
  }
LAB_01b26d90:
  *param_4 = param_8;
  uVar1 = FUN_01b26974(param_3,param_7,param_8);
  return uVar1;
}

