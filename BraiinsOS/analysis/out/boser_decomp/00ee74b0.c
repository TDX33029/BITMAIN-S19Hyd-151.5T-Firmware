// FUN_00ee74b0 @ 00ee74b0 size=2032 calls_out=6 calls_in=0
// strings: a UUID string | detailed_status | status_since | a UUID string | status_until | precisioniso1+ignoreoffset_houroffset_minuteoffset_second

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_00ee74b0(char *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
LAB_00ee7750:
    local_30 = 10;
    iVar6 = FUN_01966fbc(&local_30,0,0);
    return iVar6;
  }
  piVar10 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar2 = 1;
    iVar6 = *piVar10;
    pcVar5 = ",";
    do {
      uVar8 = *(uint *)(iVar6 + 4);
      uVar4 = uVar8 ^ 0x7fffffff;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      FUN_01284394(iVar6,pcVar5,uVar4);
      if (uVar8 == 0x7fffffff) goto LAB_00ee7698;
      pcVar5 = pcVar5 + uVar4;
      uVar2 = uVar2 - uVar4;
    } while (uVar2 != 0);
  }
  iVar6 = *piVar10;
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,iVar6,"detailed_status",0xf);
  if ((char)local_30 == '\x04') {
    uVar2 = 1;
    iVar6 = *piVar10;
    pcVar5 = ":";
    do {
      uVar8 = *(uint *)(iVar6 + 4);
      uVar4 = uVar8 ^ 0x7fffffff;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      FUN_01284394(iVar6,pcVar5,uVar4);
      if (uVar8 == 0x7fffffff) goto LAB_00ee7698;
      pcVar5 = pcVar5 + uVar4;
      uVar2 = uVar2 - uVar4;
    } while (uVar2 != 0);
    if (!(*param_2 == 2 && param_2[1] == 0)) {
      uVar2 = 1;
      iVar6 = *piVar10;
      pcVar5 = "{";
      do {
        uVar8 = *(uint *)(iVar6 + 4);
        uVar4 = uVar8 ^ 0x7fffffff;
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
        FUN_01284394(iVar6,pcVar5,uVar4);
        if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
        pcVar5 = pcVar5 + uVar4;
        uVar2 = uVar2 - uVar4;
      } while (uVar2 != 0);
      local_38 = 0x100;
      local_34 = piVar10;
      iVar6 = FUN_00ebf420(&local_38,"status_since",0xc,param_2);
      piVar10 = local_34;
      if (iVar6 != 0) {
        return iVar6;
      }
      if ((char)local_38 != '\0') goto LAB_00ee7750;
      if (local_38._1_1_ != '\x01') {
        uVar2 = 1;
        iVar6 = *local_34;
        pcVar5 = ",";
        do {
          uVar8 = *(uint *)(iVar6 + 4);
          uVar4 = uVar8 ^ 0x7fffffff;
          if (uVar2 < uVar4) {
            uVar4 = uVar2;
          }
          FUN_01284394(iVar6,pcVar5,uVar4);
          if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
          pcVar5 = pcVar5 + uVar4;
          uVar2 = uVar2 - uVar4;
        } while (uVar2 != 0);
      }
      FUN_0096b2b0(&local_30,*piVar10,"status_until",0xc);
      if ((char)local_30 == '\x04') {
        uVar2 = 1;
        iVar6 = *piVar10;
        pcVar5 = ":";
        do {
          uVar8 = *(uint *)(iVar6 + 4);
          uVar4 = uVar8 ^ 0x7fffffff;
          if (uVar2 < uVar4) {
            uVar4 = uVar2;
          }
          FUN_01284394(iVar6,pcVar5,uVar4);
          if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
          pcVar5 = pcVar5 + uVar4;
          uVar2 = uVar2 - uVar4;
        } while (uVar2 != 0);
        uVar2 = param_2[6];
        iVar6 = param_2[7];
        if (uVar2 == 3 && iVar6 == 0) {
          uVar2 = 4;
          iVar6 = *piVar10;
          puVar3 = &DAT_0056d030;
          do {
            uVar8 = *(uint *)(iVar6 + 4);
            uVar4 = uVar8 ^ 0x7fffffff;
            if (uVar2 < uVar4) {
              uVar4 = uVar2;
            }
            FUN_01284394(iVar6,puVar3,uVar4);
            if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
            puVar3 = puVar3 + uVar4;
            uVar2 = uVar2 - uVar4;
          } while (uVar2 != 0);
        }
        else {
          uVar4 = 1;
          iVar9 = *piVar10;
          pcVar5 = "{";
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar8 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar8) {
              uVar8 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar8);
            if (uVar7 == 0x7fffffff) goto LAB_00ee86b0;
            pcVar5 = pcVar5 + uVar8;
            uVar4 = uVar4 - uVar8;
          } while (uVar4 != 0);
          FUN_0096b2b0(&local_30,*piVar10,
                       "precisioniso1+ignoreoffset_houroffset_minuteoffset_second",9);
          if ((char)local_30 != '\x04') goto LAB_00ee86bc;
          iVar9 = *piVar10;
          uVar4 = 1;
          pcVar5 = ":";
          do {
            uVar7 = *(uint *)(iVar9 + 4);
            uVar8 = uVar7 ^ 0x7fffffff;
            if (uVar4 < uVar8) {
              uVar8 = uVar4;
            }
            FUN_01284394(iVar9,pcVar5,uVar8);
            if (uVar7 == 0x7fffffff) goto LAB_00ee86b0;
            pcVar5 = pcVar5 + uVar8;
            uVar4 = uVar4 - uVar8;
          } while (uVar4 != 0);
          if (uVar2 == 2 && iVar6 == 0) {
            uVar2 = 4;
            puVar3 = &DAT_0056d030;
            iVar6 = *piVar10;
            do {
              uVar8 = *(uint *)(iVar6 + 4);
              uVar4 = uVar8 ^ 0x7fffffff;
              if (uVar2 < uVar4) {
                uVar4 = uVar2;
              }
              FUN_01284394(iVar6,puVar3,uVar4);
              if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
              puVar3 = puVar3 + uVar4;
              uVar2 = uVar2 - uVar4;
            } while (uVar2 != 0);
          }
          else {
            if ((uVar2 & 1) == 0) {
              uVar1 = 3;
              pcVar5 = "maxfrom_wildcardinput_offset";
            }
            else {
              uVar1 = 5;
              pcVar5 = "exact";
            }
            iVar6 = FUN_00ea4588(piVar10,pcVar5,uVar1,param_2[9],param_2[8],param_2[9],param_2[10]);
            if (iVar6 != 0) {
              return iVar6;
            }
          }
          uVar2 = 1;
          iVar6 = *piVar10;
          pcVar5 = "}";
          do {
            uVar8 = *(uint *)(iVar6 + 4);
            uVar4 = uVar8 ^ 0x7fffffff;
            if (uVar2 < uVar4) {
              uVar4 = uVar2;
            }
            FUN_01284394(iVar6,pcVar5,uVar4);
            if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
            pcVar5 = pcVar5 + uVar4;
            uVar2 = uVar2 - uVar4;
          } while (uVar2 != 0);
        }
        uVar2 = 1;
        iVar6 = *piVar10;
        pcVar5 = ",";
        do {
          uVar8 = *(uint *)(iVar6 + 4);
          uVar4 = uVar8 ^ 0x7fffffff;
          if (uVar2 < uVar4) {
            uVar4 = uVar2;
          }
          FUN_01284394(iVar6,pcVar5,uVar4);
          if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
          pcVar5 = pcVar5 + uVar4;
          uVar2 = uVar2 - uVar4;
        } while (uVar2 != 0);
        local_38._0_2_ = CONCAT11(2,(char)local_38);
        FUN_0096b2b0(&local_30,*piVar10,"status",6);
        if ((char)local_30 == '\x04') {
          uVar2 = 1;
          iVar6 = *piVar10;
          pcVar5 = ":";
          do {
            uVar8 = *(uint *)(iVar6 + 4);
            uVar4 = uVar8 ^ 0x7fffffff;
            if (uVar2 < uVar4) {
              uVar4 = uVar2;
            }
            FUN_01284394(iVar6,pcVar5,uVar4);
            if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
            pcVar5 = pcVar5 + uVar4;
            uVar2 = uVar2 - uVar4;
          } while (uVar2 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
          switch((char)param_2[0xc]) {
          case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            uVar2 = 4;
            iVar6 = *piVar10;
            puVar3 = &DAT_0056d030;
          }
          do {
            uVar8 = *(uint *)(iVar6 + 4);
            uVar4 = uVar8 ^ 0x7fffffff;
            if (uVar2 < uVar4) {
              uVar4 = uVar2;
            }
            FUN_01284394(iVar6,puVar3,uVar4);
            if (uVar8 == 0x7fffffff) goto LAB_00ee86b0;
            puVar3 = puVar3 + uVar4;
            uVar2 = uVar2 - uVar4;
          } while (uVar2 != 0);
          if ((local_38 & 0xff00) == 0) {
            return 0;
          }
          if ((local_38 & 1) != 0) {
            return 0;
          }
          uVar2 = 1;
          iVar6 = *piVar10;
          pcVar5 = "}";
          while( true ) {
            uVar8 = *(uint *)(iVar6 + 4);
            uVar4 = uVar8 ^ 0x7fffffff;
            if (uVar2 < uVar4) {
              uVar4 = uVar2;
            }
            FUN_01284394(iVar6,pcVar5,uVar4);
            if (uVar8 == 0x7fffffff) break;
            pcVar5 = pcVar5 + uVar4;
            uVar2 = uVar2 - uVar4;
            if (uVar2 == 0) {
              return 0;
            }
          }
LAB_00ee86b0:
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
        }
      }
LAB_00ee86bc:
      iVar6 = FUN_01966f50(local_30,local_2c);
      return iVar6;
    }
    uVar2 = 4;
    iVar6 = *piVar10;
    puVar3 = &DAT_0056d030;
    while( true ) {
      uVar8 = *(uint *)(iVar6 + 4);
      uVar4 = uVar8 ^ 0x7fffffff;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      FUN_01284394(iVar6,puVar3,uVar4);
      if (uVar8 == 0x7fffffff) break;
      puVar3 = puVar3 + uVar4;
      uVar2 = uVar2 - uVar4;
      if (uVar2 == 0) {
        return 0;
      }
    }
LAB_00ee7698:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar6 = FUN_01966f50(local_30,local_2c);
  return iVar6;
}

