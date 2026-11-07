// FUN_0171485c @ 0171485c size=164 calls_out=3 calls_in=6
// strings: 

int FUN_0171485c(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_017141d0();
  if (iVar1 != 0) {
    iVar2 = FUN_017147ac(iVar1,param_1);
    if (iVar2 != 0) {
      return iVar1;
    }
    FUN_017046e0(iVar1);
  }
  return 0;
}

