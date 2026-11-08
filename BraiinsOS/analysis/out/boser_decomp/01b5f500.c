// FUN_01b5f500 @ 01b5f500 size=224 calls_out=4 calls_in=0
// strings: 

bool FUN_01b5f500(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_60 [60];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b54f18(auStack_60,param_2,&PTR_01d3b2b0,0);
  iVar1 = FUN_01b5ebb0(param_2,param_3,param_4,0x40,0,0,auStack_60,param_1,1);
  FUN_01b6b174(auStack_60,0x20);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar1 == 0;
}

