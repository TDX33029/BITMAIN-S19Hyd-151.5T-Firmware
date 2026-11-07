// FUN_0160eb18 @ 0160eb18 size=104 calls_out=3 calls_in=1
// strings: 

void FUN_0160eb18(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_0160eb30();
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  puVar2 = (undefined4 *)(iVar3 + 4);
  for (iVar4 = *(int *)(param_1 + 0x38); iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 3;
  }
  FUN_0132b958(iVar1,iVar3,4,0xc);
  return;
}

