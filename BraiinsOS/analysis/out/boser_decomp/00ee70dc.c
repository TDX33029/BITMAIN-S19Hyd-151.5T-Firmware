// FUN_00ee70dc @ 00ee70dc size=908 calls_out=8 calls_in=0
// strings: a UUID string | fw_version | model_name | min_voltage | max_voltage

int FUN_00ee70dc(char *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
LAB_00ee7410:
    local_30 = 10;
    iVar6 = FUN_01966fbc(&local_30,0,0);
    return iVar6;
  }
  piVar7 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    iVar6 = *piVar7;
    pcVar4 = ",";
    do {
      uVar5 = *(uint *)(iVar6 + 4);
      uVar1 = uVar5 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar6,pcVar4,uVar1);
      if (uVar5 == 0x7fffffff) goto LAB_00ee743c;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
  }
  iVar6 = *piVar7;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar6,&DAT_0056fbd0,8);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    iVar6 = *piVar7;
    pcVar4 = ":";
    do {
      uVar5 = *(uint *)(iVar6 + 4);
      uVar1 = uVar5 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar6,pcVar4,uVar1);
      if (uVar5 == 0x7fffffff) goto LAB_00ee743c;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    if (*param_2 != 2 || param_2[1] != 0) {
      uVar3 = 1;
      iVar6 = *piVar7;
      pcVar4 = "{";
      do {
        uVar5 = *(uint *)(iVar6 + 4);
        uVar1 = uVar5 ^ 0x7fffffff;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        FUN_01284394(iVar6,pcVar4,uVar1);
        if (uVar5 == 0x7fffffff) {
          iVar6 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar6;
        }
        pcVar4 = pcVar4 + uVar1;
        uVar3 = uVar3 - uVar1;
      } while (uVar3 != 0);
      local_38 = 0x100;
      local_34 = piVar7;
      iVar6 = FUN_00ee0f5c(&local_38,&DAT_00520eda,7,param_2[8],param_2[9]);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = FUN_00ee0f5c(&local_38,"fw_version",10,param_2[10],param_2[0xb]);
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_38 != '\x01') {
        iVar6 = FUN_00ebc430(&local_38,&DAT_0052367e,0xd,param_2 + 0xc);
        if (iVar6 != 0) {
          return iVar6;
        }
        if ((char)local_38 != '\x01') {
          iVar6 = FUN_00ebc430(&local_38,"model_name",10,param_2 + 0xf);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = FUN_00edeb68((int)*(undefined8 *)(param_2 + 2),&local_38,"min_voltage",0xb);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = FUN_00edeb68((int)*(undefined8 *)(param_2 + 6),&local_38,"max_voltage",0xb,
                               param_2[5],param_2[4],param_2[5]);
          if (iVar6 == 0) {
            local_30 = local_38;
            local_2c = local_34;
            iVar6 = FUN_00d57dc0(&local_30);
            return iVar6;
          }
          return iVar6;
        }
      }
      goto LAB_00ee7410;
    }
    uVar3 = 4;
    iVar6 = *piVar7;
    puVar2 = &DAT_0056d030;
    while( true ) {
      uVar5 = *(uint *)(iVar6 + 4);
      uVar1 = uVar5 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar6,puVar2,uVar1);
      if (uVar5 == 0x7fffffff) break;
      puVar2 = puVar2 + uVar1;
      uVar3 = uVar3 - uVar1;
      if (uVar3 == 0) {
        return 0;
      }
    }
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  goto LAB_00ee7448;
LAB_00ee743c:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ee7448:
  iVar6 = FUN_01966f50(local_30,local_2c);
  return iVar6;
}

