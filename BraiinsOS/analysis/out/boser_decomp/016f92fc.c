// FUN_016f92fc @ 016f92fc size=220 calls_out=7 calls_in=3
// strings: 

void FUN_016f92fc(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  puVar4 = *(undefined4 **)(param_1 + 0xc);
  pcVar1 = (code *)*puVar4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  FUN_01443048(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x21c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220));
  }
  FUN_016f9430(param_1 + 0x228);
  FUN_016f940c(param_1 + 0x1d8);
  FUN_016f940c(param_1 + 500);
  if (*(int *)(param_1 + 0x234) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238));
  }
  if (*(int *)(param_1 + 0x90) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  FUN_016f9508(param_1 + 0x80);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    do {
      *(undefined1 *)(param_1 + 0x3c + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x40);
  }
  FUN_01824bec(param_1 + 0x9c);
  FUN_01824bec(param_1 + 0x134);
  return;
}

