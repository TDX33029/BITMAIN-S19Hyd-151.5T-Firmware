// FUN_008d8520 @ 008d8520 size=172 calls_out=3 calls_in=4
// strings: 

void FUN_008d8520(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_008d8460(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x04') {
      FUN_00a07b4c(param_1 + 0x38);
      goto LAB_008d85a0;
    }
    if (*(char *)(param_1 + 0x30) != '\x03') goto LAB_008d85a0;
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    puVar3 = *(undefined4 **)(param_1 + 0x38);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
  }
  if (puVar3[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
LAB_008d85a0:
  FUN_008d8460(param_1);
  return;
}

