// FUN_016dcee8 @ 016dcee8 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_016dcee8(int param_1,uint param_2,uint param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (param_3 < param_2) {
    if (-0x41 < *(char *)(param_1 + param_3)) {
      return;
    }
  }
  else if (param_3 == param_2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(param_1,param_2,0,param_3,&DAT_01d09f68);
}

