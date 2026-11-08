// FUN_0157ca2c @ 0157ca2c size=100 calls_out=6 calls_in=2
// strings: 

void FUN_0157ca2c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0xc); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 9;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 4),iVar2,4,0x24);
  FUN_016bf318(param_1 + 0x10);
  FUN_016bf368(param_1 + 0x20);
  FUN_0157cf0c(param_1 + 0x30);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  return;
}

