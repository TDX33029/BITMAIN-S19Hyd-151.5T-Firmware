// FUN_00024a8c @ 00024a8c  size=5588  callers=2
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint FUN_00024a8c(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  size_t sVar7;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  BIO_METHOD *type;
  BIO *b;
  X509 *x;
  X509_STORE *ctx_00;
  SSL *s;
  void *__ptr;
  ssize_t sVar8;
  SSL_CIPHER *c;
  char *pcVar9;
  long lVar10;
  X509 *pXVar11;
  uint uVar12;
  undefined4 uVar13;
  addrinfo **ppaVar14;
  addrinfo *paVar15;
  uint *puVar16;
  char *param4;
  char *local_2874;
  char *local_2870;
  addrinfo *local_285c;
  socklen_t local_2858;
  int local_2854;
  timeval local_2850;
  addrinfo aStack_2848;
  fd_set local_2828 [16];
  uint local_2028;
  char acStack_2024 [12];
  uint local_2018;
  char acStack_2014 [4];
  undefined4 local_2010;
  uint local_200c;
  char acStack_2008 [4];
  undefined2 uStack_2004;
  undefined1 local_2002;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb4));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_2028,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "util.c","setup_stratum_socket",0xc1f);
    FUN_0001dd98(3,&local_2028,1);
    FUN_0003c34c(1);
  }
  iVar2 = param_1[0x93];
  *(undefined1 *)((int)param_1 + 0x291) = 0;
  if (iVar2 != 0) {
    if (((char)param_1[0x94] != '\0') && ((SSL *)param_1[0x95] != (SSL *)0x0)) {
      SSL_shutdown((SSL *)param_1[0x95]);
      X509_free((X509 *)param_1[0x97]);
      SSL_CTX_free((SSL_CTX *)param_1[0x96]);
      SSL_free((SSL *)param_1[0x95]);
      iVar2 = param_1[0x93];
    }
    close(iVar2);
  }
  param_1[0x93] = 0;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb4));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_2028,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "util.c","setup_stratum_socket",0xc31);
    FUN_0001dd98(3,&local_2028,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  memset(&aStack_2848,0,0x20);
  iVar2 = DAT_0006a6c0;
  aStack_2848.ai_socktype = 1;
  if (param_1[0x2e] == 0) {
    if (DAT_0006a6c0 == 0) {
      local_2870 = (char *)param_1[0x9a];
    }
    else {
      param_1[0x2e] = DAT_0006a6c0;
      FUN_00020a48(iVar2,param_1 + 0x9b,param_1 + 0x9c);
      param_1[0x2d] = 3;
      local_2870 = (char *)param_1[0x9a];
      if (param_1[0x2e] != 0) goto LAB_00024b2c;
    }
    local_2874 = (char *)param_1[0x92];
  }
  else {
LAB_00024b2c:
    local_2870 = (char *)param_1[0x9b];
    local_2874 = (char *)param_1[0x9c];
  }
  iVar2 = getaddrinfo(local_2870,local_2874,&aStack_2848,&local_285c);
  paVar15 = local_285c;
  if (iVar2 == 0) {
    for (; paVar15 != (addrinfo *)0x0; paVar15 = paVar15->ai_next) {
LAB_00024c08:
      uVar3 = socket(paVar15->ai_family,paVar15->ai_socktype,paVar15->ai_protocol);
      if (uVar3 == 0xffffffff) {
        if ((DAT_000686f1 == 0) ||
           (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))))
        goto LAB_00024cf4;
        uVar3._0_1_ = 'F';
        uVar3._1_1_ = 'a';
        uVar3._2_1_ = 'i';
        uVar3._3_1_ = 'l';
        uVar4._0_1_ = 'e';
        uVar4._1_1_ = 'd';
        uVar4._2_1_ = ' ';
        uVar4._3_1_ = 's';
        uVar12._0_1_ = 'o';
        uVar12._1_1_ = 'c';
        uVar12._2_1_ = 'k';
        uVar12._3_1_ = 'e';
        puVar16 = &local_2028;
        goto LAB_00024f18;
      }
      uVar4 = fcntl(uVar3,3,0);
      fcntl(uVar3,4,uVar4 | 0x800);
      iVar2 = connect(uVar3,paVar15->ai_addr,paVar15->ai_addrlen);
      if (iVar2 != -1) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
          local_2028._0_1_ = 'S';
          local_2028._1_1_ = 'u';
          local_2028._2_1_ = 'c';
          local_2028._3_1_ = 'c';
          builtin_strncpy(acStack_2024,"eeded immedi",0xc);
          local_2018._0_1_ = 'a';
          local_2018._1_1_ = 't';
          local_2018._2_1_ = 'e';
          local_2018._3_1_ = ' ';
          builtin_strncpy(acStack_2014,"conn",4);
          local_2010._0_1_ = 'e';
          local_2010._1_1_ = 'c';
          local_2010._2_1_ = 't';
          local_2010._3_1_ = '\0';
          FUN_0001dd98(4,&local_2028,0);
        }
LAB_00025100:
        FUN_0001f2a4(uVar3);
        freeaddrinfo(local_285c);
        if (param_1[0x2e] == 0) goto LAB_000252e4;
        switch(param_1[0x2d]) {
        case 0:
          uVar13 = 0;
          break;
        case 1:
          uVar13 = 1;
          break;
        case 2:
          uVar13 = 0;
          goto LAB_000259c0;
        case 3:
        case 5:
          local_2828[0].fds_bits[0] = CONCAT13(local_2828[0].fds_bits[0]._3_1_,0x105);
          if ((DAT_000686f1 != 0) &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            snprintf((char *)&local_2028,0x800,"Attempting to negotiate with %s:%s SOCKS5 proxy",
                     (char *)param_1[0x9b],(char *)param_1[0x9c]);
            FUN_0001dd98(7,&local_2028,0);
          }
          send(uVar3,local_2828,3,0);
          sVar8 = recv(uVar3,&local_2028,1,0);
          if ((((sVar8 == -1) || ((char)local_2028 != '\x05')) ||
              (sVar8 = recv(uVar3,&local_2028,1,0), sVar8 == -1)) ||
             (((uint)local_2828[0].fds_bits[0] >> 0x10 & 0xff) != (local_2028 & 0xff))) {
            if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4))
            goto LAB_00025da4;
            pcVar9 = (char *)param_1[0x9b];
            param4 = (char *)param_1[0x9c];
LAB_00025af8:
            snprintf((char *)&local_2028,0x800,"Bad response from %s:%s SOCKS5 server",pcVar9,param4
                    );
            FUN_0001dd98(4,&local_2028,0);
          }
          else {
            pcVar9 = (char *)param_1[0x9a];
            local_2828[0].fds_bits[0] = 0x3000105;
            sVar7 = strlen(pcVar9);
            if (0xfe < sVar7) {
              sVar7 = 0xff;
            }
            local_2828[0].fds_bits[1] = CONCAT31(local_2828[0].fds_bits[1]._1_3_,(char)sVar7);
            FUN_00023324((undefined1 *)((int)local_2828[0].fds_bits + 5),pcVar9,sVar7,"util.c",
                         "socks5_negotiate",0xb3f);
            lVar10 = strtol((char *)param_1[0x92],(char **)0x0,10);
            *(char *)((int)local_2828[0].fds_bits + sVar7 + 6) = (char)lVar10;
            *(char *)((int)local_2828[0].fds_bits + sVar7 + 5) = (char)((uint)lVar10 >> 8);
            send(uVar3,local_2828,sVar7 + 7,0);
            sVar8 = recv(uVar3,&local_2028,1,0);
            if (((sVar8 != -1) && ((char)local_2028 == '\x05')) &&
               ((sVar8 = recv(uVar3,&local_2028,1,0), sVar8 != -1 && ((local_2028 & 0xff) == 0)))) {
              recv(uVar3,&local_2028,1,0);
              sVar8 = recv(uVar3,&local_2028,1,0);
              if (sVar8 == -1) goto LAB_00025f74;
              if ((local_2028 & 0xff) == 1) {
                iVar2 = 4;
                do {
                  recv(uVar3,&local_2028,1,0);
                  iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
              }
              else {
                if ((local_2028 & 0xff) != 3) goto LAB_00025f74;
                sVar8 = recv(uVar3,&local_2028,1,0);
                iVar2 = 0;
                if (sVar8 == -1) {
                  uVar4 = 0xffffffff;
                }
                else {
                  uVar4 = local_2028 & 0xff;
                }
                while (iVar2 < (int)uVar4) {
                  recv(uVar3,&local_2028,1,0);
                  iVar2 = iVar2 + 1;
                }
              }
              recv(uVar3,&local_2028,1,0);
              recv(uVar3,&local_2028,1,0);
              if ((DAT_000686f1 != 0) &&
                 (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                snprintf((char *)&local_2028,0x800,"Success negotiating with %s:%s SOCKS5 proxy",
                         (char *)param_1[0x9b],(char *)param_1[0x9c]);
                FUN_0001dd98(7,&local_2028,0);
              }
LAB_000252e4:
              if (param_1[0x98] == 0) {
                iVar2 = FUN_0001f8e8(0x2000,1,"util.c","setup_stratum_socket",0xcbb);
                param_1[0x98] = iVar2;
                param_1[0x99] = 0x2000;
              }
              param_1[0x93] = uVar3;
              if ((char)param_1[0x94] != '\0') {
                if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                  local_2028._0_1_ = 's';
                  local_2028._1_1_ = 't';
                  local_2028._2_1_ = 'a';
                  local_2028._3_1_ = 'r';
                  builtin_strncpy(acStack_2024,"t ssl connec",0xc);
                  local_2018 = CONCAT13(local_2018._3_1_,0xa74);
                  FUN_0001dd98(5,&local_2028,0);
                }
                sVar7 = strlen(DAT_00067970);
                OPENSSL_init_ssl(0,0,0);
                OPENSSL_init_crypto(0xc,0,0);
                OPENSSL_init_ssl(0x200002,0,0);
                meth = (SSL_METHOD *)TLS_client_method();
                ctx = SSL_CTX_new(meth);
                type = BIO_s_mem();
                b = BIO_new(type);
                BIO_write(b,DAT_00067970,sVar7 + 1);
                x = PEM_read_bio_X509(b,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
                if (x == (X509 *)0x0) {
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
                    local_2028._0_1_ = 'u';
                    local_2028._1_1_ = 'n';
                    local_2028._2_1_ = 'a';
                    local_2028._3_1_ = 'b';
                    builtin_strncpy(acStack_2024,"le to parse ",0xc);
                    local_2018._0_1_ = 'c';
                    local_2018._1_1_ = 'e';
                    local_2018._2_1_ = 'r';
                    local_2018._3_1_ = 't';
                    builtin_strncpy(acStack_2014,"ific",4);
                    local_2010._0_1_ = 'a';
                    local_2010._1_1_ = 't';
                    local_2010._2_1_ = 'e';
                    local_2010._3_1_ = ' ';
                    local_200c._0_1_ = 'i';
                    local_200c._1_1_ = 'n';
                    local_200c._2_1_ = ' ';
                    local_200c._3_1_ = 'm';
                    builtin_strncpy(acStack_2008,"emor",4);
                    uStack_2004 = 0xa79;
                    local_2002 = 0;
                    FUN_0001dd98(3,&local_2028,0);
                  }
                  BIO_free(b);
                }
                else {
                  ctx_00 = SSL_CTX_get_cert_store(ctx);
                  X509_STORE_add_cert(ctx_00,x);
                  BIO_free(b);
                  s = SSL_new(ctx);
                  SSL_set_fd(s,param_1[0x93]);
                  iVar2 = SSL_connect(s);
                  if (iVar2 == 1) {
                    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
                      c = SSL_get_current_cipher(s);
                      pcVar9 = SSL_CIPHER_get_name(c);
                      snprintf((char *)&local_2028,0x800,"Connected with %s encryption\n",pcVar9);
                      FUN_0001dd98(6,&local_2028,0);
                    }
                    lVar10 = SSL_get_verify_result(s);
                    bVar1 = lVar10 != 0 && 1 < lVar10 - 9U;
                    if (lVar10 != 9 && (lVar10 != 0 && lVar10 - 9U != 1)) {
                      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
                      {
LAB_00025df8:
                        if (DAT_00067848 < 3) goto LAB_00025c94;
                      }
                      else {
                        pcVar9 = X509_verify_cert_error_string(lVar10);
                        snprintf((char *)&local_2028,0x800,"Verify return code: %ld (%s)\n",lVar10,
                                 pcVar9);
                        FUN_0001dd98(3,&local_2028,0);
                        if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00025df8;
                      }
                      local_2028._0_1_ = 'c';
                      local_2028._1_1_ = 'e';
                      local_2028._2_1_ = 'r';
                      local_2028._3_1_ = 't';
                      builtin_strncpy(acStack_2024," of pool is ",0xc);
                      local_2018._0_1_ = 'v';
                      local_2018._1_1_ = 'e';
                      local_2018._2_1_ = 'r';
                      local_2018._3_1_ = 'i';
                      builtin_strncpy(acStack_2014,"fy f",4);
                      local_2010._0_1_ = 'a';
                      local_2010._1_1_ = 'i';
                      local_2010._2_1_ = 'l';
                      local_2010._3_1_ = '\n';
                      local_200c = local_200c & 0xffffff00;
                      FUN_0001dd98(3,&local_2028,0);
                    }
                    else {
                      pXVar11 = SSL_get_peer_certificate(s);
                      if (pXVar11 != (X509 *)0x0) {
                        pcVar9 = (char *)param_1[0x90];
                        sVar7 = strlen(pcVar9);
                        iVar2 = X509_check_host(pXVar11,pcVar9,sVar7,bVar1,bVar1);
                        if ((iVar2 == 1) ||
                           (iVar2 = X509_check_ip_asc(pXVar11,param_1[0x90],bVar1), iVar2 == 1)) {
                          param_1[0x96] = (int)ctx;
                          param_1[0x95] = (int)s;
                          param_1[0x97] = (int)x;
                          goto LAB_000254c4;
                        }
                      }
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848))
                      {
                        local_2028._0_1_ = 'c';
                        local_2028._1_1_ = 'e';
                        local_2028._2_1_ = 'r';
                        local_2028._3_1_ = 't';
                        builtin_strncpy(acStack_2024," check fail\n",0xc);
                        local_2018 = local_2018 & 0xffffff00;
                        FUN_0001dd98(3,&local_2028,0);
                      }
                    }
LAB_00025c94:
                    SSL_shutdown(s);
                  }
                  else {
                    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
LAB_00025458:
                      if (DAT_00067848 < 3) goto LAB_00025498;
                    }
                    else {
                      snprintf((char *)&local_2028,0x800,
                               "unable to connect pool by ssl, connect ret %d\n",iVar2);
                      FUN_0001dd98(3,&local_2028,0);
                      if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00025458;
                    }
                    iVar2 = SSL_get_error(s,iVar2);
                    snprintf((char *)&local_2028,0x800,
                             "SSL error #%d in accept,program terminated\n",iVar2);
                    FUN_0001dd98(3,&local_2028,0);
                  }
LAB_00025498:
                  X509_free(x);
                  SSL_CTX_free(ctx);
                  SSL_free(s);
                }
                close(uVar3);
                param_1[0x93] = 0;
                goto joined_r0x00024d6c;
              }
LAB_000254c4:
              local_2828[0].fds_bits[0] = 0x2d;
              local_2028 = 0x1e;
              local_2850.tv_sec = 1;
              uVar4 = fcntl(uVar3,3,0);
              fcntl(uVar3,4,uVar4 | 0x800);
              setsockopt(uVar3,1,9,&local_2850,4);
              if (DAT_000762f0 == '\0') {
                fcntl(uVar3,2,1);
              }
              setsockopt(uVar3,6,1,&local_2850,4);
              setsockopt(uVar3,6,6,&local_2850,4);
              setsockopt(uVar3,6,4,local_2828,4);
              setsockopt(uVar3,6,5,&local_2028,4);
              iVar2 = DAT_00072dcc;
              if (DAT_000682d4 != '\0') {
                DAT_00072dcc = DAT_00072dcc + 1;
                sprintf((char *)&local_2028,
                        "{\"id\":%d, \"method\":\"mining.configure\", \"params\":[[\"version-rolling\"],{\"version-rolling.mask\":\"%08x\",\"version-rolling.min-bit-count\":%d}]}"
                        ,iVar2,0x1fffe000,8);
                param_1[0xa6] = 1;
              }
              sVar7 = strlen((char *)&local_2028);
              iVar2 = FUN_0001eae0(param_1,&local_2028,sVar7);
              if (iVar2 == 0) {
                uVar3 = FUN_0001f2cc(param_1[0x93],0x3c);
                if (uVar3 == 0) {
                  if (DAT_000686f1 == 0) goto LAB_00024e70;
                  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))
                  goto LAB_00025670;
                  local_2828[0].fds_bits[0]._0_1_ = 'T';
                  local_2828[0].fds_bits[0]._1_1_ = 'i';
                  local_2828[0].fds_bits[0]._2_1_ = 'm';
                  local_2828[0].fds_bits[0]._3_1_ = 'e';
                  local_2828[0].fds_bits[1]._0_1_ = 'd';
                  local_2828[0].fds_bits[1]._1_1_ = ' ';
                  local_2828[0].fds_bits[1]._2_1_ = 'o';
                  local_2828[0].fds_bits[1]._3_1_ = 'u';
                  local_2828[0].fds_bits[2]._0_1_ = 't';
                  local_2828[0].fds_bits[2]._1_1_ = ' ';
                  local_2828[0].fds_bits[2]._2_1_ = 'w';
                  local_2828[0].fds_bits[2]._3_1_ = 'a';
                  local_2828[0].fds_bits[3]._0_1_ = 'i';
                  local_2828[0].fds_bits[3]._1_1_ = 't';
                  local_2828[0].fds_bits[3]._2_1_ = 'i';
                  local_2828[0].fds_bits[3]._3_1_ = 'n';
                  local_2828[0].fds_bits[4]._0_1_ = 'g';
                  local_2828[0].fds_bits[4]._1_1_ = ' ';
                  local_2828[0].fds_bits[4]._2_1_ = 'f';
                  local_2828[0].fds_bits[4]._3_1_ = 'o';
                  local_2828[0].fds_bits[5]._0_1_ = 'r';
                  local_2828[0].fds_bits[5]._1_1_ = ' ';
                  local_2828[0].fds_bits[5]._2_1_ = 'r';
                  local_2828[0].fds_bits[5]._3_1_ = 'e';
                  local_2828[0].fds_bits[6]._0_1_ = 's';
                  local_2828[0].fds_bits[6]._1_1_ = 'p';
                  local_2828[0].fds_bits[6]._2_1_ = 'o';
                  local_2828[0].fds_bits[6]._3_1_ = 'n';
                  local_2828[0].fds_bits[7]._0_1_ = 's';
                  local_2828[0].fds_bits[7]._1_1_ = 'e';
                  local_2828[0].fds_bits[7]._2_1_ = ' ';
                  local_2828[0].fds_bits[7]._3_1_ = 'i';
                  local_2828[0].fds_bits[8]._0_1_ = 'n';
                  local_2828[0].fds_bits[8]._1_1_ = ' ';
                  local_2828[0].fds_bits[8]._2_1_ = 'i';
                  local_2828[0].fds_bits[8]._3_1_ = 'n';
                  local_2828[0].fds_bits[9]._0_1_ = 'i';
                  local_2828[0].fds_bits[9]._1_1_ = 't';
                  local_2828[0].fds_bits[9]._2_1_ = 'i';
                  local_2828[0].fds_bits[9]._3_1_ = 'a';
                  local_2828[0].fds_bits[10]._0_1_ = 't';
                  local_2828[0].fds_bits[10]._1_1_ = 'e';
                  local_2828[0].fds_bits[10]._2_1_ = '_';
                  local_2828[0].fds_bits[10]._3_1_ = 's';
                  local_2828[0].fds_bits[0xb]._0_1_ = 't';
                  local_2828[0].fds_bits[0xb]._1_1_ = 'r';
                  local_2828[0].fds_bits[0xb]._2_1_ = 'a';
                  local_2828[0].fds_bits[0xb]._3_1_ = 't';
                  local_2828[0].fds_bits[0xc]._0_2_ = 0x6d75;
                  local_2828[0].fds_bits[0xc]._2_1_ = 0;
                  FUN_0001dd98(7,local_2828,0);
                }
                else {
                  __ptr = (void *)FUN_00021888(param_1);
                  if (__ptr != (void *)0x0) {
                    FUN_00021028(param_1,__ptr);
                    free(__ptr);
                    if (param_1[0x90] == 0) {
                      param_1[0x90] = param_1[0x9a];
                    }
                    *(undefined1 *)((int)param_1 + 0x291) = 1;
                    if (DAT_00072ed8 == 0) {
                      return uVar3;
                    }
                    uVar3 = (uint)DAT_000686f1;
                    if (uVar3 == 0) {
                      return (uint)DAT_00072ed8;
                    }
                    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
                      return uVar3;
                    }
                    snprintf((char *)local_2828,0x800,
                             "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d"
                             ,*param_1,(char *)param_1[0x9d],param_1[0xa2]);
                    FUN_0001dd98(7,local_2828,0);
                    return uVar3;
                  }
                }
LAB_0002565c:
                if (DAT_000686f1 == 0) goto LAB_00024e70;
              }
              else {
                if (DAT_000686f1 == 0) goto LAB_00024e70;
                if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
                  local_2828[0].fds_bits[0]._0_1_ = 'F';
                  local_2828[0].fds_bits[0]._1_1_ = 'a';
                  local_2828[0].fds_bits[0]._2_1_ = 'i';
                  local_2828[0].fds_bits[0]._3_1_ = 'l';
                  local_2828[0].fds_bits[1]._0_1_ = 'e';
                  local_2828[0].fds_bits[1]._1_1_ = 'd';
                  local_2828[0].fds_bits[1]._2_1_ = ' ';
                  local_2828[0].fds_bits[1]._3_1_ = 't';
                  local_2828[0].fds_bits[2]._0_1_ = 'o';
                  local_2828[0].fds_bits[2]._1_1_ = ' ';
                  local_2828[0].fds_bits[2]._2_1_ = 's';
                  local_2828[0].fds_bits[2]._3_1_ = 'e';
                  local_2828[0].fds_bits[3]._0_1_ = 'n';
                  local_2828[0].fds_bits[3]._1_1_ = 'd';
                  local_2828[0].fds_bits[3]._2_1_ = ' ';
                  local_2828[0].fds_bits[3]._3_1_ = 's';
                  local_2828[0].fds_bits[4]._0_1_ = ' ';
                  local_2828[0].fds_bits[4]._1_1_ = 'i';
                  local_2828[0].fds_bits[4]._2_1_ = 'n';
                  local_2828[0].fds_bits[4]._3_1_ = ' ';
                  local_2828[0].fds_bits[5]._0_1_ = 'i';
                  local_2828[0].fds_bits[5]._1_1_ = 'n';
                  local_2828[0].fds_bits[5]._2_1_ = 'i';
                  local_2828[0].fds_bits[5]._3_1_ = 't';
                  local_2828[0].fds_bits[6]._0_1_ = 'i';
                  local_2828[0].fds_bits[6]._1_1_ = 'a';
                  local_2828[0].fds_bits[6]._2_1_ = 't';
                  local_2828[0].fds_bits[6]._3_1_ = 'e';
                  local_2828[0].fds_bits[7]._0_1_ = '_';
                  local_2828[0].fds_bits[7]._1_1_ = 's';
                  local_2828[0].fds_bits[7]._2_1_ = 't';
                  local_2828[0].fds_bits[7]._3_1_ = 'r';
                  local_2828[0].fds_bits[8]._0_1_ = 'a';
                  local_2828[0].fds_bits[8]._1_1_ = 't';
                  local_2828[0].fds_bits[8]._2_1_ = 'u';
                  local_2828[0].fds_bits[8]._3_1_ = 'm';
                  local_2828[0].fds_bits[9] = local_2828[0].fds_bits[9] & 0xffffff00;
                  FUN_0001dd98(7,local_2828,0);
                  goto LAB_0002565c;
                }
              }
LAB_00025670:
              bVar1 = true;
              goto LAB_00024e08;
            }
LAB_00025f74:
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
              param4 = (char *)param_1[0x9c];
              pcVar9 = (char *)param_1[0x9b];
              goto LAB_00025af8;
            }
          }
          goto joined_r0x00024d6c;
        case 4:
          uVar13 = 1;
LAB_000259c0:
          iVar2 = FUN_000247d0(param_1,uVar3,uVar13);
          if (iVar2 == 0) goto joined_r0x00024d6c;
          goto LAB_000252e4;
        default:
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
            snprintf((char *)&local_2028,0x800,"Unsupported proxy type for %s:%s",
                     (char *)param_1[0x9b],(char *)param_1[0x9c]);
            FUN_0001dd98(4,&local_2028,0);
            goto joined_r0x00024d6c;
          }
LAB_00025da4:
          if (DAT_000686f1 == 0) {
            return 0;
          }
          if (DAT_00067848 < 7) {
            return 0;
          }
          bVar1 = false;
          goto LAB_00024e3c;
        }
        iVar2 = FUN_0001ed70(param_1,uVar3,uVar13);
        if (iVar2 != 0) goto LAB_000252e4;
        goto joined_r0x00024d6c;
      }
      local_2850.tv_sec = 1;
      local_2850.tv_usec = 0;
      piVar5 = __errno_location();
      if (*piVar5 != 0x73) {
        close(uVar3);
        if ((DAT_000686f1 != 0) &&
           (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
          local_2028._0_1_ = 'F';
          local_2028._1_1_ = 'a';
          local_2028._2_1_ = 'i';
          local_2028._3_1_ = 'l';
          builtin_strncpy(acStack_2024,"ed sock conn",0xc);
          local_2018._0_1_ = 'e';
          local_2018._1_1_ = 'c';
          local_2018._2_1_ = 't';
          local_2018._3_1_ = '\0';
          FUN_0001dd98(7,&local_2028,0);
        }
LAB_00024cf4:
        paVar15 = paVar15->ai_next;
        if (paVar15 == (addrinfo *)0x0) break;
        goto LAB_00024c08;
      }
      uVar4 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      iVar2 = (int)uVar4 >> 5;
      uVar4 = uVar3 & 0x1f;
      if (-1 < (int)-uVar3) {
        uVar4 = -(-uVar3 & 0x1f);
      }
      uVar4 = 1 << (uVar4 & 0xff);
      while( true ) {
        ppaVar14 = &aStack_2848.ai_next;
        do {
          ppaVar14 = ppaVar14 + 1;
          *ppaVar14 = (addrinfo *)0x0;
        } while (ppaVar14 != (addrinfo **)(local_2828[0].fds_bits + 0x1f));
        local_2828[0].fds_bits[iVar2] = local_2828[0].fds_bits[iVar2] | uVar4;
        iVar6 = select(uVar3 + 1,(fd_set *)0x0,local_2828,(fd_set *)0x0,&local_2850);
        if (0 < iVar6) break;
        if ((iVar6 == 0) || (*piVar5 != 4)) goto LAB_00024fc0;
      }
      if ((uVar4 & local_2828[0].fds_bits[iVar2]) != 0) {
        local_2858 = 4;
        iVar2 = getsockopt(uVar3,1,4,&local_2854,&local_2858);
        if ((iVar2 == 0) && (local_2854 == 0)) {
          if ((DAT_000686f1 != 0) &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            local_2028._0_1_ = 'S';
            local_2028._1_1_ = 'u';
            local_2028._2_1_ = 'c';
            local_2028._3_1_ = 'c';
            builtin_strncpy(acStack_2024,"eeded delaye",0xc);
            local_2018._0_1_ = 'd';
            local_2018._1_1_ = ' ';
            local_2018._2_1_ = 'c';
            local_2018._3_1_ = 'o';
            builtin_strncpy(acStack_2014,"nnec",4);
            local_2010._0_1_ = 't';
            local_2010._1_1_ = '\0';
            FUN_0001dd98(7,&local_2028,0);
          }
          goto LAB_00025100;
        }
      }
LAB_00024fc0:
      close(uVar3);
      if ((DAT_000686f1 == 0) ||
         (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))))
      goto LAB_00024cf4;
      local_2028._0_1_ = 'S';
      local_2028._1_1_ = 'e';
      local_2028._2_1_ = 'l';
      local_2028._3_1_ = 'e';
      builtin_strncpy(acStack_2024,"ct timeout/f",0xc);
      uVar3._0_1_ = 'a';
      uVar3._1_1_ = 'i';
      uVar3._2_1_ = 'l';
      uVar3._3_1_ = 'e';
      uVar4._0_1_ = 'd';
      uVar4._1_1_ = ' ';
      uVar4._2_1_ = 'c';
      uVar4._3_1_ = 'o';
      uVar12._0_1_ = 'n';
      uVar12._1_1_ = 'n';
      uVar12._2_1_ = 'e';
      uVar12._3_1_ = 'c';
      puVar16 = &local_2018;
LAB_00024f18:
      *puVar16 = uVar3;
      puVar16[1] = uVar4;
      puVar16[2] = uVar12;
      *(undefined2 *)(puVar16 + 3) = 0x74;
      FUN_0001dd98(7,&local_2028,0);
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf((char *)&local_2028,0x800,"Failed to connect to stratum on %s:%s",local_2870,
               local_2874);
      FUN_0001dd98(6,&local_2028,0);
    }
    freeaddrinfo(local_285c);
  }
  else {
    if (*(char *)((int)param_1 + 99) == '\0') {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf((char *)&local_2028,0x800,"Failed to resolve (?wrong URL) %s:%s",local_2870,
                 local_2874);
        FUN_0001dd98(4,&local_2028,0);
      }
      *(undefined1 *)((int)param_1 + 99) = 1;
    }
    else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf((char *)&local_2028,0x800,"Failed to getaddrinfo for %s:%s",local_2870,local_2874);
      FUN_0001dd98(6,&local_2028,0);
    }
    __res_init();
  }
joined_r0x00024d6c:
  if (DAT_000686f1 != 0) {
    bVar1 = false;
LAB_00024e08:
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
LAB_00024e3c:
      local_2828[0].fds_bits[0]._0_1_ = 'I';
      local_2828[0].fds_bits[0]._1_1_ = 'n';
      local_2828[0].fds_bits[0]._2_1_ = 'i';
      local_2828[0].fds_bits[0]._3_1_ = 't';
      local_2828[0].fds_bits[1]._0_1_ = 'i';
      local_2828[0].fds_bits[1]._1_1_ = 'a';
      local_2828[0].fds_bits[1]._2_1_ = 't';
      local_2828[0].fds_bits[1]._3_1_ = 'e';
      local_2828[0].fds_bits[2]._0_1_ = ' ';
      local_2828[0].fds_bits[2]._1_1_ = 's';
      local_2828[0].fds_bits[2]._2_1_ = 't';
      local_2828[0].fds_bits[2]._3_1_ = 'r';
      local_2828[0].fds_bits[3]._0_1_ = 'a';
      local_2828[0].fds_bits[3]._1_1_ = 't';
      local_2828[0].fds_bits[3]._2_1_ = 'u';
      local_2828[0].fds_bits[3]._3_1_ = 'm';
      local_2828[0].fds_bits[4]._0_1_ = ' ';
      local_2828[0].fds_bits[4]._1_1_ = 'f';
      local_2828[0].fds_bits[4]._2_1_ = 'a';
      local_2828[0].fds_bits[4]._3_1_ = 'i';
      local_2828[0].fds_bits[5]._0_1_ = 'l';
      local_2828[0].fds_bits[5]._1_1_ = 'e';
      local_2828[0].fds_bits[5]._2_1_ = 'd';
      local_2828[0].fds_bits[5]._3_1_ = '\0';
      FUN_0001dd98(7,local_2828,0);
    }
    if (bVar1) {
LAB_00024e70:
      FUN_00021370(param_1);
      return 0;
    }
  }
  return 0;
}

