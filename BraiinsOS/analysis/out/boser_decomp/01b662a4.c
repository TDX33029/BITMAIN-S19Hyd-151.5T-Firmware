// FUN_01b662a4 @ 01b662a4 size=256 calls_out=4 calls_in=3
// strings: 

undefined8
FUN_01b662a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined1 auStack_108 [220];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01b658c8(auStack_108,&PTR_01d3b2b0,param_3,0);
  FUN_01b65f8c(auStack_108,param_2,param_3);
  FUN_01b65f8c(auStack_108,param_4,param_5);
  if (param_7 != 0) {
    FUN_01b65f8c(auStack_108,param_6,param_7);
  }
  if (param_9 != 0) {
    FUN_01b65f8c(auStack_108,param_8,param_9);
  }
  FUN_01b66288(param_1,auStack_108);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

