// FUN_00ee3c0c @ 00ee3c0c size=884 calls_out=5 calls_in=1
// strings: a UUID string | default | maxfrom_wildcardinput_offset

int FUN_00ee3c0c(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar3 = FUN_01966fbc(&local_30,0,0);
    return iVar3;
  }
  piVar9 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar6 = 1;
    iVar3 = *piVar9;
    pcVar1 = ",";
    do {
      uVar8 = *(uint *)(iVar3 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar3,pcVar1,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00ee3e00;
      pcVar1 = pcVar1 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
  }
  iVar3 = *piVar9;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar3,param_2,param_3);
  if ((char)local_30 == '\x04') {
    uVar6 = 1;
    iVar3 = *piVar9;
    pcVar1 = ":";
    do {
      uVar8 = *(uint *)(iVar3 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar3,pcVar1,uVar5);
      if (uVar8 == 0x7fffffff) goto LAB_00ee3e00;
      pcVar1 = pcVar1 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    iVar3 = *param_4;
    iVar7 = param_4[1];
    if (iVar3 != 2 || iVar7 != 0) {
      uVar6 = 1;
      iVar4 = *piVar9;
      pcVar1 = "{";
      do {
        uVar8 = *(uint *)(iVar4 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar4,pcVar1,uVar5);
        if (uVar8 == 0x7fffffff) goto LAB_00ee3f6c;
        pcVar1 = pcVar1 + uVar5;
        uVar6 = uVar6 - uVar5;
      } while (uVar6 != 0);
      local_30 = 0x100;
      local_2c = piVar9;
      iVar3 = FUN_00ede5e8(&local_30,"default",7,param_4[3],iVar3,iVar7,param_4[2],param_4[3]);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00ede5e8(&local_30,"min",3,param_4[6],param_4[4],param_4[5],param_4[6],param_4[7])
      ;
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00ede5e8(&local_30,"maxfrom_wildcardinput_offset",3,param_4[10],param_4[8],
                           param_4[9],param_4[10],param_4[0xb]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((local_30 & 0xff00) == 0) {
        return 0;
      }
      if ((local_30 & 1) != 0) {
        return 0;
      }
      uVar6 = 1;
      iVar3 = *local_2c;
      pcVar1 = "}";
      while( true ) {
        uVar8 = *(uint *)(iVar3 + 4);
        uVar5 = uVar8 ^ 0x7fffffff;
        if (uVar6 < uVar5) {
          uVar5 = uVar6;
        }
        FUN_01284394(iVar3,pcVar1,uVar5);
        if (uVar8 == 0x7fffffff) break;
        pcVar1 = pcVar1 + uVar5;
        uVar6 = uVar6 - uVar5;
        if (uVar6 == 0) {
          return 0;
        }
      }
LAB_00ee3f6c:
      iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
      return iVar3;
    }
    uVar6 = 4;
    iVar3 = *piVar9;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar8 = *(uint *)(iVar3 + 4);
      uVar5 = uVar8 ^ 0x7fffffff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      FUN_01284394(iVar3,puVar2,uVar5);
      if (uVar8 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar5;
      uVar6 = uVar6 - uVar5;
      if (uVar6 == 0) {
        return 0;
      }
    }
LAB_00ee3e00:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

