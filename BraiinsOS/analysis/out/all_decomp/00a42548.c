// FUN_00a42548 @ 00a42548 size=104 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00a42548(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar1 = uVar2;
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00a954c0(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0186cb4c,puVar1);
}

