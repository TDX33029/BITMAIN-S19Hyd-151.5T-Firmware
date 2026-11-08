// FUN_01aa0e94 @ 01aa0e94 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_01aa0e94(int param_1)

{
  int iVar1;
  uint local_78 [26];
  
  while (FUN_01a9e54c(local_78,param_1 + 0x50,param_1), (local_78[0] & 6) != 4) {
    FUN_01a9e910(local_78);
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x684);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

