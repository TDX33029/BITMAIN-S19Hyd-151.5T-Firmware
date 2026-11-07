// FUN_00011274 @ 00011274  size=564  callers=0
// program: monitor-ipsig


undefined4 FUN_00011274(void)

{
  char *param1;
  int iVar1;
  ssize_t sVar2;
  size_t __n;
  uint uVar3;
  __suseconds_t *p_Var4;
  uint uVar5;
  uint uVar6;
  socklen_t local_a4;
  timeval local_a0;
  fd_set local_98;
  
  uVar5 = DAT_000220a4;
  p_Var4 = &local_a0.tv_usec;
  local_a0.tv_usec = 0;
  local_a0.tv_sec = 2;
  do {
    p_Var4 = p_Var4 + 1;
    *p_Var4 = 0;
  } while (p_Var4 != local_98.fds_bits + 0x1f);
  uVar3 = DAT_000220a4 + 0x1f;
  if (-1 < (int)DAT_000220a4) {
    uVar3 = DAT_000220a4;
  }
  uVar6 = DAT_000220a4 & 0x1f;
  if (-1 < (int)-DAT_000220a4) {
    uVar6 = -(-DAT_000220a4 & 0x1f);
  }
  local_98.fds_bits[(int)uVar3 >> 5] = local_98.fds_bits[(int)uVar3 >> 5] | 1 << (uVar6 & 0xff);
  param1 = calloc(0x1e,1);
  iVar1 = select(uVar5 + 1,&local_98,(fd_set *)0x0,(fd_set *)0x0,&local_a0);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  if (iVar1 != 0) {
    uVar5 = DAT_000220a4 + 0x1f;
    if (-1 < (int)DAT_000220a4) {
      uVar5 = DAT_000220a4;
    }
    uVar3 = DAT_000220a4 & 0x1f;
    if (-1 < (int)-DAT_000220a4) {
      uVar3 = -(-DAT_000220a4 & 0x1f);
    }
    if ((local_98.fds_bits[(int)uVar5 >> 5] & 1 << (uVar3 & 0xff)) == 0) goto joined_r0x000113bc;
    local_a4 = 0x10;
    sVar2 = recvfrom(DAT_000220a4,param1,0x1e,0,(sockaddr *)&DAT_000220d4,&local_a4);
    if (0 < sVar2) {
      printf("rev:\n%s\t",param1);
      DAT_000220cc = 0;
      __n = strlen(&DAT_000220ac);
      iVar1 = strncmp(param1,&DAT_000220ac,__n);
      if (iVar1 == 0) {
        printf("send_ack(\"1\");");
        FUN_00010f58(1);
        FUN_0001121c(&DAT_00011758);
        free(param1);
        return 1;
      }
      printf("send_ack(\"0\");");
      FUN_00010f58(0);
      FUN_0001121c("FAILD");
      free(param1);
      return 0;
    }
    printf("read error....");
  }
  DAT_000220cc = DAT_000220cc + 1;
joined_r0x000113bc:
  if (DAT_000220cc == 5) {
    DAT_000220cc = 0;
    puts("Time Out");
    free(param1);
    return 1;
  }
  free(param1);
  return 0;
}

