// FUN_01b34a70 @ 01b34a70 size=304 calls_out=8 calls_in=1
// strings: 

bool FUN_01b34a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b2e894(param_4,param_2,&PTR_01d3b2b0,0);
  iVar1 = FUN_01b2e970(param_4);
  if ((((iVar1 == 0) || (iVar2 = FUN_01b32c9c(param_1,param_2,param_3,param_4), iVar2 == 0)) ||
      (iVar2 = FUN_01b34550(iVar1,&local_28,param_2,param_3,param_4), iVar2 == 0)) ||
     (iVar1 = FUN_01b30ff4(param_1,0,param_1,iVar1,0,param_4), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_01b34374(param_1,param_1,local_28,param_4);
    bVar3 = iVar1 != 0;
  }
  FUN_01b2ebbc(param_4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar3;
}

