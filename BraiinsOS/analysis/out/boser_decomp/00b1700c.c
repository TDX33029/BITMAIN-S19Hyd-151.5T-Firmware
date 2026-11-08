// FUN_00b1700c @ 00b1700c size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00b1700c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 0x10);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar1[-4],puVar1[-3]);
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 0xb;
  }
  FUN_0132b958(*param_1,iVar2,4,0x2c);
  return;
}

