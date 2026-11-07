// FUN_014d05f4 @ 014d05f4 size=112 calls_out=2 calls_in=2
// strings: 

void FUN_014d05f4(int param_1)

{
  code *pcVar1;
  int unaff_r5;
  undefined4 *puVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x25d) == '\x03') {
    FUN_01434e2c(param_1 + 0x150);
    bVar3 = *(short *)(param_1 + 0x120) != 3;
    if (bVar3) {
      unaff_r5 = *(int *)(param_1 + 0x148);
    }
    if (bVar3 && unaff_r5 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x14c);
      pcVar1 = (code *)*puVar2;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(unaff_r5);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r5);
      }
    }
    *(undefined1 *)(param_1 + 0x25c) = 0;
  }
  return;
}

