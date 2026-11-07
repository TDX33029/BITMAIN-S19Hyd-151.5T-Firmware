// FUN_01043148 @ 01043148 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_01043148(undefined4 param_1)

{
  int iVar1;
  int local_1c [2];
  int local_14;
  
  while( true ) {
    FUN_01040d3c(local_1c,param_1);
    if (local_1c[0] == 0) break;
    iVar1 = local_1c[0] + local_14 * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
  }
  return;
}

