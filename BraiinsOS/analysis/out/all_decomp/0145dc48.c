// FUN_0145dc48 @ 0145dc48 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_0145dc48(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 400) == '\0') {
    FUN_0145cd58(param_1 + 0x98);
    FUN_0145d4a8(param_1);
    return;
  }
  if (*(char *)(param_1 + 400) != '\x03') {
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18c);
  uVar2 = *(undefined4 *)(param_1 + 0x188);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  FUN_0145cd58(param_1 + 0x98);
  return;
}

