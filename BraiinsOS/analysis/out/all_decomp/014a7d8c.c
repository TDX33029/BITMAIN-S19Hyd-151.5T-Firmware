// FUN_014a7d8c @ 014a7d8c size=144 calls_out=0 calls_in=0
// strings: 

void FUN_014a7d8c(undefined4 *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
  if (*param_2 == '\x01') {
    uVar1 = *(uint *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x14);
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  if (iVar2 == -1 && (uint)(uVar1 < 0xfffffffe) <= -iVar2 - 1U) {
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[5] = 0;
    return;
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[4] = uVar1;
  param_1[5] = iVar2;
  param_1[2] = uVar1;
  param_1[3] = iVar2;
  return;
}

