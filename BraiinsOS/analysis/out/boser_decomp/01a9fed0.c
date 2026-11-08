// FUN_01a9fed0 @ 01a9fed0 size=84 calls_out=1 calls_in=3
// strings: 

void FUN_01a9fed0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = param_2[5];
  if (iVar5 == param_2[3]) {
    FUN_01aa1bc0();
  }
  param_2[5] = iVar5 + 1;
  puVar1 = (undefined4 *)(param_2[4] + iVar5 * 8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar6 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = uVar4;
  param_1[9] = uVar6;
  return;
}

