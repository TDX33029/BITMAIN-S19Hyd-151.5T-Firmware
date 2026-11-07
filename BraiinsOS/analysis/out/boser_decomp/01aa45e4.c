// FUN_01aa45e4 @ 01aa45e4 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_01aa45e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 0x10);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(puVar1[-4],puVar1[-3]);
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 6;
  }
  FUN_0132b958(*param_1,iVar2,4,0x18);
  return;
}

