// FUN_01049d28 @ 01049d28 size=448 calls_out=3 calls_in=4
// strings: 

void FUN_01049d28(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  
  puVar2 = (undefined *)param_1[0x17];
  if (puVar2 != (undefined *)0x0) {
    if (param_1[0x1b] != 0) {
      thunk_FUN_016d3fb4(param_1[0x19]);
    }
    if (param_1[0x1e] != 0) {
      thunk_FUN_016d3fb4(param_1[0x1c]);
    }
    if (puVar2 != &DAT_0041961b) {
      piVar3 = (int *)(puVar2 + -8);
      iVar1 = *piVar3;
      param_1[0x17] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
      }
    }
  }
  FUN_01049eec(param_1 + 8);
  piVar3 = (int *)param_1[0x24];
  if (piVar3 != (int *)0x0) {
    if (param_1[0x27] != 0) {
      thunk_FUN_016d3fb4(param_1[0x25]);
    }
    if (param_1[0x2a] != 0) {
      thunk_FUN_016d3fb4(param_1[0x28]);
    }
    if (piVar3 != (int *)&DAT_0041961b) {
      piVar3 = piVar3 + -2;
      iVar1 = *piVar3;
      param_1[0x24] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
      }
    }
  }
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[1];
  }
  if (*param_1 != 0 && piVar3 != (int *)0x0) {
    if (param_1[4] != 0) {
      thunk_FUN_016d3fb4(param_1[2]);
    }
    if (param_1[7] != 0) {
      thunk_FUN_016d3fb4(param_1[5]);
    }
    if (piVar3 != (int *)&DAT_0041961b) {
      piVar3 = piVar3 + -2;
      iVar1 = *piVar3;
      param_1[1] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
      }
    }
  }
  puVar2 = (undefined *)param_1[0x2c];
  if (puVar2 != (undefined *)0x0) {
    if (param_1[0x2f] != 0) {
      thunk_FUN_016d3fb4(param_1[0x2d]);
    }
    if (puVar2 != &DAT_0041961b) {
      piVar3 = (int *)(puVar2 + -8);
      iVar1 = *piVar3;
      param_1[0x2c] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
      }
    }
  }
  puVar2 = (undefined *)param_1[0x33];
  if (puVar2 != (undefined *)0x0) {
    if (param_1[0x37] != 0) {
      thunk_FUN_016d3fb4(param_1[0x35]);
    }
    if (param_1[0x3a] != 0) {
      thunk_FUN_016d3fb4(param_1[0x38]);
    }
    if (puVar2 != &DAT_0041961b) {
      piVar3 = (int *)(puVar2 + -8);
      iVar1 = *piVar3;
      param_1[0x33] = (int)&DAT_0041961b;
      *piVar3 = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_010d4694(piVar3);
        return;
      }
      return;
    }
  }
  return;
}

