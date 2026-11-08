// FUN_01b2e5a4 @ 01b2e5a4 size=88 calls_out=1 calls_in=3
// strings: 

bool FUN_01b2e5a4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_01b2e1dc();
  if (iVar2 == 0) {
    return false;
  }
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc) == 0;
  }
  return bVar1;
}

