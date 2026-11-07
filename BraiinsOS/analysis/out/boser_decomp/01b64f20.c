// FUN_01b64f20 @ 01b64f20 size=188 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_01b64f20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_40 [36];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b54ee4(auStack_40,0x20,&PTR_01d3b2b0,0);
  uVar1 = FUN_01b64e00(param_1,param_2,param_3,auStack_40);
  FUN_01b6b174(auStack_40,0x20);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar1;
}

