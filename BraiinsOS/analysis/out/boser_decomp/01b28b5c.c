// FUN_01b28b5c @ 01b28b5c size=232 calls_out=6 calls_in=1
// strings: 

int FUN_01b28b5c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_aa0 [1540];
  undefined1 auStack_49c [1152];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b1e434(auStack_aa0,param_1,&PTR_01d3b2b0,0);
  FUN_01b28b28(auStack_aa0);
  FUN_01b1e3e4(auStack_49c,auStack_aa0);
  iVar1 = FUN_01b1db34(param_1,auStack_49c,0x480);
  FUN_01b6b174(auStack_49c,0x480);
  FUN_01b6b174(auStack_aa0,0x600);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return -(uint)(iVar1 != 0);
}

