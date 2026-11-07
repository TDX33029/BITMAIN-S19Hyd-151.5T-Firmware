// FUN_00fd6614 @ 00fd6614 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_00fd6614(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_01aae24c((int *)(param_1 + 0x10));
  return;
}

