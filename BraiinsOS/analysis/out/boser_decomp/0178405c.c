// FUN_0178405c @ 0178405c size=84 calls_out=5 calls_in=1
// strings: 

void FUN_0178405c(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 7) == 3) {
    FUN_00754858(param_1 + 2);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0185c9d4(param_1);
  FUN_017840d8(param_1 + 0x12);
  uVar1 = param_1[0x18];
  FUN_019bb7e0(*(undefined4 *)(uVar1 + 0x10),*(undefined4 *)(uVar1 + 0x14));
  thunk_FUN_01be4678(uVar1);
  return;
}

