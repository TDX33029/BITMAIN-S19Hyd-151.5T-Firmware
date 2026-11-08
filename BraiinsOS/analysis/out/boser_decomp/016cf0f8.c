// FUN_016cf0f8 @ 016cf0f8 size=116 calls_out=3 calls_in=4
// strings: 

void FUN_016cf0f8(undefined4 param_1,int param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09cb8);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  local_c = 0;
  uStack_14 = 0;
  uStack_10 = 4;
  local_18 = 6;
  FUN_01691d3c(param_1,param_2 + 0x24,&local_18);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

