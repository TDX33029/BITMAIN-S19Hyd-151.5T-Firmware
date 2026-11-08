// FUN_014455b8 @ 014455b8 size=180 calls_out=3 calls_in=2
// strings: 

void FUN_014455b8(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*param_1 == 0) {
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      param_1 = (int *)param_1[3];
    }
    if (iVar2 != 0 && param_1 != (int *)0x0) {
LAB_0144563c:
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    if (param_1[2] == 0) {
      if (param_1[3] == 0) {
        FUN_0069d8a4((char)param_1[4],param_1[5]);
        return;
      }
      FUN_0134c054(param_1[5],param_1[3],4,0x20);
      return;
    }
    iVar2 = param_1[6];
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)param_1[7];
      pcVar1 = (code *)*puVar3;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(iVar2);
      }
      if (puVar3[1] != 0) goto LAB_0144563c;
    }
  }
  return;
}

