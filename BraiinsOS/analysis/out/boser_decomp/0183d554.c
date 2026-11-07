// FUN_0183d554 @ 0183d554 size=152 calls_out=7 calls_in=2
// strings: 

void FUN_0183d554(int param_1)

{
  code *pcVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_0183d504();
  if (*(int *)(param_1 + 0x280) == -0x7fffffd7) {
    puVar3 = *(undefined4 **)(param_1 + 0x288);
    uVar2 = *(undefined4 *)(param_1 + 0x284);
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
  FUN_016f92fc(param_1 + 0x10);
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),4,0x14,unaff_r4,
               unaff_r5);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4));
  FUN_016f940c(param_1 + 0x2c0);
  return;
}

