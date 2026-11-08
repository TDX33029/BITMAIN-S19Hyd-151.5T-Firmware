// FUN_0098f348 @ 0098f348 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_0098f348(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[3];
  if (uVar2 == uVar1) {
    FUN_00aa2a4c(param_1);
    uVar1 = *param_1;
    uVar2 = param_1[3];
  }
  uVar3 = param_1[2] + uVar2;
  param_1[3] = uVar2 + 1;
  uVar2 = uVar3 - uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  puVar4 = (undefined4 *)(param_1[1] + uVar2 * 8);
  *puVar4 = param_2;
  puVar4[1] = &DAT_01868cb8;
  return;
}

