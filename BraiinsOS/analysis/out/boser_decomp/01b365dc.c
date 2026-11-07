// FUN_01b365dc @ 01b365dc size=188 calls_out=6 calls_in=1
// strings: 

bool FUN_01b365dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_01b2e894(param_4);
  iVar1 = FUN_01b2e970(param_4);
  if (((iVar1 == 0) || (iVar2 = FUN_01b2b33c(iVar1,param_3), iVar2 == 0)) ||
     (iVar2 = FUN_01b2e358(iVar1,2), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_01b35f88(param_1,param_2,iVar1,param_3,param_4,param_5);
    bVar3 = iVar1 != 0;
  }
  FUN_01b2ebbc(param_4);
  return bVar3;
}

