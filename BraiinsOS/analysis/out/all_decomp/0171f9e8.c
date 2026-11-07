// FUN_0171f9e8 @ 0171f9e8 size=304 calls_out=8 calls_in=1
// strings: 

bool FUN_0171f9e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_28;
  int local_24;
  
  local_24 = DAT_018ddaf8;
  FUN_017185b4(param_4,param_2,&PTR_018bc3f4,0);
  iVar1 = FUN_017186b0(param_4);
  if ((((iVar1 == 0) || (iVar2 = FUN_0171d5cc(param_1,param_2,param_3,param_4), iVar2 == 0)) ||
      (iVar2 = FUN_0171f374(iVar1,&local_28,param_2,param_3,param_4), iVar2 == 0)) ||
     (iVar1 = FUN_0171b1c8(param_1,0,param_1,iVar1,0,param_4), iVar1 == 0)) {
    bVar3 = false;
  }
  else {
    iVar1 = FUN_0171f16c(param_1,param_1,local_28,param_4);
    bVar3 = iVar1 != 0;
  }
  FUN_01718904(param_4);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return bVar3;
}

