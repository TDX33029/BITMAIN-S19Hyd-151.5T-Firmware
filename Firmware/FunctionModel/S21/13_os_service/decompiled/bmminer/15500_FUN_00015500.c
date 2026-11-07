// FUN_00015500 @ 00015500  size=5956  callers=0
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00015500(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  FILE *__stream;
  char *pcVar4;
  size_t sVar5;
  ushort **ppuVar6;
  long param3;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  pthread_mutex_t *__mutex;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  char *param3_00;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  uint in_fpscr;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  byte *local_22b0;
  uint local_22a8;
  int local_22a4;
  int local_2280;
  int local_227c;
  uint local_2250;
  uint local_224c [3];
  undefined1 auStack_2240 [12];
  uint local_2234 [10];
  pthread_attr_t pStack_220c;
  _union_1051 local_21cc;
  sigset_t sStack_21c8;
  undefined4 local_2148;
  byte local_2140 [8];
  undefined4 local_2138;
  undefined4 uStack_2134;
  undefined4 uStack_2130;
  undefined4 uStack_212c;
  undefined4 local_2128;
  undefined4 uStack_2124;
  undefined4 uStack_2120;
  undefined4 uStack_211c;
  undefined1 auStack_2118 [12];
  undefined1 auStack_210c [204];
  timespec local_2040;
  undefined4 local_2038;
  undefined4 local_2034;
  undefined4 local_2030;
  uint local_202c;
  undefined4 local_2028;
  undefined2 local_2024;
  undefined2 local_2022;
  
  DAT_00a590d8 = pthread_self();
  local_21cc.sa_handler = (__sighandler_t)&DAT_00041b4c;
  local_2148 = 4;
  sigemptyset(&sStack_21c8);
  sigaction(0xf,(sigaction *)&local_21cc,(sigaction *)&DAT_00a590dc);
  sigaction(2,(sigaction *)&local_21cc,(sigaction *)&DAT_00a5f278);
  sigaction(6,(sigaction *)&local_21cc,(sigaction *)&DAT_00a5d180);
  sigaction(10,(sigaction *)&local_21cc,(sigaction *)0x0);
  sem_init((sem_t *)&DAT_000c9460,0,0);
  FUN_00042570(&DAT_00a5f310,&DAT_000a0a14,0xc54);
  param3_00 = (char *)*param_2;
  memset(local_2140,0,0x100);
  memset(&pStack_220c,0,0x40);
  snprintf(pStack_220c.__size,0x40,"pidof %s",param3_00);
  __stream = popen(pStack_220c.__size,"r");
  if (__stream != (FILE *)0x0) {
LAB_00015630:
    do {
      pcVar4 = fgets((char *)local_2140,0x100,__stream);
      if (pcVar4 == (char *)0x0) goto LAB_00015728;
      if (DAT_008c702e != '\0') {
        if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 7)) {
LAB_000156d8:
          if ((DAT_008c702d == '\0') && (DAT_000be644 < 7)) goto LAB_00015630;
        }
        else {
          snprintf((char *)&local_2040,0x2000,"pidof %s command result is: %s\n",param3_00,
                   (char *)local_2140);
          FUN_0004948c(7,&local_2040,0);
          if (DAT_008c702e == '\0') goto LAB_00015630;
          if (DAT_00a5d20d == '\0') goto LAB_000156d8;
        }
        sVar5 = strlen((char *)local_2140);
        snprintf((char *)&local_2040,0x2000,"strlen is: %d\n",sVar5);
        FUN_0004948c(7,&local_2040,0);
      }
    } while( true );
  }
  if ((DAT_008c702e != '\0') &&
     (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    snprintf((char *)&local_2040,0x2000," app-service:%s Not Found!!!",param3_00);
    FUN_0004948c(7,&local_2040,0);
  }
LAB_00015900:
  pvVar7 = calloc(1,0x1de0);
  DAT_00a5f250 = pvVar7;
  pvVar8 = calloc(1,0x188);
  DAT_00a5f274 = pvVar8;
  DAT_00a5916c = calloc(1,0x40);
  *(void **)((int)DAT_00a5916c + 0x24) = pvVar8;
  *(void **)((int)pvVar8 + 0x14) = pvVar7;
  FUN_00084c54("/etc/bitmain_category.conf");
  iVar19 = FUN_0004546c(param_1,param_2);
  if (iVar19 == 0) {
    FUN_0004e8c8(4,"config load err restore factory config please");
  }
  FUN_00044680();
  iVar19 = FUN_000414e0();
  if (iVar19 != 0) {
    FUN_0004e8c8(4,"socket init failed!");
  }
  iVar19 = FUN_000513a0();
  if (iVar19 != 0) {
    FUN_0004e8c8(4,"basic init failed!");
    do {
      sleep(10);
    } while( true );
  }
  DAT_00a5f270 = calloc(1,0x40);
  pthread_attr_init(&pStack_220c);
  pthread_attr_setstacksize(&pStack_220c,0x200000);
  iVar19 = FUN_0004c5a0(DAT_00a5f270,&pStack_220c,&DAT_000416ac);
  if ((iVar19 != 0) && (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (2 < DAT_000be644)))) {
    snprintf((char *)&local_2040,0x2000,"%s: create thread for get api status failed\n","main");
    FUN_0004948c(3,&local_2040,0);
  }
  pthread_detach(*(pthread_t *)((int)DAT_00a5f270 + 0xc));
  iVar17 = *(int *)(*(int *)((int)DAT_00a5916c + 0x24) + 0x14);
  iVar19 = pthread_mutex_init((pthread_mutex_t *)(iVar17 + 0x70),(pthread_mutexattr_t *)0x0);
  if (iVar19 != 0) {
    FUN_000424b8("bitmain_soc_prepare",0x834);
  }
  FUN_00042570(iVar17,"bitmain_soc_prepare",0x835);
  FUN_00042570(iVar17 + 0x180,"bitmain_soc_prepare",0x836);
  FUN_00042570(iVar17 + 0x8c8,"bitmain_soc_prepare",0x837);
  FUN_00042570(iVar17 + 0x1010,"bitmain_soc_prepare",0x838);
  FUN_00042570(iVar17 + 0x1758,"bitmain_soc_prepare",0x839);
  memset(&local_2040,0,0x20);
  local_2038._2_2_ = (ushort)DAT_000c9488 & 0xff;
  local_2040.tv_nsec._0_1_ = (DAT_000c9484 & 1) << 1 | 0xfc;
  local_2034._2_1_ = (char)DAT_000be5e4;
  local_2034._3_1_ = (char)((uint)DAT_000be5e4 >> 8);
  local_2034._0_1_ = (char)DAT_000be5e0;
  local_2034._1_1_ = (char)((uint)DAT_000be5e0 >> 8);
  local_2040.tv_sec = CONCAT22(0x1a,(undefined2)local_2040.tv_sec);
  local_2040.tv_nsec._0_2_ = CONCAT11(7,(byte)local_2040.tv_nsec);
  local_2038 = CONCAT22(local_2038._2_2_,0x3609);
  local_2038._3_1_ = 'P';
  local_2040.tv_sec = CONCAT31(local_2040.tv_sec._1_3_,'Q');
  local_2030._0_1_ = '\n';
  local_2030._1_1_ = '\n';
  local_2028 = CONCAT22(400,(undefined2)local_2028);
  _local_2024 = CONCAT22(local_2022,600);
  local_2028 = CONCAT31(local_2028._1_3_,4);
  uVar3 = FUN_0004d044(&local_2040,0x1e);
  _local_2024 = CONCAT22(uVar3,local_2024);
  iVar19 = FUN_00055518(local_2040.tv_sec,local_2040.tv_nsec,local_2038,local_2034,local_2030,
                        local_202c,local_2028);
  if (iVar19 == 0) {
    FUN_0004e8c8(4,"soc init failed!");
    do {
      sleep(10);
    } while( true );
  }
  FUN_0004e8c8(2,0);
  if (DAT_000c948c == '\0') {
    FUN_00052a08();
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9440);
  if (DAT_000c9458 != 0) {
    if (3 < DAT_000be63c) {
      local_2040.tv_sec._0_1_ = 's';
      local_2040.tv_sec._1_1_ = 't';
      local_2040.tv_sec._2_1_ = 'a';
      local_2040.tv_sec._3_1_ = 'r';
      local_2040.tv_nsec._0_1_ = 't';
      local_2040.tv_nsec._1_1_ = ' ';
      local_2040.tv_nsec._2_1_ = 't';
      local_2040.tv_nsec._3_1_ = 'h';
      local_2038._0_1_ = 'e';
      local_2038._1_1_ = ' ';
      local_2038._2_1_ = 'c';
      local_2038._3_1_ = 'a';
      local_2034._0_1_ = 'c';
      local_2034._1_1_ = 'h';
      local_2034._2_1_ = 'e';
      local_2034._3_1_ = 'd';
      local_2030._0_1_ = ' ';
      local_2030._1_1_ = 'j';
      local_2030._2_1_ = 'o';
      local_2030._3_1_ = 'b';
      local_202c = local_202c & 0xffffff00;
      FUN_0004948c(3,&local_2040,0);
    }
    FUN_00044b40(DAT_000c945c,DAT_000c9458);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9440);
  FUN_0005015c();
  do {
    pvVar7 = DAT_00a5916c;
    if (*(char *)((int)DAT_00a5f274 + 0x16c) != '\0') {
      sem_destroy((sem_t *)&DAT_000c9460);
      FUN_00024584();
      FUN_000855b4();
      return 0;
    }
    __mutex = *(pthread_mutex_t **)(*(int *)((int)DAT_00a5916c + 0x24) + 0x14);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00944b18);
    iVar19 = pthread_mutex_lock(__mutex);
    if (iVar19 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_2040,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11
               ,"bmminer.c","bitmain_c5_scanhash",0x8b8);
      FUN_0004948c(3,&local_2040,1);
    }
    iVar19 = pthread_rwlock_rdlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar19 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_2040,0x2000,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
               *piVar11,"bmminer.c","bitmain_c5_scanhash",0x8b8);
      FUN_0004948c(3,&local_2040,1);
    }
    iVar19 = pthread_mutex_unlock(__mutex);
    if (iVar19 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_2040,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
               *piVar11,"bmminer.c","bitmain_c5_scanhash",0x8b8);
      FUN_0004948c(3,&local_2040,1);
    }
    local_22a8 = 0;
    local_22a4 = 0;
LAB_00015dc4:
    if (DAT_00a6c924 != 0) {
LAB_00015dd0:
      iVar19 = 0;
      uVar14 = *(uint *)(&DAT_00a6c93c + DAT_00a6c920 * 0x3c);
      uVar22 = *(uint *)(&DAT_00a6c928 + DAT_00a6c920 * 0x3c);
      uVar2 = *(ulonglong *)(&DAT_00a6c934 + DAT_00a6c920 * 0x3c);
      uVar15 = *(undefined4 *)(&DAT_00a6c938 + DAT_00a6c920 * 0x3c);
      iVar17 = *(int *)(&DAT_00a6c940 + DAT_00a6c920 * 0x3c);
      uVar23 = *(uint *)(&DAT_00a6c92c + DAT_00a6c920 * 0x3c);
      uVar18 = *(int *)(&DAT_00a6c930 + DAT_00a6c920 * 0x3c) << 0x18 |
               *(uint *)(&DAT_00a6c930 + DAT_00a6c920 * 0x3c) >> 0x18 |
               *(uint *)(&DAT_00a6c930 + DAT_00a6c920 * 0x3c) >> 8 & 0xff00 |
               (*(uint *)(&DAT_00a6c930 + DAT_00a6c920 * 0x3c) & 0xff00) << 8;
      do {
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x20);
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        snprintf((char *)&local_2040,0x2000,
                 "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
                 "bitmain_c5_scanhash",uVar22,uVar23,
                 *(ulonglong *)(&DAT_00a6c934 + DAT_00a6c920 * 0x3c),uVar14,uVar18);
        FUN_0004948c(7,&local_2040,0);
      }
      if (DAT_00a6c920 < 0xffe) {
        DAT_00a6c920 = DAT_00a6c920 + 1;
      }
      else {
        DAT_00a6c920 = 0;
      }
      puVar21 = (uint *)((int)__mutex + 0xac);
      DAT_00a6c924 = DAT_00a6c924 + -1;
      if (((uVar14 == DAT_000c9490) && (uVar23 == DAT_000c9494)) && (uVar18 == DAT_000c9498)) {
        iVar19 = FUN_0002a6f0(iVar17);
        if (iVar19 != 1) goto LAB_00015dc4;
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          local_2040.tv_sec._0_1_ = 'r';
          local_2040.tv_sec._1_1_ = 'e';
          local_2040.tv_sec._2_1_ = 'p';
          local_2040.tv_sec._3_1_ = 'e';
          local_2040.tv_nsec._0_1_ = 'a';
          local_2040.tv_nsec._1_1_ = 't';
          local_2040.tv_nsec._2_1_ = ' ';
          local_2040.tv_nsec._3_1_ = 'n';
          local_2038._0_1_ = 'o';
          local_2038._1_1_ = 'n';
          local_2038._2_1_ = 'c';
          local_2038._3_1_ = 'e';
          local_2034._0_1_ = ' ';
          local_2034._1_1_ = 'e';
          local_2034._2_1_ = 'r';
          local_2034._3_1_ = 'r';
          local_2030._0_1_ = 'o';
          local_2030._1_1_ = 'r';
          local_2030._2_1_ = '\0';
          FUN_0004948c(7,&local_2040,0);
        }
        goto LAB_00016934;
      }
      DAT_000c9490 = uVar14;
      DAT_000c9494 = uVar23;
      DAT_000c9498 = uVar18;
      if (DAT_008c702e != '\0') {
        if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (6 < DAT_000be644)) {
          snprintf((char *)&local_2040,0x2000,"%s: Chain ID J%d ...\n","bitmain_c5_scanhash",
                   iVar17 + 1);
          FUN_0004948c(7,&local_2040,0);
          if (DAT_008c702e != '\0') {
            iVar19 = DAT_000be4f8 - uVar22;
            if (DAT_00a5d20d == '\0') goto LAB_00015ff4;
            goto LAB_00016624;
          }
          goto LAB_00016658;
        }
        iVar19 = DAT_000be4f8 - uVar22;
LAB_00015ff4:
        if ((DAT_008c702d != '\0') || (6 < DAT_000be644)) {
LAB_00016624:
          snprintf((char *)&local_2040,0x2000,"%s: given_id:%d job_id:%d switch:%d  ...\n",
                   "bitmain_c5_scanhash",DAT_000be4f8,uVar22,iVar19);
          FUN_0004948c(7,&local_2040,0);
          goto LAB_00016658;
        }
        switch(iVar19) {
        case 0:
          goto switchD_00016018_caseD_0;
        case 1:
          goto switchD_00016018_caseD_1;
        case 2:
          goto switchD_00016018_caseD_2;
        case 3:
          goto switchD_00016018_caseD_3;
        default:
          goto switchD_00016018_default;
        }
      }
LAB_00016658:
      switch(DAT_000be4f8 - uVar22) {
      case 0:
        break;
      case 1:
switchD_00016018_caseD_1:
        puVar21 = (uint *)((int)__mutex + 0x7f4);
        break;
      case 2:
switchD_00016018_caseD_2:
        puVar21 = (uint *)((int)__mutex + 0xf3c);
        break;
      case 3:
switchD_00016018_caseD_3:
        puVar21 = (uint *)((int)__mutex + 0x1684);
        break;
      default:
        if (DAT_00a5d20d != '\0') goto LAB_00016948;
switchD_00016018_default:
        if ((DAT_008c702d != '\0') || (2 < DAT_000be644)) {
LAB_00016948:
          snprintf((char *)&local_2040,0x2000,"%s: job_id non\'t found ...\n","bitmain_c5_scanhash")
          ;
          FUN_0004948c(3,&local_2040,0);
        }
        iVar19 = FUN_0002a6f0(iVar17);
        if (iVar19 == 1) {
LAB_00016934:
          FUN_00043924(pvVar7);
          FUN_0002ab30(iVar17);
        }
        goto LAB_00015dc4;
      }
switchD_00016018_caseD_0:
      FUN_000437c4(pvVar7,&local_2250,puVar21,puVar21,(int)uVar2,uVar15,uVar18);
      uVar18 = local_2250;
      uVar22 = *puVar21;
      iVar9 = clock_gettime(1,&local_2040);
      iVar19 = DAT_000c949c;
      if (-1 < iVar9) {
        local_227c = local_2040.tv_sec;
        local_2280 = local_2040.tv_nsec / 1000;
      }
      dVar26 = *(double *)(uVar18 + 0x138);
      uVar27 = FUN_00098fa0(SUB84(dVar26,0),(int)((ulonglong)dVar26 >> 0x20));
      iVar9 = DAT_000c94a0;
      uVar2 = CONCAT44(DAT_000c94ac,DAT_000c94a8);
      DAT_000c94ac = (undefined4)(uVar27 >> 0x20);
      DAT_000c94a8 = (undefined4)uVar27;
      if (uVar27 != uVar2) {
        if (uVar27 == 0) {
          DAT_000c94b0 = 0xffffffff;
          DAT_000c94b4 = 0xffffffff;
        }
        else {
          DAT_000c94b0 = 0;
          DAT_000c94b4 = 0;
          uVar2 = uVar27;
          while( true ) {
            uVar23 = (uint)(uVar2 >> 0x21);
            uVar16 = (uint)((byte)(uVar2 >> 0x20) & 1) << 0x1f | (uint)uVar2 >> 1;
            uVar2 = CONCAT44(uVar23,uVar16);
            bVar24 = 0xfffffffe < DAT_000c94b0;
            if (uVar16 == 0 && uVar23 == 0) break;
            DAT_000c94b0 = DAT_000c94b0 + 1;
            DAT_000c94b4 = DAT_000c94b4 + bVar24;
          }
        }
        uVar2 = uVar27;
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          snprintf((char *)&local_2040,0x2000,
                   "%s: pool_diff:%llu work_diff:%f pool_diff_bit:%llu ...\n","hashtest_submit",
                   uVar27,dVar26,CONCAT44(DAT_000c94b4,DAT_000c94b0));
          FUN_0004948c(7,&local_2040,0);
          uVar2 = CONCAT44(DAT_000c94ac,DAT_000c94a8);
        }
      }
      dVar26 = _DAT_000be4f0;
      DAT_000c94ac = (undefined4)(uVar2 >> 0x20);
      DAT_000c94a8 = (undefined4)uVar2;
      uVar27 = FUN_00098fa0(SUB84(_DAT_000be4f0,0),(int)((ulonglong)_DAT_000be4f0 >> 0x20));
      uVar2 = CONCAT44(DAT_000c94bc,DAT_000c94b8);
      DAT_000c94bc = (undefined4)(uVar27 >> 0x20);
      DAT_000c94b8 = (undefined4)uVar27;
      if (uVar27 != uVar2) {
        DAT_000c94c0 = 0;
        DAT_000c94c4 = 0;
        uVar2 = uVar27;
        if (uVar27 == 0) {
          DAT_000c94c0 = 0xffffffff;
          DAT_000c94c4 = -1;
        }
        else {
          while( true ) {
            uVar23 = (uint)(uVar2 >> 0x21);
            uVar16 = (uint)((byte)(uVar2 >> 0x20) & 1) << 0x1f | (uint)uVar2 >> 1;
            bVar24 = 0xfffffffe < DAT_000c94c0;
            if (uVar16 == 0 && uVar23 == 0) break;
            DAT_000c94c0 = DAT_000c94c0 + 1;
            DAT_000c94c4 = DAT_000c94c4 + (uint)bVar24;
            uVar2 = CONCAT44(uVar23,uVar16);
          }
        }
        uVar2 = uVar27;
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          snprintf((char *)&local_2040,0x2000,
                   "%s:net_diff:%llu current_diff:%f net_diff_bit %llu ...\n","hashtest_submit",
                   uVar27,dVar26,CONCAT44(DAT_000c94c4,DAT_000c94c0));
          FUN_0004948c(7,&local_2040,0);
          uVar2 = CONCAT44(DAT_000c94bc,DAT_000c94b8);
        }
      }
      DAT_000c94bc = (undefined4)(uVar2 >> 0x20);
      DAT_000c94b8 = (undefined4)uVar2;
      local_2138 = *(undefined4 *)(uVar18 + 0x80);
      uStack_2134 = *(undefined4 *)(uVar18 + 0x84);
      uStack_2130 = *(undefined4 *)(uVar18 + 0x88);
      uStack_212c = *(undefined4 *)(uVar18 + 0x8c);
      local_2128 = *(undefined4 *)(uVar18 + 0x90);
      uStack_2124 = *(undefined4 *)(uVar18 + 0x94);
      uStack_2120 = *(undefined4 *)(uVar18 + 0x98);
      uStack_211c = *(undefined4 *)(uVar18 + 0x9c);
      local_2140[0] = 0x50;
      local_2140[1] = 0;
      local_2140[2] = 0;
      local_2140[3] = 0;
      local_2140[4] = 0;
      local_2140[5] = 0;
      local_2140[6] = 0;
      local_2140[7] = 0;
      local_224c[0] = *(uint *)(uVar18 + 0x40);
      local_224c[1] = *(undefined4 *)(uVar18 + 0x44);
      local_224c[2] = *(undefined4 *)(uVar18 + 0x48);
      FUN_0004d164(auStack_2118,local_224c,0xc,auStack_2240);
      local_224c[0] = uVar14;
      FUN_0004d164(auStack_210c,local_224c,4);
      FUN_00032fd4(local_2140,local_224c);
      memset(local_2140,0,0xe8);
      FUN_00033188(local_224c,0x20,local_2234 + 2);
      puVar13 = local_2234 + 1;
      puVar21 = &local_2250;
      do {
        puVar13 = puVar13 + 1;
        uVar23 = *puVar13;
        puVar21 = puVar21 + 1;
        *puVar21 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                   uVar23 >> 0x18;
      } while (local_2234 + 9 != puVar13);
      if (local_2234[1] == 0) {
        puVar21 = local_2234 + 1;
        DAT_000c94c8 = local_2234[1];
        uVar23 = 0;
        do {
          puVar21 = puVar21 + -1;
          if (*puVar21 != 0) {
            uVar16 = (int)uVar23 >> 0x1f;
            goto LAB_000166ac;
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != 7);
        uVar23 = 7;
        uVar16 = 0;
LAB_000166ac:
        uVar20 = DAT_000c94b4 >> 5;
        uVar10 = DAT_000c94b0 >> 5 | DAT_000c94b4 << 0x1b;
        bVar24 = uVar16 <= uVar20;
        if (uVar20 == uVar16) {
          bVar24 = uVar23 <= uVar10;
        }
        if (!bVar24 || uVar20 == uVar16 && uVar10 == uVar23) {
          uVar15 = FUN_0002a514();
          iVar19 = FUN_00083088(uVar14,uVar15);
          iVar9 = FUN_0008306c(uVar14);
          iVar12 = iVar19 + iVar17 * 0x100;
          uVar10 = DAT_000c94b0 & 0x1f;
          uVar20 = (&DAT_00aa88f0)[iVar12 * 2];
          uVar16 = DAT_000c94b0 >> 5;
          uVar23 = DAT_000c94b4 << 0x1b;
          (&DAT_00aa88f0)[iVar12 * 2] = uVar20 + 1;
          (&DAT_00aa88f4)[iVar12 * 2] = (&DAT_00aa88f4)[iVar12 * 2] + (uint)(0xfffffffe < uVar20);
          uVar23 = local_2234[-(uVar16 | uVar23)];
          if (((uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
               uVar23 >> 0x18) < 0xffffffffU >> uVar10) &&
             (iVar12 = strcmp(*(char **)((int)DAT_00a5f250 + 0x35c),*(char **)(uVar18 + 0x120)),
             iVar12 == 0)) {
            if ((DAT_008c702e != '\0') &&
               (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
              snprintf((char *)&local_2040,0x2000,
                       "%s: chain %d which_asic_nonce %d which_core_nonce %d","hashtest_submit",
                       iVar17,iVar19,iVar9);
              FUN_0004948c(7,&local_2040,0);
            }
            uVar23 = (&DAT_012a2918)[iVar17 * 2];
            (&DAT_012a2918)[iVar17 * 2] = uVar23 + 0x100;
            (&DAT_012a291c)[iVar17 * 2] = (&DAT_012a291c)[iVar17 * 2] + (uint)(0xfffffeff < uVar23);
            FUN_000443d0(pvVar7,uVar18,uVar14,uVar22 & 0xff);
            bVar24 = 0xfffffeff < local_22a8;
            local_22a8 = local_22a8 + 0x100;
            local_22a4 = local_22a4 + (uint)bVar24;
          }
          else if ((local_2234[0] << 0x18 | (local_2234[0] >> 8 & 0xff) << 0x10 |
                    (local_2234[0] >> 0x10 & 0xff) << 8 | local_2234[0] >> 0x18) < 0xffffff) {
            uVar14 = (&DAT_012a2918)[iVar17 * 2];
            bVar24 = 0xfffffeff < local_22a8;
            local_22a8 = local_22a8 + 0x100;
            (&DAT_012a2918)[iVar17 * 2] = uVar14 + 0x100;
            (&DAT_012a291c)[iVar17 * 2] = (&DAT_012a291c)[iVar17 * 2] + (uint)(0xfffffeff < uVar14);
            local_22a4 = local_22a4 + (uint)bVar24;
          }
        }
      }
      else {
        DAT_000c94c8 = DAT_000c94c8 + 1;
        if (0x101 < DAT_000c94c8) {
          dVar26 = (double)VectorSignedToFloat(local_2280 - iVar9,(byte)(in_fpscr >> 0x16) & 3);
          dVar25 = (double)VectorSignedToFloat(local_227c - iVar19,(byte)(in_fpscr >> 0x16) & 3);
          dVar25 = (dVar26 / 1000.0) / 1000.0 + dVar25;
          uVar14 = in_fpscr & 0xfffffff | (uint)(dVar25 < 10.0) << 0x1f |
                   (uint)(dVar25 == 10.0) << 0x1e;
          in_fpscr = uVar14 | (uint)NAN(dVar25) << 0x1c;
          bVar1 = (byte)(uVar14 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            FUN_0006c370();
            DAT_000c949c = local_227c;
            DAT_000c94a0 = local_2280;
            if (3 < DAT_000be63c) {
              snprintf((char *)&local_2040,0x2000,"nonce fifo flush by nonce, last_ts = %.2f.\n",
                       dVar25);
              FUN_0004948c(3,&local_2040,0);
            }
          }
        }
        iVar19 = FUN_0002a6f0(iVar17);
        if (iVar19 == 1) {
          if ((DAT_008c702e != '\0') &&
             (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
            local_2040.tv_sec._0_1_ = 'h';
            local_2040.tv_sec._1_1_ = 'a';
            local_2040.tv_sec._2_1_ = 's';
            local_2040.tv_sec._3_1_ = 'h';
            local_2040.tv_nsec._0_1_ = '2';
            local_2040.tv_nsec._1_1_ = '_';
            local_2040.tv_nsec._2_1_ = '3';
            local_2040.tv_nsec._3_1_ = '2';
            local_2038._0_1_ = ' ';
            local_2038._1_1_ = 'e';
            local_2038._2_1_ = 'r';
            local_2038._3_1_ = 'r';
            local_2034._0_1_ = 'o';
            local_2034._1_1_ = 'r';
            local_2034._2_1_ = '\0';
            FUN_0004948c(7,&local_2040,0);
          }
          FUN_00043924(pvVar7);
          FUN_0002ab30(iVar17);
        }
        if ((DAT_008c702e != '\0') &&
           (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
          snprintf((char *)&local_2040,0x2000,"%s: HASH2_32[7] != 0","hashtest_submit");
          FUN_0004948c(7,&local_2040,0);
        }
      }
      FUN_00043740(&local_2250,"bmminer.c","bitmain_c5_scanhash",0x919);
      if (DAT_00a6c924 == 0) goto LAB_000164c8;
      goto LAB_00015dd0;
    }
LAB_000164c8:
    bVar24 = CARRY4(DAT_00aaa908,local_22a8);
    DAT_00aaa908 = DAT_00aaa908 + local_22a8;
    DAT_00aaa90c = DAT_00aaa90c + local_22a4 + (uint)bVar24;
    iVar19 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar19 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_2040,0x2000,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
               *piVar11,"bmminer.c","bitmain_c5_scanhash",0x91c);
      FUN_0004948c(3,&local_2040,1);
    }
    (*DAT_000be768)();
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944b18);
    FUN_0004bf68(1);
    if (local_22a8 != 0 || local_22a4 != 0) {
      iVar19 = -local_22a8;
      iVar17 = local_22a8 + ((uint)(local_22a8 != 0) * -2 - local_22a4) +
               (uint)CARRY4(local_22a8 * 0x7fffffff,local_22a8 * 0x7fffffff) +
               (uint)CARRY4(local_22a8 * -2,local_22a8);
      if ((DAT_008c702e != '\0') &&
         (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
        snprintf((char *)&local_2040,0x2000,"%s: hashes %llu ...\n","bitmain_c5_scanhash",
                 CONCAT44(iVar17,iVar19));
        FUN_0004948c(7,&local_2040,0);
      }
      if (iVar19 != 0 || iVar17 != 0) {
        dVar26 = (double)FUN_00098c24(iVar19,iVar17);
        DAT_000c9470 = dVar26 / 1000000000.0 + DAT_000c9470;
      }
    }
  } while( true );
LAB_00015728:
  pclose(__stream);
  uVar18 = 1;
  iVar19 = 0;
  uVar14 = 0;
  local_22b0 = local_2140;
  while( true ) {
    sVar5 = strlen((char *)local_2140);
    if (sVar5 < uVar18) break;
    memset(local_2234 + 2,0,0x20);
    ppuVar6 = __ctype_b_loc();
    if (((*ppuVar6)[*local_22b0] & 0x2000) != 0) {
      strncpy((char *)(local_2234 + 2),(char *)(local_2140 + uVar14),(uVar18 - uVar14) - 1);
      param3 = strtol((char *)(local_2234 + 2),(char **)0x0,10);
      uVar14 = uVar18;
      if (((0 < param3) && (iVar19 = iVar19 + 1, DAT_008c702e != '\0')) &&
         ((DAT_00a5d20d != '\0' || ((DAT_008c702d != '\0' || (6 < DAT_000be644)))))) {
        snprintf((char *)&local_2040,0x2000,"Parsed proc id is: %d\n",param3);
        FUN_0004948c(7,&local_2040,0);
      }
    }
    uVar18 = uVar18 + 1;
    local_22b0 = local_22b0 + 1;
  }
  if (iVar19 != 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf((char *)&local_2040,0x2000," %d instance of %s is  already Running on this machine",
               iVar19,param3_00);
      FUN_0004948c(3,&local_2040,0);
    }
    if (iVar19 != 1) {
      snprintf((char *)&local_2040,0x2000,"%s is forbidden to start twice, will exit immediately!",
               (char *)*param_2);
      FUN_0004948c(3,&local_2040,1);
    }
  }
  goto LAB_00015900;
}

