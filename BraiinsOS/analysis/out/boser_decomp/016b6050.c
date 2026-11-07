// FUN_016b6050 @ 016b6050 size=96 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016b6050(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
    if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,param_2,&DAT_01d08bd8);
    }
    if (*(char *)(param_1 + uVar2) != '\n') {
      if (*(char *)(param_1 + uVar2) != '\r') {
        return 0;
      }
      if (param_2 <= param_3) {
        return 1;
      }
      uVar1 = 0;
      if (*(char *)(param_1 + param_3) != '\n') {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

