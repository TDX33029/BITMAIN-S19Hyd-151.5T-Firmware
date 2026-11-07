// FUN_01b4098c @ 01b4098c size=244 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_01b4098c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_e4 [32];
  undefined1 auStack_c4 [32];
  undefined1 auStack_a4 [32];
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined1 auStack_44 [32];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b2835c(auStack_84,param_3,&PTR_01d3b2b0,0);
  FUN_01b2835c(auStack_64,param_3 + 0x44);
  FUN_01b2835c(auStack_44,param_3 + 0x88);
  uVar1 = FUN_01b40538();
  FUN_01b3e0b8(uVar1,auStack_e4,auStack_c4,auStack_a4,auStack_84,auStack_64,auStack_44,param_4);
  FUN_01b28344(param_2,auStack_e4);
  FUN_01b28344(param_2 + 0x44,auStack_c4);
  FUN_01b28344(param_2 + 0x88,auStack_a4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

