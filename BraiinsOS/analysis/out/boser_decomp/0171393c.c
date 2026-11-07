// FUN_0171393c @ 0171393c size=112 calls_out=2 calls_in=2
// strings: 

void FUN_0171393c(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    iVar2 = param_1[2];
    bVar4 = iVar2 == 0 && param_1[3] == 0;
    if (iVar2 != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
      bVar4 = iVar2 == 0;
    }
    if (!bVar4) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      return;
    }
    iVar2 = param_1[2];
    puVar3 = (undefined4 *)param_1[3];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

