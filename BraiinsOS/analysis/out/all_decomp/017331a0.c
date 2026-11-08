// FUN_017331a0 @ 017331a0 size=104 calls_out=1 calls_in=1
// strings: 

bool FUN_017331a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xec) << 2;
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_016dd50a(param_2,param_3,iVar1);
  return iVar1 == 0;
}

