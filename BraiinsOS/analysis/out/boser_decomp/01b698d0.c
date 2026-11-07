// FUN_01b698d0 @ 01b698d0 size=188 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_01b698d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  iVar1 = FUN_01b52ea0(auStack_3c,0x20,&PTR_01d3b2b0,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  FUN_01b697d8(param_1,param_2,auStack_3c);
  FUN_01b6b174(auStack_3c,0x20);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 1;
}

