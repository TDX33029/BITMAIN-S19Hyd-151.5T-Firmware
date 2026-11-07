// FUN_017152ec @ 017152ec size=96 calls_out=2 calls_in=2
// strings: 

void FUN_017152ec(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)(param_1[1] + 4);
    uVar1 = uVar1 / 0xc;
    do {
      if (puVar2[-1] != -0x80000000) {
        FUN_019bb7e0(puVar2[-1],*puVar2);
      }
      puVar2 = puVar2 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  FUN_0134aee0(param_1[2],*param_1,4,0xc);
  return;
}

