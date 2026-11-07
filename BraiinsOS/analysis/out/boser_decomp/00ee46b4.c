// FUN_00ee46b4 @ 00ee46b4 size=904 calls_out=5 calls_in=1
// strings: a UUID string | default | maxfrom_wildcardinput_offset

int FUN_00ee46b4(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar4 = FUN_01966fbc(&local_30,0,0);
    return iVar4;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    pcVar2 = ",";
    iVar4 = *piVar1;
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar4,pcVar2,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ee48b8;
      pcVar2 = pcVar2 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar1,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar4 = *piVar1;
    pcVar2 = ":";
    do {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar4,pcVar2,uVar5);
      if (uVar7 == 0x7fffffff) goto LAB_00ee48b8;
      pcVar2 = pcVar2 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    if (*param_4 != 2 || param_4[1] != 0) {
      uVar6 = 1;
      pcVar2 = "{";
      iVar4 = *piVar1;
      do {
        uVar7 = *(uint *)(iVar4 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar4,pcVar2,uVar5);
        if (uVar7 == 0x7fffffff) goto LAB_00ee4a28;
        pcVar2 = pcVar2 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      local_30 = 0x100;
      local_2c = piVar1;
      iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_4 + 2),&local_30,"default",7);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_4 + 6),&local_30,"min",3,param_4[5],param_4[4]
                           ,param_4[5]);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_4 + 10),&local_30,
                           "maxfrom_wildcardinput_offset",3,param_4[9],param_4[8],param_4[9]);
      if (iVar4 != 0) {
        return iVar4;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar6 = 1;
      iVar4 = *local_2c;
      pcVar2 = "}";
      while( true ) {
        uVar7 = *(uint *)(iVar4 + 4);
        uVar5 = uVar7 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar4,pcVar2,uVar5);
        if (uVar7 == 0x7fffffff) break;
        pcVar2 = pcVar2 + uVar5;
        uVar6 = uVar6 - uVar5;
        if (uVar6 == 0) {
          return 0;
        }
      }
LAB_00ee4a28:
      iVar4 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar4;
    }
    uVar6 = 4;
    puVar3 = &DAT_0056d030;
    iVar4 = *piVar1;
    while( true ) {
      uVar7 = *(uint *)(iVar4 + 4);
      uVar5 = uVar7 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar4,puVar3,uVar5);
      if (uVar7 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar5;
      uVar6 = uVar6 - uVar5;
      if (uVar6 == 0) {
        return 0;
      }
    }
LAB_00ee48b8:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar4 = FUN_01966f50(local_30,local_2c);
  return iVar4;
}

