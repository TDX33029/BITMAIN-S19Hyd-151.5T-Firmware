// FUN_01717d9c @ 01717d9c size=180 calls_out=3 calls_in=2
// strings: 

void FUN_01717d9c(undefined4 param_1,int param_2)

{
  int local_2c;
  int *local_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  
  local_14 = DAT_018ddaf8;
  local_2c = param_2;
  FUN_01714208();
  local_28 = &local_2c;
  uStack_24 = (uint)(local_2c != 0);
  local_20 = 1;
  local_18 = 2;
  FUN_01715760(param_1,&local_28);
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return;
}

