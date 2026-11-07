// FUN_01631778 @ 01631778 size=44 calls_out=2 calls_in=1
// strings: 

void FUN_01631778(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 0x80000001U & *param_1 >> 0x1f;
  if (uVar1 - 1 < 8) {
    return;
  }
  if (uVar1 == 0) {
    FUN_01630f48();
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

