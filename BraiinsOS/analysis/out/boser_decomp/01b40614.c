// FUN_01b40614 @ 01b40614 size=308 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b40614(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b2835c(auStack_ec,param_3,&PTR_01d3b2b0,0);
  FUN_01b2835c(auStack_cc,param_3 + 0x44);
  FUN_01b2835c(auStack_ac,param_3 + 0x88);
  FUN_01b2835c(auStack_8c,param_4);
  FUN_01b2835c(auStack_6c,param_4 + 0x44);
  FUN_01b2835c(auStack_4c,param_4 + 0x88);
  FUN_01b40584(auStack_ec,auStack_cc,auStack_ac,auStack_ec,auStack_cc,auStack_ac,0,auStack_8c,
               auStack_6c,auStack_4c);
  FUN_01b28344(param_2,auStack_ec);
  FUN_01b28344(param_2 + 0x44,auStack_cc);
  FUN_01b28344(param_2 + 0x88,auStack_ac);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

