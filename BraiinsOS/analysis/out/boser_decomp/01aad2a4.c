// FUN_01aad2a4 @ 01aad2a4 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01aad2a4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  puVar3 = (undefined4 *)(iVar1 + 4);
  iVar2 = param_1[1];
  for (iVar4 = iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_0134bd64(puVar3[-1],*puVar3);
    puVar3 = puVar3 + 3;
  }
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

