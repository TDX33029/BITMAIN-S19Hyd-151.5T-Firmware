// FUN_01959e64 @ 01959e64 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_01959e64(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  
  FUN_01959dc4(&local_24);
  piVar3 = local_20;
  if (local_1c != 0) {
    local_1c = local_1c << 2;
    piVar1 = local_20;
    piVar2 = local_20;
    do {
      iVar4 = *piVar1;
      if (*(int *)(iVar4 + 0xc0) == 4) {
        piVar3 = piVar2;
        if (**(int **)(iVar4 + 0xbc) != 0x65757274) {
          piVar3 = piVar2 + 1;
          *piVar2 = iVar4;
        }
      }
      else {
        *piVar2 = iVar4;
        piVar3 = piVar2 + 1;
      }
      local_1c = local_1c + -4;
      piVar1 = piVar1 + 1;
      piVar2 = piVar3;
    } while (local_1c != 0);
  }
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = (uint)((int)piVar3 - (int)local_20) >> 2;
  FUN_0132b958(0,4,4,4);
  return;
}

