// FUN_00ee6d3c @ 00ee6d3c size=864 calls_out=6 calls_in=0
// strings: a UUID string | bos_version | current | major

int FUN_00ee6d3c(char *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
LAB_00ee7038:
    local_30 = 10;
    iVar5 = FUN_01966fbc(&local_30,0,0);
    return iVar5;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    iVar5 = *piVar7;
    pcVar4 = ",";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee6f18;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
  }
  iVar5 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar5,"bos_version",0xb);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    iVar5 = *piVar7;
    pcVar4 = ":";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee6f18;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    if (*param_2 != -0x80000000) {
      uVar3 = 1;
      iVar5 = *piVar7;
      pcVar4 = "{";
      do {
        uVar6 = *(uint *)(iVar5 + 4);
        uVar1 = uVar6 ^ 0x7fffffff;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        FUN_01284394(iVar5,pcVar4,uVar1);
        if (uVar6 == 0x7fffffff) goto LAB_00ee7088;
        pcVar4 = pcVar4 + uVar1;
        uVar3 = uVar3 - uVar1;
      } while (uVar3 != 0);
      local_38 = 0x100;
      local_34 = piVar7;
      iVar5 = FUN_0096b5ec(&local_38,"current",7,param_2[1],param_2[2]);
      if (iVar5 != 0) {
        return iVar5;
      }
      if ((char)local_38 != '\x01') {
        iVar5 = FUN_0096b5ec(&local_38,"major",5,param_2[4],param_2[5]);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((char)local_38 != '\x01') {
          iVar5 = FUN_00ebee04(&local_38,&DAT_005707e0,8,(char)param_2[6]);
          if (iVar5 != 0) {
            return iVar5;
          }
          if ((local_38 & 0xff00) == 0) {
            return 0;
          }
          if ((local_38 & 1) != 0) {
            return 0;
          }
          uVar3 = 1;
          iVar5 = *local_34;
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
LAB_00ee7088:
          iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar5;
        }
      }
      goto LAB_00ee7038;
    }
    uVar3 = 4;
    iVar5 = *piVar7;
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
LAB_00ee6f18:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar5 = FUN_01966f50(local_30,local_2c);
  return iVar5;
}

