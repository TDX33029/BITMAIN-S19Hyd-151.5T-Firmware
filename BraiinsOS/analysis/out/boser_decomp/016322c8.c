// FUN_016322c8 @ 016322c8 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_016322c8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 4);
  do {
    uVar1 = (uint)*(byte *)(puVar3 + -1);
    iVar2 = uVar1 - 2;
    if (uVar1 < 2 || iVar2 == 0) {
      iVar2 = 0;
    }
    if ((10 < iVar2 - 2U) && ((iVar2 != 0 || (1 < uVar1)))) {
      FUN_0134bd64(*puVar3,puVar3[1]);
    }
    puVar3 = puVar3 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

