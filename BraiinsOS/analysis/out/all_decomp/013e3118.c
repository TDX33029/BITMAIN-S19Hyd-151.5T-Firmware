// FUN_013e3118 @ 013e3118 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_013e3118(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  if (iVar5 == *param_1) {
    FUN_01401574(param_1);
  }
  puVar1 = (undefined4 *)(param_1[1] + iVar5 * 0x1c);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  puVar1[3] = param_2[3];
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  param_1[2] = iVar5 + 1;
  return;
}

