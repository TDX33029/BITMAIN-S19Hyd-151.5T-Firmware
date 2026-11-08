// FUN_0004ad64 @ 0004ad64  size=36  callers=7
// program: cgminer


int FUN_0004ad64(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_0004ad88();
    return iVar1;
  }
  iVar1 = FUN_0004ad88(param_1,param_2 ^ 0x80000000,param_3,param_4,param_4);
  return -iVar1;
}

