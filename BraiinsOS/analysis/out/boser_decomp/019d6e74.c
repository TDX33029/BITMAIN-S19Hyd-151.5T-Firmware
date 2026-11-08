// FUN_019d6e74 @ 019d6e74 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_019d6e74(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 2) {
    return;
  }
  if (uVar1 == 2) {
    if (param_1[6] == 0) {
      return;
    }
    uVar1 = param_1[5];
  }
  else {
    if (uVar1 == 3) {
      FUN_019d6f44(param_1 + 3);
      return;
    }
    uVar1 = param_1[3];
    uVar2 = param_1[4];
    FUN_019d6ef4(uVar1,uVar2);
    if (uVar2 == 0) {
      return;
    }
  }
  thunk_FUN_01be4678(uVar1);
  return;
}

