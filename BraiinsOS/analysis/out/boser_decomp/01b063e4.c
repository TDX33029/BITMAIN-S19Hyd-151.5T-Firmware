// FUN_01b063e4 @ 01b063e4 size=88 calls_out=2 calls_in=2
// strings: 

bool FUN_01b063e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0) || (iVar1 = FUN_01b3b258(iVar2), iVar1 == 0)) {
    return true;
  }
  iVar2 = FUN_01b3b278(iVar2);
  return iVar2 == 0;
}

