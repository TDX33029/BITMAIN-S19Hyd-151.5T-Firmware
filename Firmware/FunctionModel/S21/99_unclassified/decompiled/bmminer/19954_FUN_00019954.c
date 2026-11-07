// FUN_00019954 @ 00019954  size=76  callers=2
// program: bmminer


int FUN_00019954(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0002a594();
  if (iVar1 != 0) {
    iVar1 = FUN_00017628(param_1,1,param_2);
    return iVar1;
  }
  iVar1 = FUN_000197a0(param_1,param_2);
  if (iVar1 == 0xff) {
    return 0xff;
  }
  return (int)(short)((short)iVar1 + 10);
}

