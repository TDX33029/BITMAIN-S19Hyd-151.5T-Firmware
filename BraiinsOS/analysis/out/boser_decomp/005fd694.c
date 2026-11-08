// FUN_005fd694 @ 005fd694 size=256 calls_out=2 calls_in=2
// strings: 

undefined4 * FUN_005fd694(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = (undefined4 *)
              FUN_005fd694(param_1,param_1 + param_4 * 0x20,param_1 + param_4 * 0x38,param_4);
    param_2 = (undefined4 *)
              FUN_005fd694(param_2,param_2 + param_4 * 0x20,param_2 + param_4 * 0x38,param_4);
    param_3 = (undefined4 *)
              FUN_005fd694(param_3,param_3 + param_4 * 0x20,param_3 + param_4 * 0x38,param_4);
  }
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = uVar6;
  if (uVar5 < uVar6) {
    uVar1 = uVar5;
  }
  uVar1 = FUN_01bed842(uVar4,uVar3,uVar1);
  uVar7 = *param_3;
  uVar8 = param_3[1];
  if (uVar1 == 0) {
    uVar1 = uVar5 - uVar6;
  }
  uVar2 = uVar8;
  if (uVar5 < uVar8) {
    uVar2 = uVar5;
  }
  uVar2 = FUN_01bed842(uVar4,uVar7,uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar5 - uVar8;
  }
  if (-1 < (int)(uVar2 ^ uVar1)) {
    uVar5 = uVar8;
    if (uVar6 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = FUN_01bed842(uVar3,uVar7,uVar5);
    if (uVar5 == 0) {
      uVar5 = uVar6 - uVar8;
    }
    param_1 = param_2;
    if ((int)(uVar5 ^ uVar1) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

