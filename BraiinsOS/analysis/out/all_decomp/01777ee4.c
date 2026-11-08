// FUN_01777ee4 @ 01777ee4 size=188 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01777ee4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  iVar1 = FUN_0174bccc(auStack_3c,0x20,&PTR_018bc3f4,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  FUN_01777d3c(param_1,param_2,auStack_3c);
  FUN_0177aaa0(auStack_3c,0x20);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 1;
}

