// FUN_01601f1c @ 01601f1c size=112 calls_out=2 calls_in=0
// strings: 

void FUN_01601f1c(undefined4 param_1)

{
  int iVar1;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_01601d5c(local_24,param_1);
    if (local_24[0] == 0) break;
    iVar1 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 8));
    }
    if (*(int *)(iVar1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0x8c));
    }
  }
  return;
}

