// FUN_000513a0 @ 000513a0  size=2444
// callers: [FUN_00015500]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000513a0(void)

{
  int iVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char local_2058 [32];
  char acStack_2038 [32];
  char local_2018 [4];
  char acStack_2014 [4];
  char acStack_2010 [4];
  char acStack_200c [4];
  char local_2008 [4];
  undefined3 uStack_2004;
  undefined1 uStack_2001;
  char acStack_2000 [4];
  char acStack_1ffc [4];
  char local_1ff8 [4];
  char acStack_1ff4 [4];
  undefined1 local_1ff0;
  
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
        uVar5 = 0;
        do {
          uVar6 = uVar5 + 1;
          iVar1 = FUN_0002a6f0(uVar5);
          if (iVar1 != 0) {
            thunk_FUN_00083540(uVar5 & 0xff);
          }
          uVar5 = uVar6;
        } while (uVar6 != 4);
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
            acStack_1ffc[0] = s_Fixture_data_load_failed__exit__000a4ec0[0x1c];
            acStack_1ffc[1] = s_Fixture_data_load_failed__exit__000a4ec0[0x1d];
            acStack_1ffc[2] = s_Fixture_data_load_failed__exit__000a4ec0[0x1e];
            acStack_1ffc[3] = s_Fixture_data_load_failed__exit__000a4ec0[0x1f];
            local_1ff8[0] = (char)ram0x000a4ee0;
            FUN_0004948c(3,local_2018,0);
          }
        }
        memset(local_2058,0,0x20);
        memset(acStack_2038,0,0x20);
        uVar5 = 0;
        do {
          iVar1 = FUN_0002a6f0(uVar5);
          if (iVar1 != 0) {
            memset(acStack_2038,0,0x20);
            iVar1 = FUN_0001da54(uVar5,acStack_2038,0x20);
            iVar3 = FUN_0002c3f4();
            if ((iVar3 == 0) || (iVar3 = FUN_0002c414(), iVar3 == 0)) {
              if (iVar1 != 0) {
                if (3 < DAT_000be63c) {
                  snprintf(local_2018,0x2000,"get board name failed for chain:%d\n",uVar5);
                  FUN_0004948c(3,local_2018,0);
                  return -1;
                }
                goto LAB_00051a0c;
              }
            }
            else {
              pcVar2 = (char *)FUN_0002c494(uVar5 & 0xff);
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
                           ,uVar5,local_2058,acStack_2038);
                  FUN_0004948c(3,local_2018,0);
                  return -1;
                }
                goto LAB_00051a0c;
              }
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != 4);
        __n = strlen(local_2058);
        strncpy(DAT_00051d2c,local_2058,__n);
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
        iVar3 = FUN_0001b800(local_2058);
        iVar1 = DAT_00051d30;
        if (iVar3 != 0) {
          return iVar3;
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
        iVar3 = 0;
        do {
          iVar4 = FUN_0002a6f0(iVar3);
          if (iVar4 != 0) {
            FUN_0001db64(iVar3,iVar1 + iVar3,1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 4);
        iVar1 = FUN_0002a6e0();
        if (iVar1 == 3) {
          FUN_000512bc(DAT_00051d34 + -2,DAT_00051d34 + -1);
        }
        iVar1 = FUN_000456ec();
        if (3 < iVar1) {
          if (3 < DAT_000be63c) {
            acStack_1ffc[0] = s_miner_has_reached_find_asic_max_f_000a5004[0x1c];
            acStack_1ffc[1] = s_miner_has_reached_find_asic_max_f_000a5004[0x1d];
            acStack_1ffc[2] = s_miner_has_reached_find_asic_max_f_000a5004[0x1e];
            acStack_1ffc[3] = s_miner_has_reached_find_asic_max_f_000a5004[0x1f];
            local_1ff8[0] = s_miner_has_reached_find_asic_max_f_000a5004[0x20];
            local_1ff8[1] = s_miner_has_reached_find_asic_max_f_000a5004[0x21];
            local_1ff8[2] = s_miner_has_reached_find_asic_max_f_000a5004[0x22];
            local_1ff8[3] = s_miner_has_reached_find_asic_max_f_000a5004[0x23];
            acStack_1ff4[0] = s_miner_has_reached_find_asic_max_f_000a5004[0x24];
            acStack_1ff4[1] = s_miner_has_reached_find_asic_max_f_000a5004[0x25];
            acStack_1ff4[2] = s_miner_has_reached_find_asic_max_f_000a5004[0x26];
            acStack_1ff4[3] = s_miner_has_reached_find_asic_max_f_000a5004[0x27];
            local_1ff0 = (undefined1)ram0x000a502c;
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
        local_2018[0] = s_No_chain_exist__exit__000a4ea8[0];
        local_2018[1] = s_No_chain_exist__exit__000a4ea8[1];
        local_2018[2] = s_No_chain_exist__exit__000a4ea8[2];
        local_2018[3] = s_No_chain_exist__exit__000a4ea8[3];
        acStack_2014[0] = s_No_chain_exist__exit__000a4ea8[4];
        acStack_2014[1] = s_No_chain_exist__exit__000a4ea8[5];
        acStack_2014[2] = s_No_chain_exist__exit__000a4ea8[6];
        acStack_2014[3] = s_No_chain_exist__exit__000a4ea8[7];
        acStack_2010[0] = s_No_chain_exist__exit__000a4ea8[8];
        acStack_2010[1] = s_No_chain_exist__exit__000a4ea8[9];
        acStack_2010[2] = s_No_chain_exist__exit__000a4ea8[10];
        acStack_2010[3] = s_No_chain_exist__exit__000a4ea8[0xb];
        acStack_200c[0] = s_No_chain_exist__exit__000a4ea8[0xc];
        acStack_200c[1] = s_No_chain_exist__exit__000a4ea8[0xd];
        acStack_200c[2] = s_No_chain_exist__exit__000a4ea8[0xe];
        acStack_200c[3] = s_No_chain_exist__exit__000a4ea8[0xf];
        local_2008[0] = s_No_chain_exist__exit__000a4ea8[0x10];
        local_2008[1] = s_No_chain_exist__exit__000a4ea8[0x11];
        local_2008[2] = s_No_chain_exist__exit__000a4ea8[0x12];
        local_2008[3] = s_No_chain_exist__exit__000a4ea8[0x13];
        uStack_2004 = (undefined3)ram0x000a4ebc;
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
        local_2018[0] = s_No_full_chain_exist__exit__000a4e8c[0];
        local_2018[1] = s_No_full_chain_exist__exit__000a4e8c[1];
        local_2018[2] = s_No_full_chain_exist__exit__000a4e8c[2];
        local_2018[3] = s_No_full_chain_exist__exit__000a4e8c[3];
        acStack_2014[0] = s_No_full_chain_exist__exit__000a4e8c[4];
        acStack_2014[1] = s_No_full_chain_exist__exit__000a4e8c[5];
        acStack_2014[2] = s_No_full_chain_exist__exit__000a4e8c[6];
        acStack_2014[3] = s_No_full_chain_exist__exit__000a4e8c[7];
        acStack_2010[0] = s_No_full_chain_exist__exit__000a4e8c[8];
        acStack_2010[1] = s_No_full_chain_exist__exit__000a4e8c[9];
        acStack_2010[2] = s_No_full_chain_exist__exit__000a4e8c[10];
        acStack_2010[3] = s_No_full_chain_exist__exit__000a4e8c[0xb];
        acStack_200c[0] = s_No_full_chain_exist__exit__000a4e8c[0xc];
        acStack_200c[1] = s_No_full_chain_exist__exit__000a4e8c[0xd];
        acStack_200c[2] = s_No_full_chain_exist__exit__000a4e8c[0xe];
        acStack_200c[3] = s_No_full_chain_exist__exit__000a4e8c[0xf];
        local_2008[0] = s_No_full_chain_exist__exit__000a4e8c[0x10];
        local_2008[1] = s_No_full_chain_exist__exit__000a4e8c[0x11];
        local_2008[2] = s_No_full_chain_exist__exit__000a4e8c[0x12];
        local_2008[3] = s_No_full_chain_exist__exit__000a4e8c[0x13];
        uStack_2004._0_1_ = s_No_full_chain_exist__exit__000a4e8c[0x14];
        uStack_2004._1_1_ = s_No_full_chain_exist__exit__000a4e8c[0x15];
        uStack_2004._2_1_ = s_No_full_chain_exist__exit__000a4e8c[0x16];
        uStack_2001 = s_No_full_chain_exist__exit__000a4e8c[0x17];
        acStack_2000[0] = s_No_full_chain_exist__exit__000a4e8c[0x18];
        acStack_2000[1] = s_No_full_chain_exist__exit__000a4e8c[0x19];
        acStack_2000[2] = s_No_full_chain_exist__exit__000a4e8c[0x1a];
        acStack_2000[3] = s_No_full_chain_exist__exit__000a4e8c[0x1b];
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


