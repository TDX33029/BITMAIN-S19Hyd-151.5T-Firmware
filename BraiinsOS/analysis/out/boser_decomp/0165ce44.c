// FUN_0165ce44 @ 0165ce44 size=80 calls_out=4 calls_in=1
// strings: 

void FUN_0165ce44(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  FUN_01a981f0(param_1);
  if (*(int *)(param_1 + 0x30) != -0x80000000) {
    FUN_0165cbf8();
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),4,0x10);
  iVar2 = *(int *)(param_1 + 0x1c);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0x20); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x18),iVar2,4,0xc);
  return;
}

