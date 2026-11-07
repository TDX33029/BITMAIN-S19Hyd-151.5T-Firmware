// FUN_0157cf0c @ 0157cf0c size=68 calls_out=2 calls_in=3
// strings: 

void FUN_0157cf0c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0xc); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 10;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 4),iVar2,4,0x28);
  return;
}

