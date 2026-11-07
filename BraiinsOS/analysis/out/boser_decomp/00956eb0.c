// FUN_00956eb0 @ 00956eb0 size=208 calls_out=5 calls_in=9
// strings: 

void FUN_00956eb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_9f0;
  int local_9ec;
  int local_9e4;
  int local_2c;
  
  iVar1 = param_2[8];
  if (iVar1 != 0) {
    uVar7 = *param_3;
    uVar8 = param_3[1];
    FUN_01ad4d04(&local_9f0,iVar1,param_2[9],uVar8,param_3[2]);
    if (local_9f0 != 1) {
      FUN_01ad9dfc(local_9e4 * 0x9d0 + local_9ec,param_4);
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar5 = param_2[3];
      uVar4 = param_2[4];
      uVar6 = param_2[5];
      *param_1 = *param_2;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar5;
      param_1[4] = uVar4;
      param_1[5] = uVar6;
      uVar2 = param_2[7];
      uVar3 = param_2[8];
      uVar5 = param_2[9];
      uVar4 = param_2[10];
      uVar6 = param_2[0xb];
      param_1[6] = param_2[6];
      param_1[7] = uVar2;
      param_1[8] = uVar3;
      param_1[9] = uVar5;
      param_1[10] = uVar4;
      param_1[0xb] = uVar6;
      FUN_019bb7e0(uVar7,uVar8);
      return;
    }
  }
  FUN_01ad8e94(&local_9f0,param_2 + 8,param_3,param_4);
  if (local_2c != -0x7fffffff) {
    FUN_00956fac(&local_9f0);
  }
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar5;
  return;
}

