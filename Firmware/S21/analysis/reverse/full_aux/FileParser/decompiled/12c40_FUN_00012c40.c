// FUN_00012c40 @ 00012c40  size=3016  callers=1
// program: FileParser


int FUN_00012c40(char *param_1,char *param_2,char *param_3,char *param_4,char param_5,char param_6,
                char param_7)

{
  size_t sVar1;
  ulong uVar2;
  char *pcVar3;
  char local_bfc [260];
  SHA256_CTX SStack_af8;
  uchar local_a88 [32];
  undefined4 local_a68;
  undefined1 auStack_a64 [252];
  SHA256_CTX SStack_968;
  uchar auStack_8f8 [1056];
  undefined4 local_4d8;
  undefined1 auStack_4d4 [1020];
  int local_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [48];
  int local_a0;
  uint local_68;
  uint local_64;
  int local_60;
  RSA *local_5c;
  BIO *local_58;
  FILE *local_54;
  FILE *local_50;
  int local_4c;
  uint local_48;
  FILE *local_44;
  uint local_40;
  ushort local_3a;
  ulonglong local_38;
  FILE *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  byte local_11;
  
  FUN_00013c2c(param_1,auStack_d0);
  local_2c = local_a0;
  if (local_a0 < 0x800) {
    printf("File \'%s\' Not Enough %d, Something Wrong!\n",param_1,0x800);
    local_4c = 6;
  }
  else {
    local_30 = fopen64(param_1,"rb");
    if (local_30 == (FILE *)0x0) {
      printf("Read File \'%s\' Failed!\n",param_1);
      local_4c = 7;
    }
    else {
      fread(param_4,0x800,1,local_30);
      if (*param_4 == '&') {
        printf("miner_type %s\n",param_2);
        sVar1 = strlen(param_2);
        local_38 = FUN_00012180(param_2,sVar1);
        memcpy(&local_d8,param_4 + 2,8);
        printf("miner_type_hash %16llx, bmu_hash %16llx\n",local_38,CONCAT44(uStack_d4,local_d8));
        if (local_38 == CONCAT44(uStack_d4,local_d8)) {
          local_11 = 0;
          local_3a = CONCAT11(param_4[0xb],param_4[0xc]);
          if (param_7 != '\0') {
            printf("content:%x\n",(uint)local_3a);
            if ((local_3a & 0xfe00) != 0xfe00) {
              puts("This Package Was Not Full Package!");
              return 0x14;
            }
          }
          for (local_18 = 0; (int)local_18 < 0x10; local_18 = local_18 + 1) {
            if (((int)(uint)local_3a >> (local_18 & 0xff) & 1U) != 0) {
              local_11 = local_11 + 1;
            }
          }
          if (local_11 == param_4[0x518]) {
            local_1c = ((byte)param_4[0x518] + 9) * 0x100;
            local_40 = (uint)(byte)param_4[0x519] << 0x18 | (uint)(byte)param_4[0x51a] << 0x10 |
                       (uint)(byte)param_4[0x51b] << 8 | (uint)(byte)param_4[0x51c];
            for (local_20 = 0; local_20 < (int)(uint)local_11; local_20 = local_20 + 1) {
              local_68 = (uint)(byte)param_4[local_20 * 5 + 0x51e] << 0x18 |
                         (uint)(byte)param_4[local_20 * 5 + 0x51f] << 0x10 |
                         (uint)(byte)param_4[local_20 * 5 + 0x520] << 8 |
                         (uint)(byte)param_4[local_20 * 5 + 0x521];
              local_1c = local_1c + local_68;
              printf("file[%d] size:[%d]\n",local_20,local_68);
            }
            if (local_1c == local_2c) {
              local_44 = fopen64(param_3,"r");
              if (local_44 == (FILE *)0x0) {
                printf("Cannot Open Root PublicKey \'%s\'!\n",param_3);
                if (local_30 != (FILE *)0x0) {
                  fclose(local_30);
                }
                local_4c = 0xb;
              }
              else {
                local_4d8 = 0;
                memset(auStack_4d4,0,0x3fc);
                fread(&local_4d8,0x400,1,local_44);
                fclose(local_44);
                local_44 = (FILE *)0x0;
                local_48 = (uint)CONCAT11(param_4[0x16],param_4[0x17]);
                local_4c = FUN_00010c70(param_4 + 0x18,local_48,param_4 + 0x418,&local_4d8);
                if (local_4c == 0) {
                  local_50 = fopen64("/usr/bin/fw_version","w");
                  if (local_50 != (FILE *)0x0) {
                    printf("fw version data: %02X %02X %02X %02X %02X %02X %02X %02X\n",
                           (uint)(byte)param_4[0xd],(uint)(byte)param_4[0xe],
                           (uint)(byte)param_4[0xf],(uint)(byte)param_4[0x10],
                           (uint)(byte)param_4[0x11],(uint)(byte)param_4[0x12],
                           (uint)(byte)param_4[0x13],(uint)(byte)param_4[0x14]);
                    fwrite(param_4 + 0xd,1,8,local_50);
                    fclose(local_50);
                  }
                  if (param_5 != '\0') {
                    local_54 = fopen64("/tmp/tmpfw/miner.pem","w");
                    if (local_54 == (FILE *)0x0) {
                      puts("Dump Miner.pem Failed!\r");
                      return 0xf;
                    }
                    fwrite(param_4 + 0x18,1,local_48,local_54);
                    fclose(local_54);
                    local_54 = fopen64("/tmp/tmpfw/miner.pem.sig","w");
                    if (local_54 == (FILE *)0x0) {
                      puts("Dump Miner.pem.sig Failed!\r");
                      return 0x10;
                    }
                    fwrite(param_4 + 0x418,1,0x100,local_54);
                    fclose(local_54);
                  }
                  memset(auStack_8f8,0,0x420);
                  SHA256_Init(&SStack_968);
                  SHA256_Update(&SStack_968,param_4,0x800);
                  SHA256_Final(auStack_8f8,&SStack_968);
                  for (local_24 = 0; local_24 < (int)(uint)local_11; local_24 = local_24 + 1) {
                    local_64 = (uint)(byte)param_4[local_24 * 5 + 0x51e] << 0x18 |
                               (uint)(byte)param_4[local_24 * 5 + 0x51f] << 0x10 |
                               (uint)(byte)param_4[local_24 * 5 + 0x520] << 8 |
                               (uint)(byte)param_4[local_24 * 5 + 0x521];
                    FUN_00010de8(local_30,local_64,auStack_8f8 + (local_24 + 1) * 0x20,
                                 param_4[local_24 * 5 + 0x51d],0,param_5);
                  }
                  for (local_28 = 0; local_28 < (int)(uint)local_11; local_28 = local_28 + 1) {
                    FUN_00010de8(local_30,0x100,auStack_8f8 + (local_11 + 1 + local_28) * 0x20,
                                 param_4[local_28 * 5 + 0x51d],1,param_5);
                  }
                  local_a68 = 0;
                  memset(auStack_a64,0,0xfc);
                  fseek(local_30,-0x100,2);
                  fread(&local_a68,0x100,1,local_30);
                  local_a88[0] = '\0';
                  local_a88[1] = '\0';
                  local_a88[2] = '\0';
                  local_a88[3] = '\0';
                  local_a88[4] = '\0';
                  local_a88[5] = '\0';
                  local_a88[6] = '\0';
                  local_a88[7] = '\0';
                  local_a88[8] = '\0';
                  local_a88[9] = '\0';
                  local_a88[10] = '\0';
                  local_a88[0xb] = '\0';
                  local_a88[0xc] = '\0';
                  local_a88[0xd] = '\0';
                  local_a88[0xe] = '\0';
                  local_a88[0xf] = '\0';
                  local_a88[0x10] = '\0';
                  local_a88[0x11] = '\0';
                  local_a88[0x12] = '\0';
                  local_a88[0x13] = '\0';
                  local_a88[0x14] = '\0';
                  local_a88[0x15] = '\0';
                  local_a88[0x16] = '\0';
                  local_a88[0x17] = '\0';
                  local_a88[0x18] = '\0';
                  local_a88[0x19] = '\0';
                  local_a88[0x1a] = '\0';
                  local_a88[0x1b] = '\0';
                  local_a88[0x1c] = '\0';
                  local_a88[0x1d] = '\0';
                  local_a88[0x1e] = '\0';
                  local_a88[0x1f] = '\0';
                  SHA256_Init(&SStack_af8);
                  SHA256_Update(&SStack_af8,auStack_8f8,(uint)local_11 * 0x40 + 0x20);
                  SHA256_Final(local_a88,&SStack_af8);
                  local_58 = (BIO *)0x0;
                  local_5c = (RSA *)0x0;
                  local_58 = BIO_new_mem_buf(param_4 + 0x18,0x400);
                  local_5c = PEM_read_bio_RSA_PUBKEY
                                       (local_58,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
                  if (local_5c == (RSA *)0x0) {
                    uVar2 = ERR_get_error();
                    pcVar3 = ERR_error_string(uVar2,(char *)0x0);
                    printf("OpenSSL error: %s\n",pcVar3);
                    puts("Load Pem Failed!");
                    local_4c = 0x11;
                  }
                  else {
                    local_60 = RSA_verify(0x2a0,local_a88,0x20,(uchar *)&local_a68,0x100,local_5c);
                    if (local_5c != (RSA *)0x0) {
                      RSA_free(local_5c);
                    }
                    if (local_58 != (BIO *)0x0) {
                      BIO_free(local_58);
                    }
                    if (local_60 == 1) {
                      if (local_30 != (FILE *)0x0) {
                        fclose(local_30);
                      }
                      local_30 = (FILE *)0x0;
                      puts("All Done!\r");
                      if (param_6 != '\0') {
                        puts("This Comment Of This Package:");
                        local_bfc[0] = '\0';
                        local_bfc[1] = '\0';
                        local_bfc[2] = '\0';
                        local_bfc[3] = '\0';
                        memset(local_bfc + 4,0,0xfd);
                        memcpy(local_bfc,param_4 + 0x550,0x100);
                        puts(local_bfc);
                      }
                      local_4c = 0;
                    }
                    else {
                      puts("Check File Sig failed!\r");
                      uVar2 = ERR_get_error();
                      pcVar3 = ERR_error_string(uVar2,(char *)0x0);
                      printf("OpenSSL error: %s\n",pcVar3);
                      local_4c = 0x12;
                    }
                  }
                }
                else {
                  printf("Check pem payload failed! ret:[%d]\n",local_4c);
                  if (local_30 != (FILE *)0x0) {
                    fclose(local_30);
                  }
                }
              }
            }
            else {
              printf("Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n"
                     ,local_40,local_2c,local_1c);
              if (local_30 != (FILE *)0x0) {
                fclose(local_30);
              }
              local_4c = 10;
            }
          }
          else {
            printf("Content Doesn\'t Match![%d][%d]\n",(uint)(byte)param_4[0x518],(uint)local_11);
            if (local_30 != (FILE *)0x0) {
              fclose(local_30);
            }
            local_4c = 9;
          }
        }
        else {
          puts("input miner_type and bmu miner type donot match!");
          if (local_30 != (FILE *)0x0) {
            fclose(local_30);
          }
          local_4c = 0x1e;
        }
      }
      else {
        printf("\'%s\' Not A Btmu File!\n",param_1);
        if (local_30 != (FILE *)0x0) {
          fclose(local_30);
        }
        local_4c = 8;
      }
    }
  }
  return local_4c;
}

