// FUN_012b9c78 @ 012b9c78 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_012b9c78(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 8);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 6;
  }
  FUN_0134aee0(*param_1,iVar2,8,0x18);
  return;
}

