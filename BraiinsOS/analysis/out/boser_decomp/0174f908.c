// FUN_0174f908 @ 0174f908 size=128 calls_out=6 calls_in=4
// strings: 

void FUN_0174f908(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x270) == -0x7fffffd7) {
    puVar3 = *(undefined4 **)(param_1 + 0x278);
    uVar2 = *(undefined4 *)(param_1 + 0x274);
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(uVar2);
    }
  }
  else {
    FUN_0183ab04();
  }
  FUN_0174fa20(param_1);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264),4,0x14);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a4));
  FUN_016f940c(param_1 + 0x2b0);
  return;
}

