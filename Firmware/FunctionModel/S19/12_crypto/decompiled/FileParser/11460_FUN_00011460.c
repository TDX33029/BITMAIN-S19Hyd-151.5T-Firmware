// FUN_00011460 @ 00011460  size=2660  callers=1
// program: FileParser


int FUN_00011460(char *param_1,char *param_2,char *param_3,char param_4,char param_5,char param_6)

{
  ulong uVar1;
  char *pcVar2;
  char local_be4 [260];
  SHA256_CTX SStack_ae0;
  uchar local_a70 [32];
  undefined4 local_a50;
  undefined1 auStack_a4c [252];
  SHA256_CTX SStack_950;
  uchar auStack_8e0 [1056];
  undefined4 local_4c0;
  undefined1 auStack_4bc [1020];
  undefined1 auStack_c0 [48];
  int local_90;
  uint local_54;
  uint local_50;
  int local_4c;
  RSA *local_48;
  BIO *local_44;
  FILE *local_40;
  int local_3c;
  uint local_38;
  FILE *local_34;
  uint local_30;
  ushort local_2a;
  FILE *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  byte local_9;
  
  FUN_00012270(param_1,auStack_c0);
  local_24 = local_90;
  if (local_90 < 0x800) {
    printf("File \'%s\' Not Enough %d, Something Wrong!\n",param_1,0x800);
    local_3c = 6;
  }
  else {
    local_28 = fopen64(param_1,"rb");
    if (local_28 == (FILE *)0x0) {
      printf("Read File \'%s\' Failed!\n",param_1);
      local_3c = 7;
    }
    else {
      fread(param_3,0x800,1,local_28);
      if (*param_3 == '&') {
        local_9 = 0;
        local_2a = CONCAT11(param_3[0xb],param_3[0xc]);
        if ((param_6 == '\0') ||
           (printf("content:%x\n",(uint)local_2a), (local_2a & 0xfe00) == 0xfe00)) {
          for (local_10 = 0; (int)local_10 < 0x10; local_10 = local_10 + 1) {
            if (((int)(uint)local_2a >> (local_10 & 0xff) & 1U) != 0) {
              local_9 = local_9 + 1;
            }
          }
          if (local_9 == param_3[0x518]) {
            local_14 = ((byte)param_3[0x518] + 9) * 0x100;
            local_30 = (uint)(byte)param_3[0x519] << 0x18 | (uint)(byte)param_3[0x51a] << 0x10 |
                       (uint)(byte)param_3[0x51b] << 8 | (uint)(byte)param_3[0x51c];
            for (local_18 = 0; local_18 < (int)(uint)local_9; local_18 = local_18 + 1) {
              local_54 = (uint)(byte)param_3[local_18 * 5 + 0x51e] << 0x18 |
                         (uint)(byte)param_3[local_18 * 5 + 0x51f] << 0x10 |
                         (uint)(byte)param_3[local_18 * 5 + 0x520] << 8 |
                         (uint)(byte)param_3[local_18 * 5 + 0x521];
              local_14 = local_14 + local_54;
              printf("file[%d] size:[%d]\n",local_18,local_54);
            }
            if (local_14 == local_24) {
              local_34 = fopen64(param_2,"r");
              if (local_34 == (FILE *)0x0) {
                printf("Cannot Open Root PublicKey \'%s\'!\n",param_2);
                if (local_28 != (FILE *)0x0) {
                  fclose(local_28);
                }
                local_3c = 0xb;
              }
              else {
                local_4c0 = 0;
                memset(auStack_4bc,0,0x3fc);
                fread(&local_4c0,0x400,1,local_34);
                fclose(local_34);
                local_34 = (FILE *)0x0;
                local_38 = (uint)CONCAT11(param_3[0x16],param_3[0x17]);
                local_3c = FUN_00010c70(param_3 + 0x18,local_38,param_3 + 0x418,&local_4c0);
                if (local_3c == 0) {
                  if (param_4 != '\0') {
                    local_40 = fopen64("/tmp/tmpfw/miner.pem","w");
                    if (local_40 == (FILE *)0x0) {
                      puts("Dump Miner.pem Failed!\r");
                      return 0xf;
                    }
                    fwrite(param_3 + 0x18,1,local_38,local_40);
                    fclose(local_40);
                    local_40 = fopen64("/tmp/tmpfw/miner.pem.sig","w");
                    if (local_40 == (FILE *)0x0) {
                      puts("Dump Miner.pem.sig Failed!\r");
                      return 0x10;
                    }
                    fwrite(param_3 + 0x418,1,0x100,local_40);
                    fclose(local_40);
                  }
                  memset(auStack_8e0,0,0x420);
                  SHA256_Init(&SStack_950);
                  SHA256_Update(&SStack_950,param_3,0x800);
                  SHA256_Final(auStack_8e0,&SStack_950);
                  for (local_1c = 0; local_1c < (int)(uint)local_9; local_1c = local_1c + 1) {
                    local_50 = (uint)(byte)param_3[local_1c * 5 + 0x51e] << 0x18 |
                               (uint)(byte)param_3[local_1c * 5 + 0x51f] << 0x10 |
                               (uint)(byte)param_3[local_1c * 5 + 0x520] << 8 |
                               (uint)(byte)param_3[local_1c * 5 + 0x521];
                    FUN_00010de8(local_28,local_50,auStack_8e0 + (local_1c + 1) * 0x20,
                                 param_3[local_1c * 5 + 0x51d],0,param_4);
                  }
                  for (local_20 = 0; local_20 < (int)(uint)local_9; local_20 = local_20 + 1) {
                    FUN_00010de8(local_28,0x100,auStack_8e0 + (local_9 + 1 + local_20) * 0x20,
                                 param_3[local_20 * 5 + 0x51d],1,param_4);
                  }
                  local_a50 = 0;
                  memset(auStack_a4c,0,0xfc);
                  fseek(local_28,-0x100,2);
                  fread(&local_a50,0x100,1,local_28);
                  local_a70[0] = '\0';
                  local_a70[1] = '\0';
                  local_a70[2] = '\0';
                  local_a70[3] = '\0';
                  local_a70[4] = '\0';
                  local_a70[5] = '\0';
                  local_a70[6] = '\0';
                  local_a70[7] = '\0';
                  local_a70[8] = '\0';
                  local_a70[9] = '\0';
                  local_a70[10] = '\0';
                  local_a70[0xb] = '\0';
                  local_a70[0xc] = '\0';
                  local_a70[0xd] = '\0';
                  local_a70[0xe] = '\0';
                  local_a70[0xf] = '\0';
                  local_a70[0x10] = '\0';
                  local_a70[0x11] = '\0';
                  local_a70[0x12] = '\0';
                  local_a70[0x13] = '\0';
                  local_a70[0x14] = '\0';
                  local_a70[0x15] = '\0';
                  local_a70[0x16] = '\0';
                  local_a70[0x17] = '\0';
                  local_a70[0x18] = '\0';
                  local_a70[0x19] = '\0';
                  local_a70[0x1a] = '\0';
                  local_a70[0x1b] = '\0';
                  local_a70[0x1c] = '\0';
                  local_a70[0x1d] = '\0';
                  local_a70[0x1e] = '\0';
                  local_a70[0x1f] = '\0';
                  SHA256_Init(&SStack_ae0);
                  SHA256_Update(&SStack_ae0,auStack_8e0,(uint)local_9 * 0x40 + 0x20);
                  SHA256_Final(local_a70,&SStack_ae0);
                  local_44 = (BIO *)0x0;
                  local_48 = (RSA *)0x0;
                  local_44 = BIO_new_mem_buf(param_3 + 0x18,0x400);
                  local_48 = PEM_read_bio_RSA_PUBKEY
                                       (local_44,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
                  if (local_48 == (RSA *)0x0) {
                    uVar1 = ERR_get_error();
                    pcVar2 = ERR_error_string(uVar1,(char *)0x0);
                    printf("OpenSSL error: %s\n",pcVar2);
                    puts("Load Pem Failed!");
                    local_3c = 0x11;
                  }
                  else {
                    local_4c = RSA_verify(0x2a0,local_a70,0x20,(uchar *)&local_a50,0x100,local_48);
                    if (local_48 != (RSA *)0x0) {
                      RSA_free(local_48);
                    }
                    if (local_44 != (BIO *)0x0) {
                      BIO_free(local_44);
                    }
                    if (local_4c == 1) {
                      if (local_28 != (FILE *)0x0) {
                        fclose(local_28);
                      }
                      local_28 = (FILE *)0x0;
                      puts("All Done!\r");
                      if (param_5 != '\0') {
                        puts("This Comment Of This Package:");
                        local_be4[0] = '\0';
                        local_be4[1] = '\0';
                        local_be4[2] = '\0';
                        local_be4[3] = '\0';
                        memset(local_be4 + 4,0,0xfd);
                        memcpy(local_be4,param_3 + 0x550,0x100);
                        puts(local_be4);
                      }
                      local_3c = 0;
                    }
                    else {
                      puts("Check File Sig failed!\r");
                      uVar1 = ERR_get_error();
                      pcVar2 = ERR_error_string(uVar1,(char *)0x0);
                      printf("OpenSSL error: %s\n",pcVar2);
                      local_3c = 0x12;
                    }
                  }
                }
                else {
                  printf("Check pem payload failed! ret:[%d]\n",local_3c);
                  if (local_28 != (FILE *)0x0) {
                    fclose(local_28);
                  }
                }
              }
            }
            else {
              printf("Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\n"
                     ,local_30,local_24,local_14);
              if (local_28 != (FILE *)0x0) {
                fclose(local_28);
              }
              local_3c = 10;
            }
          }
          else {
            printf("Content Doesn\'t Match![%d][%d]\n",(uint)(byte)param_3[0x518],(uint)local_9);
            if (local_28 != (FILE *)0x0) {
              fclose(local_28);
            }
            local_3c = 9;
          }
        }
        else {
          puts("This Package Was Not Full Package!");
          local_3c = 0x14;
        }
      }
      else {
        printf("\'%s\' Not A Btmu File!\n",param_1);
        if (local_28 != (FILE *)0x0) {
          fclose(local_28);
        }
        local_3c = 8;
      }
    }
  }
  return local_3c;
}

