// FUN_015e9264 @ 015e9264 size=92 calls_out=4 calls_in=1
// strings: 

void FUN_015e9264(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0x10); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 5;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),iVar2,4,0x14);
  FUN_015d0780(param_1 + 0x14);
  FUN_015c64d0(param_1 + 0x20);
  FUN_015c64d0(param_1 + 0x2c);
  return;
}

