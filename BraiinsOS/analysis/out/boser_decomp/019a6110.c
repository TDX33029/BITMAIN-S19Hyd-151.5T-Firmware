// FUN_019a6110 @ 019a6110 size=84 calls_out=2 calls_in=3
// strings: 

void FUN_019a6110(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = FUN_01bf0226(param_2);
    if (iVar1 != -1) {
      *param_1 = 4;
      return;
    }
    piVar2 = (int *)FUN_01be3244();
  } while (*piVar2 == 4);
  *(int *)(param_1 + 4) = *piVar2;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

