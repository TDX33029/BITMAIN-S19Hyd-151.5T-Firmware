// FUN_00ee1724 @ 00ee1724 size=2092 calls_out=6 calls_in=1
// strings: a UUID string | pause_mode | manual | pause_cooldown_fan_speed_ratio | fan_pause_runtime

int FUN_00ee1724(char *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint local_30;
  int *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar7 = FUN_01966fbc(&local_30,0,0);
    return iVar7;
  }
  piVar8 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar3 = 1;
    iVar7 = *piVar8;
    pcVar4 = ",";
    do {
      uVar6 = *(uint *)(iVar7 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar7,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
  }
  iVar7 = *piVar8;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar7,"pause_mode",10);
  if ((char)local_30 == '\x04') {
    uVar3 = 1;
    iVar7 = *piVar8;
    pcVar4 = ":";
    do {
      uVar6 = *(uint *)(iVar7 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar7,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    iVar7 = *param_2;
    iVar9 = param_2[1];
    if (iVar7 == 4 && iVar9 == 0) {
      uVar3 = 4;
      iVar7 = *piVar8;
      puVar2 = &DAT_0056d030;
      while( true ) {
        uVar6 = *(uint *)(iVar7 + 4);
        uVar1 = uVar6 ^ 0x7fffffff;
        if (uVar3 < uVar1) {
          uVar1 = uVar3;
        }
        FUN_01284394(iVar7,puVar2,uVar1);
        if (uVar6 == 0x7fffffff) break;
        puVar2 = puVar2 + uVar1;
        uVar3 = uVar3 - uVar1;
        if (uVar3 == 0) {
          return 0;
        }
      }
LAB_00ee1ef0:
      uVar3 = 2;
      piVar8 = &DAT_01d2e7b8;
      goto LAB_00ee1f1c;
    }
    uVar3 = 1;
    iVar5 = *piVar8;
    pcVar4 = "{";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_01284394(iVar5,pcVar4,uVar1);
      if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
      pcVar4 = pcVar4 + uVar1;
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    FUN_0096b2b0(&local_30,*piVar8,&DAT_0056d358,4);
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
        if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
        pcVar4 = pcVar4 + uVar1;
        uVar3 = uVar3 - uVar1;
      } while (uVar3 != 0);
      if (iVar7 == 3 && iVar9 == 0) {
        uVar3 = 4;
        puVar2 = &DAT_0056d030;
        iVar7 = *piVar8;
        do {
          uVar6 = *(uint *)(iVar7 + 4);
          uVar1 = uVar6 ^ 0x7fffffff;
          if (uVar3 < uVar1) {
            uVar1 = uVar3;
          }
          FUN_01284394(iVar7,puVar2,uVar1);
          if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
          puVar2 = puVar2 + uVar1;
          uVar3 = uVar3 - uVar1;
        } while (uVar3 != 0);
LAB_00ee1e9c:
        uVar3 = 1;
        pcVar4 = "}";
        iVar7 = *piVar8;
        while( true ) {
          uVar6 = *(uint *)(iVar7 + 4);
          uVar1 = uVar6 ^ 0x7fffffff;
          if (uVar3 < uVar1) {
            uVar1 = uVar3;
          }
          FUN_01284394(iVar7,pcVar4,uVar1);
          if (uVar6 == 0x7fffffff) break;
          pcVar4 = pcVar4 + uVar1;
          uVar3 = uVar3 - uVar1;
          if (uVar3 == 0) {
            return 0;
          }
        }
        goto LAB_00ee1ef0;
      }
      if (iVar7 == 2 && iVar9 == 0) {
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
          if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
          pcVar4 = pcVar4 + uVar1;
          uVar3 = uVar3 - uVar1;
        } while (uVar3 != 0);
        FUN_0096b2b0(&local_30,*piVar8,&DAT_0056df48,4);
        if ((char)local_30 == '\x04') {
          uVar3 = 1;
          iVar7 = *piVar8;
          pcVar4 = ":";
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          uVar3 = 1;
          pcVar4 = "{";
          iVar7 = *piVar8;
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          uVar3 = 1;
          pcVar4 = "}";
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          uVar3 = 1;
          pcVar4 = "}";
          iVar7 = *piVar8;
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          goto LAB_00ee1e9c;
        }
      }
      else {
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
          if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
          pcVar4 = pcVar4 + uVar1;
          uVar3 = uVar3 - uVar1;
        } while (uVar3 != 0);
        FUN_0096b2b0(&local_30,*piVar8,"manual",6);
        if ((char)local_30 == '\x04') {
          uVar3 = 1;
          iVar7 = *piVar8;
          pcVar4 = ":";
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          uVar3 = 1;
          pcVar4 = "{";
          iVar7 = *piVar8;
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) {
              iVar7 = FUN_01966f50(2,&DAT_01d2e7b8);
              return iVar7;
            }
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          local_30 = 0x100;
          local_2c = piVar8;
          iVar7 = FUN_00ee1ff0((int)*(undefined8 *)(param_2 + 2),&local_30,
                               "pause_cooldown_fan_speed_ratio",0x1e);
          if (iVar7 != 0) {
            return iVar7;
          }
          iVar7 = FUN_00ee0d0c(&local_30,"fan_pause_runtime",0x11,param_2[4],param_2[5],iVar9);
          if (iVar7 != 0) {
            return iVar7;
          }
          if (((local_30 & 0xff00) != 0) && ((local_30 & 1) == 0)) {
            uVar3 = 1;
            pcVar4 = "}";
            iVar7 = *local_2c;
            do {
              uVar6 = *(uint *)(iVar7 + 4);
              uVar1 = uVar6 ^ 0x7fffffff;
              if (uVar3 < uVar1) {
                uVar1 = uVar3;
              }
              FUN_01284394(iVar7,pcVar4,uVar1);
              if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
              pcVar4 = pcVar4 + uVar1;
              uVar3 = uVar3 - uVar1;
            } while (uVar3 != 0);
          }
          uVar3 = 1;
          pcVar4 = "}";
          iVar7 = *piVar8;
          do {
            uVar6 = *(uint *)(iVar7 + 4);
            uVar1 = uVar6 ^ 0x7fffffff;
            if (uVar3 < uVar1) {
              uVar1 = uVar3;
            }
            FUN_01284394(iVar7,pcVar4,uVar1);
            if (uVar6 == 0x7fffffff) goto LAB_00ee1f10;
            pcVar4 = pcVar4 + uVar1;
            uVar3 = uVar3 - uVar1;
          } while (uVar3 != 0);
          goto LAB_00ee1e9c;
        }
      }
    }
  }
  uVar3 = local_30;
  piVar8 = local_2c;
LAB_00ee1f1c:
  iVar7 = FUN_01966f50(uVar3,piVar8);
  return iVar7;
LAB_00ee1f10:
  uVar3 = 2;
  piVar8 = &DAT_01d2e7b8;
  goto LAB_00ee1f1c;
}

