// FUN_012a34d4 @ 012a34d4 size=76 calls_out=1 calls_in=3
// strings: 

void FUN_012a34d4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134aee0(puVar1[-1],*puVar1,4,4);
    puVar1 = puVar1 + 5;
  }
  FUN_0134aee0(*param_1,iVar2,4,0x14);
  return;
}

