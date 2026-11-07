// FUN_01704dfc @ 01704dfc size=84 calls_out=5 calls_in=1
// strings: 

void FUN_01704dfc(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 7) == 3) {
    FUN_01702f28(param_1[2]);
    return;
  }
  if (*param_1 == 4) {
    return;
  }
  FUN_0071227c(param_1);
  FUN_017ce5f0(param_1[0x12],param_1[0x13]);
  uVar1 = param_1[0x14];
  FUN_019bb7e0(*(undefined4 *)(uVar1 + 0x10),*(undefined4 *)(uVar1 + 0x14));
  thunk_FUN_01be4678(uVar1);
  return;
}

