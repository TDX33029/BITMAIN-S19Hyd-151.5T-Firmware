// FUN_01b01e28 @ 01b01e28 size=172 calls_out=5 calls_in=1
// strings: 

bool FUN_01b01e28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_01b2e894(param_5);
  iVar1 = FUN_01b2e970(param_5);
  if ((iVar1 == 0) || (iVar2 = FUN_01b331cc(iVar1,param_2,param_4,param_5), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_01b33010(param_1,iVar1,param_3,param_4,param_5);
    bVar3 = iVar1 != 0;
  }
  FUN_01b2ebbc(param_5);
  return bVar3;
}

