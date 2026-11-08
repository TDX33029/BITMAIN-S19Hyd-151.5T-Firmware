// FUN_01480278 @ 01480278 size=84 calls_out=1 calls_in=0
// strings: 

void FUN_01480278(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 0x22c) != -0x80000000) && (*(int *)(param_2 + 0x234) == 2)) {
    if (**(short **)(param_2 + 0x230) == 0x3268) {
      FUN_010cbb88(param_1,*(undefined4 *)(param_2 + 0xc));
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  FUN_010cbb88(param_1,*(undefined4 *)(param_2 + 0xc));
  return;
}

