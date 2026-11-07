// FUN_019b8ba0 @ 019b8ba0 size=112 calls_out=2 calls_in=0
// strings: 

void FUN_019b8ba0(undefined4 param_1)

{
  int iVar1;
  int local_24 [2];
  int local_1c;
  
  while( true ) {
    FUN_019b89ec(local_24,param_1);
    if (local_24[0] == 0) break;
    iVar1 = local_24[0] + local_1c * 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 8));
    }
    if (*(int *)(iVar1 + 0x88) != 0) {
      thunk_FUN_01be4678(*(undefined4 *)(iVar1 + 0x8c));
    }
  }
  return;
}

