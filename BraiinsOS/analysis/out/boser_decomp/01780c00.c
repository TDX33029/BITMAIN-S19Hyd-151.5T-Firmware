// FUN_01780c00 @ 01780c00 size=168 calls_out=3 calls_in=5
// strings: 

void FUN_01780c00(uint *param_1,int param_2,undefined4 param_3)

{
  uint local_20;
  uint local_1c;
  
  if (*(byte *)(param_2 + 0x128) < 2) {
    FUN_018e0ad8(param_2 + 0x10);
    *(byte *)(param_2 + 0x128) = *(byte *)(param_2 + 0x128) | 2;
  }
  while( true ) {
    if (*(int *)(param_2 + 0x84) == 0) {
      FUN_019dfbc4(param_1,*(undefined4 *)(param_2 + 0xc));
      return;
    }
    FUN_0177f8c4(&local_20,param_2,param_2 + 0x10,param_3);
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

