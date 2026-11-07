// FUN_0140132c @ 0140132c size=80 calls_out=2 calls_in=1
// strings: 

void FUN_0140132c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar3 = param_1[1];
  puVar2 = (undefined4 *)(iVar3 + 4);
  for (iVar4 = param_1[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 3;
  }
  FUN_0134c054(iVar1,iVar3,4,0xc);
  return;
}

