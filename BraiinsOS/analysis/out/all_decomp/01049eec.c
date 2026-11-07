// FUN_01049eec @ 01049eec size=128 calls_out=2 calls_in=1
// strings: 

void FUN_01049eec(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  if (*param_1 == 2) {
    return;
  }
  puVar2 = (undefined *)param_1[1];
  if (puVar2 != (undefined *)0x0) {
    if (param_1[5] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    if (param_1[8] != 0) {
      thunk_FUN_016d3fb4(param_1[6]);
    }
    if (puVar2 != &DAT_0041961b) {
      piVar3 = (int *)(puVar2 + -8);
      iVar1 = *piVar3;
      param_1[1] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
        return;
      }
    }
  }
  return;
}

