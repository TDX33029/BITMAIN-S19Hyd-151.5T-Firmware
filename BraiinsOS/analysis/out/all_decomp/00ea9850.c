// FUN_00ea9850 @ 00ea9850 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_00ea9850(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_11;
  
  if (*param_2 == '\0') {
    *param_1 = -0x80000000;
    FUN_005c37bc(param_2);
    return;
  }
  if (*param_2 != '\x03') {
    iVar2 = FUN_00f36124(param_2,&uStack_11,&DAT_0187be98);
    FUN_005c37bc(param_2);
    *param_1 = -0x7fffffff;
    param_1[1] = iVar2;
    return;
  }
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 4) == -0x80000000) {
    *param_1 = -0x7fffffff;
    param_1[1] = iVar2;
    return;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  *param_1 = *(int *)(param_2 + 4);
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  return;
}

