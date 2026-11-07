// FUN_01773564 @ 01773564 size=204 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01773564(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_f8 [220];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_01771280(auStack_f8,param_2,&PTR_018bc3f4,0);
  if ((iVar1 != 0) && (iVar1 = FUN_01773524(auStack_f8,param_1,param_2), iVar1 != 0)) {
    FUN_01772670(param_3,auStack_f8);
  }
  FUN_0177aaa0(auStack_f8,0xd8);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return param_3;
}

