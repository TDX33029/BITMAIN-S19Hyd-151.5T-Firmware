// FUN_00031310 @ 00031310  size=164  callers=0
// program: bmminer


undefined4 * FUN_00031310(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char *param3;
  undefined4 uVar3;
  char acStack_810 [2052];
  
  puVar2 = calloc(1,0x40);
  param3 = (char *)*param_1;
  if (puVar2 == (undefined4 *)0x0) {
    snprintf(acStack_810,0x800,"Failed to calloc store for %s in %s %s():%d",param3,"klist.c",
             "k_new_store",0x55);
    FUN_00032218(3,acStack_810,1);
    FUN_0002df3c(1);
    param3 = (char *)*param_1;
  }
  uVar3 = param_1[2];
  uVar1 = *(undefined1 *)(param_1 + 0xb);
  *puVar2 = param3;
  puVar2[2] = uVar3;
  *(undefined1 *)(puVar2 + 0xb) = uVar1;
  *(undefined1 *)(puVar2 + 1) = 1;
  return puVar2;
}

