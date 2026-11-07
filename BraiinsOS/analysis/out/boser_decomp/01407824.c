// FUN_01407824 @ 01407824 size=108 calls_out=3 calls_in=1
// strings: 

void FUN_01407824(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[1];
  uVar1 = param_1[8];
  for (uVar4 = *param_1 & 0xfffffffe; uVar4 != (uVar1 & 0xfffffffe); uVar4 = uVar4 + 2) {
    uVar2 = (uVar4 & 0x3f) >> 1;
    if (uVar2 == 0x1f) {
      uVar2 = *(uint *)(uVar3 + 0x4d8);
      thunk_FUN_01be4678(uVar3);
      uVar3 = uVar2;
    }
    else {
      FUN_01406170(uVar3 + uVar2 * 0x28);
    }
  }
  if (uVar3 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar3);
  return;
}

