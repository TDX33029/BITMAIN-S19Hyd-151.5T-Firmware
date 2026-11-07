// FUN_0144ee2c @ 0144ee2c size=56 calls_out=1 calls_in=2
// strings: 

int FUN_0144ee2c(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3f8);
  if (uVar1 < 0xfe) {
    param_1 = param_1 + 4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 4);
    param_1 = *(int *)(param_1 + 8);
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_2,uVar1,uVar1,param_3);
  }
  return param_1 + param_2 * 4;
}

