// FUN_00ebefc4 @ 00ebefc4 size=1040 calls_out=8 calls_in=1
// strings: a UUID string | accepted_shares | rejected_shares | stale_shares | last_difficulty | best_share

int FUN_00ebefc4(char *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
LAB_00ebf37c:
    local_30 = 10;
    iVar3 = FUN_01966fbc(&local_30,0,0);
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
      if (uVar6 == 0x7fffffff) goto LAB_00ebf3a8;
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
      if (uVar6 == 0x7fffffff) goto LAB_00ebf3a8;
      pcVar1 = pcVar1 + uVar4;
      uVar5 = uVar5 - uVar4;
    } while (uVar5 != 0);
    if (*param_4 != 2 || param_4[1] != 0) {
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
        if (uVar6 == 0x7fffffff) {
          iVar3 = FUN_01966f50(2,&DAT_01d2e7b8);
          return iVar3;
        }
        pcVar1 = pcVar1 + uVar4;
        uVar5 = uVar5 - uVar4;
      } while (uVar5 != 0);
      local_38 = 0x100;
      local_34 = piVar7;
      iVar3 = FUN_0096b424(&local_38,"accepted_shares",0xf,param_4[7],param_4[6],param_4[7]);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((char)local_38 != '\x01') {
        iVar3 = FUN_0096b424(&local_38,"rejected_shares",0xf,param_4[9],param_4[8],param_4[9]);
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((char)local_38 != '\x01') {
          iVar3 = FUN_0096b424(&local_38,"stale_shares",0xc,param_4[0xb],param_4[10],param_4[0xb]);
          if (iVar3 != 0) {
            return iVar3;
          }
          if ((char)local_38 != '\x01') {
            iVar3 = FUN_0096b424(&local_38,"last_difficulty",0xf,param_4[0xd],param_4[0xc],
                                 param_4[0xd]);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((char)local_38 != '\x01') {
              iVar3 = FUN_0096b424(&local_38,"best_share",10,param_4[0xf],param_4[0xe],param_4[0xf])
              ;
              if (iVar3 != 0) {
                return iVar3;
              }
              if ((char)local_38 != '\x01') {
                iVar3 = FUN_0096b424(&local_38,"generated_work",0xe,param_4[0x11],param_4[0x10],
                                     param_4[0x11]);
                if (iVar3 != 0) {
                  return iVar3;
                }
                iVar3 = FUN_00ebf420(&local_38,"last_share_time",0xf,param_4);
                if (iVar3 != 0) {
                  return iVar3;
                }
                if ((char)local_38 != '\x01') {
                  iVar3 = FUN_0096b5ec(&local_38,"best_share_str",0xe,param_4[0x13],param_4[0x14]);
                  if (iVar3 == 0) {
                    local_30 = local_38;
                    local_2c = local_34;
                    iVar3 = FUN_00d57dc0(&local_30);
                    return iVar3;
                  }
                  return iVar3;
                }
              }
            }
          }
        }
      }
      goto LAB_00ebf37c;
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
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  goto LAB_00ebf3b4;
LAB_00ebf3a8:
  local_30 = 2;
  local_2c = &DAT_01d2e7b8;
LAB_00ebf3b4:
  iVar3 = FUN_01966f50(local_30,local_2c);
  return iVar3;
}

