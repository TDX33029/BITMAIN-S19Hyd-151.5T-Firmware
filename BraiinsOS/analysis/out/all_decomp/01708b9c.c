// FUN_01708b9c @ 01708b9c size=180 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01708b9c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_ac [76];
  undefined1 auStack_60 [76];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  FUN_017015e8(auStack_ac,param_3,&PTR_018bc3f4,0);
  FUN_016ffb08(auStack_60,auStack_ac);
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_01700d60(param_2,auStack_60);
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

