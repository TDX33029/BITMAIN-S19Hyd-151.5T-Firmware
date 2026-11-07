// FUN_019b75c8 @ 019b75c8 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_019b75c8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *puVar3;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)(param_1[1] + 0x10);
    iVar2 = uVar1 * -0x55555555;
    uVar1 = uVar1 / 0x18;
    do {
      if (puVar3[-4] != 0) {
        thunk_FUN_01be4678(puVar3[-3],iVar2);
        iVar2 = extraout_r1;
      }
      if (puVar3[-1] != 0) {
        thunk_FUN_01be4678(*puVar3,iVar2);
        iVar2 = extraout_r1_00;
      }
      puVar3 = puVar3 + 6;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_01be4678(*param_1);
  return;
}

