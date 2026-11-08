// FUN_00ee51a0 @ 00ee51a0 size=852 calls_out=5 calls_in=1
// strings: a UUID string | shutdown_duration | default | maxfrom_wildcardinput_offset

int FUN_00ee51a0(char *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar5 = FUN_01966fbc(&local_30,0,0);
    return iVar5;
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    iVar5 = *piVar8;
    pcVar4 = ",";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee537c;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
  }
  iVar5 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar5,"shutdown_duration",0x11);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    iVar5 = *piVar8;
    pcVar4 = ":";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee537c;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    iVar5 = *param_2;
    if (iVar5 != 2) {
      uVar3 = 1;
      iVar7 = *piVar8;
      pcVar4 = "{";
      do {
        uVar6 = *(uint *)(iVar7 + 4);
        uVar1 = uVar6 ^ 0x7fffffff;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        FUN_01284394(iVar7,pcVar4,uVar1);
        if (uVar6 == 0x7fffffff) goto LAB_00ee54e0;
        pcVar4 = pcVar4 + uVar1;
        uVar3 = uVar3 - uVar1;
      } while (uVar3 != 0);
      local_30 = 0x100;
      local_2c = piVar8;
      iVar5 = FUN_00ee0650(&local_30,"default",7,iVar5,param_2[1]);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_00ee0650(&local_30,"min",3,param_2[2],param_2[3]);
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar5 = FUN_00ee0650(&local_30,"maxfrom_wildcardinput_offset",3,param_2[4],param_2[5]);
      if (iVar5 != 0) {
        return iVar5;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar3 = 1;
      iVar5 = *local_2c;
      pcVar4 = "}";
      while( true ) {
        uVar6 = *(uint *)(iVar5 + 4);
        uVar1 = uVar6 ^ 0x7fffffff;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        FUN_01284394(iVar5,pcVar4,uVar1);
        if (uVar6 == 0x7fffffff) break;
        pcVar4 = pcVar4 + uVar1;
        uVar3 = uVar3 - uVar1;
        if (uVar3 == 0) {
          return 0;
        }
      }
LAB_00ee54e0:
      iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar5;
    }
    uVar3 = 4;
    iVar5 = *piVar8;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,puVar2,uVar1);
      if (uVar6 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar1;
      uVar3 = uVar3 - uVar1;
      if (uVar3 == 0) {
        return 0;
      }
    }
LAB_00ee537c:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar5 = FUN_01966f50(local_30,local_2c);
  return iVar5;
}

