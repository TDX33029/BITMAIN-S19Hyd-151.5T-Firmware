// FUN_018bd208 @ 018bd208 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_018bd208(undefined1 *param_1,int param_2)

{
  uint local_80;
  undefined1 auStack_7c [108];
  
  FUN_01897eb4(&local_80,*(int *)(param_2 + 4) + 8);
  if (0x69 < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_80,0x69,&DAT_01d217fc);
  }
  FUN_0193a93c(param_1 + 4,auStack_7c);
  *param_1 = 0x14;
  return;
}

