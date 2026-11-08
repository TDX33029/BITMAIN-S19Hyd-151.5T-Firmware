// FUN_00ee4a78 @ 00ee4a78 size=968 calls_out=10 calls_in=1
// strings: a UUID string | default | maxfrom_wildcardinput_offset | $serde_json::private::RawValue | expected RawValue

int FUN_00ee4a78(char *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_30;
  int *local_2c;
  undefined1 auStack_28 [4];
  
  if (*param_1 == '\x01') {
    if ((param_3 != 0x1e) ||
       (iVar3 = thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e), iVar3 != 0)) {
      local_30 = 10;
      iVar3 = FUN_01966fbc(&local_30,0,0);
      return iVar3;
    }
    iVar3 = thunk_FUN_01be5118(0x11);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x11);
    }
    FUN_01bed4e2(iVar3,"expected RawValue",0x11);
    iVar3 = FUN_01966564(auStack_28 + 0xc);
    return iVar3;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar1 = ",";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar1,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee4d44;
      pcVar1 = pcVar1 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
  }
  iVar3 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar5 = 1;
    iVar3 = *piVar7;
    pcVar1 = ":";
    do {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,pcVar1,uVar4);
      if (uVar6 == 0x7fffffff) goto LAB_00ee4d44;
      pcVar1 = pcVar1 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    if ((*param_4 & 1) != 0) {
      uVar5 = 1;
      iVar3 = *piVar7;
      pcVar1 = "{";
      do {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        FUN_01284394(iVar3,pcVar1,uVar4);
        if (uVar6 == 0x7fffffff) goto LAB_00ee4dc8;
        pcVar1 = pcVar1 + uVar4;
        uVar5 = uVar5 - uVar4;
      } while (uVar5 != 0);
      local_30 = 0x100;
      local_2c = piVar7;
      iVar3 = FUN_00ebeb78((int)*(undefined8 *)(param_4 + 2),&local_30,"default",7);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00ebeb78((int)*(undefined8 *)(param_4 + 4),&local_30,"min",3);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00ebeb78((int)*(undefined8 *)(param_4 + 6),&local_30,
                           "maxfrom_wildcardinput_offset",3);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar5 = 1;
      iVar3 = *local_2c;
      pcVar1 = "}";
      while( true ) {
        uVar6 = *(uint *)(iVar3 + 4);
        uVar4 = uVar6 ^ 0x7fffffff;
        if (uVar5 < uVar4) {
          uVar4 = uVar5;
        }
        FUN_01284394(iVar3,pcVar1,uVar4);
        if (uVar6 == 0x7fffffff) break;
        pcVar1 = pcVar1 + uVar4;
        uVar5 = uVar5 - uVar4;
        if (uVar5 == 0) {
          return 0;
        }
      }
LAB_00ee4dc8:
      iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar3;
    }
    uVar5 = 4;
    iVar3 = *piVar7;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar3 + 4);
      uVar4 = uVar6 ^ 0x7fffffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      FUN_01284394(iVar3,puVar2,uVar4);
      if (uVar6 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar4;
      uVar5 = uVar5 - uVar4;
      if (uVar5 == 0) {
        return 0;
      }
    }
LAB_00ee4d44:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

