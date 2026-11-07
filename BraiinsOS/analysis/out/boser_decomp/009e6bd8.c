// FUN_009e6bd8 @ 009e6bd8 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_009e6bd8(int param_1)

{
  char local_10 [8];
  
  if (*(char *)(param_1 + 0x124) != '\0') {
    return;
  }
  FUN_019ac798(local_10,*(undefined4 *)(param_1 + 0x11c),*(undefined4 *)(param_1 + 0x120));
  if (local_10[0] != '\x04') {
    FUN_018248cc(local_10);
  }
  return;
}

