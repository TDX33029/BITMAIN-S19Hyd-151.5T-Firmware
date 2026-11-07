// FUN_016ce364 @ 016ce364 size=104 calls_out=3 calls_in=5
// strings: 

void FUN_016ce364(undefined4 param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09c88);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  local_18 = 0;
  local_14 = 0;
  FUN_01691d3c(param_1,param_2 + 0x24,&local_18);
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  return;
}

