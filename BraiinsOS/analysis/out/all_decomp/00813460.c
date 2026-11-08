// FUN_00813460 @ 00813460 size=68 calls_out=1 calls_in=3
// strings: 

void FUN_00813460(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1[2];
  if (iVar5 == *param_1) {
    FUN_015f37b0(param_1);
  }
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  param_1[2] = iVar5 + 1;
  puVar2 = (undefined4 *)(param_1[1] + iVar5 * 0xc);
  *puVar2 = uVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  return;
}

