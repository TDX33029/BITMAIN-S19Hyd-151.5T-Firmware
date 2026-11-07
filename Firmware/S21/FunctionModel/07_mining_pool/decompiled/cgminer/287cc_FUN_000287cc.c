// FUN_000287cc @ 000287cc  size=56  callers=3
// program: cgminer


void FUN_000287cc(int param_1)

{
  time_t tVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x3d) = 1;
  FUN_000206d8(param_1 + 0x2c);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x60) = 0;
  iVar2 = *(int *)(param_1 + 0x24);
  tVar1 = time((time_t *)0x0);
  *(time_t *)(iVar2 + 0xf0) = tVar1;
  return;
}

