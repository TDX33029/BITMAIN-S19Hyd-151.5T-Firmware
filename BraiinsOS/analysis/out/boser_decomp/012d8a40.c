// FUN_012d8a40 @ 012d8a40 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_012d8a40(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[1];
  uVar3 = param_1[8];
  for (uVar4 = *param_1 & 0xfffffffe; uVar4 != (uVar3 & 0xfffffffe); uVar4 = uVar4 + 2) {
    uVar1 = (uVar4 & 0x3f) >> 1;
    if (uVar1 == 0x1f) {
      uVar1 = *(uint *)(uVar5 + 0x2e8);
      thunk_FUN_01be4678(uVar5);
      uVar5 = uVar1;
    }
    else {
      iVar2 = uVar5 + uVar1 * 0x18;
      FUN_019bb7e0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    }
  }
  if (uVar5 != 0) {
    thunk_FUN_01be4678(uVar5);
  }
  FUN_012d8998(param_1 + 0x12);
  return;
}

