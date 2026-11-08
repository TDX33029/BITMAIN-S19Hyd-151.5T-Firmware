// FUN_01b5a1d8 @ 01b5a1d8 size=108 calls_out=2 calls_in=0
// strings: 

bool FUN_01b5a1d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_01b4d3a0(iVar2);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_01b5a154(iVar2 + 0x5c,param_2,param_3);
  return iVar1 != 0;
}

