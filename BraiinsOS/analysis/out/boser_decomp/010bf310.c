// FUN_010bf310 @ 010bf310 size=88 calls_out=2 calls_in=3
// strings: 

void FUN_010bf310(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  iVar2 = param_1[9];
  puVar1 = (undefined4 *)(iVar2 + 0x20);
  for (iVar3 = param_1[10]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_019bb7e0(*puVar1,puVar1[1]);
    puVar1 = puVar1 + 0xc;
  }
  FUN_0132b958(param_1[8],iVar2,8,0x30);
  return;
}

