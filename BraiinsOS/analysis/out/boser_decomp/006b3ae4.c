// FUN_006b3ae4 @ 006b3ae4 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_006b3ae4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0x10); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 8),iVar2,4,0xc);
  return;
}

