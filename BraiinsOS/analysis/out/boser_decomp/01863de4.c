// FUN_01863de4 @ 01863de4 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_01863de4(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0xd0);
  puVar3 = *(undefined4 **)(param_1 + 0xd4);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  FUN_0171595c(param_1);
  return;
}

