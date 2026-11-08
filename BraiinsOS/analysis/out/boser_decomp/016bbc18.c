// FUN_016bbc18 @ 016bbc18 size=64 calls_out=2 calls_in=1
// strings: 

void FUN_016bbc18(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    puVar1 = puVar2;
    do {
      thunk_FUN_01be4678(*puVar1);
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  FUN_0134aee0(*param_1,puVar2,4,4);
  return;
}

