// FUN_016a98ac @ 016a98ac size=116 calls_out=3 calls_in=1
// strings: 

void FUN_016a98ac(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01306fc8(&DAT_01d0833c);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    FUN_01a54b48();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

