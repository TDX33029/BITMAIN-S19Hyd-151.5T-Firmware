// FUN_012e211c @ 012e211c size=124 calls_out=3 calls_in=1
// strings: 

void FUN_012e211c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  uVar2 = param_1[8];
  piVar3 = (int *)param_1[1];
  for (uVar4 = *param_1 & 0xfffffffe; uVar4 != (uVar2 & 0xfffffffe); uVar4 = uVar4 + 2) {
    uVar1 = (uVar4 & 0x3f) >> 1;
    if (uVar1 == 0x1f) {
      piVar5 = (int *)*piVar3;
      thunk_FUN_01be4678(piVar3);
      piVar3 = piVar5;
    }
    else {
      FUN_019bb7e0(piVar3[uVar1 * 7 + 1],piVar3[uVar1 * 7 + 2]);
      FUN_019bb7e0(piVar3[uVar1 * 7 + 4],piVar3[uVar1 * 7 + 5]);
    }
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  thunk_FUN_01be4678(piVar3);
  return;
}

