// FUN_0192f21c @ 0192f21c size=148 calls_out=2 calls_in=1
// strings: 

void FUN_0192f21c(undefined4 *param_1,undefined4 param_2,int param_3,char param_4,undefined2 param_5
                 )

{
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 == 0) {
    if (param_4 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005238ea,199,&DAT_01d255b0);
    }
    *param_1 = 0x80000029;
    *(undefined2 *)(param_1 + 1) = 0x2b;
  }
  else if (param_4 == '\x01') {
    *(undefined2 *)(param_1 + 1) = param_5;
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = 0x80000029;
  }
  else {
    local_28 = 0x8000001b;
    local_24 = 0x80000003;
    FUN_018f1f40(param_1,param_2,6,&local_28);
  }
  return;
}

