// FUN_0187bc8c @ 0187bc8c size=84 calls_out=3 calls_in=2
// strings: 

void FUN_0187bc8c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_0134c054(*param_1,param_1[1],1,0x12);
  iVar2 = param_1[4];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[5]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(param_1[3],iVar2,4,0xc);
  return;
}

