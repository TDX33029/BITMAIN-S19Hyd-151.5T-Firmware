// FUN_01b66134 @ 01b66134 size=200 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01b66134(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_f8 [220];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b657a8(auStack_f8,param_2,&PTR_01d3b2b0,0);
  if ((iVar1 != 0) && (iVar1 = FUN_01b660f4(auStack_f8,param_1,param_2), iVar1 != 0)) {
    FUN_01b65d88(param_3,auStack_f8);
  }
  FUN_01b6b174(auStack_f8,0xd8);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_3;
}

