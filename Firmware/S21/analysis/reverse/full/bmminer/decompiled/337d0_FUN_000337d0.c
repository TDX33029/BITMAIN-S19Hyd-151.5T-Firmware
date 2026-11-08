// FUN_000337d0 @ 000337d0  size=276  callers=1
// program: bmminer


void FUN_000337d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    free(*(void **)(param_1 + 0xc));
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    free(*(void **)(param_1 + 0x14));
  }
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x1c));
  }
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    free(*(void **)(param_1 + 0x24));
  }
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2c));
  }
  if (*(void **)(param_1 + 0x34) != (void *)0x0) {
    free(*(void **)(param_1 + 0x34));
  }
  if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x3c));
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    free(*(void **)(param_1 + 0x44));
  }
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x4c));
  }
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    free(*(void **)(param_1 + 0x54));
  }
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x5c));
  }
  if (*(void **)(param_1 + 0x6c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x6c));
  }
  if (*(void **)(param_1 + 0x74) != (void *)0x0) {
    free(*(void **)(param_1 + 0x74));
  }
  iVar1 = param_1;
  do {
    iVar2 = iVar1 + 0x18;
    free(*(void **)(iVar1 + 0x78));
    free(*(void **)(iVar1 + 0x80));
    free(*(void **)(iVar1 + 0x88));
    iVar1 = iVar2;
  } while (iVar2 != param_1 + 0x48);
  return;
}

