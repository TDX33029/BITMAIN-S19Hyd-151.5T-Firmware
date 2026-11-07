// FUN_000335ac @ 000335ac  size=44  callers=1
// program: bmminer


void FUN_000335ac(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)0x87cc4;
  puVar2 = param_1 + 0x22;
  do {
    puVar1 = puVar1 + 1;
    puVar3 = puVar2 + 1;
    *puVar2 = *puVar1;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 0x2a);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

