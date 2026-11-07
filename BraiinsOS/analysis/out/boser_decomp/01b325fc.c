// FUN_01b325fc @ 01b325fc size=96 calls_out=2 calls_in=2
// strings: 

bool FUN_01b325fc(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2b230();
  if (iVar1 == 0) {
    iVar1 = FUN_01b2b09c(param_1,*(undefined4 *)(param_2 + 0x18));
    return iVar1 != 0;
  }
  return false;
}

