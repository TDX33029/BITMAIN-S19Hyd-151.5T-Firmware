// FUN_0001bbd0 @ 0001bbd0  size=364  callers=2
// program: bmminer


undefined4 FUN_0001bbd0(int param_1,int param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char local_818 [2052];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (4 < DAT_00087bbc) {
      snprintf(local_818,0x800,"No work mode voltage, chain = %d, mode = %d.\n",param_1,param_2);
      FUN_00032218(4,local_818,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(DAT_00089088 + param_1 * 4);
    puVar3 = &DAT_00089090;
    uVar4 = (uint)*(ushort *)(iVar2 + 0x25);
    do {
      if ((((puVar3[-1] != 0) &&
           (uVar5 = *puVar3, uVar5 != 0 && puVar3[-1] == (uint)*(ushort *)(iVar2 + 0x23))) &&
          ((uVar5 == uVar4 ||
           ((*(char *)(iVar2 + 0x2f) == '\x01' &&
            ((uVar5 == uVar4 + 0x32 || (uVar5 == uVar4 + 0x19)))))))) && (param_3 != (uint *)0x0)) {
        *param_3 = (uint)*(ushort *)(iVar2 + 0x23);
        return 0;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != &DAT_000891d0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_818,"voltage level not match",0x18);
      FUN_00032218(4,local_818,0);
      return 0xfffffffe;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

