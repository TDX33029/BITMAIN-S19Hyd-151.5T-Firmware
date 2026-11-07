// FUN_01773c38 @ 01773c38 size=268 calls_out=4 calls_in=3
// strings: 

undefined8
FUN_01773c38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined1 auStack_f8 [220];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_01771398(auStack_f8);
  FUN_01773288(auStack_f8,param_2,param_3);
  FUN_01773288(auStack_f8,param_4,param_5);
  if (param_7 != 0) {
    FUN_01773288(auStack_f8,param_6,param_7);
  }
  if (param_9 != 0) {
    FUN_01773288(auStack_f8,param_8,param_9);
  }
  FUN_017736bc(param_1,auStack_f8);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

