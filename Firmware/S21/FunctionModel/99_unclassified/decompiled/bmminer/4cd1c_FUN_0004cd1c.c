// FUN_0004cd1c @ 0004cd1c  size=64  callers=1
// program: bmminer


void FUN_0004cd1c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (param_2 == 1) {
    return;
  }
  puVar4 = (undefined1 *)(param_1 + -1);
  uVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + param_2);
  do {
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar2 = puVar2 + -1;
    *puVar4 = *puVar2;
    *puVar2 = uVar1;
  } while (uVar3 < ~uVar3 + param_2);
  return;
}

