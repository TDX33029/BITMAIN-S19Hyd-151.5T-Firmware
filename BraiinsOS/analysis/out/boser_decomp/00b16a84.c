// FUN_00b16a84 @ 00b16a84 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00b16a84(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 0xb4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 0x30;
  }
  FUN_0132b958(*param_1,iVar2,8,0xc0);
  return;
}

