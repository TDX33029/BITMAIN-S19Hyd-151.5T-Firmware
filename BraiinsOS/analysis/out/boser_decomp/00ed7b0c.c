// FUN_00ed7b0c @ 00ed7b0c size=88 calls_out=3 calls_in=1
// strings: 

void FUN_00ed7b0c(uint *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 7) == 4) {
    return;
  }
  if (*param_1 == 3) {
    uVar1 = param_1[3];
    FUN_00b15844(uVar1,param_1[4]);
    FUN_0132b958(param_1[2],uVar1,8,0x1b0);
    return;
  }
  FUN_005f6588(param_1);
  return;
}

