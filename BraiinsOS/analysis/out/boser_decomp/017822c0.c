// FUN_017822c0 @ 017822c0 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_017822c0(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint local_20;
  uint local_1c;
  
  while( true ) {
    if (*(int *)(param_3 + 0x74) == 0) {
      FUN_01780518(param_1,param_2,param_4);
      return;
    }
    FUN_0177fea8(&local_20,param_2,param_3,param_4);
    if ((char)local_20 == '\x05') break;
    if ((local_20 & 0xff) != 4) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      return;
    }
  }
  *(undefined1 *)param_1 = 5;
  return;
}

