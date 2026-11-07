// FUN_00013f28 @ 00013f28  size=5752  callers=0
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00013f28(undefined4 param_1,undefined4 *param_2)

{
  longlong lVar1;
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
  int param6;
  int *piVar11;
  uint *puVar12;
  pthread_mutex_t *__mutex;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  uint uVar20;
  char *param3_00;
  uint param7;
  undefined4 uVar21;
  bool bVar22;
  undefined4 extraout_s1;
  double dVar23;
  longlong lVar24;
  uint local_a8c;
  __time_t local_a88;
  uint local_a80;
  int local_a7c;
  int local_a50;
  __time_t local_a4c;
  uint local_a48;
  uint local_a44 [3];
  undefined1 auStack_a38 [12];
  uint local_a2c [10];
  pthread_attr_t pStack_a04;
  _union_1051 local_9c4;
  sigset_t sStack_9c0;
  undefined4 local_940;
  byte local_938 [8];
  undefined4 local_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined1 auStack_910 [12];
  undefined1 auStack_904 [204];
  timespec local_838;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  uint local_824;
  undefined4 local_820;
  undefined2 local_81c;
  undefined2 local_81a;
  
  local_9c4.sa_handler = (__sighandler_t)&LAB_0002c240;
  local_940 = 0;
  sigemptyset(&sStack_9c0);
  sigaction(0xf,(sigaction *)&local_9c4,(sigaction *)&DAT_007208ac);
  sigaction(2,(sigaction *)&local_9c4,(sigaction *)&DAT_0072296c);
  sigaction(6,(sigaction *)&local_9c4,(sigaction *)&DAT_0071c7a4);
  sem_init((sem_t *)&DAT_0008a7c8,0,0);
  FUN_0002ca38(&DAT_0071e850,&DAT_0006b5f4,0xaf6);
  param3_00 = (char *)*param_2;
  memset(local_938,0,0x100);
  memset(&pStack_a04,0,0x40);
  snprintf(pStack_a04.__size,0x40,"pidof %s",param3_00);
  __stream = popen(pStack_a04.__size,"r");
  if (__stream != (FILE *)0x0) {
LAB_00014038:
    do {
      pcVar4 = fgets((char *)local_938,0x100,__stream);
      if (pcVar4 == (char *)0x0) goto LAB_00014130;
      if (DAT_0048d36e != '\0') {
        if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)) {
LAB_000140e0:
          if ((DAT_0048d36d == '\0') && (DAT_00087bc4 < 7)) goto LAB_00014038;
        }
        else {
          snprintf((char *)&local_838,0x800,"pidof %s command result is: %s\n",param3_00,
                   (char *)local_938);
          FUN_00032218(7,&local_838,0);
          if (DAT_0048d36e == '\0') goto LAB_00014038;
          if (DAT_0071e84c == '\0') goto LAB_000140e0;
        }
        sVar5 = strlen((char *)local_938);
        snprintf((char *)&local_838,0x800,"strlen is: %d\n",sVar5);
        FUN_00032218(7,&local_838,0);
      }
    } while( true );
  }
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf((char *)&local_838,0x800," app-service:%s Not Found!!!",param3_00);
    FUN_00032218(7,&local_838,0);
  }
LAB_000142fc:
  pvVar7 = calloc(1,0x1694);
  DAT_007208a8 = pvVar7;
  pvVar8 = calloc(1,0x188);
  DAT_0071c79c = pvVar8;
  DAT_0071c794 = calloc(1,0x40);
  *(void **)((int)DAT_0071c794 + 0x24) = pvVar8;
  *(void **)((int)pvVar8 + 0x14) = pvVar7;
  FUN_0002f5f4(param_1,param_2);
  FUN_0002e8bc();
  iVar18 = FUN_0002bc04();
  if (iVar18 != 0) {
    FUN_00036380(4,"socket init failed!");
  }
  iVar18 = FUN_0003839c();
  if (iVar18 != 0) {
    FUN_00036380(4,"basic init failed!");
  }
  DAT_0071e848 = calloc(1,0x40);
  pthread_attr_init(&pStack_a04);
  pthread_attr_setstacksize(&pStack_a04,0x200000);
  iVar18 = FUN_00035098(DAT_0071e848,&pStack_a04,&DAT_0002bdac);
  if ((iVar18 != 0) && (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)))) {
    snprintf((char *)&local_838,0x800,"%s: create thread for get api status failed\n","main");
    FUN_00032218(3,&local_838,0);
  }
  pthread_detach(*(pthread_t *)((int)DAT_0071e848 + 0xc));
  iVar15 = *(int *)(*(int *)((int)DAT_0071c794 + 0x24) + 0x14);
  iVar18 = pthread_mutex_init((pthread_mutex_t *)(iVar15 + 0x70),(pthread_mutexattr_t *)0x0);
  if (iVar18 != 0) {
    FUN_0002c980("bitmain_soc_prepare",0x7b0);
  }
  FUN_0002ca38(iVar15,"bitmain_soc_prepare",0x7b1);
  FUN_0002ca38(iVar15 + 0x180,"bitmain_soc_prepare",0x7b2);
  FUN_0002ca38(iVar15 + 0x8c8,"bitmain_soc_prepare",0x7b3);
  FUN_0002ca38(iVar15 + 0x1010,"bitmain_soc_prepare",0x7b4);
  memset(&local_838,0,0x20);
  local_838.tv_sec = CONCAT22(0x1a,(undefined2)local_838.tv_sec);
  local_838.tv_sec = CONCAT31(local_838.tv_sec._1_3_,'Q');
  local_838.tv_nsec =
       CONCAT31((int3)((uint)local_838.tv_nsec >> 8),
                ~((byte)~(byte)(((local_838.tv_nsec & 0xfdU | (DAT_0008a7ec & 1) << 1) << 0x1e) >>
                               0x18) >> 6)) | 0x700;
  local_830._2_1_ = (char)DAT_0008a7f0;
  local_830._0_1_ = '\t';
  local_830._1_1_ = '6';
  local_830._3_1_ = 'P';
  local_828._0_1_ = '\n';
  local_828._1_1_ = '\n';
  local_820 = CONCAT22(400,(undefined2)local_820);
  _local_81c = CONCAT22(local_81a,600);
  local_82c._2_1_ = (char)DAT_00087b60;
  local_82c._3_1_ = (char)((uint)DAT_00087b60 >> 8);
  local_82c._0_1_ = (char)DAT_00087b5c;
  local_82c._1_1_ = (char)((uint)DAT_00087b5c >> 8);
  local_820 = CONCAT31(local_820._1_3_,4);
  uVar3 = FUN_00035b18(&local_838,0x1e);
  _local_81c = CONCAT22(uVar3,local_81c);
  iVar18 = FUN_00039544(local_838.tv_sec,local_838.tv_nsec,local_830,local_82c,local_828,local_824,
                        local_820);
  if (iVar18 == 0) {
    FUN_00036380(4,"soc init failed!");
  }
  FUN_00036380(2,0);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a7a8);
  if (DAT_0008a7c0 != 0) {
    if (3 < DAT_00087bbc) {
      local_838.tv_sec._0_1_ = 's';
      local_838.tv_sec._1_1_ = 't';
      local_838.tv_sec._2_1_ = 'a';
      local_838.tv_sec._3_1_ = 'r';
      local_838.tv_nsec._0_1_ = 't';
      local_838.tv_nsec._1_1_ = ' ';
      local_838.tv_nsec._2_1_ = 't';
      local_838.tv_nsec._3_1_ = 'h';
      local_830._0_1_ = 'e';
      local_830._1_1_ = ' ';
      local_830._2_1_ = 'c';
      local_830._3_1_ = 'a';
      local_82c._0_1_ = 'c';
      local_82c._1_1_ = 'h';
      local_82c._2_1_ = 'e';
      local_82c._3_1_ = 'd';
      local_828._0_1_ = ' ';
      local_828._1_1_ = 'j';
      local_828._2_1_ = 'o';
      local_828._3_1_ = 'b';
      local_824 = local_824 & 0xffffff00;
      FUN_00032218(3,&local_838,0);
    }
    FUN_0002ecf8(DAT_0008a7c4,DAT_0008a7c0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a7a8);
  FUN_000374e4();
  do {
    pvVar7 = DAT_0071c794;
    if (*(char *)((int)DAT_0071c79c + 0x16c) != '\0') {
      sem_destroy((sem_t *)&DAT_0008a7c8);
      FUN_0001cb8c();
      FUN_0005af18();
      return 0;
    }
    __mutex = *(pthread_mutex_t **)(*(int *)((int)DAT_0071c794 + 0x24) + 0x14);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00507420);
    iVar18 = pthread_mutex_lock(__mutex);
    if (iVar18 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_838,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11,
               "bmminer.c","bitmain_c5_scanhash",0x832);
      FUN_00032218(3,&local_838,1);
    }
    iVar18 = pthread_rwlock_rdlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar18 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_838,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11,
               "bmminer.c","bitmain_c5_scanhash",0x832);
      FUN_00032218(3,&local_838,1);
    }
    iVar18 = pthread_mutex_unlock(__mutex);
    if (iVar18 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_838,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar11
               ,"bmminer.c","bitmain_c5_scanhash",0x832);
      FUN_00032218(3,&local_838,1);
    }
    local_a80 = 0;
    local_a7c = 0;
LAB_000146c4:
    if (DAT_00723a18 != 0) {
      while( true ) {
        iVar18 = 0;
        param7 = *(uint *)(&DAT_00723a30 + DAT_00723a14 * 0x3c);
        uVar14 = *(uint *)(&DAT_00723a1c + DAT_00723a14 * 0x3c);
        uVar2 = *(ulonglong *)(&DAT_00723a28 + DAT_00723a14 * 0x3c);
        uVar21 = *(undefined4 *)(&DAT_00723a2c + DAT_00723a14 * 0x3c);
        iVar15 = *(int *)(&DAT_00723a34 + DAT_00723a14 * 0x3c);
        uVar20 = *(uint *)(&DAT_00723a20 + DAT_00723a14 * 0x3c);
        uVar13 = *(int *)(&DAT_00723a24 + DAT_00723a14 * 0x3c) << 0x18 |
                 *(uint *)(&DAT_00723a24 + DAT_00723a14 * 0x3c) >> 0x18 |
                 *(uint *)(&DAT_00723a24 + DAT_00723a14 * 0x3c) >> 8 & 0xff00 |
                 (*(uint *)(&DAT_00723a24 + DAT_00723a14 * 0x3c) & 0xff00) << 8;
        do {
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0x20);
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          snprintf((char *)&local_838,0x800,
                   "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
                   "bitmain_c5_scanhash",uVar14,uVar20,
                   *(ulonglong *)(&DAT_00723a28 + DAT_00723a14 * 0x3c),param7,uVar13);
          FUN_00032218(7,&local_838,0);
        }
        if (DAT_00723a14 < 0x1fe) {
          DAT_00723a14 = DAT_00723a14 + 1;
        }
        else {
          DAT_00723a14 = 0;
        }
        puVar16 = (uint *)((int)__mutex + 0xac);
        DAT_00723a18 = DAT_00723a18 + -1;
        if ((param7 != DAT_0008a7f4) || (uVar20 != DAT_0008a7f8)) break;
        iVar18 = FUN_000201d8(iVar15);
        if (iVar18 != 1) goto LAB_000146c4;
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          local_838.tv_sec._0_1_ = 'r';
          local_838.tv_sec._1_1_ = 'e';
          local_838.tv_sec._2_1_ = 'e';
          local_838.tv_sec._3_1_ = 'p';
          local_838.tv_nsec._0_1_ = 'a';
          local_838.tv_nsec._1_1_ = 't';
          local_838.tv_nsec._2_1_ = ' ';
          local_838.tv_nsec._3_1_ = 'n';
          local_830._0_1_ = 'o';
          local_830._1_1_ = 'n';
          local_830._2_1_ = 'c';
          local_830._3_1_ = 'e';
          local_82c._0_1_ = ' ';
          local_82c._1_1_ = 'e';
          local_82c._2_1_ = 'r';
          local_82c._3_1_ = 'r';
          local_828._0_1_ = 'o';
          local_828._1_1_ = 'r';
          FUN_00032218(7,&local_838,0);
        }
LAB_00014950:
        FUN_0002dd8c(pvVar7);
        FUN_00020618(iVar15);
        if (DAT_00723a18 == 0) goto LAB_0001496c;
      }
      DAT_0008a7f4 = param7;
      DAT_0008a7f8 = uVar20;
      if (DAT_0048d36e == '\0') {
LAB_00014b1c:
        if (DAT_00087ac8 - uVar14 == 1) goto LAB_00015244;
        if (DAT_00087ac8 != uVar14) {
          if (DAT_00087ac8 - uVar14 != 2) {
            if ((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) {
LAB_0001490c:
              if (2 < DAT_00087bc4) goto LAB_00014918;
            }
            else {
LAB_00014918:
              snprintf((char *)&local_838,0x800,"%s: job_id non\'t found ...\n",
                       "bitmain_c5_scanhash");
              FUN_00032218(3,&local_838,0);
            }
            iVar18 = FUN_000201d8(iVar15);
            if (iVar18 == 1) goto LAB_00014950;
            goto LAB_000146c4;
          }
LAB_00014b3c:
          puVar16 = (uint *)((int)__mutex + 0xf3c);
        }
      }
      else {
        if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)) {
          snprintf((char *)&local_838,0x800,"%s: Chain ID J%d ...\n","bitmain_c5_scanhash",
                   iVar15 + 1);
          FUN_00032218(7,&local_838,0);
          if (DAT_0048d36e != '\0') {
            iVar18 = DAT_00087ac8 - uVar14;
            if (DAT_0071e84c == '\0') goto LAB_000148d8;
            goto LAB_00014ae8;
          }
          goto LAB_00014b1c;
        }
        iVar18 = DAT_00087ac8 - uVar14;
LAB_000148d8:
        if ((DAT_0048d36d != '\0') || (6 < DAT_00087bc4)) {
LAB_00014ae8:
          snprintf((char *)&local_838,0x800,"%s: given_id:%d job_id:%d switch:%d  ...\n",
                   "bitmain_c5_scanhash",DAT_00087ac8,uVar14,iVar18);
          FUN_00032218(7,&local_838,0);
          goto LAB_00014b1c;
        }
        if (iVar18 != 1) {
          if (iVar18 != 0) {
            if (iVar18 != 2) goto LAB_0001490c;
            goto LAB_00014b3c;
          }
          goto LAB_00014b48;
        }
LAB_00015244:
        puVar16 = (uint *)((int)__mutex + 0x7f4);
      }
LAB_00014b48:
      FUN_0002dc2c(pvVar7,&local_a50,puVar16,puVar16,(int)uVar2,uVar21,uVar13);
      iVar18 = local_a50;
      uVar13 = *puVar16;
      iVar9 = clock_gettime(1,&local_838);
      if (-1 < iVar9) {
        local_a88 = local_838.tv_sec;
        local_a8c = local_838.tv_nsec / 1000;
      }
      local_a4c = local_a88;
      local_a48 = local_a8c;
      uVar21 = FUN_0002b0f0(local_a88,local_a8c,DAT_0008a7fc,DAT_0008a800);
      dVar23 = *(double *)(iVar18 + 0x138);
      lVar24 = FUN_00067b30(SUB84(dVar23,0),(int)((ulonglong)dVar23 >> 0x20));
      lVar1 = CONCAT44(DAT_0008a80c,DAT_0008a808);
      DAT_0008a80c = (undefined4)((ulonglong)lVar24 >> 0x20);
      DAT_0008a808 = (undefined4)lVar24;
      if (lVar24 != lVar1) {
        if (lVar24 == 0) {
          DAT_0008a810 = 0xffffffff;
          DAT_0008a814 = 0xffffffff;
        }
        else {
          DAT_0008a814 = 0;
          DAT_0008a810 = 0;
          lVar1 = lVar24;
          while( true ) {
            uVar14 = (uint)((ulonglong)lVar1 >> 0x21);
            uVar20 = (uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1;
            lVar1 = CONCAT44(uVar14,uVar20);
            if (uVar20 == 0 && uVar14 == 0) break;
            DAT_0008a814 = DAT_0008a814 + (0xfffffffe < DAT_0008a810);
            DAT_0008a810 = DAT_0008a810 + 1;
          }
        }
        lVar1 = lVar24;
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          snprintf((char *)&local_838,0x800,
                   "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n","hashtest_submit",
                   lVar24,dVar23,CONCAT44(DAT_0008a814,DAT_0008a810));
          FUN_00032218(7,&local_838,0);
          lVar1 = CONCAT44(DAT_0008a80c,DAT_0008a808);
        }
      }
      dVar23 = DAT_00087ac0;
      DAT_0008a80c = (undefined4)((ulonglong)lVar1 >> 0x20);
      DAT_0008a808 = (undefined4)lVar1;
      lVar24 = FUN_00067b30(SUB84(DAT_00087ac0,0),(int)((ulonglong)DAT_00087ac0 >> 0x20));
      lVar1 = CONCAT44(DAT_0008a81c,DAT_0008a818);
      DAT_0008a81c = (undefined4)((ulonglong)lVar24 >> 0x20);
      DAT_0008a818 = (undefined4)lVar24;
      if (lVar24 != lVar1) {
        if (lVar24 == 0) {
          DAT_0008a820 = -1;
          DAT_0008a824 = -1;
        }
        else {
          iVar9 = 0;
          uVar14 = 1;
          lVar1 = lVar24;
          while( true ) {
            uVar20 = (uint)((ulonglong)lVar1 >> 0x21);
            uVar17 = (uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1;
            lVar1 = CONCAT44(uVar20,uVar17);
            if (uVar17 == 0 && uVar20 == 0) break;
            iVar9 = iVar9 + (uint)(0xfffffffe < uVar14);
            uVar14 = uVar14 + 1;
          }
          DAT_0008a820 = uVar14 - 1;
          DAT_0008a824 = iVar9 - (uint)(uVar14 == 0);
        }
        lVar1 = lVar24;
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          snprintf((char *)&local_838,0x800,
                   "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n","hashtest_submit",
                   lVar24,dVar23,CONCAT44(DAT_0008a824,DAT_0008a820));
          FUN_00032218(7,&local_838,0);
          lVar1 = CONCAT44(DAT_0008a81c,DAT_0008a818);
        }
      }
      DAT_0008a81c = (undefined4)((ulonglong)lVar1 >> 0x20);
      DAT_0008a818 = (undefined4)lVar1;
      local_930 = *(undefined4 *)(iVar18 + 0x80);
      uStack_92c = *(undefined4 *)(iVar18 + 0x84);
      uStack_928 = *(undefined4 *)(iVar18 + 0x88);
      uStack_924 = *(undefined4 *)(iVar18 + 0x8c);
      local_920 = *(undefined4 *)(iVar18 + 0x90);
      uStack_91c = *(undefined4 *)(iVar18 + 0x94);
      uStack_918 = *(undefined4 *)(iVar18 + 0x98);
      uStack_914 = *(undefined4 *)(iVar18 + 0x9c);
      local_938[0] = 0x50;
      local_938[1] = 0;
      local_938[2] = 0;
      local_938[3] = 0;
      local_938[4] = 0;
      local_938[5] = 0;
      local_938[6] = 0;
      local_938[7] = 0;
      local_a44[0] = *(uint *)(iVar18 + 0x40);
      local_a44[1] = *(undefined4 *)(iVar18 + 0x44);
      local_a44[2] = *(undefined4 *)(iVar18 + 0x48);
      FUN_00035c38(auStack_910,local_a44,0xc,auStack_a38);
      local_a44[0] = param7;
      FUN_00035c38(auStack_904,local_a44,4);
      FUN_000252b8(local_938,local_a44);
      memset(local_938,0,0xe8);
      FUN_0002546c(local_a44,0x20,local_a2c + 2);
      puVar12 = local_a2c + 1;
      puVar16 = &local_a48;
      do {
        puVar12 = puVar12 + 1;
        uVar14 = *puVar12;
        puVar16 = puVar16 + 1;
        *puVar16 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
                   uVar14 >> 0x18;
      } while (local_a2c + 9 != puVar12);
      if (local_a2c[1] == 0) {
        puVar16 = local_a2c + 1;
        DAT_0008a828 = local_a2c[1];
        uVar14 = 0;
        do {
          puVar16 = puVar16 + -1;
          if (*puVar16 != 0) {
            uVar20 = (int)uVar14 >> 0x1f;
            goto LAB_00015018;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != 7);
        uVar14 = 7;
        uVar20 = 0;
LAB_00015018:
        uVar17 = DAT_0008a814 >> 5;
        uVar10 = DAT_0008a810 >> 5 | DAT_0008a814 << 0x1b;
        bVar22 = uVar20 <= uVar17;
        if (uVar17 == uVar20) {
          bVar22 = uVar14 <= uVar10;
        }
        if (!bVar22 || uVar17 == uVar20 && uVar10 == uVar14) {
          uVar21 = FUN_0002009c();
          iVar9 = FUN_00059238(param7,uVar21);
          param6 = FUN_00059230(param7);
          if ((DAT_0048d36e != '\0') &&
             (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
            snprintf((char *)&local_838,0x800,"%s: chain %d which_asic_nonce %d which_core_nonce %d"
                     ,"hashtest_submit",iVar15,iVar9,param6);
            FUN_00032218(7,&local_838,0);
          }
          uVar14 = DAT_0008a810 & 0x1f;
          iVar9 = iVar9 + iVar15 * 0x100;
          uVar17 = (&DAT_00b2b1e0)[iVar9 * 2];
          uVar20 = local_a2c[-(DAT_0008a810 >> 5 | DAT_0008a814 << 0x1b)];
          (&DAT_00b2b1e0)[iVar9 * 2] = uVar17 + 1;
          (&DAT_00b2b1e4)[iVar9 * 2] = (&DAT_00b2b1e4)[iVar9 * 2] + (uint)(0xfffffffe < uVar17);
          if ((uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
              uVar20 >> 0x18) < 0xffffffffU >> uVar14) {
            uVar14 = (&DAT_00b2d1e0)[iVar15 * 2];
            (&DAT_00b2d1e0)[iVar15 * 2] = uVar14 + 0x100;
            (&DAT_00b2d1e4)[iVar15 * 2] = (&DAT_00b2d1e4)[iVar15 * 2] + (uint)(0xfffffeff < uVar14);
            FUN_0002e6b4(pvVar7,iVar18,param7,uVar13 & 0xff);
            bVar22 = 0xfffffeff < local_a80;
            local_a80 = local_a80 + 0x100;
            local_a7c = local_a7c + (uint)bVar22;
          }
          else if ((local_a2c[0] << 0x18 | (local_a2c[0] >> 8 & 0xff) << 0x10 |
                    (local_a2c[0] >> 0x10 & 0xff) << 8 | local_a2c[0] >> 0x18) < 0xffffff) {
            uVar13 = (&DAT_00b2d1e0)[iVar15 * 2];
            bVar22 = 0xfffffeff < local_a80;
            local_a80 = local_a80 + 0x100;
            (&DAT_00b2d1e0)[iVar15 * 2] = uVar13 + 0x100;
            (&DAT_00b2d1e4)[iVar15 * 2] = (&DAT_00b2d1e4)[iVar15 * 2] + (uint)(0xfffffeff < uVar13);
            local_a7c = local_a7c + (uint)bVar22;
          }
        }
      }
      else {
        DAT_0008a828 = DAT_0008a828 + 1;
        if ((0x101 < DAT_0008a828) && (10.0 < (double)CONCAT44(extraout_s1,uVar21))) {
          FUN_0004ac60();
          DAT_0008a7fc = local_a88;
          DAT_0008a800 = local_a8c;
          if (3 < DAT_00087bbc) {
            snprintf((char *)&local_838,0x800,"nonce fifo flush by nonce, last_ts = %.2f.\n",
                     (double)CONCAT44(extraout_s1,uVar21));
            FUN_00032218(3,&local_838,0);
          }
        }
        iVar18 = FUN_000201d8(iVar15);
        if (iVar18 == 1) {
          if ((DAT_0048d36e != '\0') &&
             (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
            local_838.tv_sec._0_1_ = 'h';
            local_838.tv_sec._1_1_ = 'a';
            local_838.tv_sec._2_1_ = 's';
            local_838.tv_sec._3_1_ = 'h';
            local_838.tv_nsec._0_1_ = '2';
            local_838.tv_nsec._1_1_ = '_';
            local_838.tv_nsec._2_1_ = '3';
            local_838.tv_nsec._3_1_ = '2';
            local_830._0_1_ = ' ';
            local_830._1_1_ = 'e';
            local_830._2_1_ = 'r';
            local_830._3_1_ = 'r';
            local_82c._0_1_ = 'o';
            local_82c._1_1_ = 'r';
            FUN_00032218(7,&local_838,0);
          }
          FUN_0002dd8c(pvVar7);
          FUN_00020618(iVar15);
        }
        if ((DAT_0048d36e != '\0') &&
           (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
          snprintf((char *)&local_838,0x800,"%s: HASH2_32[7] != 0","hashtest_submit");
          FUN_00032218(7,&local_838,0);
        }
      }
      FUN_0002dba8(&local_a50,"bmminer.c","bitmain_c5_scanhash",0x88c);
      goto LAB_000146c4;
    }
LAB_0001496c:
    bVar22 = CARRY4(DAT_00b2d258,local_a80);
    DAT_00b2d258 = DAT_00b2d258 + local_a80;
    DAT_00b2d25c = DAT_00b2d25c + local_a7c + (uint)bVar22;
    iVar18 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar18 != 0) {
      piVar11 = __errno_location();
      snprintf((char *)&local_838,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
               *piVar11,"bmminer.c","bitmain_c5_scanhash",0x88f);
      FUN_00032218(3,&local_838,1);
    }
    (*DAT_00087ce8)();
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00507420);
    FUN_00034a5c(1);
    if (local_a80 != 0 || local_a7c != 0) {
      iVar18 = -local_a80;
      iVar15 = local_a80 + ((uint)(local_a80 != 0) * -2 - local_a7c) +
               (uint)CARRY4(local_a80 * 0x7fffffff,local_a80 * 0x7fffffff) +
               (uint)CARRY4(local_a80 * -2,local_a80);
      if ((DAT_0048d36e != '\0') &&
         (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
        snprintf((char *)&local_838,0x800,"%s: hashes %llu ...\n","bitmain_c5_scanhash",
                 CONCAT44(iVar15,iVar18));
        FUN_00032218(7,&local_838,0);
      }
      if (iVar18 != 0 || iVar15 != 0) {
        dVar23 = (double)FUN_000679d4(iVar18,iVar15);
        DAT_0008a7d8 = dVar23 / 1000000000.0 + DAT_0008a7d8;
      }
    }
  } while( true );
LAB_00014130:
  pclose(__stream);
  uVar14 = 1;
  uVar13 = 0;
  iVar18 = 0;
  pbVar19 = local_938;
  while( true ) {
    sVar5 = strlen((char *)local_938);
    if (sVar5 < uVar14) break;
    memset(local_a2c + 2,0,0x20);
    ppuVar6 = __ctype_b_loc();
    if (((*ppuVar6)[*pbVar19] & 0x2000) != 0) {
      strncpy((char *)(local_a2c + 2),(char *)(local_938 + uVar13),(uVar14 - uVar13) - 1);
      param3 = strtol((char *)(local_a2c + 2),(char **)0x0,10);
      uVar13 = uVar14;
      if (((0 < param3) && (iVar18 = iVar18 + 1, DAT_0048d36e != '\0')) &&
         ((DAT_0071e84c != '\0' || ((DAT_0048d36d != '\0' || (6 < DAT_00087bc4)))))) {
        snprintf((char *)&local_838,0x800,"Parsed proc id is: %d\n",param3);
        FUN_00032218(7,&local_838,0);
      }
    }
    uVar14 = uVar14 + 1;
    pbVar19 = pbVar19 + 1;
  }
  if (iVar18 != 0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf((char *)&local_838,0x800," %d instance of %s is  already Running on this machine",
               iVar18,param3_00);
      FUN_00032218(3,&local_838,0);
    }
    if (iVar18 != 1) {
      snprintf((char *)&local_838,0x800,"%s is forbidden to start twice, will exit immediately!",
               (char *)*param_2);
      FUN_00032218(3,&local_838,1);
    }
  }
  goto LAB_000142fc;
}

