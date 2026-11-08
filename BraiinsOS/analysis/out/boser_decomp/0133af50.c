// FUN_0133af50 @ 0133af50 size=92 calls_out=4 calls_in=2
// strings: 

void FUN_0133af50(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc0);
  puVar3 = *(undefined4 **)(param_1 + 0xc4);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  FUN_0133b004(param_1 + 0xcc);
  if (*(int *)(param_1 + 0xb0) != 2) {
    FUN_016a235c(param_1);
  }
  thunk_FUN_01be4678(param_1);
  return;
}

