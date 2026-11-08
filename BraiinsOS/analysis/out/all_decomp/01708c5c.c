// FUN_01708c5c @ 01708c5c size=200 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01708c5c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_f8 [76];
  undefined1 auStack_ac [76];
  undefined1 auStack_60 [76];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_017015e8(auStack_f8,param_3,0);
  FUN_017015e8(auStack_ac,param_4);
  FUN_016fe7a8(auStack_60,auStack_f8,auStack_ac);
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_01700d60(param_2,auStack_60);
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

