// FUN_00021888 @ 00021888  size=1404  callers=5
// program: cgminer


char * FUN_00021888(int param_1)

{
  int iVar1;
  char cVar2;
  __time_t _Var3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  ssize_t sVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *__s;
  int iVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  timespec local_2830;
  char acStack_2828 [24];
  ushort local_2810;
  undefined1 local_280e;
  timespec local_2030;
  char acStack_2028 [32];
  undefined4 local_2008;
  char acStack_2004 [8152];
  
  __s = *(char **)(param_1 + 0x260);
  pcVar4 = strchr(__s,10);
  if (pcVar4 == (char *)0x0) {
    clock_gettime(1,&local_2030);
    _Var3 = local_2030.tv_sec;
    iVar1 = local_2030.tv_nsec / 1000;
    iVar7 = FUN_0001f2cc(*(undefined4 *)(param_1 + 0x24c),0x3c,local_2030.tv_nsec * 0x10624dd3);
    if (iVar7 == 0) {
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        local_2030.tv_sec._0_1_ = 'T';
        local_2030.tv_sec._1_1_ = 'i';
        local_2030.tv_sec._2_1_ = 'm';
        local_2030.tv_sec._3_1_ = 'e';
        local_2030.tv_nsec._0_1_ = 'd';
        local_2030.tv_nsec._1_1_ = ' ';
        local_2030.tv_nsec._2_1_ = 'o';
        local_2030.tv_nsec._3_1_ = 'u';
        builtin_strncpy(acStack_2028,"t waiting for data on socket_ful",0x20);
        local_2008._0_1_ = 'l';
        local_2008._1_1_ = '\0';
        FUN_0001dd98(7,&local_2030,0);
      }
      goto LAB_00021c44;
    }
    while( true ) {
      memset(&local_2030,0,0x2000);
      if (*(char *)(param_1 + 0x250) == '\0') {
        sVar10 = recv(*(int *)(param_1 + 0x24c),&local_2030,0x1ffc,0);
      }
      else {
        sVar10 = SSL_read(*(SSL **)(param_1 + 0x254),&local_2030,0x1ffc);
      }
      if (sVar10 == 0) break;
      clock_gettime(1,&local_2830);
      dVar15 = (double)VectorSignedToFloat(local_2830.tv_sec - _Var3,(byte)(in_fpscr >> 0x16) & 3);
      dVar16 = (double)VectorSignedToFloat(local_2830.tv_nsec / 1000 - iVar1,
                                           (byte)(in_fpscr >> 0x16) & 3);
      iVar7 = (int)(longlong)(dVar16 / 1000000.0 + dVar15);
      if (sVar10 < 0) {
        piVar8 = __errno_location();
        if ((*piVar8 != 0xb) ||
           (iVar9 = FUN_0001f2cc(*(undefined4 *)(param_1 + 0x24c),0x3c - iVar7), iVar9 == 0)) {
          if ((DAT_000686f1 != '\0') &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            local_2830.tv_sec._0_1_ = 'F';
            local_2830.tv_sec._1_1_ = 'a';
            local_2830.tv_sec._2_1_ = 'i';
            local_2830.tv_sec._3_1_ = 'l';
            local_2830.tv_nsec._0_1_ = 'e';
            local_2830.tv_nsec._1_1_ = 'd';
            local_2830.tv_nsec._2_1_ = ' ';
            local_2830.tv_nsec._3_1_ = 't';
            builtin_strncpy(acStack_2828,"o recv sock in recv_line",0x18);
            local_2810 = local_2810 & 0xff00;
            FUN_0001dd98(7,&local_2830,0);
          }
          goto LAB_00021cd8;
        }
      }
      else {
        sVar5 = strlen((char *)&local_2030);
        pcVar4 = *(char **)(param_1 + 0x260);
        sVar6 = strlen(pcVar4);
        uVar11 = sVar5 + sVar6 + 1;
        if (*(uint *)(param_1 + 0x264) <= uVar11) {
          iVar14 = (uVar11 & 0xffffe000) + 0x2000;
          iVar9 = FUN_0001f978(pcVar4,iVar14,"util.c","recalloc_sock",0x722);
          *(int *)(param_1 + 0x260) = iVar9;
          memset((void *)(iVar9 + sVar6),0,iVar14 - sVar6);
          pcVar4 = *(char **)(param_1 + 0x260);
          *(int *)(param_1 + 0x264) = iVar14;
        }
        strcat(pcVar4,(char *)&local_2030);
      }
      __s = *(char **)(param_1 + 0x260);
      if ((0x3b < iVar7) || (pcVar4 = strchr(__s,10), pcVar4 != (char *)0x0)) goto LAB_000218b4;
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      local_2830.tv_sec._0_1_ = 'S';
      local_2830.tv_sec._1_1_ = 'o';
      local_2830.tv_sec._2_1_ = 'c';
      local_2830.tv_sec._3_1_ = 'k';
      local_2830.tv_nsec._0_1_ = 'e';
      local_2830.tv_nsec._1_1_ = 't';
      local_2830.tv_nsec._2_1_ = ' ';
      local_2830.tv_nsec._3_1_ = 'c';
      builtin_strncpy(acStack_2828,"losed waiting in recv_li",0x18);
      local_2810 = 0x656e;
      local_280e = 0;
      FUN_0001dd98(7,&local_2830,0);
    }
LAB_00021cd8:
    FUN_00021370(param_1);
    __s = *(char **)(param_1 + 0x260);
  }
LAB_000218b4:
  sVar5 = strlen(__s);
  pcVar4 = strtok(__s,"\n");
  if (pcVar4 != (char *)0x0) {
    pcVar4 = (char *)__strdup();
    sVar6 = strlen(pcVar4);
    if ((int)(sVar6 + 1) < (int)sVar5) {
      memmove(*(void **)(param_1 + 0x260),(void *)((int)*(void **)(param_1 + 0x260) + sVar6 + 1),
              (sVar5 - sVar6) + 1);
    }
    else {
      **(undefined1 **)(param_1 + 0x260) = 0;
    }
    uVar11 = *(uint *)(param_1 + 0x208);
    uVar12 = *(uint *)(param_1 + 0x210);
    uVar13 = *(uint *)(param_1 + 0x218);
    *(uint *)(param_1 + 0x208) = uVar11 + 1;
    *(uint *)(param_1 + 0x210) = uVar12 + sVar6;
    *(uint *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + (uint)CARRY4(uVar12,sVar6);
    cVar2 = DAT_00072ed8;
    *(uint *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + (uint)(0xfffffffe < uVar11);
    *(uint *)(param_1 + 0x218) = uVar13 + sVar6;
    *(uint *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + (uint)CARRY4(uVar13,sVar6);
    if (cVar2 == '\0') {
      return pcVar4;
    }
    if (DAT_000686f1 == '\0') {
      return pcVar4;
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
      return pcVar4;
    }
    snprintf((char *)&local_2030,0x800,"RECVD: %s",pcVar4);
    FUN_0001dd98(7,&local_2030,0);
    return pcVar4;
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    local_2030.tv_sec._0_1_ = 'F';
    local_2030.tv_sec._1_1_ = 'a';
    local_2030.tv_sec._2_1_ = 'i';
    local_2030.tv_sec._3_1_ = 'l';
    local_2030.tv_nsec._0_1_ = 'e';
    local_2030.tv_nsec._1_1_ = 'd';
    local_2030.tv_nsec._2_1_ = ' ';
    local_2030.tv_nsec._3_1_ = 't';
    builtin_strncpy(acStack_2028,"o parse a \\n terminated string i",0x20);
    local_2008._0_1_ = 'n';
    local_2008._1_1_ = ' ';
    local_2008._2_1_ = 'r';
    local_2008._3_1_ = 'e';
    builtin_strncpy(acStack_2004,"cv_line",8);
    FUN_0001dd98(7,&local_2030,0);
  }
LAB_00021c44:
  FUN_0001f76c(param_1);
  return (char *)0x0;
}

