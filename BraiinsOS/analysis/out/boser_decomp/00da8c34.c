// FUN_00da8c34 @ 00da8c34 size=2336 calls_out=11 calls_in=0
// strings: a UUID string | static | netmask | gateway | dns_servers

void FUN_00da8c34(undefined4 param_1,int *param_2)

{
  int **ppiVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int **local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *local_3c;
  undefined4 local_38;
  int **local_34;
  int local_30;
  int **local_2c;
  
  local_60 = thunk_FUN_01be5118(0x80);
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_3c = &local_60;
  local_5c = 0;
  uVar2 = 1;
  local_54 = 1;
  local_58 = 0x80;
  if (*param_2 == -0x80000000) {
    uVar2 = 4;
    puVar4 = &DAT_0056d030;
    do {
      uVar3 = local_5c;
      uVar7 = local_5c ^ 0x7fffffff;
      if (uVar2 < (local_5c ^ 0x7fffffff)) {
        uVar7 = uVar2;
      }
      FUN_01284394(&local_60,puVar4,uVar7);
      if (uVar3 == 0x7fffffff) {
        iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
        goto LAB_00da952c;
      }
      puVar4 = puVar4 + uVar7;
      uVar2 = uVar2 - uVar7;
    } while (uVar2 != 0);
    iVar5 = 0;
  }
  else {
    pcVar6 = "{";
    do {
      uVar3 = local_5c;
      uVar7 = local_5c ^ 0x7fffffff;
      if (uVar2 < (local_5c ^ 0x7fffffff)) {
        uVar7 = uVar2;
      }
      FUN_01284394(&local_60,pcVar6,uVar7);
      if (uVar3 == 0x7fffffff) goto LAB_00da9518;
      pcVar6 = pcVar6 + uVar7;
      uVar2 = uVar2 - uVar7;
    } while (uVar2 != 0);
    local_34 = &local_3c;
    local_38 = 0x100;
    iVar5 = FUN_0096b5ec(&local_38,&DAT_00570b90,8,param_2[1],param_2[2]);
    ppiVar1 = local_34;
    if (iVar5 == 0) {
      if ((char)local_38 == '\0') {
        if (local_38._1_1_ != '\x01') {
          uVar2 = 1;
          pcVar6 = ",";
          piVar8 = *local_34;
          do {
            uVar7 = piVar8[1];
            uVar3 = uVar7 ^ 0x7fffffff;
            if (uVar2 < uVar3) {
              uVar3 = uVar2;
            }
            FUN_01284394(piVar8,pcVar6,uVar3);
            if (uVar7 == 0x7fffffff) goto LAB_00da9518;
            pcVar6 = pcVar6 + uVar3;
            uVar2 = uVar2 - uVar3;
          } while (uVar2 != 0);
        }
        local_38._0_2_ = CONCAT11(2,(char)local_38);
        FUN_0096b2b0(&local_50,*ppiVar1,&DAT_00570770,8);
        if ((char)local_50 == '\x04') {
          uVar2 = 1;
          pcVar6 = ":";
          piVar8 = *ppiVar1;
          do {
            uVar7 = piVar8[1];
            uVar3 = uVar7 ^ 0x7fffffff;
            if (uVar2 < uVar3) {
              uVar3 = uVar2;
            }
            FUN_01284394(piVar8,pcVar6,uVar3);
            if (uVar7 == 0x7fffffff) goto LAB_00da9518;
            pcVar6 = pcVar6 + uVar3;
            uVar2 = uVar2 - uVar3;
          } while (uVar2 != 0);
          if (param_2[3] == -0x7fffffff) {
            uVar2 = 4;
            puVar4 = &DAT_0056d030;
            piVar8 = *ppiVar1;
            do {
              uVar7 = piVar8[1];
              uVar3 = uVar7 ^ 0x7fffffff;
              if (uVar2 < uVar3) {
                uVar3 = uVar2;
              }
              FUN_01284394(piVar8,puVar4,uVar3);
              if (uVar7 == 0x7fffffff) goto LAB_00da9518;
              puVar4 = puVar4 + uVar3;
              uVar2 = uVar2 - uVar3;
            } while (uVar2 != 0);
          }
          else {
            pcVar6 = "{";
            if (param_2[3] == -0x80000000) {
              uVar2 = 1;
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              FUN_0096b2b0(&local_50,*ppiVar1,&DAT_0056d034,4);
              if ((char)local_50 != '\x04') {
                iVar5 = FUN_01966f50(local_50,local_4c);
                goto LAB_00da952c;
              }
              uVar2 = 1;
              pcVar6 = ":";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              uVar2 = 1;
              pcVar6 = "{";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              uVar2 = 1;
              pcVar6 = "}";
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              uVar2 = 1;
              pcVar6 = "}";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
            }
            else {
              uVar2 = 1;
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              FUN_0096b2b0(&local_50,*ppiVar1,"static",6);
              if ((char)local_50 != '\x04') {
                iVar5 = FUN_01966f50(local_50,local_4c);
                goto LAB_00da952c;
              }
              uVar2 = 1;
              pcVar6 = ":";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              uVar2 = 1;
              pcVar6 = "{";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) {
                  iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
                  goto LAB_00da952c;
                }
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
              local_2c = ppiVar1;
              local_30 = 0x100;
              iVar5 = FUN_0096b5ec(&local_30,&DAT_004cfb47,7,param_2[4],param_2[5]);
              if (iVar5 != 0) goto LAB_00da952c;
              if ((char)local_30 == '\x01') {
                local_50 = 10;
                iVar5 = FUN_01966fbc(&local_50,0,0);
                goto LAB_00da952c;
              }
              iVar5 = FUN_0096b5ec(&local_30,"netmask",7,param_2[7],param_2[8]);
              if (iVar5 != 0) goto LAB_00da952c;
              if ((char)local_30 == '\x01') {
                local_50 = 10;
                iVar5 = FUN_01966fbc(&local_50,0,0);
                goto LAB_00da952c;
              }
              iVar5 = FUN_0096b5ec(&local_30,"gateway",7,param_2[10],param_2[0xb]);
              if (iVar5 != 0) goto LAB_00da952c;
              if ((char)local_30 == '\x01') {
                local_50 = 10;
                iVar5 = FUN_01966fbc(&local_50,0,0);
                goto LAB_00da952c;
              }
              iVar5 = FUN_00ee26b8(&local_30,"dns_servers",0xb,param_2[0xd],param_2[0xe]);
              if (iVar5 != 0) goto LAB_00da952c;
              local_4c = local_2c;
              local_50 = local_30;
              iVar5 = FUN_00d57dc0(&local_50);
              if (iVar5 != 0) goto LAB_00da952c;
              uVar2 = 1;
              pcVar6 = "}";
              piVar8 = *ppiVar1;
              do {
                uVar7 = piVar8[1];
                uVar3 = uVar7 ^ 0x7fffffff;
                if (uVar2 < uVar3) {
                  uVar3 = uVar2;
                }
                FUN_01284394(piVar8,pcVar6,uVar3);
                if (uVar7 == 0x7fffffff) goto LAB_00da9518;
                pcVar6 = pcVar6 + uVar3;
                uVar2 = uVar2 - uVar3;
              } while (uVar2 != 0);
            }
          }
          iVar5 = 0;
          if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
            uVar2 = 1;
            pcVar6 = "}";
            piVar8 = *ppiVar1;
            do {
              uVar7 = piVar8[1];
              uVar3 = uVar7 ^ 0x7fffffff;
              if (uVar2 < uVar3) {
                uVar3 = uVar2;
              }
              FUN_01284394(piVar8,pcVar6,uVar3);
              if (uVar7 == 0x7fffffff) goto LAB_00da9518;
              pcVar6 = pcVar6 + uVar3;
              uVar2 = uVar2 - uVar3;
            } while (uVar2 != 0);
          }
        }
        else {
          iVar5 = FUN_01966f50(local_50,local_4c);
        }
      }
      else {
        local_50 = 10;
        iVar5 = FUN_01966fbc(&local_50,0,0);
      }
    }
  }
LAB_00da952c:
  local_50 = local_60;
  local_4c = (int **)local_5c;
  uStack_48 = local_58;
  uStack_44 = local_54;
  FUN_00710a2c(param_1,&local_50,iVar5);
  FUN_00d71f54(param_2);
  return;
LAB_00da9518:
  iVar5 = FUN_01966f50(2,&DAT_01d2e7b8);
  goto LAB_00da952c;
}

