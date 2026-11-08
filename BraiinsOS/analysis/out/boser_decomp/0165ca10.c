// FUN_0165ca10 @ 0165ca10 size=120 calls_out=8 calls_in=1
// strings: 

void FUN_0165ca10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x60) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  FUN_0165cb1c(param_1);
  FUN_0165cb1c(param_1 + 0xc);
  FUN_0165cb6c(param_1 + 0x18);
  FUN_0165cba8(param_1 + 0x24);
  FUN_01a94878(param_1 + 0x30);
  FUN_01a948c8(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x6c) != -0x80000000) {
    FUN_0165cbf8();
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),4,0x10);
  iVar2 = *(int *)(param_1 + 0x58);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0x5c); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x54),iVar2,4,0xc);
  return;
}

