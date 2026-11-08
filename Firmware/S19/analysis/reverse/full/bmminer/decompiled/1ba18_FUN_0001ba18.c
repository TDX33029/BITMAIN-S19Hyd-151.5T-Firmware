// FUN_0001ba18 @ 0001ba18  size=440  callers=5
// program: bmminer


undefined4 FUN_0001ba18(int param_1,int param_2,uint *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char local_828 [2052];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (4 < DAT_00087bbc) {
      snprintf(local_828,0x800,"No work mode freq, chain = %d, mode = %d.\n",param_1,param_2);
      FUN_00032218(4,local_828,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(DAT_00089088 + param_1 * 4);
    puVar5 = &DAT_00089090;
    uVar1 = *(ushort *)(iVar4 + 0x23);
    uVar6 = (uint)*(ushort *)(iVar4 + 0x25);
    do {
      if ((puVar5[-1] != 0) && (*puVar5 == uVar6 && (*puVar5 != 0 && puVar5[-1] == (uint)uVar1))) {
        pcVar3 = (char *)FUN_0001fffc();
        iVar4 = strcmp(pcVar3,"HHB28601");
        if (iVar4 == 0) {
LAB_0001bb44:
          if ((DAT_0008a848 == 2) || (iVar4 = FUN_0001d4a4(), iVar4 == 0)) {
            uVar6 = uVar6 - 0x32;
          }
          else {
            uVar6 = uVar6 - 0x19;
          }
        }
        else {
          pcVar3 = (char *)FUN_0001fffc();
          iVar4 = strcmp(pcVar3,"HHB28602");
          if (iVar4 == 0) goto LAB_0001bb44;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = uVar6;
          return 0;
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != &DAT_000891d0);
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_828,"freq level not match",0x15);
      FUN_00032218(4,local_828,0);
      return 0xfffffffe;
    }
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

