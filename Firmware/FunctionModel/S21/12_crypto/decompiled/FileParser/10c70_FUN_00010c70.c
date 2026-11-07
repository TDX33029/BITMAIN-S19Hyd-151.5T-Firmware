// FUN_00010c70 @ 00010c70  size=376  callers=1
// program: FileParser


undefined4 FUN_00010c70(void *param_1,size_t param_2,uchar *param_3,void *param_4)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  SHA256_CTX SStack_a4;
  uchar auStack_34 [32];
  int local_14;
  RSA *local_10;
  BIO *local_c;
  
  local_c = (BIO *)0x0;
  local_10 = (RSA *)0x0;
  local_c = BIO_new_mem_buf(param_4,0x400);
  local_10 = PEM_read_bio_RSA_PUBKEY(local_c,(RSA **)0x0,(undefined1 *)0x0,(void *)0x0);
  if (local_10 == (RSA *)0x0) {
    uVar1 = ERR_get_error();
    pcVar2 = ERR_error_string(uVar1,(char *)0x0);
    printf("OpenSSL error: %s\n",pcVar2);
    puts("Read Root PubK Failed!");
    uVar3 = 0xc;
  }
  else {
    SHA256_Init(&SStack_a4);
    SHA256_Update(&SStack_a4,param_1,param_2);
    SHA256_Final(auStack_34,&SStack_a4);
    local_14 = RSA_verify(0x2a0,auStack_34,0x20,param_3,0x100,local_10);
    if (local_10 != (RSA *)0x0) {
      RSA_free(local_10);
    }
    if (local_c != (BIO *)0x0) {
      BIO_free(local_c);
    }
    if (local_14 == 1) {
      uVar3 = 0;
    }
    else {
      uVar1 = ERR_get_error();
      pcVar2 = ERR_error_string(uVar1,(char *)0x0);
      printf("OpenSSL error: %s\n",pcVar2);
      puts("Check miner.pem Failed!");
      uVar3 = 0xd;
    }
  }
  return uVar3;
}

