// FUN_019c71c4 @ 019c71c4 size=68 calls_out=2 calls_in=13
// strings: 

void FUN_019c71c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0134bd64(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134aee0(*param_1,iVar2,4,0xc);
  return;
}

