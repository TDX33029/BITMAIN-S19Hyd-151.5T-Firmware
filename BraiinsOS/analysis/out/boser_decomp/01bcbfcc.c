// FUN_01bcbfcc @ 01bcbfcc size=140 calls_out=2 calls_in=1
// strings: 

byte FUN_01bcbfcc(undefined4 param_1)

{
  byte local_2c [32];
  int local_c;
  
  local_c = DAT_01d53560;
  FUN_01bc94a0(local_2c,param_1,&PTR_01d3b2b0,0);
  if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_2c[0] & 1;
}

