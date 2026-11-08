// FUN_01b407c4 @ 01b407c4 size=240 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b407c4(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_7c [32];
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [32];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b2835c(auStack_7c,param_3,&PTR_01d3b2b0,0);
  FUN_01b2835c(auStack_5c,param_3 + 0x44);
  FUN_01b2835c(auStack_3c,param_3 + 0x88);
  FUN_01b40754(auStack_7c,auStack_5c,auStack_3c,auStack_7c,auStack_5c,auStack_3c);
  FUN_01b28344(param_2,auStack_7c);
  FUN_01b28344(param_2 + 0x44,auStack_5c);
  FUN_01b28344(param_2 + 0x88,auStack_3c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

