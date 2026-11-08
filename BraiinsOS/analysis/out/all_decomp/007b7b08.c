// FUN_007b7b08 @ 007b7b08 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_007b7b08(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (*(int *)(param_2 + 0xb4) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0xb8));
  }
  *(undefined4 *)(param_2 + 0xb4) = 1;
  *(undefined4 *)(param_2 + 0xbc) = 1;
  *(undefined4 **)(param_2 + 0xb8) = puVar1;
  FUN_016dd1aa(param_1,param_2,0x134);
  return;
}

