// FUN_01b7baf0 @ 01b7baf0 size=148 calls_out=5 calls_in=1
// strings: 

int FUN_01b7baf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b7b850(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_01b7b47c(iVar1);
    if (iVar2 == 0) {
      FUN_01b7dc98(iVar1);
      FUN_01b7b4a4(iVar1);
    }
    else {
      FUN_01b7bc08(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

