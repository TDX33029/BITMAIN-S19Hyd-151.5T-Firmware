// FUN_013387b0 @ 013387b0 size=76 calls_out=1 calls_in=6
// strings: 

void FUN_013387b0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = param_1[2];
  if (iVar6 == *param_1) {
    FUN_0133e324(param_1);
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar6 * 0x28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar5 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  puVar1[9] = uVar5;
  param_1[2] = iVar6 + 1;
  return;
}

