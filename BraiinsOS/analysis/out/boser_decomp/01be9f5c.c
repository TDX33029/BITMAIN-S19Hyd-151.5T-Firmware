// FUN_01be9f5c @ 01be9f5c size=302 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_01be9f5c(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [4];
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  uVar6 = DAT_01d5348c;
  pcVar1 = (char *)FUN_01be31f8(&DAT_005bf130);
  piVar2 = (int *)FUN_01be3244();
  *piVar2 = 2;
  if (*param_1 != '\0') {
    iVar3 = FUN_01bedada(param_1,0x2f);
    if (iVar3 != 0) {
      uVar6 = FUN_01be9e24(param_1,param_2,uVar6);
      return uVar6;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "/usr/local/bin:/bin:/usr/bin";
    }
    uVar4 = FUN_01bedc64(param_1,0x100);
    if (0xff < uVar4) {
      *piVar2 = 0x24;
      return 0xffffffff;
    }
    local_38 = uVar4 + 1;
    iVar3 = FUN_01bedc64(pcVar1,0xfff);
    local_2c = iVar3 + 1;
    local_30 = uVar4 + 1 + local_2c + 7 & 0xfffffff8;
    local_34 = 0;
    do {
      while( true ) {
        iVar3 = -local_30;
        pcVar5 = (char *)FUN_01bedaee(pcVar1,0x3a);
        if ((uint)((int)pcVar5 - (int)pcVar1) < local_2c) break;
        if (*pcVar5 == '\0') goto LAB_01be9ec4;
        pcVar1 = pcVar5 + 1;
      }
      local_3c = (int)pcVar5 - (int)pcVar1;
      FUN_01bed4e2(auStack_40 + iVar3,pcVar1);
      uVar4 = local_3c;
      if (pcVar1 < pcVar5) {
        uVar4 = local_3c + 1;
      }
      auStack_40[local_3c + iVar3] = 0x2f;
      FUN_01bed4e2(auStack_40 + uVar4 + iVar3,param_1,local_38);
      FUN_01be9e24(auStack_40 + iVar3,param_2,uVar6);
      iVar3 = *piVar2;
      if (iVar3 == 0xd) {
        local_34 = 1;
      }
      else if ((iVar3 != 0x14) && (iVar3 != 2)) {
        return 0xffffffff;
      }
      pcVar1 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
LAB_01be9ec4:
    if (local_34 != 0) {
      *piVar2 = 0xd;
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

