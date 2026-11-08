// FUN_0004a384 @ 0004a384  size=164  callers=5
// program: cgminer


void FUN_0004a384(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[2] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  sVar1 = strlen(param_2);
  if (sVar1 < 0x50) {
    strncpy((char *)(param_1 + 3),param_2,sVar1 + 1);
    return;
  }
  *(undefined2 *)(param_1 + 3) = 0x2e2e;
  *(undefined1 *)((int)param_1 + 0xe) = 0x2e;
  strncpy((char *)((int)param_1 + 0xf),param_2 + (sVar1 - 0x4c),0x4d);
  return;
}

