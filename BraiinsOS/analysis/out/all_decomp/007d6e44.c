// FUN_007d6e44 @ 007d6e44 size=76 calls_out=1 calls_in=0
// strings: 

void FUN_007d6e44(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x25) == '\x03') {
    uVar2 = *(undefined4 *)(param_1 + 8);
    puVar3 = *(undefined4 **)(param_1 + 0xc);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}

