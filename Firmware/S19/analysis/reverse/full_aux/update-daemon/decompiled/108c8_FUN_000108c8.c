// FUN_000108c8 @ 000108c8  size=588  callers=0
// program: update-daemon


undefined4 FUN_000108c8(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  in_addr_t iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int local_44 [3];
  undefined1 local_38 [14];
  char local_2a [2];
  sockaddr sStack_28;
  
  pcVar6 = (char *)*param_2;
  pcVar1 = strstr(pcVar6,"daemonc");
  if (pcVar1 == (char *)0x0) {
    pcVar6 = strstr(pcVar6,"daemons");
    if (pcVar6 == (char *)0x0) {
      puts("Cannot Find Command!\r");
      uVar5 = 0xffffffff;
    }
    else {
      iVar2 = socket(2,1,0);
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("sockfd_server != -1","update-daemon.c",0x81,"ProcessServer");
      }
      local_38._0_2_ = 2;
      local_38[2] = '\0';
      local_38[3] = '\0';
      local_38[4] = '\0';
      local_38[5] = '\0';
      local_2a[0] = '\0';
      local_2a[1] = '\0';
      local_38._6_2_ = local_38._2_2_;
      local_38._8_2_ = local_38._4_2_;
      local_38._10_4_ = pcVar1;
      iVar3 = inet_addr("127.0.0.1");
      local_38._4_2_ = SUB42(iVar3,0);
      local_38._6_2_ = SUB42(iVar3 >> 0x10,0);
      iVar4 = FUN_00010bd8("22322");
      printf("Will Listening To Port[%d]\r\n",iVar4);
      local_38._2_2_ = SUB42(iVar4,0);
      iVar4 = bind(iVar2,(sockaddr *)local_38,0x10);
      if (iVar4 == -1) {
        fwrite("bind error!\n",1,0xc,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      iVar4 = listen(iVar2,0x200);
      if (iVar4 == -1) {
        fwrite("listen error!\n",1,0xe,stderr);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      do {
        while( true ) {
          puts("waiting for new connection...");
          local_44[1] = 0x10;
          local_44[0] = accept(iVar2,&sStack_28,(socklen_t *)(local_44 + 1));
          if (local_44[0] != -1) break;
          fwrite("Accept error!\n",1,0xe,stderr);
        }
        puts("A new connection occurs!");
        iVar4 = pthread_create((pthread_t *)(local_44 + 2),(pthread_attr_t *)0x0,FUN_00010c24,
                               local_44);
      } while (iVar4 != -1);
      fwrite("pthread_create error!\n",1,0x16,stderr);
      iVar2 = shutdown(iVar2,1);
      if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("ret != -1","update-daemon.c",0xab,"ProcessServer");
      }
      puts("Server shuts down");
      uVar5 = 0;
    }
  }
  else {
    uVar5 = FUN_00010db8(param_2[1]);
  }
  return uVar5;
}

