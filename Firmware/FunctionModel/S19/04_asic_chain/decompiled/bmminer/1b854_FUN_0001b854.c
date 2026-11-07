// FUN_0001b854 @ 0001b854  size=148  callers=1
// program: bmminer


undefined2 FUN_0001b854(int param_1)

{
  int iVar1;
  char acStack_808 [2052];
  
  if ((DAT_00089088 != 0) && (*(char *)(DAT_00089088 + 0x1c) != '\0')) {
    iVar1 = *(int *)(DAT_00089088 + param_1 * 4);
    return CONCAT11(*(undefined1 *)(iVar1 + 0x1b),*(undefined1 *)(iVar1 + 0x1c));
  }
  if (DAT_00087bbc < 5) {
    return 0xffff;
  }
  snprintf(acStack_808,0x800,"No pcb version, chain = %d.\n",param_1);
  FUN_00032218(4,acStack_808,0);
  return 0xffff;
}

