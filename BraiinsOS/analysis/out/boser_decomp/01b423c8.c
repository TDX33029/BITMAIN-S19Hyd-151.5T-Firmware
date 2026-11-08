// FUN_01b423c8 @ 01b423c8 size=220 calls_out=2 calls_in=2
// strings: 

bool FUN_01b423c8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_2 != 0) && (iVar1 = FUN_01b2b33c(param_2,param_1 + 0x118), iVar1 == 0)) ||
     ((param_3 != 0 && (iVar1 = FUN_01b3eaa4(param_1,param_3,param_1 + 0x134), iVar1 == 0)))) {
    return false;
  }
  if (param_4 == 0) {
    return true;
  }
  iVar1 = FUN_01b3eaa4(param_1,param_4,param_1 + 0x178);
  return iVar1 != 0;
}

