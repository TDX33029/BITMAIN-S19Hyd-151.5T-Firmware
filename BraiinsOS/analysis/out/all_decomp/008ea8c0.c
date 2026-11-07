// FUN_008ea8c0 @ 008ea8c0 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_008ea8c0(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_00a5bbe4(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
    if (*(int *)(iVar1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x8c));
    }
  }
  return;
}

