// FUN_0070e718 @ 0070e718 size=68 calls_out=2 calls_in=4
// strings: 

void FUN_0070e718(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134c054(*param_1,iVar2,4,0xc);
  return;
}

