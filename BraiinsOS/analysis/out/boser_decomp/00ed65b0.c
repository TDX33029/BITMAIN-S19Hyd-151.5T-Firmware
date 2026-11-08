// FUN_00ed65b0 @ 00ed65b0 size=88 calls_out=3 calls_in=1
// strings: 

void FUN_00ed65b0(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    uVar1 = param_1[3];
    FUN_00deef1c(uVar1,param_1[4]);
    FUN_0132b958(param_1[2],uVar1,4,0x30);
    return;
  }
  FUN_005f6588(param_1);
  return;
}

