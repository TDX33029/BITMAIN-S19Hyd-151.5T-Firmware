// FUN_000513a0 @ 000513a0  size=2444  callers=1
// program: bmminer


int FUN_000513a0(void)

{
  int iVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_2058 [32];
  char acStack_2038 [32];
  char local_2018 [20];
  undefined4 uStack_2004;
  char acStack_2000 [8];
  uint local_1ff8;
  char acStack_1ff4 [8156];
  
  DAT_000be8e8 = 2;
  DAT_008c7074 = 1;
  if ((DAT_000be63c < 4) || (FUN_0004e424(), DAT_000be63c < 4)) {
    if (DAT_000c92bc == '\0') goto LAB_000514a8;
LAB_000513f4:
    iVar1 = FUN_00060724();
  }
  else {
    snprintf(local_2018,0x2000,"Miner compile time: %s type: %s\n",&DAT_000c8fbc,&DAT_000c90bc);
    FUN_0004948c(3,local_2018,0);
    if (DAT_000c92bc != '\0') {
      if (DAT_000be63c < 4) goto LAB_000513f4;
      snprintf(local_2018,0x2000,"Miner sn: %s\n",&DAT_000c92bc);
      FUN_0004948c(3,local_2018,0);
    }
LAB_000514a8:
    if (DAT_000be63c < 4) goto LAB_000513f4;
    memcpy(local_2018,
           "commit version: 3f20b1b8 2025-10-11 16:27:30, build by: jenkins 2025-10-16 17:55:51\n",
           0x55);
    FUN_0004948c(3,local_2018,0);
    if (DAT_000be63c < 4) goto LAB_000513f4;
    snprintf(local_2018,0x2000,"opt_multi_version     = %d\n",DAT_000be5ec);
    FUN_0004948c(3,local_2018,0);
    if (DAT_000be63c < 4) goto LAB_000513f4;
    snprintf(local_2018,0x2000,"opt_bitmain_ab        = %d\n",(uint)DAT_000be5f0);
    FUN_0004948c(3,local_2018,0);
    if (DAT_000be63c < 4) goto LAB_000513f4;
    snprintf(local_2018,0x2000,"mid_auto_gen          = %d\n",1);
    FUN_0004948c(3,local_2018,0);
    if (DAT_000be63c < 4) goto LAB_000513f4;
    snprintf(local_2018,0x2000,"opt_bitmain_work_mode = %d\n",DAT_000c94e8);
    FUN_0004948c(3,local_2018,0);
    iVar1 = FUN_00060724();
  }
  if (iVar1 == 0) {
    FUN_00060b04();
    FUN_00017490();
    FUN_00017560();
    FUN_00065af4();
    FUN_00065b6c();
    DAT_000be5f0 = 1;
    FUN_0003353c();
    FUN_0003c4b0();
    FUN_0002afc8();
    iVar1 = FUN_00029e18(1,"HHB68601");
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00018d1c();
    FUN_00050940();
    FUN_00024584();
    pcVar2 = (char *)FUN_0002a4e4();
    iVar1 = strcmp(pcVar2,"H6HB70601");
    if (iVar1 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar1 = strcmp(pcVar2,"H6HB70602");
      if (iVar1 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar1 = strcmp(pcVar2,"H6HB70501");
        if (iVar1 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar1 = strcmp(pcVar2,"H6HB70801");
          if (iVar1 != 0) {
            pcVar2 = (char *)FUN_0002a4e4();
            iVar1 = strcmp(pcVar2,"H6HB70802");
            if (iVar1 != 0) {
              FUN_000170ac(100);
            }
          }
        }
      }
    }
    FUN_00050084();
    FUN_0006a6a0();
    FUN_0004f484();
    iVar1 = FUN_00024f54();
    if ((iVar1 == 0) || (iVar1 = FUN_0002a6e0(), iVar1 == 3)) {
      iVar1 = FUN_0002a6e0();
      if (iVar1 != 0) {
        if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
          iVar1 = FUN_0002a6e0();
          snprintf(local_2018,0x2000,"chain num = %d",iVar1);
          FUN_0004948c(5,local_2018,0);
        }
        uVar4 = 0;
        do {
          uVar5 = uVar4 + 1;
          iVar1 = FUN_0002a6f0(uVar4);
          if (iVar1 != 0) {
            thunk_FUN_00083540(uVar4 & 0xff);
          }
          uVar4 = uVar5;
        } while (uVar5 != 4);
        iVar1 = FUN_0001c1f8();
        if (iVar1 != 0) {
          if (iVar1 < 1) {
            iVar1 = 0xff;
          }
          else {
            iVar1 = iVar1 >> 0x10;
          }
          FUN_00056e88(3,iVar1);
          if (3 < DAT_000be63c) {
            builtin_strncpy(acStack_2000 + 4,"it.\n",4);
            local_1ff8 = local_1ff8 & 0xffffff00;
            FUN_0004948c(3,local_2018,0);
          }
        }
        memset(local_2058,0,0x20);
        memset(acStack_2038,0,0x20);
        uVar4 = 0;
        do {
          iVar1 = FUN_0002a6f0(uVar4);
          if (iVar1 != 0) {
            memset(acStack_2038,0,0x20);
            iVar1 = FUN_0001da54(uVar4,acStack_2038,0x20);
            iVar3 = FUN_0002c3f4();
            if ((iVar3 == 0) || (iVar3 = FUN_0002c414(), iVar3 == 0)) {
              if (iVar1 != 0) {
                if (3 < DAT_000be63c) {
                  snprintf(local_2018,0x2000,"get board name failed for chain:%d\n",uVar4);
                  FUN_0004948c(3,local_2018,0);
                  return -1;
                }
                goto LAB_00051a0c;
              }
            }
            else {
              pcVar2 = (char *)FUN_0002c494(uVar4 & 0xff);
              strncpy(acStack_2038,pcVar2,0x20);
            }
            if (local_2058[0] == '\0') {
              strncpy(local_2058,acStack_2038,9);
            }
            else {
              iVar1 = strncmp(local_2058,acStack_2038,9);
              if (iVar1 != 0) {
                if (3 < DAT_000be63c) {
                  snprintf(local_2018,0x2000,
                           "get a different board name for chain:%d, pre board_name:%s, current board_name:%s\n"
                           ,uVar4,local_2058,acStack_2038);
                  FUN_0004948c(3,local_2018,0);
                  return -1;
                }
                goto LAB_00051a0c;
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
        __n = strlen(local_2058);
        strncpy(&DAT_008c70b4,local_2058,__n);
        iVar1 = strcmp(local_2058,"H6HB70601");
        if (iVar1 == 0) {
          strncpy(&DAT_000c90bc,"Antminer S21 Pro Hyd.",0x100);
          FUN_0004e094("S21 Pro Hyd.");
        }
        iVar1 = strcmp(local_2058,"H6HB70602");
        if (iVar1 == 0) {
          strncpy(&DAT_000c90bc,"Antminer S21e XP Hyd.",0x100);
          FUN_0004e094("S21e XP Hyd.");
        }
        iVar1 = strcmp(local_2058,"H6HB70501");
        if (iVar1 == 0) {
          strncpy(&DAT_000c90bc,"Antminer S21 XP Hyd.",0x100);
          FUN_0004e094("S21 XP Hyd.");
        }
        iVar1 = strcmp(local_2058,"H6HB70801");
        if ((iVar1 == 0) || (iVar1 = strcmp(local_2058,"H6HB70802"), iVar1 == 0)) {
          strncpy(&DAT_000c90bc,"Antminer S21e Hyd.",0x100);
          FUN_0004e094("S21e Hyd.");
        }
        iVar1 = FUN_00029e18(0,local_2058);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_0001b800(local_2058);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (DAT_000c94e8 == 1) {
          if (3 < DAT_000be63c) {
            FUN_0004948c(3,local_2018,0);
          }
          FUN_00024584();
          pcVar2 = (char *)FUN_0002a4e4();
          iVar1 = strcmp(pcVar2,"H6HB70601");
          if (iVar1 != 0) {
            pcVar2 = (char *)FUN_0002a4e4();
            iVar1 = strcmp(pcVar2,"H6HB70602");
            if (iVar1 != 0) {
              pcVar2 = (char *)FUN_0002a4e4();
              iVar1 = strcmp(pcVar2,"H6HB70801");
              if (iVar1 != 0) {
                pcVar2 = (char *)FUN_0002a4e4();
                iVar1 = strcmp(pcVar2,"H6HB70802");
                if (iVar1 != 0) {
                  pcVar2 = (char *)FUN_0002a4e4();
                  iVar1 = strcmp(pcVar2,"H6HB70501");
                  if (iVar1 != 0) {
                    FUN_000170ac(0);
                  }
                }
              }
            }
          }
          do {
            sleep(10);
          } while( true );
        }
        iVar1 = 0;
        do {
          iVar3 = FUN_0002a6f0(iVar1);
          if (iVar3 != 0) {
            FUN_0001db64(iVar1,&DAT_008c70d4 + iVar1,1);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 != 4);
        iVar1 = FUN_0002a6e0();
        if (iVar1 == 3) {
          FUN_000512bc(&DAT_008c70d4,&DAT_008c70d5);
        }
        iVar1 = FUN_000456ec();
        if (3 < iVar1) {
          if (3 < DAT_000be63c) {
            builtin_strncpy(acStack_2000 + 4,"max ",4);
            local_1ff8._0_1_ = 'f';
            local_1ff8._1_1_ = 'a';
            local_1ff8._2_1_ = 'i';
            local_1ff8._3_1_ = 'l';
            builtin_strncpy(acStack_1ff4," num",5);
            FUN_0004948c(3,local_2018,0);
          }
          FUN_00056e88(1);
          while (iVar1 = FUN_000456ec(), iVar1 != 0) {
            sleep(10);
          }
        }
        goto LAB_00051400;
      }
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2018,"No chain exist, exit",0x14);
        uStack_2004 = CONCAT13(uStack_2004._3_1_,0xa2e);
        FUN_0004948c(3,local_2018,0);
        return -1;
      }
    }
    else {
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (4 < DAT_000be644)) {
        iVar1 = FUN_0002a6e0();
        snprintf(local_2018,0x2000,"chain num = %d",iVar1);
        FUN_0004948c(5,local_2018,0);
      }
      FUN_00056e88(1,0xff);
      if (3 < DAT_000be63c) {
        builtin_strncpy(local_2018,"No full chain exist,",0x14);
        uStack_2004._0_1_ = ' ';
        uStack_2004._1_1_ = 'e';
        uStack_2004._2_1_ = 'x';
        uStack_2004._3_1_ = 'i';
        builtin_strncpy(acStack_2000,"t.\n",4);
        FUN_0004948c(3,local_2018,0);
        return -1;
      }
    }
LAB_00051a0c:
    iVar1 = -1;
  }
  else {
LAB_00051400:
    iVar1 = 0;
  }
  return iVar1;
}

