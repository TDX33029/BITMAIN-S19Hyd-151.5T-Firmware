// FUN_00b1c430 @ 00b1c430 size=264 calls_out=2 calls_in=6
// strings: 

int FUN_00b1c430(int param_1,int param_2,int param_3,uint param_4)

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
    param_1 = FUN_00b1c430(param_1,param_1 + param_4 * 0xa0,param_4 * 0x118 + param_1,param_4);
    param_2 = FUN_00b1c430(param_2,param_2 + param_4 * 0xa0,param_4 * 0x118 + param_2,param_4);
    param_3 = FUN_00b1c430(param_3,param_3 + param_4 * 0xa0,param_4 * 0x118 + param_3,param_4);
  }
  uVar6 = *(uint *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar1 = uVar6;
  if (uVar5 < uVar6) {
    uVar1 = uVar5;
  }
  uVar1 = FUN_01bed842(uVar4,uVar3,uVar1);
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = *(uint *)(param_3 + 8);
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

