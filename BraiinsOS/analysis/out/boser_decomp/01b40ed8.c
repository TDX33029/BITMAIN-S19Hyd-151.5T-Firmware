// FUN_01b40ed8 @ 01b40ed8 size=240 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01b40ed8(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_ac [48];
  undefined1 auStack_7c [48];
  undefined1 auStack_4c [48];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01b19bd0(auStack_ac,param_3,&PTR_01d3b2b0,0);
  FUN_01b19bd0(auStack_7c,param_3 + 0x44);
  FUN_01b19bd0(auStack_4c,param_3 + 0x88);
  FUN_01b40e68(auStack_ac,auStack_7c,auStack_4c,auStack_ac,auStack_7c,auStack_4c);
  FUN_01b19a24(param_2,auStack_ac);
  FUN_01b19a24(param_2 + 0x44,auStack_7c);
  FUN_01b19a24(param_2 + 0x88,auStack_4c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

