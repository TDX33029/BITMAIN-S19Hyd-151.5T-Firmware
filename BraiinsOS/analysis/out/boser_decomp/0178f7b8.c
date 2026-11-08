// FUN_0178f7b8 @ 0178f7b8 size=196 calls_out=4 calls_in=0
// strings: 

void FUN_0178f7b8(uint *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint local_20;
  uint local_1c;
  
  if (*(byte *)(param_2 + 0x248) < 2) {
    FUN_018e0ad8(param_2);
    *(byte *)(param_2 + 0x248) = *(byte *)(param_2 + 0x248) | 2;
  }
  piVar1 = (int *)(param_2 + 0x118);
  while( true ) {
    if (*(int *)(param_2 + 0x74) == 0) {
      if (*piVar1 == 2) {
        FUN_019dfbc4(param_1,*(undefined4 *)(param_2 + 0x128));
        return;
      }
      FUN_01780c00(param_1,piVar1,param_3);
      return;
    }
    FUN_0177fea8(&local_20,piVar1,param_2,param_3);
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

