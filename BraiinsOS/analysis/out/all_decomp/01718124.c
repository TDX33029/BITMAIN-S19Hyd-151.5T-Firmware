// FUN_01718124 @ 01718124 size=88 calls_out=1 calls_in=10
// strings: 

bool FUN_01718124(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_01717ce4(param_1,1);
    return iVar1 != 0;
  }
  return false;
}

