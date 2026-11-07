// FUN_0001ad34 @ 0001ad34  size=468  callers=0
// program: bmminer


undefined4 FUN_0001ad34(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int param3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_928 [54];
  undefined1 auStack_8f2 [202];
  char local_828 [2052];
  
  if ((DAT_00089088 == 0) || (*(char *)(DAT_00089088 + 0x1c) == '\0')) {
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_828,"No fixture configuration for flush.\n",0x25);
      FUN_00032218(4,local_828,0);
      return 0xffffffff;
    }
    uVar7 = 0xffffffff;
  }
  else {
    param3 = 0;
    uVar7 = 0;
    do {
      iVar2 = FUN_000201d8(param3);
      iVar4 = DAT_00089088;
      if (iVar2 != 0) {
        memset(auStack_928,0,0x100);
        iVar4 = *(int *)(iVar4 + param3 * 4);
        if (3 < DAT_00087bbc) {
          snprintf(local_828,0x800,"[chain %d] Update miner info in eeprom.\n",param3);
          FUN_00032218(3,local_828,0);
        }
        uVar3 = (uint)*(byte *)(iVar4 + 1);
        bVar1 = *(byte *)(iVar4 + 0x35);
        iVar2 = -uVar3 + 0x36;
        memcpy(auStack_928,(void *)(iVar4 + uVar3),(uint)bVar1);
        uVar5 = ((uint)bVar1 - iVar2) + 7 & 0xfffffff8;
        uVar6 = (uVar3 + 5 & 0xfffffff8) + 2;
        FUN_0001c4f4(auStack_8f2 + -uVar3,uVar5,1);
        iVar2 = iVar2 + uVar5;
        if ((int)(0x100 - uVar6) < iVar2) {
          uVar7 = 0xffffffff;
          if (3 < DAT_00087bbc) {
            snprintf(local_828,0x800,
                     "[chain %d] Update miner info Failed, EEPROM does not have enough space.\n",
                     param3);
            FUN_00032218(3,local_828,0);
          }
        }
        else {
          FUN_00049ab4(param3,uVar6 & 0xfe,auStack_928,iVar2);
        }
      }
      param3 = param3 + 1;
    } while (param3 != 4);
  }
  return uVar7;
}

