// FUN_01184e10 @ 01184e10 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_01184e10(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 5 && param_1[1] == 0) {
    return;
  }
  if ((uVar1 & 7) == 3) {
    FUN_01443048(param_1[2],param_1[3]);
    return;
  }
  if (uVar1 == 4) {
    return;
  }
  FUN_01139a3c(param_1);
  FUN_005f6438(param_1[0x12],param_1[0x13]);
  return;
}

