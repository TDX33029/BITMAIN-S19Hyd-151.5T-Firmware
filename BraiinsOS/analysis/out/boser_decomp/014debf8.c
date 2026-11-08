// FUN_014debf8 @ 014debf8 size=100 calls_out=2 calls_in=4
// strings: 

void FUN_014debf8(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[1];
  if (param_1[3] - (int)piVar1 != 0) {
    uVar2 = (uint)(param_1[3] - (int)piVar1) >> 5;
    do {
      uVar2 = uVar2 - 1;
      if (*piVar1 != -0x7fffffeb) {
        FUN_014ddfc0(piVar1);
      }
      piVar1 = piVar1 + 8;
    } while (uVar2 != 0);
  }
  FUN_0132b958(param_1[2],*param_1,8,0x20);
  return;
}

