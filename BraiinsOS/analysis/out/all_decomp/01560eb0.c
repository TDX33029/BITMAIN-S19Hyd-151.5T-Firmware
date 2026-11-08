// FUN_01560eb0 @ 01560eb0 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_01560eb0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar1 = param_1[3];
  if (uVar1 == uVar2) {
    FUN_01560f34(param_1);
    uVar2 = *param_1;
    uVar1 = param_1[3];
  }
  uVar3 = param_1[2] + uVar1;
  param_1[3] = uVar1 + 1;
  uVar1 = uVar3 - uVar2;
  if (uVar3 < uVar2) {
    uVar1 = uVar3;
  }
  *(undefined4 *)(param_1[1] + uVar1 * 4) = param_2;
  return;
}

