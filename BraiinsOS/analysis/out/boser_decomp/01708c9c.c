// FUN_01708c9c @ 01708c9c size=112 calls_out=1 calls_in=0
// strings: 

void FUN_01708c9c(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      puVar4 = (undefined4 *)param_1[2];
      iVar3 = param_1[1];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar3);
      }
      iVar1 = puVar4[1];
    }
    else {
      iVar3 = param_1[1];
      puVar4 = (undefined4 *)param_1[2];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar3);
      }
      iVar1 = puVar4[1];
    }
    if (iVar1 != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

