// FUN_0079acbc @ 0079acbc size=64 calls_out=2 calls_in=2
// strings: 

void FUN_0079acbc(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  puVar3 = *(undefined4 **)(param_1 + 0x54);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  FUN_01431b40(param_1);
  return;
}

