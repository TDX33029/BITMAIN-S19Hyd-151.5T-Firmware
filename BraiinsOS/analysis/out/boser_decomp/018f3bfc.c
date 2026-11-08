// FUN_018f3bfc @ 018f3bfc size=120 calls_out=3 calls_in=3
// strings: 

void FUN_018f3bfc(undefined4 param_1,int *param_2)

{
  undefined1 auStack_60 [64];
  uint local_20;
  
  local_20 = *(uint *)(*param_2 + 0x48);
  if (0x40 < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_20,0x40,&DAT_01d2571c);
  }
  FUN_01bed93e(auStack_60,0,0x40);
  FUN_01bed4e2(auStack_60,param_2 + 1,local_20);
  FUN_01bed4e2(param_1,auStack_60,0x44);
  return;
}

