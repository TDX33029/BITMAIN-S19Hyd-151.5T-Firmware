// FUN_0167a340 @ 0167a340 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_0167a340(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = *(int *)(param_1 + 0x4c); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*(undefined4 *)(param_1 + 0x44),iVar2,4,0xc);
  FUN_0167a2fc(param_1);
  return;
}

