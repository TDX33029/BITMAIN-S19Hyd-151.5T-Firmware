// FUN_00067b0c @ 00067b0c  size=36  callers=1
// program: bmminer


int FUN_00067b0c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_00067b30();
    return iVar1;
  }
  iVar1 = FUN_00067b30(param_1,param_2 ^ 0x80000000,param_3,param_4,param_4);
  return -iVar1;
}

