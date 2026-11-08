// FUN_016d9c88 @ 016d9c88 size=302 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_016d9c88(char *param_1,undefined4 param_2)

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
  
  uVar6 = DAT_018dda24;
  pcVar1 = (char *)FUN_016d2b7c(&DAT_0059d408);
  piVar2 = (int *)FUN_016d2bc8();
  *piVar2 = 2;
  if (*param_1 != '\0') {
    iVar3 = FUN_016dd7a2(param_1,0x2f);
    if (iVar3 != 0) {
      uVar6 = FUN_016d9b50(param_1,param_2,uVar6);
      return uVar6;
    }
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "/usr/local/bin:/bin:/usr/bin";
    }
    uVar4 = FUN_016dd92c(param_1,0x100);
    if (0xff < uVar4) {
      *piVar2 = 0x24;
      return 0xffffffff;
    }
    local_38 = uVar4 + 1;
    iVar3 = FUN_016dd92c(pcVar1,0xfff);
    local_2c = iVar3 + 1;
    local_30 = uVar4 + 1 + local_2c + 7 & 0xfffffff8;
    local_34 = 0;
    do {
      while( true ) {
        iVar3 = -local_30;
        pcVar5 = (char *)FUN_016dd7b6(pcVar1,0x3a);
        if ((uint)((int)pcVar5 - (int)pcVar1) < local_2c) break;
        if (*pcVar5 == '\0') goto LAB_016d9bf0;
        pcVar1 = pcVar5 + 1;
      }
      local_3c = (int)pcVar5 - (int)pcVar1;
      FUN_016dd1aa(auStack_40 + iVar3,pcVar1);
      uVar4 = local_3c;
      if (pcVar1 < pcVar5) {
        uVar4 = local_3c + 1;
      }
      auStack_40[local_3c + iVar3] = 0x2f;
      FUN_016dd1aa(auStack_40 + uVar4 + iVar3,param_1,local_38);
      FUN_016d9b50(auStack_40 + iVar3,param_2,uVar6);
      iVar3 = *piVar2;
      if (iVar3 == 0xd) {
        local_34 = 1;
      }
      else if ((iVar3 != 0x14) && (iVar3 != 2)) {
        return 0xffffffff;
      }
      pcVar1 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
LAB_016d9bf0:
    if (local_34 != 0) {
      *piVar2 = 0xd;
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

