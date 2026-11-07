// FUN_00012d28 @ 00012d28  size=14404  callers=0
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00012d28(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  FILE *pFVar5;
  char *pcVar6;
  size_t sVar7;
  ushort **ppuVar8;
  long lVar9;
  undefined4 uVar10;
  char *__src;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  size_t sVar14;
  __sighandler_t p_Var15;
  __sighandler_t p_Var16;
  undefined4 *puVar17;
  int extraout_r1;
  code *pcVar18;
  int *piVar19;
  code *pcVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  code *pcVar25;
  uint uVar26;
  int iVar27;
  undefined *puVar28;
  undefined4 *puVar29;
  char *pcVar30;
  undefined4 *puVar31;
  int iVar32;
  int iVar33;
  undefined *puVar34;
  code **ppcVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  undefined8 uVar40;
  char acStack_2a60 [4104];
  char local_1a58 [4088];
  int local_a34;
  code **local_a30;
  uint local_a24;
  int local_a14 [2];
  int local_a0c;
  char acStack_a08 [32];
  pthread_attr_t pStack_9e8;
  _union_1051 local_9c4;
  sigset_t sStack_9c0;
  int local_940;
  undefined4 local_938 [64];
  code *local_838;
  int local_834;
  int iStack_830;
  int iStack_82c;
  code *local_828;
  int local_824;
  uint local_820;
  uint local_81c;
  undefined4 local_818;
  uint local_814;
  uint local_810;
  undefined2 local_80c;
  undefined1 local_80a;
  undefined4 local_808;
  char acStack_804 [2000];
  
  local_a0c = 0;
  local_a14[0] = param_1;
  pthread_attr_init(&pStack_9e8);
  pthread_attr_setstacksize(&pStack_9e8,0x200000);
  DAT_000685c8 = 0;
  pcVar30 = (char *)*param_2;
  memset(local_938,0,0x100);
  memset(&local_9c4,0,0x40);
  snprintf((char *)&local_9c4,0x40,"pidof %s",pcVar30);
  pFVar5 = popen((char *)&local_9c4,"r");
  if (pFVar5 != (FILE *)0x0) {
LAB_00012df8:
    do {
      pcVar6 = fgets((char *)local_938,0x100,pFVar5);
      if (pcVar6 == (char *)0x0) goto LAB_00012f0c;
      if (DAT_000686f1 != '\0') {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
LAB_00012eb0:
          if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) goto LAB_00012df8;
        }
        else {
          snprintf((char *)&local_838,0x800,"pidof %s command result is: %s\n",pcVar30,
                   (char *)local_938);
          FUN_0001dd98(7,&local_838,0);
          if (DAT_000686f1 == '\0') goto LAB_00012df8;
          if (DAT_00072da0 == '\0') goto LAB_00012eb0;
        }
        sVar7 = strlen((char *)local_938);
        snprintf((char *)&local_838,0x800,"strlen is: %d\n",sVar7);
        FUN_0001dd98(7,&local_838,0);
      }
    } while( true );
  }
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf((char *)&local_838,0x800," app-service:%s Not Found!!!",pcVar30);
    FUN_0001dd98(7,&local_838,0);
  }
LAB_00013180:
  DAT_000685f8._0_1_ = 'l';
  DAT_000685f8._1_1_ = 'o';
  DAT_000685f8._2_1_ = 'g';
  DAT_000685f8._3_1_ = '\0';
  DAT_000685d2 = 0;
  DAT_000685f0._0_1_ = 'b';
  DAT_000685f0._1_1_ = 'm';
  DAT_000685f0._2_1_ = 'm';
  DAT_000685f0._3_1_ = 'i';
  DAT_000685f4._0_1_ = 'n';
  DAT_000685f4._1_1_ = 'e';
  DAT_000685f4._2_1_ = 'r';
  DAT_000685f4._3_1_ = '.';
  DAT_000685d0 = 0x2b61;
  lVar9 = sysconf(0x54);
  if (lVar9 == 1) {
    DAT_0006796c = sched_yield;
  }
  iVar32 = FUN_0001f860((local_a14[0] + 1) * 4,"cgminer.c",&DAT_0004f0c0,0x2f8e);
  DAT_00068b74 = iVar32;
  if (0 < local_a14[0]) {
    puVar29 = (undefined4 *)(iVar32 + -4);
    iVar27 = 0;
    puVar31 = param_2 + -1;
    do {
      puVar31 = puVar31 + 1;
      iVar27 = iVar27 + 1;
      uVar10 = __strdup(*puVar31);
      puVar29 = puVar29 + 1;
      *puVar29 = uVar10;
    } while (iVar27 < local_a14[0]);
  }
  *(undefined4 *)(iVar32 + local_a14[0] * 4) = 0;
  FUN_0002ca70(&DAT_00072ee8,&DAT_0004f0c0,0x2f97);
  FUN_0002ca70(&DAT_00076028,&DAT_0004f0c0,0x2f98);
  FUN_0002ca70(&DAT_00074ff4,&DAT_0004f0c0,0x2f99);
  FUN_0002cb1c(&DAT_00076158,&DAT_0004f0c0,0x2f9a);
  FUN_0002ca70(&DAT_00072da4,&DAT_0004f0c0,0x2f9b);
  FUN_0002ca70(&DAT_00068c8c,&DAT_0004f0c0,0x2f9c);
  FUN_0002cb1c(&DAT_00076120,&DAT_0004f0c0,0x2f9d);
  FUN_0002ca70(&DAT_00068c64,&DAT_0004f0c0,0x2f9e);
  FUN_0002caf4(&DAT_0006a1c0,&DAT_0004f0c0,0x2f9f);
  FUN_0002caf4(&DAT_00072eac,&DAT_0004f0c0,0x2fa0);
  FUN_0002caf4(&DAT_00074fa0,&DAT_0004f0c0,0x2fa1);
  FUN_0002caf4(&DAT_00074fd0,&DAT_0004f0c0,0x2fa2);
  FUN_0002ca70(&DAT_00068c18,&DAT_0004f0c0,0x2fa4);
  iVar32 = pthread_cond_init((pthread_cond_t *)&DAT_00068c30,(pthread_condattr_t *)0x0);
  if (iVar32 != 0) {
    local_838 = (code *)0x6c696146;
    local_834._0_1_ = 'e';
    local_834._1_1_ = 'd';
    local_834._2_1_ = ' ';
    local_834._3_1_ = 't';
    iStack_830._0_1_ = 'o';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 'p';
    iStack_830._3_1_ = 't';
    iStack_82c._0_1_ = 'h';
    iStack_82c._1_1_ = 'r';
    iStack_82c._2_1_ = 'e';
    iStack_82c._3_1_ = 'a';
    local_828 = (code *)0x6f635f64;
    local_824._0_1_ = 'n';
    local_824._1_1_ = 'd';
    local_824._2_1_ = '_';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 't';
    local_820._3_1_ = ' ';
    local_81c._0_1_ = 'l';
    local_81c._1_1_ = 'p';
    local_81c._2_1_ = '_';
    local_81c._3_1_ = 'c';
    local_818._0_1_ = 'o';
    local_818._1_1_ = 'n';
    local_818._2_1_ = 'd';
    local_818._3_1_ = '\0';
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  FUN_0002ca70(&DAT_00074f7c,&DAT_0004f0c0,0x2fab);
  iVar32 = pthread_cond_init((pthread_cond_t *)&DAT_000761a8,(pthread_condattr_t *)0x0);
  if (iVar32 != 0) {
    local_838 = (code *)0x6c696146;
    local_834._0_1_ = 'e';
    local_834._1_1_ = 'd';
    local_834._2_1_ = ' ';
    local_834._3_1_ = 't';
    iStack_830._0_1_ = 'o';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 'p';
    iStack_830._3_1_ = 't';
    iStack_82c._0_1_ = 'h';
    iStack_82c._1_1_ = 'r';
    iStack_82c._2_1_ = 'e';
    iStack_82c._3_1_ = 'a';
    local_828 = (code *)0x6f635f64;
    local_824._0_1_ = 'n';
    local_824._1_1_ = 'd';
    local_824._2_1_ = '_';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 't';
    local_820._3_1_ = ' ';
    local_81c._0_1_ = 'r';
    local_81c._1_1_ = 'e';
    local_81c._2_1_ = 's';
    local_81c._3_1_ = 't';
    local_818._0_1_ = 'a';
    local_818._1_1_ = 'r';
    local_818._2_1_ = 't';
    local_818._3_1_ = '_';
    local_814._0_1_ = 'c';
    local_814._1_1_ = 'o';
    local_814._2_1_ = 'n';
    local_814._3_1_ = 'd';
    local_810 = local_810 & 0xffffff00;
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  iVar32 = pthread_cond_init((pthread_cond_t *)&DAT_00072e78,(pthread_condattr_t *)0x0);
  if (iVar32 != 0) {
    iStack_830._0_1_ = 'o';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 'p';
    iStack_830._3_1_ = 't';
    iStack_82c._0_1_ = 'h';
    iStack_82c._1_1_ = 'r';
    iStack_82c._2_1_ = 'e';
    iStack_82c._3_1_ = 'a';
    local_828 = (code *)0x6f635f64;
    local_824._0_1_ = 'n';
    local_824._1_1_ = 'd';
    local_824._2_1_ = '_';
    local_824._3_1_ = 'i';
    local_820._0_1_ = 'n';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 't';
    local_820._3_1_ = ' ';
    local_81c._0_1_ = 'g';
    local_81c._1_1_ = 'w';
    local_81c._2_1_ = 's';
    local_81c._3_1_ = '_';
    local_818._0_1_ = 'c';
    local_818._1_1_ = 'o';
    local_818._2_1_ = 'n';
    local_818._3_1_ = 'd';
    local_814 = local_814 & 0xffffff00;
LAB_000144ac:
    local_834._0_1_ = 'e';
    local_834._1_1_ = 'd';
    local_834._2_1_ = ' ';
    local_834._3_1_ = 't';
    local_838 = (code *)0x6c696146;
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  DAT_00074f70 = FUN_00020034();
  if (DAT_00074f70 == 0) {
    iStack_830._0_1_ = 'o';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 'c';
    iStack_830._3_1_ = 'r';
    iStack_82c._0_1_ = 'e';
    iStack_82c._1_1_ = 'a';
    iStack_82c._2_1_ = 't';
    iStack_82c._3_1_ = 'e';
    local_828 = (code *)0x74656720;
    local_824 = CONCAT22(local_824._2_2_,0x71);
    DAT_00074f70 = 0;
    goto LAB_000144ac;
  }
  DAT_00068b30 = (pthread_mutex_t *)(DAT_00074f70 + 0xc);
  snprintf(&DAT_00068914,0x100,"%s %s","cgminer","1.0.0");
  local_9c4.sa_handler = (__sighandler_t)&DAT_0002c36c;
  local_940 = iVar32;
  sigemptyset(&sStack_9c0);
  sigaction(0xf,(sigaction *)&local_9c4,(sigaction *)&DAT_00072de0);
  sigaction(2,(sigaction *)&local_9c4,(sigaction *)&DAT_00076094);
  sigaction(6,(sigaction *)&local_9c4,(sigaction *)&DAT_00076248);
  DAT_00076240 = local_1a58;
  DAT_00076080 = acStack_2a60;
  builtin_strncpy(local_1a58,"/usr/bin",9);
  iVar32 = 0x24;
  pcVar6 = (char *)__strdup(*param_2);
  pcVar30 = DAT_00076080;
  __src = dirname(pcVar6);
  strcpy(pcVar30,__src);
  free(pcVar6);
  pcVar30 = DAT_00076080;
  sVar7 = strlen(DAT_00076080);
  (pcVar30 + sVar7)[0] = '/';
  (pcVar30 + sVar7)[1] = '\0';
  DAT_0006a46c = 9;
  pbVar11 = (byte *)FUN_0001f8e8(0x68,1,"cgminer.c",&DAT_0004f0c0,0x2fda);
  do {
    sVar7 = strlen((char *)pbVar11);
    iVar32 = iVar32 + -1;
    (pbVar11 + sVar7)[0] = '0';
    (pbVar11 + sVar7)[1] = '\0';
  } while (iVar32 != 0);
  uVar36 = sVar7 + 1;
  uVar38 = 0x9e3779b9;
  uVar26 = 0xfeedbeef;
  uVar22 = 0x9e3779b9;
  uVar37 = uVar36;
  pbVar2 = pbVar11;
  if (uVar36 < 0xc) {
    pbVar12 = pbVar11;
  }
  else {
    do {
      uVar37 = uVar37 - 0xc;
      iVar32 = (uint)pbVar2[6] * 0x10000 + (uint)pbVar2[5] * 0x100 + (uint)pbVar2[4] +
               (uint)pbVar2[7] * 0x1000000 + uVar38;
      uVar26 = (uint)pbVar2[10] * 0x10000 + (uint)pbVar2[9] * 0x100 + (uint)pbVar2[8] +
               (uint)pbVar2[0xb] * 0x1000000 + uVar26;
      uVar23 = ((((uint)pbVar2[2] * 0x10000 + (uint)pbVar2[1] * 0x100 + (uint)*pbVar2 +
                 (uint)pbVar2[3] * 0x1000000) - iVar32) - uVar26) + uVar22 ^ uVar26 >> 0xd;
      uVar22 = (iVar32 - uVar26) - uVar23 ^ uVar23 << 8;
      uVar38 = (uVar26 - uVar23) - uVar22 ^ uVar22 >> 0xd;
      uVar24 = (uVar23 - uVar22) - uVar38 ^ uVar38 >> 0xc;
      uVar26 = (uVar22 - uVar38) - uVar24 ^ uVar24 << 0x10;
      uVar23 = (uVar38 - uVar24) - uVar26 ^ uVar26 >> 5;
      uVar22 = (uVar24 - uVar26) - uVar23 ^ uVar23 >> 3;
      uVar38 = (uVar26 - uVar23) - uVar22 ^ uVar22 << 10;
      uVar26 = (uVar23 - uVar22) - uVar38 ^ uVar38 >> 0xf;
      pbVar12 = pbVar2 + 0xc;
      pbVar2 = pbVar2 + 0xc;
    } while (0xb < uVar37);
  }
  uVar36 = uVar36 + uVar26;
  switch(uVar37) {
  case 0xb:
    uVar36 = uVar36 + (uint)pbVar12[10] * 0x1000000;
  case 10:
    uVar36 = uVar36 + (uint)pbVar12[9] * 0x10000;
  case 9:
    uVar36 = uVar36 + (uint)pbVar12[8] * 0x100;
  case 8:
    uVar38 = uVar38 + (uint)pbVar12[7] * 0x1000000;
  case 7:
    uVar38 = uVar38 + (uint)pbVar12[6] * 0x10000;
  case 6:
    uVar38 = uVar38 + (uint)pbVar12[5] * 0x100;
  case 5:
    uVar38 = uVar38 + pbVar12[4];
  case 4:
    uVar22 = uVar22 + (uint)pbVar12[3] * 0x1000000;
  case 3:
    uVar22 = uVar22 + (uint)pbVar12[2] * 0x10000;
  case 2:
    uVar22 = uVar22 + (uint)pbVar12[1] * 0x100;
  case 1:
    uVar22 = uVar22 + *pbVar12;
  }
  *(byte **)(pbVar11 + 0x58) = pbVar11;
  uVar37 = (uVar22 - uVar38) - uVar36 ^ uVar36 >> 0xd;
  uVar38 = (uVar38 - uVar36) - uVar37 ^ uVar37 << 8;
  uVar26 = (uVar36 - uVar37) - uVar38 ^ uVar38 >> 0xd;
  uVar22 = (uVar37 - uVar38) - uVar26 ^ uVar26 >> 0xc;
  uVar37 = (uVar38 - uVar26) - uVar22 ^ uVar22 << 0x10;
  uVar26 = (uVar26 - uVar22) - uVar37 ^ uVar37 >> 5;
  uVar22 = (uVar22 - uVar37) - uVar26 ^ uVar26 >> 3;
  uVar37 = (uVar37 - uVar26) - uVar22 ^ uVar22 << 10;
  uVar37 = (uVar26 - uVar22) - uVar37 ^ uVar37 >> 0xf;
  *(uint *)(pbVar11 + 0x60) = uVar37;
  sVar7 = strlen((char *)pbVar11);
  *(size_t *)(pbVar11 + 0x5c) = sVar7;
  pbVar2 = DAT_0006a1e0;
  if (DAT_0006a1e0 == (byte *)0x0) {
    pbVar11[0x4c] = 0;
    pbVar11[0x4d] = 0;
    pbVar11[0x4e] = 0;
    pbVar11[0x4f] = 0;
    pbVar11[0x48] = 0;
    pbVar11[0x49] = 0;
    pbVar11[0x4a] = 0;
    pbVar11[0x4b] = 0;
    DAT_0006a1e0 = pbVar11;
    pvVar13 = malloc(0x2c);
    *(void **)(pbVar11 + 0x44) = pvVar13;
    if (pvVar13 == (void *)0x0) goto LAB_000144e4;
    memset(pvVar13,0,0x2c);
    *(byte **)(*(int *)(pbVar11 + 0x44) + 0x10) = pbVar11 + 0x44;
    *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 4) = 0x20;
    *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 8) = 5;
    *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 0x14) = 0x44;
    puVar29 = *(undefined4 **)(pbVar11 + 0x44);
    pvVar13 = malloc(0x180);
    *puVar29 = pvVar13;
    if ((void *)**(undefined4 **)(pbVar11 + 0x44) == (void *)0x0) goto LAB_000144e4;
    memset((void *)**(undefined4 **)(pbVar11 + 0x44),0,0x180);
    *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 0x28) = 0xa0111fe1;
  }
  else {
    uVar10 = *(undefined4 *)(DAT_0006a1e0 + 0x44);
    pbVar11[0x4c] = 0;
    pbVar11[0x4d] = 0;
    pbVar11[0x4e] = 0;
    pbVar11[0x4f] = 0;
    *(undefined4 *)(pbVar11 + 0x44) = uVar10;
    *(int *)(pbVar11 + 0x48) =
         *(int *)(*(int *)(pbVar2 + 0x44) + 0x10) - *(int *)(*(int *)(pbVar2 + 0x44) + 0x14);
    *(byte **)(*(int *)(*(int *)(pbVar2 + 0x44) + 0x10) + 8) = pbVar11;
    *(byte **)(*(int *)(pbVar2 + 0x44) + 0x10) = pbVar11 + 0x44;
  }
  pbVar2 = DAT_0006a1e0;
  *(int *)(*(int *)(DAT_0006a1e0 + 0x44) + 0xc) = *(int *)(*(int *)(DAT_0006a1e0 + 0x44) + 0xc) + 1;
  iVar27 = (uVar37 & (*(int **)(pbVar2 + 0x44))[1] - 1U) * 0xc;
  iVar32 = **(int **)(pbVar2 + 0x44) + iVar27;
  *(int *)(iVar32 + 4) = *(int *)(iVar32 + 4) + 1;
  uVar10 = *(undefined4 *)(**(int **)(pbVar2 + 0x44) + iVar27);
  pbVar11[0x50] = 0;
  pbVar11[0x51] = 0;
  pbVar11[0x52] = 0;
  pbVar11[0x53] = 0;
  *(undefined4 *)(pbVar11 + 0x54) = uVar10;
  piVar19 = *(int **)(pbVar2 + 0x44);
  if (*(int *)(*piVar19 + iVar27) != 0) {
    *(byte **)(*(int *)(*piVar19 + iVar27) + 0xc) = pbVar11 + 0x44;
    piVar19 = *(int **)(pbVar2 + 0x44);
  }
  *(byte **)(*piVar19 + iVar27) = pbVar11 + 0x44;
  if ((*(int *)(**(int **)(pbVar2 + 0x44) + iVar27 + 8) * 10 + 10U <=
       *(uint *)(**(int **)(pbVar2 + 0x44) + iVar27 + 4)) &&
     (*(int *)(*(int *)(pbVar11 + 0x44) + 0x24) != 1)) {
    pvVar13 = calloc(*(int *)(*(int *)(pbVar11 + 0x44) + 4) * 0x18,1);
    if (pvVar13 == (void *)0x0) {
LAB_000144e4:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    iVar32 = *(int *)(pbVar11 + 0x44);
    local_a24 = 0;
    *(uint *)(iVar32 + 0x18) =
         (uint)((*(int *)(iVar32 + 4) * 2 - 1U & *(uint *)(iVar32 + 0xc)) != 0) +
         (*(uint *)(iVar32 + 0xc) >> (*(int *)(iVar32 + 8) + 1U & 0xff));
    *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 0x1c) = 0;
    puVar29 = *(undefined4 **)(pbVar11 + 0x44);
    for (; local_a24 < (uint)puVar29[1]; local_a24 = local_a24 + 1) {
      iVar32 = *(int *)((int)*puVar29 + local_a24 * 0xc);
      while (iVar32 != 0) {
        iVar33 = *(int *)(iVar32 + 0x10);
        uVar26 = puVar29[1] * 2 - 1U & *(uint *)(iVar32 + 0x1c);
        uVar37 = *(int *)((int)pvVar13 + uVar26 * 0xc + 4) + 1;
        *(uint *)((int)pvVar13 + uVar26 * 0xc + 4) = uVar37;
        iVar27 = *(int *)(pbVar11 + 0x44);
        if (*(uint *)(iVar27 + 0x18) < uVar37) {
          *(int *)(iVar27 + 0x1c) = *(int *)(iVar27 + 0x1c) + 1;
          uVar10 = FUN_0004a488(*(undefined4 *)((int)pvVar13 + uVar26 * 0xc + 4),
                                *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 0x18));
          *(undefined4 *)((int)pvVar13 + uVar26 * 0xc + 8) = uVar10;
        }
        *(undefined4 *)(iVar32 + 0xc) = 0;
        *(undefined4 *)(iVar32 + 0x10) = *(undefined4 *)((int)pvVar13 + uVar26 * 0xc);
        iVar27 = *(int *)((int)pvVar13 + uVar26 * 0xc);
        if (iVar27 != 0) {
          *(int *)(iVar27 + 0xc) = iVar32;
        }
        *(int *)((int)pvVar13 + uVar26 * 0xc) = iVar32;
        puVar29 = *(undefined4 **)(pbVar11 + 0x44);
        iVar32 = iVar33;
      }
    }
    free((void *)*puVar29);
    *(int *)(*(int *)(pbVar11 + 0x44) + 4) = *(int *)(*(int *)(pbVar11 + 0x44) + 4) << 1;
    *(int *)(*(int *)(pbVar11 + 0x44) + 8) = *(int *)(*(int *)(pbVar11 + 0x44) + 8) + 1;
    **(undefined4 **)(pbVar11 + 0x44) = pvVar13;
    iVar32 = *(int *)(pbVar11 + 0x44);
    if (*(uint *)(iVar32 + 0xc) >> 1 < *(uint *)(iVar32 + 0x1c)) {
      iVar27 = *(int *)(iVar32 + 0x20) + 1;
    }
    else {
      iVar27 = 0;
    }
    *(int *)(iVar32 + 0x20) = iVar27;
    if (1 < *(uint *)(*(int *)(pbVar11 + 0x44) + 0x20)) {
      *(undefined4 *)(*(int *)(pbVar11 + 0x44) + 0x24) = 1;
    }
  }
  strcpy(&DAT_000761f4,(char *)pbVar11);
  DAT_00072f1c = &DAT_00072f1c;
  DAT_00072f20 = &DAT_00072f1c;
  FUN_0003eec8(&DAT_00067a78,"Options for both config file and command line");
  FUN_0003eec8(&DAT_00068214,"Options for command line only");
  FUN_0003ef9c(local_a14,param_2,&DAT_000283d0);
  if (local_a14[0] != 1) {
    local_838 = (code *)0x78656e55;
    local_834._0_1_ = 'p';
    local_834._1_1_ = 'e';
    local_834._2_1_ = 'c';
    local_834._3_1_ = 't';
    iStack_830._0_1_ = 'e';
    iStack_830._1_1_ = 'd';
    iStack_830._2_1_ = ' ';
    iStack_830._3_1_ = 'e';
    iStack_82c._0_1_ = 'x';
    iStack_82c._1_1_ = 't';
    iStack_82c._2_1_ = 'r';
    iStack_82c._3_1_ = 'a';
    local_828 = (code *)0x6d6f6320;
    local_824._0_1_ = 'm';
    local_824._1_1_ = 'a';
    local_824._2_1_ = 'n';
    local_824._3_1_ = 'd';
    local_820._0_1_ = 'l';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 'n';
    local_820._3_1_ = 'e';
    local_81c._0_1_ = ' ';
    local_81c._1_1_ = 'a';
    local_81c._2_1_ = 'r';
    local_81c._3_1_ = 'g';
    local_818._0_1_ = 'u';
    local_818._1_1_ = 'm';
    local_818._2_1_ = 'e';
    local_818._3_1_ = 'n';
    local_814 = CONCAT13(local_814._3_1_,0x7374);
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  if (DAT_00068a20 == '\0') {
    FUN_0002b4cc();
  }
  DAT_0006a470 = 8;
  DAT_00072dd0 = FUN_0001f8e8(8,0x40,"cgminer.c",&DAT_0004f0c0,0x2fff);
  DAT_00068b80 = 1;
  iVar32 = FUN_00022f8c(DAT_00072dd0 + 0x40,&pStack_9e8,FUN_00029c5c);
  if (iVar32 != 0) {
    local_838 = (code *)0x20495041;
    local_834._0_1_ = 't';
    local_834._1_1_ = 'h';
    local_834._2_1_ = 'r';
    local_834._3_1_ = 'e';
    iStack_830._0_1_ = 'a';
    iStack_830._1_1_ = 'd';
    iStack_830._2_1_ = ' ';
    iStack_830._3_1_ = 'c';
    iStack_82c._0_1_ = 'r';
    iStack_82c._1_1_ = 'e';
    iStack_82c._2_1_ = 'a';
    iStack_82c._3_1_ = 't';
    local_828 = (code *)0x61662065;
    local_824._0_1_ = 'i';
    local_824._1_1_ = 'l';
    local_824._2_1_ = 'e';
    local_824._3_1_ = 'd';
    local_820 = local_820 & 0xffffff00;
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  if ((DAT_00068c60 != '\0') || (DAT_00072dc0 != 0)) {
    iVar32 = FUN_0003009c();
    puVar29 = (undefined4 *)FUN_0001f860(0xff,"cgminer.c",&DAT_0004f0c0,0x3010);
    *(undefined4 **)(iVar32 + 0xa4) = puVar29;
    if (DAT_00072dc0 == 0) {
      pcVar30 = "Benchmark";
    }
    else {
      pcVar30 = "Benchfile";
    }
    uVar10 = *(undefined4 *)(pcVar30 + 4);
    uVar1 = *(undefined2 *)(pcVar30 + 8);
    *puVar29 = *(undefined4 *)pcVar30;
    puVar29[1] = uVar10;
    *(undefined2 *)(puVar29 + 2) = uVar1;
    uVar10 = *(undefined4 *)(iVar32 + 0xa4);
    *(undefined4 *)(iVar32 + 0xac) = uVar10;
    *(undefined4 *)(iVar32 + 0xb0) = uVar10;
    *(undefined4 *)(iVar32 + 0xa8) = uVar10;
    *(undefined4 *)(iVar32 + 0x268) = uVar10;
    strncpy((char *)(iVar32 + 0x30),"?",7);
    *(undefined1 *)(iVar32 + 0x37) = 0;
    if (*(int *)(iVar32 + 100) != 1) {
      FUN_00028ff0(iVar32 + 100);
    }
    iVar27 = 0;
    *(undefined1 *)(iVar32 + 0x61) = 0;
    puVar28 = &DAT_000696b0;
    DAT_000686f2 = 1;
    puVar34 = &DAT_00068cb0;
    do {
      FUN_0001fb7c(puVar34,"000000029c6bf469abe4ad37605c097a860cff3cf5c1ef4377618f74000000000000000082b1514e7b6565941e5824f084292164ec5f97e7ea20c494bd96e524d478977b536dd2261900896c8b10020000000080000000000000000000000000000000000000000000000000000000000000000000000000000000008002000064e4e3becc01064d808269b330f40f4de82dc92e894d635025daa3e2e2c410b4"
                           + iVar27);
      pcVar30 = "00000002c01f502cb3e9fdb053230ec12a4954c1021a6b35862b5e29000000000000000084d1b83ae44057025e8c5b5756b44f04df5fffe4a7a30e5c12d12a97a7a4c2ea536dce431900896cb6d60e00000000800000000000000000000000000000000000000000000000000000000000000000000000000000000080020000d08f7e14c50dad77dc238b4db2901a0578e657b1954779ab9cd82a73829edf7f"
                + iVar27;
      iVar27 = iVar27 + 0x144;
      FUN_0001fb7c(puVar28,pcVar30,0xa0);
      puVar28 = puVar28 + 0xa0;
      puVar34 = puVar34 + 0xa0;
    } while (iVar27 != 0x1440);
    FUN_0002b530(0,&DAT_0006a474);
  }
  if (DAT_00068908 != 0) {
    FUN_0003daf0();
  }
  if (DAT_000688f8 == (char *)0x0) {
LAB_000140c4:
    if (DAT_00068900 != (char *)0x0) {
LAB_000140d4:
      pcVar30 = DAT_00068900;
      memset(local_938,0,0x100);
      if (DAT_000688fc == (char *)0x0) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          snprintf((char *)&local_838,0x800,"Log work path: %s",pcVar30);
          FUN_0001dd98(3,&local_838,0);
        }
      }
      else {
        if (*DAT_000688fc == '\0') {
          pcVar30 = "Log work asic num empty";
          ppcVar35 = &local_838;
LAB_00014714:
          pcVar18 = *(code **)(pcVar30 + 4);
          pcVar20 = *(code **)(pcVar30 + 8);
          pcVar25 = *(code **)(pcVar30 + 0xc);
          *ppcVar35 = *(code **)pcVar30;
          ppcVar35[1] = pcVar18;
          ppcVar35[2] = pcVar20;
          ppcVar35[3] = pcVar25;
          pcVar18 = *(code **)(pcVar30 + 0x14);
          ppcVar35[4] = *(code **)(pcVar30 + 0x10);
          ppcVar35[5] = pcVar18;
          goto LAB_00014730;
        }
        DAT_0006a494 = strtol(DAT_000688fc,(char **)0x0,10);
        if (DAT_0006a494 != 1 && (DAT_0006a494 - 0x20U & 0xffffffdf) != 0) {
          local_838 = (code *)0x20676f4c;
          local_834._0_1_ = 'w';
          local_834._1_1_ = 'o';
          local_834._2_1_ = 'r';
          local_834._3_1_ = 'k';
          iStack_830._0_1_ = ' ';
          iStack_830._1_1_ = 'a';
          iStack_830._2_1_ = 's';
          iStack_830._3_1_ = 'i';
          iStack_82c._0_1_ = 'c';
          iStack_82c._1_1_ = ' ';
          iStack_82c._2_1_ = 'n';
          iStack_82c._3_1_ = 'u';
          local_828 = (code *)0x756d206d;
          local_824._0_1_ = 's';
          local_824._1_1_ = 't';
          local_824._2_1_ = ' ';
          local_824._3_1_ = 'b';
          local_820._0_1_ = 'e';
          local_820._1_1_ = ' ';
          local_820._2_1_ = '1';
          local_820._3_1_ = ',';
          local_81c._0_1_ = ' ';
          local_81c._1_1_ = '3';
          local_81c._2_1_ = '2';
          local_81c._3_1_ = ',';
          local_818._0_1_ = ' ';
          local_818._1_1_ = '6';
          local_818._2_1_ = '4';
          local_818._3_1_ = '\0';
          FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
          FUN_0002c290(1);
        }
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          snprintf((char *)&local_838,0x800,"Log work path: %s Asic num: %s",DAT_00068900,
                   DAT_000688fc);
          FUN_0001dd98(3,&local_838,0);
        }
      }
      sprintf((char *)local_938,"%s.txt",DAT_00068900);
      DAT_0006a498 = fopen64((char *)local_938,"a+");
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        snprintf((char *)&local_838,0x800,"Log work open file %s",(char *)local_938);
        FUN_0001dd98(3,&local_838,0);
      }
      if (DAT_0006a494 == 1) {
        sprintf((char *)local_938,"%s%02d.txt",DAT_00068900,1);
        DAT_0006a49c = fopen64((char *)local_938,"a+");
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          snprintf((char *)&local_838,0x800,"Log work open asic %d file %s",DAT_0006a494,
                   (char *)local_938);
          FUN_0001dd98(3,&local_838,0);
        }
      }
      else if ((DAT_0006a494 - 0x20U & 0xffffffdf) == 0) {
        for (iVar32 = 0; iVar32 <= DAT_0006a494; iVar32 = iVar32 + 1) {
          sprintf((char *)local_938,"%s%02d_%02d.txt",DAT_00068900,DAT_0006a494,iVar32);
          pFVar5 = fopen64((char *)local_938,"a+");
          cVar4 = DAT_00072da0;
          (&DAT_0006a49c)[iVar32] = pFVar5;
          if (((cVar4 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf((char *)&local_838,0x800,"Log work open asic %d file %s",DAT_0006a494,
                     (char *)local_938);
            FUN_0001dd98(3,&local_838,0);
          }
        }
      }
      if (DAT_0006a5a0 != '\0') {
        pcVar30 = &DAT_0006a5a0;
        iVar32 = 0;
        do {
          sprintf((char *)local_938,"%s_diff_%02d.txt",DAT_00068900,iVar32);
          pFVar5 = fopen64((char *)local_938,"a+");
          cVar4 = DAT_00072da0;
          pcVar30 = pcVar30 + 4;
          *(FILE **)pcVar30 = pFVar5;
          if (((cVar4 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf((char *)&local_838,0x800,"Log work open diff file %s",local_938);
            FUN_0001dd98(3,&local_838,0);
          }
          iVar32 = iVar32 + 1;
        } while (iVar32 != 0x41);
      }
    }
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00013cc0;
LAB_00014418:
    snprintf((char *)&local_838,0x800,"Started %s",&DAT_00068914);
    FUN_0001dd98(4,&local_838,0);
    if (DAT_00068a18 != (char *)0x0) {
      if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00013cdc;
LAB_00013cf0:
      snprintf((char *)&local_838,0x800,"Loaded configuration file %s",DAT_00068a18);
      FUN_0001dd98(5,&local_838,0);
      if (DAT_00068aec == -1) {
        if (DAT_00072da0 == '\0') {
LAB_000147b4:
          if ((DAT_000686f0 != '\0') || (3 < DAT_00067848)) goto LAB_00014848;
          if (DAT_0007608a == '\0') goto LAB_00013da8;
LAB_000147ec:
          if (3 < DAT_00067848) {
LAB_00014800:
            local_838 = (code *)0x72617453;
            local_834._0_1_ = 't';
            local_834._1_1_ = ' ';
            local_834._2_1_ = 'c';
            local_834._3_1_ = 'g';
            iStack_830._0_1_ = 'm';
            iStack_830._1_1_ = 'i';
            iStack_830._2_1_ = 'n';
            iStack_830._3_1_ = 'e';
            iStack_82c._0_1_ = 'r';
            iStack_82c._1_1_ = ' ';
            iStack_82c._2_1_ = 'w';
            iStack_82c._3_1_ = 'i';
            local_828 = (code *)0x2d206874;
            local_824._0_1_ = 'T';
            local_824._1_1_ = ' ';
            local_824._2_1_ = 't';
            local_824._3_1_ = 'o';
            local_820._0_1_ = ' ';
            local_820._1_1_ = 's';
            local_820._2_1_ = 'e';
            local_820._3_1_ = 'e';
            local_81c._0_1_ = ' ';
            local_81c._1_1_ = 'w';
            local_81c._2_1_ = 'h';
            local_81c._3_1_ = 'a';
            local_818._0_1_ = 't';
            local_818._1_1_ = ' ';
            local_818._2_1_ = 'f';
            local_818._3_1_ = 'a';
            local_814._0_1_ = 'i';
            local_814._1_1_ = 'l';
            local_814._2_1_ = 'e';
            local_814._3_1_ = 'd';
            local_810._0_1_ = ' ';
            local_810._1_1_ = 't';
            local_810._2_1_ = 'o';
            local_810._3_1_ = ' ';
            local_80c = 0x6f6c;
            local_80a = 0x61;
            local_808._0_1_ = '.';
            local_808._1_1_ = '\0';
            FUN_0001dd98(4,&local_838,0);
          }
        }
        else {
LAB_00014848:
          local_838 = (code *)0x6f727245;
          local_834._0_1_ = 'r';
          local_834._1_1_ = ' ';
          local_834._2_1_ = 'i';
          local_834._3_1_ = 'n';
          iStack_830._0_1_ = ' ';
          iStack_830._1_1_ = 'c';
          iStack_830._2_1_ = 'o';
          iStack_830._3_1_ = 'n';
          iStack_82c._0_1_ = 'f';
          iStack_82c._1_1_ = 'i';
          iStack_82c._2_1_ = 'g';
          iStack_82c._3_1_ = 'u';
          local_828 = (code *)0x69746172;
          local_824._0_1_ = 'o';
          local_824._1_1_ = 'n';
          local_824._2_1_ = ' ';
          local_824._3_1_ = 'f';
          local_820._0_1_ = 'i';
          local_820._1_1_ = 'l';
          local_820._2_1_ = 'e';
          local_820._3_1_ = ',';
          local_81c._0_1_ = ' ';
          local_81c._1_1_ = 'p';
          local_81c._2_1_ = 'a';
          local_81c._3_1_ = 'r';
          local_818._0_1_ = 't';
          local_818._1_1_ = 'i';
          local_818._2_1_ = 'a';
          local_818._3_1_ = 'l';
          local_814._0_1_ = 'l';
          local_814._1_1_ = 'y';
          local_814._2_1_ = ' ';
          local_814._3_1_ = 'l';
          local_810._0_1_ = 'o';
          local_810._1_1_ = 'a';
          local_810._2_1_ = 'd';
          local_810._3_1_ = 'e';
          local_80c = 0x2e64;
          local_80a = 0;
          FUN_0001dd98(4,&local_838,0);
          if (DAT_0007608a != '\0') {
            if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_000147ec;
            goto LAB_00014800;
          }
        }
      }
      else {
LAB_00013d24:
        if (DAT_00068aec == 0) {
          if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
LAB_00013d5c:
            if (DAT_00067848 < 4) goto LAB_00013da8;
          }
          else {
            local_838 = (code *)0x61746146;
            local_834._0_1_ = 'l';
            local_834._1_1_ = ' ';
            local_834._2_1_ = 'J';
            local_834._3_1_ = 'S';
            iStack_830._0_1_ = 'O';
            iStack_830._1_1_ = 'N';
            iStack_830._2_1_ = ' ';
            iStack_830._3_1_ = 'e';
            iStack_82c._0_1_ = 'r';
            iStack_82c._1_1_ = 'r';
            iStack_82c._2_1_ = 'o';
            iStack_82c._3_1_ = 'r';
            local_828 = (code *)0x206e6920;
            local_824._0_1_ = 'c';
            local_824._1_1_ = 'o';
            local_824._2_1_ = 'n';
            local_824._3_1_ = 'f';
            local_820._0_1_ = 'i';
            local_820._1_1_ = 'g';
            local_820._2_1_ = 'u';
            local_820._3_1_ = 'r';
            local_81c._0_1_ = 'a';
            local_81c._1_1_ = 't';
            local_81c._2_1_ = 'i';
            local_81c._3_1_ = 'o';
            local_818._0_1_ = 'n';
            local_818._1_1_ = ' ';
            local_818._2_1_ = 'f';
            local_818._3_1_ = 'i';
            local_814._0_1_ = 'l';
            local_814._1_1_ = 'e';
            local_814._2_1_ = '.';
            local_814._3_1_ = '\0';
            FUN_0001dd98(4,&local_838,0);
            if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00013d5c;
          }
          local_838 = (code *)0x666e6f43;
          local_834._0_1_ = 'i';
          local_834._1_1_ = 'g';
          local_834._2_1_ = 'u';
          local_834._3_1_ = 'r';
          iStack_830._0_1_ = 'a';
          iStack_830._1_1_ = 't';
          iStack_830._2_1_ = 'i';
          iStack_830._3_1_ = 'o';
          iStack_82c._0_1_ = 'n';
          iStack_82c._1_1_ = ' ';
          iStack_82c._2_1_ = 'f';
          iStack_82c._3_1_ = 'i';
          local_828 = (code *)0x6320656c;
          local_824._0_1_ = 'o';
          local_824._1_1_ = 'u';
          local_824._2_1_ = 'l';
          local_824._3_1_ = 'd';
          local_820._0_1_ = ' ';
          local_820._1_1_ = 'n';
          local_820._2_1_ = 'o';
          local_820._3_1_ = 't';
          local_81c._0_1_ = ' ';
          local_81c._1_1_ = 'b';
          local_81c._2_1_ = 'e';
          local_81c._3_1_ = ' ';
          local_818._0_1_ = 'u';
          local_818._1_1_ = 's';
          local_818._2_1_ = 'e';
          local_818._3_1_ = 'd';
          local_814 = CONCAT22(local_814._2_2_,0x2e);
          FUN_0001dd98(4,&local_838,0);
        }
      }
LAB_00013da8:
      free(DAT_00068a18);
      DAT_00068a18 = (char *)0x0;
    }
  }
  else {
    DAT_000685c8 = 1;
    strcpy((char *)&DAT_000685f0,DAT_000688f8);
    if (DAT_00068904 != (char *)0x0) {
      strcpy((char *)&DAT_000685d0,DAT_00068904);
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf((char *)&local_838,0x800,"Log file path: %s Open flag: %s",(char *)&DAT_000685f0,
               (char *)&DAT_000685d0);
      FUN_0001dd98(3,&local_838,0);
      goto LAB_000140c4;
    }
    if (DAT_00068900 != (char *)0x0) goto LAB_000140d4;
LAB_00013cc0:
    if (3 < DAT_00067848) goto LAB_00014418;
    if (DAT_00068a18 != (char *)0x0) {
LAB_00013cdc:
      if (4 < DAT_00067848) goto LAB_00013cf0;
      if (DAT_00068aec == -1) goto LAB_000147b4;
      goto LAB_00013d24;
    }
  }
  pcVar30 = DAT_00076240;
  sVar7 = strlen(DAT_00076240);
  (pcVar30 + sVar7)[0] = '/';
  (pcVar30 + sVar7)[1] = '\0';
  if (DAT_00076024 == '\0') {
    if (DAT_000686f0 != '\0') goto LAB_00013df8;
    setlogmask(0x3f);
  }
  else {
    DAT_000686f0 = '\x01';
LAB_00013df8:
    setlogmask(0xff);
  }
  if (DAT_00068204 < 0) {
    DAT_00068204 = 0x3c;
  }
  FUN_0003c44c(&DAT_00072ca8);
  FUN_0003c44c(&DAT_00072c30);
  FUN_0003c44c(&DAT_00072d20);
  FUN_0003c44c(&DAT_00068500);
  (**(code **)(extraout_r1 + 0xc))(0);
  (*DAT_00072c3c)(0);
  (*DAT_00072d2c)(0);
  (*DAT_0006850c)(0);
  piVar19 = &DAT_00074ff0;
  DAT_00076238 = 0;
  for (iVar32 = 0; iVar32 < DAT_00074ff0; iVar32 = iVar32 + 1) {
    FUN_0003c694(*(undefined4 *)(DAT_00074f78 + iVar32 * 4));
  }
  if (DAT_00074ff0 == 0) {
    local_838 = (code *)0x206c6c41;
    local_834._0_1_ = 'd';
    local_834._1_1_ = 'e';
    local_834._2_1_ = 'v';
    local_834._3_1_ = 'i';
    iStack_830._0_1_ = 'c';
    iStack_830._1_1_ = 'e';
    iStack_830._2_1_ = 's';
    iStack_830._3_1_ = ' ';
    iStack_82c._0_1_ = 'd';
    iStack_82c._1_1_ = 'i';
    iStack_82c._2_1_ = 's';
    iStack_82c._3_1_ = 'a';
    local_828 = (code *)0x64656c62;
    local_824._0_1_ = ',';
    local_824._1_1_ = ' ';
    local_824._2_1_ = 'c';
    local_824._3_1_ = 'a';
    local_820._0_1_ = 'n';
    local_820._1_1_ = 'n';
    local_820._2_1_ = 'o';
    local_820._3_1_ = 't';
    local_81c._0_1_ = ' ';
    local_81c._1_1_ = 'm';
    local_81c._2_1_ = 'i';
    local_81c._3_1_ = 'n';
    local_818 = CONCAT13(local_818._3_1_,0x2174);
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  DAT_0006a248 = DAT_00074ff0;
  if (DAT_00068af8 == (char *)0x0) {
    iVar33 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
    iVar27 = DAT_00074ff0;
    iVar32 = DAT_00074f78;
    if (iVar33 != 0) {
      FUN_0002dd20("load_temp_cutoffs",0x573);
LAB_000153fc:
      piVar19 = __errno_location();
      snprintf((char *)&local_838,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
               *piVar19,"cgminer.c","load_temp_cutoffs",0x56e);
LAB_00014730:
      FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(1);
    }
    iVar33 = 0;
    while (iVar33 < iVar27) {
      iVar39 = *(int *)(iVar32 + iVar33 * 4);
      iVar33 = iVar33 + 1;
      if (*(int *)(iVar39 + 0xb8) == 0) {
        *(undefined4 *)(iVar39 + 0xb8) = 0x5f;
      }
    }
    FUN_0002d768(&DAT_00074fd0,"load_temp_cutoffs",0x57c);
  }
  else {
    iVar32 = 0;
    uVar37 = 0;
    ppcVar35 = &DAT_0006796c;
    pcVar30 = strtok(DAT_00068af8,",");
    while (pcVar30 != (char *)0x0) {
      if (DAT_00074ff0 <= iVar32) {
        local_838 = (code *)0x206f6f54;
        local_834._0_1_ = 'm';
        local_834._1_1_ = 'a';
        local_834._2_1_ = 'n';
        local_834._3_1_ = 'y';
        iStack_830._0_1_ = ' ';
        iStack_830._1_1_ = 'v';
        iStack_830._2_1_ = 'a';
        iStack_830._3_1_ = 'l';
        iStack_82c._0_1_ = 'u';
        iStack_82c._1_1_ = 'e';
        iStack_82c._2_1_ = 's';
        iStack_82c._3_1_ = ' ';
        local_828 = (code *)0x73736170;
        local_824._0_1_ = 'e';
        local_824._1_1_ = 'd';
        local_824._2_1_ = ' ';
        local_824._3_1_ = 't';
        local_820._0_1_ = 'o';
        local_820._1_1_ = ' ';
        local_820._2_1_ = 's';
        local_820._3_1_ = 'e';
        local_81c._0_1_ = 't';
        local_81c._1_1_ = ' ';
        local_81c._2_1_ = 't';
        local_81c._3_1_ = 'e';
        local_818._0_1_ = 'm';
        local_818._1_1_ = 'p';
        local_818._2_1_ = ' ';
        local_818._3_1_ = 'c';
        local_814._0_1_ = 'u';
        local_814._1_1_ = 't';
        local_814._2_1_ = 'o';
        local_814._3_1_ = 'f';
        local_810 = CONCAT22(local_810._2_2_,0x66);
        FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
        FUN_0002c290(1);
      }
      uVar37 = strtol(pcVar30,(char **)0x0,10);
      if (200 < uVar37) {
        pcVar30 = "ssed to set temp cutoff";
        local_838 = (code *)0x61766e49;
        local_834._0_1_ = 'l';
        local_834._1_1_ = 'i';
        local_834._2_1_ = 'd';
        local_834._3_1_ = ' ';
        iStack_830._0_1_ = 'v';
        iStack_830._1_1_ = 'a';
        iStack_830._2_1_ = 'l';
        iStack_830._3_1_ = 'u';
        iStack_82c._0_1_ = 'e';
        iStack_82c._1_1_ = ' ';
        iStack_82c._2_1_ = 'p';
        iStack_82c._3_1_ = 'a';
        ppcVar35 = &local_828;
        goto LAB_00014714;
      }
      iVar27 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
      if (iVar27 != 0) {
        uVar10 = FUN_0002dd20("load_temp_cutoffs",0x56c);
        goto LAB_0001539c;
      }
      *(uint *)(*(int *)(DAT_00074f78 + iVar32 * 4) + 0xb8) = uVar37;
      iVar27 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
      if (iVar27 != 0) goto LAB_000153fc;
      iVar32 = iVar32 + 1;
      (*DAT_0006796c)();
      pcVar30 = strtok((char *)0x0,",");
    }
    if (iVar32 < 2) {
      iVar39 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
      iVar33 = DAT_00074ff0;
      iVar27 = DAT_00074f78;
      if (iVar39 != 0) {
        FUN_0002dd20("load_temp_cutoffs",0x583);
        goto LAB_000154cc;
      }
      for (; iVar32 < iVar33; iVar32 = iVar32 + 1) {
        *(uint *)(*(int *)(iVar27 + iVar32 * 4) + 0xb8) = uVar37;
      }
      FUN_0002d768(&DAT_00074fd0,"load_temp_cutoffs",0x589);
    }
  }
  iVar27 = DAT_00074ff0;
  iVar32 = DAT_00074f78;
  for (iVar33 = 0; iVar33 < iVar27; iVar33 = iVar33 + 1) {
    *(undefined4 *)(*(int *)(iVar32 + iVar33 * 4) + 0x138) = 99999999;
  }
  ppcVar35 = &local_838;
  if (DAT_00076088 == '\0') {
    DAT_0006a46c = DAT_0006a46c + DAT_0006a248;
  }
  while( true ) {
    iVar27 = 0;
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      if (**(char **)(DAT_00072f14[iVar32] + 0xa4) != '\0') {
        if (**(char **)(DAT_00072f14[iVar32] + 0xac) == '\0') {
          if ((DAT_000686f1 != '\0') &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            local_838 = (code *)0x6e616c42;
            local_834._0_1_ = 'k';
            local_834._1_1_ = ' ';
            local_834._2_1_ = 'w';
            local_834._3_1_ = 'o';
            iStack_830._0_1_ = 'r';
            iStack_830._1_1_ = 'k';
            iStack_830._2_1_ = 'e';
            iStack_830._3_1_ = 'r';
            iStack_82c._0_1_ = ' ';
            iStack_82c._1_1_ = 'e';
            iStack_82c._2_1_ = 'x';
            iStack_82c._3_1_ = 'i';
            local_828 = (code *)0x2e737473;
            local_824 = CONCAT22(local_824._2_2_,10);
            FUN_0001dd98(7,ppcVar35,0);
          }
        }
        else {
          iVar27 = iVar27 + 1;
        }
      }
    }
    if (iVar27 != 0) break;
    if (DAT_0006a6a8 == 0) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
        local_838 = (code *)0x76206f4e;
        local_834._0_1_ = 'a';
        local_834._1_1_ = 'l';
        local_834._2_1_ = 'i';
        local_834._3_1_ = 'd';
        iStack_830._0_1_ = ' ';
        iStack_830._1_1_ = 'p';
        iStack_830._2_1_ = 'o';
        iStack_830._3_1_ = 'o';
        iStack_82c._0_1_ = 'l';
        iStack_82c._1_1_ = 's';
        iStack_82c._2_1_ = ',';
        iStack_82c._3_1_ = ' ';
        local_828 = (code *)0x61656c70;
        local_824._0_1_ = 's';
        local_824._1_1_ = 'e';
        local_824._2_1_ = ' ';
        local_824._3_1_ = 'c';
        local_820._0_1_ = 'o';
        local_820._1_1_ = 'n';
        local_820._2_1_ = 'f';
        local_820._3_1_ = 'i';
        local_81c._0_1_ = 'g';
        local_81c._1_1_ = 'u';
        local_81c._2_1_ = 'r';
        local_81c._3_1_ = 'e';
        local_818._0_1_ = ' ';
        local_818._1_1_ = 't';
        local_818._2_1_ = 'h';
        local_818._3_1_ = 'e';
        local_814._0_1_ = 'm';
        local_814._1_1_ = ' ';
        local_814._2_1_ = 'f';
        local_814._3_1_ = 'i';
        local_810._0_1_ = 'r';
        local_810._1_1_ = 's';
        local_810._2_1_ = 't';
        local_810._3_1_ = '!';
        local_80c = 10;
        FUN_0001dd98(5,ppcVar35,0);
      }
      DAT_0006a6a8 = 1;
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      local_838 = (code *)0x63656863;
      local_834._0_1_ = 'k';
      local_834._1_1_ = ' ';
      local_834._2_1_ = 'n';
      local_834._3_1_ = 'o';
      iStack_830._0_1_ = ' ';
      iStack_830._1_1_ = 'p';
      iStack_830._2_1_ = 'o';
      iStack_830._3_1_ = 'o';
      iStack_82c._0_1_ = 'l';
      iStack_82c._1_1_ = ' ';
      iStack_82c._2_1_ = 'a';
      iStack_82c._3_1_ = 'n';
      local_828 = (code *)0x73752064;
      local_824._0_1_ = 'e';
      local_824._1_1_ = 'r';
      local_824._2_1_ = ' ';
      local_824._3_1_ = 'r';
      local_820._0_1_ = 'e';
      local_820._1_1_ = 't';
      local_820._2_1_ = 'r';
      local_820._3_1_ = 'y';
      local_81c = CONCAT22(local_81c._2_2_,0x21);
      FUN_0001dd98(7,ppcVar35,0);
    }
    sleep(1);
  }
  if (DAT_00072e70 == (undefined4 *)0x0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
      local_838 = (code *)0x6465654e;
      local_834._0_1_ = ' ';
      local_834._1_1_ = 't';
      local_834._2_1_ = 'o';
      local_834._3_1_ = ' ';
      iStack_830._0_1_ = 's';
      iStack_830._1_1_ = 'p';
      iStack_830._2_1_ = 'e';
      iStack_830._3_1_ = 'c';
      iStack_82c._0_1_ = 'i';
      iStack_82c._1_1_ = 'f';
      iStack_82c._2_1_ = 'y';
      iStack_82c._3_1_ = ' ';
      local_828 = (code *)0x6c207461;
      local_824._0_1_ = 'e';
      local_824._1_1_ = 'a';
      local_824._2_1_ = 's';
      local_824._3_1_ = 't';
      local_820._0_1_ = ' ';
      local_820._1_1_ = 'o';
      local_820._2_1_ = 'n';
      local_820._3_1_ = 'e';
      local_81c._0_1_ = ' ';
      local_81c._1_1_ = 'p';
      local_81c._2_1_ = 'o';
      local_81c._3_1_ = 'o';
      local_818._0_1_ = 'l';
      local_818._1_1_ = ' ';
      local_818._2_1_ = 's';
      local_818._3_1_ = 'e';
      local_814._0_1_ = 'r';
      local_814._1_1_ = 'v';
      local_814._2_1_ = 'e';
      local_814._3_1_ = 'r';
      local_810 = CONCAT22(local_810._2_2_,0x2e);
      FUN_0001dd98(4,ppcVar35,0);
    }
    local_838 = (code *)0x6c6f6f50;
    local_834._0_1_ = ' ';
    local_834._1_1_ = 's';
    local_834._2_1_ = 'e';
    local_834._3_1_ = 't';
    iStack_830._0_1_ = 'u';
    iStack_830._1_1_ = 'p';
    iStack_830._2_1_ = ' ';
    iStack_830._3_1_ = 'f';
    iStack_82c._0_1_ = 'a';
    iStack_82c._1_1_ = 'i';
    iStack_82c._2_1_ = 'l';
    iStack_82c._3_1_ = 'e';
    local_828 = (code *)CONCAT22(local_828._2_2_,100);
    FUN_0001dd98(3,ppcVar35,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  for (piVar19 = (int *)0x0; (int)piVar19 < (int)DAT_00072e70; piVar19 = (int *)((int)piVar19 + 1))
  {
    iVar32 = DAT_00072f14[(int)piVar19];
    *(undefined4 *)(iVar32 + 0x194) = 99999999;
    *(undefined4 *)(iVar32 + 0x1b8) = 99999999;
    if (*(int *)(iVar32 + 0xa8) == 0) {
      if (*(int *)(iVar32 + 0xb0) == 0) {
        pvVar13 = calloc(1,1);
        *(void **)(iVar32 + 0xb0) = pvVar13;
      }
      uVar10 = 0;
      if (*(char **)(iVar32 + 0xac) == (char *)0x0) {
LAB_0001539c:
        snprintf((char *)ppcVar35,0x800,"No login credentials supplied for pool %u %s",(uint)piVar19
                 ,*(char **)(iVar32 + 0xa4));
        FUN_0001dd98(3,ppcVar35,1);
                    /* WARNING: Subroutine does not return */
        FUN_0002c290(1,uVar10);
      }
      sVar7 = strlen(*(char **)(iVar32 + 0xac));
      sVar14 = strlen(*(char **)(iVar32 + 0xb0));
      sVar7 = sVar7 + sVar14 + 2;
      pcVar30 = (char *)FUN_0001f860(sVar7,"cgminer.c",&DAT_0004f0c0,0x3124);
      *(char **)(iVar32 + 0xa8) = pcVar30;
      snprintf(pcVar30,sVar7,"%s:%s",*(char **)(iVar32 + 0xac),*(char **)(iVar32 + 0xb0));
    }
  }
  DAT_00068b84 = *DAT_00072f14;
  if (DAT_00072da0 != '\0') {
    openlog("cgminer",1,8);
  }
  if (DAT_0006a6ac != 0) {
    iVar32 = pipe((int *)ppcVar35);
    if (iVar32 < 0) {
      perror("pipe - failed to create pipe for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    fflush(stderr);
    iVar32 = dup2(local_834,2);
    if (iVar32 < 0) {
      perror("dup2 - failed to alias stderr to write end of pipe for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar32 = close(local_834);
    if (iVar32 < 0) {
      perror("close - failed to close write end of pipe for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    p_Var15 = signal(0xd,(__sighandler_t)0x1);
    p_Var16 = signal(0xd,(__sighandler_t)0x1);
    if (p_Var15 == (__sighandler_t)0xffffffff || p_Var16 == (__sighandler_t)0xffffffff) {
      perror("signal - failed to edit signal mask for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_00068b1c = fork();
    if (DAT_00068b1c < 0) {
LAB_000154cc:
      perror("fork - failed to fork child process for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (DAT_00068b1c == 0) {
      iVar32 = dup2((int)local_838,0);
      if (iVar32 < 0) {
        perror("dup2 - in child, failed to alias read end of pipe to stdin for --monitor");
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      close((int)local_838);
      execl("/bin/bash","/bin/bash",&DAT_0005487c,DAT_0006a6ac,0);
      perror("execl - in child failed to exec user specified command for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar32 = close((int)local_838);
    if (iVar32 < 0) {
      perror("close - failed to close read end of pipe for --monitor");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  DAT_00073f30 = FUN_0001f8e8(DAT_00076238,4,"cgminer.c",&DAT_0004f0c0,0x3135);
  for (iVar32 = 0; iVar27 = DAT_00073f30, iVar32 < DAT_00076238; iVar32 = iVar32 + 1) {
    uVar10 = FUN_0001f8e8(1,0x40,"cgminer.c",&DAT_0004f0c0,0x3139);
    *(undefined4 *)(iVar27 + iVar32 * 4) = uVar10;
  }
  local_a34 = 0;
  for (local_a30 = (code **)0x0; (int)local_a30 < DAT_00074ff0;
      local_a30 = (code **)((int)local_a30 + 1)) {
    iVar27 = *(int *)(DAT_00074f78 + (int)local_a30 * 4);
    iVar32 = FUN_0001f860((*(int *)(iVar27 + 0x94) + 1) * 4,"cgminer.c",&DAT_0004f0c0,0x3142);
    *(int *)(iVar27 + 0x98) = iVar32;
    *(undefined4 *)(iVar32 + *(int *)(iVar27 + 0x94) * 4) = 0;
    *(undefined4 *)(iVar27 + 0x60) = 4;
    for (iVar32 = 0; iVar33 = local_a34 + iVar32, iVar32 < *(int *)(iVar27 + 0x94);
        iVar32 = iVar32 + 1) {
      piVar19 = (int *)FUN_0002f6e8(iVar33);
      *piVar19 = iVar33;
      piVar19[9] = iVar27;
      piVar19[1] = iVar32;
      iVar33 = (**(code **)(*(int *)(iVar27 + 4) + 0x2c))();
      if (iVar33 != 0) {
        iVar33 = FUN_00022f8c(piVar19,&pStack_9e8,FUN_00028e8c,piVar19);
        if (iVar33 != 0) {
          snprintf((char *)ppcVar35,0x800,"thread %d create failed",*piVar19);
          FUN_0001dd98(3,ppcVar35,1);
                    /* WARNING: Subroutine does not return */
          FUN_0002c290(1,0);
        }
        *(int **)(*(int *)(iVar27 + 0x98) + iVar32 * 4) = piVar19;
        if (*(int *)(iVar27 + 0x20) != 1) {
          if ((DAT_000686f1 != '\0') &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            snprintf((char *)ppcVar35,0x800,"Pushing sem post to thread %d",*piVar19);
            FUN_0001dd98(7,ppcVar35,0);
          }
          FUN_00022fd4(piVar19 + 4,"cgminer.c",&DAT_0004f0c0,0x315e);
        }
      }
    }
    local_a34 = iVar33;
  }
  if ((DAT_00068c60 == '\0') && (DAT_00072dc0 == 0)) {
    iVar27 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0006a24c);
    for (iVar32 = 0; local_a30 = &local_838, iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      iVar33 = DAT_00072f14[iVar32];
      iVar27 = iVar33 + 100;
      if (*(int *)(iVar33 + 100) != 1) {
        iVar27 = FUN_00028ff0();
      }
      *(undefined1 *)(iVar33 + 0x61) = 1;
    }
    if (DAT_00068908 != 0) {
      FUN_0003daf0(iVar27);
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
      local_838 = (code *)0x626f7250;
      local_834._0_1_ = 'i';
      local_834._1_1_ = 'n';
      local_834._2_1_ = 'g';
      local_834._3_1_ = ' ';
      iStack_830._0_1_ = 'f';
      iStack_830._1_1_ = 'o';
      iStack_830._2_1_ = 'r';
      iStack_830._3_1_ = ' ';
      iStack_82c._0_1_ = 'a';
      iStack_82c._1_1_ = 'n';
      iStack_82c._2_1_ = ' ';
      iStack_82c._3_1_ = 'a';
      local_828 = (code *)0x6576696c;
      local_824._0_1_ = ' ';
      local_824._1_1_ = 'p';
      local_824._2_1_ = 'o';
      local_824._3_1_ = 'o';
      local_820 = CONCAT22(local_820._2_2_,0x6c);
      FUN_0001dd98(5,local_a30,0);
    }
    FUN_00028d5c();
    iVar32 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
    do {
      iVar32 = iVar32 + 1;
      sleep(1);
      if (iVar32 == 0xb4) {
        bVar21 = 0;
      }
      else {
        bVar21 = (DAT_00068a14 ^ 1) & 1;
      }
    } while (bVar21 != 0);
    bVar3 = false;
    while (DAT_00068a14 == 0) {
      if (bVar3) {
LAB_00015690:
        if (DAT_0007608a == '\0') {
LAB_0001569c:
          if ((DAT_000686f1 != '\0') &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            local_838 = (code *)0x73206f4e;
            local_834._0_1_ = 'e';
            local_834._1_1_ = 'r';
            local_834._2_1_ = 'v';
            local_834._3_1_ = 'e';
            iStack_830._0_1_ = 'r';
            iStack_830._1_1_ = 's';
            iStack_830._2_1_ = ' ';
            iStack_830._3_1_ = 'c';
            iStack_82c._0_1_ = 'o';
            iStack_82c._1_1_ = 'u';
            iStack_82c._2_1_ = 'l';
            iStack_82c._3_1_ = 'd';
            local_828 = (code *)0x20656220;
            local_824._0_1_ = 'u';
            local_824._1_1_ = 's';
            local_824._2_1_ = 'e';
            local_824._3_1_ = 'd';
            local_820._0_1_ = '!';
            local_820._1_1_ = ' ';
            local_820._2_1_ = 'E';
            local_820._3_1_ = 'x';
            local_81c._0_1_ = 'i';
            local_81c._1_1_ = 't';
            local_81c._2_1_ = 'i';
            local_81c._3_1_ = 'n';
            local_818._0_1_ = 'g';
            local_818._1_1_ = '.';
            FUN_0001dd98(7,local_a30,0);
          }
        }
      }
      else {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
LAB_0001642c:
          if (2 < DAT_00067848) goto LAB_000162e0;
LAB_00016438:
          if (2 < DAT_00067848) goto LAB_0001631c;
        }
        else {
          local_838 = (code *)0x73206f4e;
          local_834._0_1_ = 'e';
          local_834._1_1_ = 'r';
          local_834._2_1_ = 'v';
          local_834._3_1_ = 'e';
          iStack_830._0_1_ = 'r';
          iStack_830._1_1_ = 's';
          iStack_830._2_1_ = ' ';
          iStack_830._3_1_ = 'w';
          iStack_82c._0_1_ = 'e';
          iStack_82c._1_1_ = 'r';
          iStack_82c._2_1_ = 'e';
          iStack_82c._3_1_ = ' ';
          local_828 = (code *)0x6e756f66;
          local_824._0_1_ = 'd';
          local_824._1_1_ = ' ';
          local_824._2_1_ = 't';
          local_824._3_1_ = 'h';
          local_820._0_1_ = 'a';
          local_820._1_1_ = 't';
          local_820._2_1_ = ' ';
          local_820._3_1_ = 'c';
          local_81c._0_1_ = 'o';
          local_81c._1_1_ = 'u';
          local_81c._2_1_ = 'l';
          local_81c._3_1_ = 'd';
          local_818._0_1_ = ' ';
          local_818._1_1_ = 'b';
          local_818._2_1_ = 'e';
          local_818._3_1_ = ' ';
          local_814._0_1_ = 'u';
          local_814._1_1_ = 's';
          local_814._2_1_ = 'e';
          local_814._3_1_ = 'd';
          local_810._0_1_ = ' ';
          local_810._1_1_ = 't';
          local_810._2_1_ = 'o';
          local_810._3_1_ = ' ';
          local_80c = 0x6567;
          local_80a = 0x74;
          local_808._0_1_ = 'w';
          local_808._1_1_ = 'o';
          local_808._2_1_ = 'r';
          local_808._3_1_ = 'k';
          builtin_strncpy(acStack_804," from.",7);
          FUN_0001dd98(3,local_a30,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0001642c;
LAB_000162e0:
          memcpy(local_a30,
                 "Please check the details from the list below of the servers you have input",0x4b);
          FUN_0001dd98(3,local_a30,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00016438;
LAB_0001631c:
          memcpy(local_a30,
                 "Most likely you have input the wrong URL, forgotten to add a port, or have not set up workers"
                 ,0x5e);
          FUN_0001dd98(3,local_a30,0);
        }
        for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
          iVar27 = DAT_00072f14[iVar32];
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
            snprintf((char *)local_a30,0x800,"Pool: %d  URL: %s  User: %s  Password: %s",iVar32,
                     *(char **)(iVar27 + 0xa4),*(char **)(iVar27 + 0xac),*(char **)(iVar27 + 0xb0));
            FUN_0001dd98(4,local_a30,0);
          }
        }
        if (DAT_0007608a == '\0') goto LAB_0001569c;
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          memcpy(local_a30,
                 "Press any key to exit, or cgminer will wait indefinitely for an alive pool.",0x4c)
          ;
          FUN_0001dd98(3,local_a30,0);
          goto LAB_00015690;
        }
      }
      FUN_0002090c(500);
      bVar3 = true;
    }
    local_938[0] = 0x6f67;
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
      snprintf((char *)local_a30,0x800,"check success, send %s",(char *)local_938);
      FUN_0001dd98(5,local_a30,0);
    }
    iVar32 = 0;
    do {
      sVar7 = strlen((char *)local_938);
      iVar27 = FUN_000427b4(local_938,sVar7);
      if (iVar27 == 0) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
          snprintf((char *)local_a30,0x800,"check success, send %s, times=%d",(char *)local_938,
                   iVar32);
          FUN_0001dd98(5,local_a30,0);
        }
        break;
      }
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
        snprintf((char *)local_a30,0x800,"bitmain_flush_api fail: send %s, times=%d, ret=%d",
                 (char *)local_938,iVar32,iVar27);
        FUN_0001dd98(5,local_a30,0);
      }
      iVar32 = iVar32 + 1;
      FUN_0002090c(1000);
    } while (iVar32 != 8);
  }
  DAT_00072d98._0_4_ = 0;
  DAT_00072d98._4_4_ = 0;
  puVar29 = (undefined4 *)&DAT_00068bb0;
  do {
    puVar31 = puVar29 + 2;
    *puVar29 = 0;
    puVar29[1] = 0;
    iVar27 = DAT_00074ff0;
    iVar32 = DAT_00074f78;
    puVar29 = puVar31;
  } while (puVar31 != &DAT_00068c10);
  DAT_00068c10 = 0;
  for (iVar33 = 0; iVar33 < iVar27; iVar33 = iVar33 + 1) {
    iVar39 = *(int *)(iVar32 + iVar33 * 4);
    *(undefined4 *)(iVar39 + 0x50) = 0;
    *(undefined4 *)(iVar39 + 0x54) = 0;
    *(undefined4 *)(iVar39 + 0x30) = 0;
    *(undefined4 *)(iVar39 + 0x34) = 0;
  }
  FUN_000206d8(&DAT_00068b40);
  FUN_000206d8(&DAT_00068b38);
  FUN_000206d8(&DAT_00068ba4);
  FUN_0002a210(&DAT_00068b48,0x28);
  iVar32 = DAT_00072dd0;
  DAT_00068b78 = 3;
  iVar27 = FUN_00022f8c(DAT_00072dd0 + 0xc0,&pStack_9e8,FUN_000320b0,0);
  if (iVar27 != 0) {
    local_838 = (code *)0x63746177;
    local_834._0_1_ = 'h';
    local_834._1_1_ = 'p';
    local_834._2_1_ = 'o';
    local_834._3_1_ = 'o';
    iStack_830._0_1_ = 'l';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 't';
    iStack_830._3_1_ = 'h';
    iStack_82c._0_1_ = 'r';
    iStack_82c._1_1_ = 'e';
    iStack_82c._2_1_ = 'a';
    iStack_82c._3_1_ = 'd';
    local_828 = (code *)0x65726320;
    local_824._0_1_ = 'a';
    local_824._1_1_ = 't';
    local_824._2_1_ = 'e';
    local_824._3_1_ = ' ';
    local_820._0_1_ = 'f';
    local_820._1_1_ = 'a';
    local_820._2_1_ = 'i';
    local_820._3_1_ = 'l';
    local_81c = CONCAT22(local_81c._2_2_,0x6465);
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  pthread_detach(*(pthread_t *)(iVar32 + 0xcc));
  iVar32 = DAT_00072dd0;
  DAT_00068b7c = 4;
  iVar27 = FUN_00022f8c(DAT_00072dd0 + 0x100,&pStack_9e8,FUN_00036398,0);
  if (iVar27 != 0) {
    local_838 = (code *)0x63746177;
    local_834._0_1_ = 'h';
    local_834._1_1_ = 'd';
    local_834._2_1_ = 'o';
    local_834._3_1_ = 'g';
    iStack_830._0_1_ = ' ';
    iStack_830._1_1_ = 't';
    iStack_830._2_1_ = 'h';
    iStack_830._3_1_ = 'r';
    iStack_82c._0_1_ = 'e';
    iStack_82c._1_1_ = 'a';
    iStack_82c._2_1_ = 'd';
    iStack_82c._3_1_ = ' ';
    local_828 = (code *)0x61657263;
    local_824._0_1_ = 't';
    local_824._1_1_ = 'e';
    local_824._2_1_ = ' ';
    local_824._3_1_ = 'f';
    local_820._0_1_ = 'a';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 'l';
    local_820._3_1_ = 'e';
    local_81c = CONCAT22(local_81c._2_2_,100);
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  pthread_detach(*(pthread_t *)(iVar32 + 0x10c));
  if (DAT_0006a470 != 8) {
    snprintf((char *)&local_838,0x800,"incorrect total_control_threads (%d) should be 8",
             DAT_0006a470);
    FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1,0);
  }
  iVar32 = nice(-10);
  if (((iVar32 == 0) && (DAT_000686f1 != '\0')) &&
     ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
    local_838 = (code *)0x62616e55;
    local_834._0_1_ = 'l';
    local_834._1_1_ = 'e';
    local_834._2_1_ = ' ';
    local_834._3_1_ = 't';
    iStack_830._0_1_ = 'o';
    iStack_830._1_1_ = ' ';
    iStack_830._2_1_ = 's';
    iStack_830._3_1_ = 'e';
    iStack_82c._0_1_ = 't';
    iStack_82c._1_1_ = ' ';
    iStack_82c._2_1_ = 't';
    iStack_82c._3_1_ = 'h';
    local_828 = (code *)0x64616572;
    local_824._0_1_ = ' ';
    local_824._1_1_ = 't';
    local_824._2_1_ = 'o';
    local_824._3_1_ = ' ';
    local_820._0_1_ = 'h';
    local_820._1_1_ = 'i';
    local_820._2_1_ = 'g';
    local_820._3_1_ = 'h';
    local_81c._0_1_ = ' ';
    local_81c._1_1_ = 'p';
    local_81c._2_1_ = 'r';
    local_81c._3_1_ = 'i';
    local_818._0_1_ = 'o';
    local_818._1_1_ = 'r';
    local_818._2_1_ = 'i';
    local_818._3_1_ = 't';
    local_814 = CONCAT22(local_814._2_2_,0x79);
    FUN_0001dd98(7,&local_838,0);
  }
LAB_00015810:
  if (DAT_00076078 != '\0') {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      local_838 = (code *)0x6b726f57;
      local_834._0_1_ = ' ';
      local_834._1_1_ = 'u';
      local_834._2_1_ = 'p';
      local_834._3_1_ = 'd';
      iStack_830._0_1_ = 'a';
      iStack_830._1_1_ = 't';
      iStack_830._2_1_ = 'e';
      iStack_830._3_1_ = ' ';
      iStack_82c._0_1_ = 'm';
      iStack_82c._1_1_ = 'e';
      iStack_82c._2_1_ = 's';
      iStack_82c._3_1_ = 's';
      local_828 = (code *)0x20656761;
      local_824._0_1_ = 'r';
      local_824._1_1_ = 'e';
      local_824._2_1_ = 'c';
      local_824._3_1_ = 'e';
      local_820._0_1_ = 'i';
      local_820._1_1_ = 'v';
      local_820._2_1_ = 'e';
      local_820._3_1_ = 'd';
      local_81c = local_81c & 0xffffff00;
      FUN_0001dd98(6,&local_838,0);
    }
    FUN_000206d8(&DAT_00068b04);
    iVar33 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fa0);
    iVar27 = DAT_00076238;
    iVar32 = DAT_00073f30;
    if (iVar33 != 0) {
      piVar19 = __errno_location();
      uVar10 = 0x15c5;
      pcVar6 = "signal_work_update";
      pcVar30 = "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
      goto LAB_00016084;
    }
    for (iVar33 = 0; iVar33 < iVar27; iVar33 = iVar33 + 1) {
      *(undefined1 *)(*(int *)(iVar32 + iVar33 * 4) + 0x3f) = 1;
    }
    iVar32 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fa0);
    if (iVar32 != 0) {
      piVar19 = __errno_location();
      uVar10 = 0x15cc;
      pcVar6 = "signal_work_update";
      pcVar30 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
      goto LAB_00016084;
    }
    (*DAT_0006796c)();
  }
  DAT_00076078 = '\0';
  iVar32 = pthread_mutex_lock(DAT_00068b30);
  if (iVar32 != 0) {
    piVar19 = __errno_location();
    uVar10 = 0x3224;
    pcVar30 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    goto LAB_00016078;
  }
  if (((DAT_00068c14 == 0) || (*(int *)(*(int *)(DAT_00068c14 + 0x158) + 0xc) < 2)) ||
     (pthread_cond_wait((pthread_cond_t *)&DAT_00072e78,DAT_00068b30), DAT_00068c14 == 0)) {
    iVar32 = pthread_mutex_unlock(DAT_00068b30);
    if (iVar32 != 0) goto LAB_00016058;
    (*DAT_0006796c)();
  }
  else {
    iVar27 = *(int *)(*(int *)(DAT_00068c14 + 0x158) + 0xc);
    iVar32 = pthread_mutex_unlock(DAT_00068b30);
    if (iVar32 != 0) goto LAB_00016058;
    (*DAT_0006796c)();
    if (1 < iVar27) {
      local_a0c = FUN_00032c58(0);
      if (local_a0c != 0) {
        FUN_0002aa68(&local_a0c,"cgminer.c",&DAT_0004f0c0,0x323b);
      }
      goto LAB_00015810;
    }
  }
  if (local_a0c != 0) {
    FUN_0002aa68(&local_a0c,"cgminer.c",&DAT_0004f0c0,0x3243);
  }
  local_a0c = FUN_0002d974();
LAB_00015a18:
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0006a24c);
  puVar17 = (undefined4 *)FUN_0002fbd8();
  puVar31 = DAT_00072f14;
  puVar29 = DAT_00072e70;
  if (DAT_00068af4 == 4) {
    puVar17 = (undefined4 *)FUN_00029034();
  }
  else if (DAT_00068af4 == 3) {
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      if (*(int *)(DAT_00072f14[iVar32] + 0x40) < *(int *)(DAT_00072f14[iVar32] + 0x3c))
      goto LAB_00015aa8;
    }
    for (iVar32 = 0; iVar32 < (int)puVar29; iVar32 = iVar32 + 1) {
      *(undefined4 *)(puVar31[iVar32] + 0x40) = 0;
    }
    DAT_0006a6b0 = DAT_0006a6b0 + 1;
    if ((int)puVar29 <= DAT_0006a6b0) {
      DAT_0006a6b0 = 0;
    }
LAB_00015aa8:
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      iVar27 = DAT_00072f14[DAT_0006a6b0];
      iVar33 = *(int *)(iVar27 + 0x40);
      *(int *)(iVar27 + 0x40) = iVar33 + 1;
      if (iVar33 < *(int *)(iVar27 + 0x3c)) {
        if ((*(char *)(iVar27 + 0x61) == '\0') && (*(int *)(iVar27 + 100) == 1)) {
          uVar40 = FUN_00029010(iVar27);
          puVar29 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
          if ((int)uVar40 == 0) goto LAB_00015cc8;
        }
        if (DAT_00074f75 != '\0') {
          iVar27 = FUN_00029148(0);
          *(int *)(iVar27 + 0x40) = *(int *)(iVar27 + 0x40) + -1;
        }
      }
      DAT_0006a6b0 = DAT_0006a6b0 + 1;
      if ((int)DAT_00072e70 <= DAT_0006a6b0) {
        DAT_0006a6b0 = 0;
      }
    }
    puVar29 = DAT_00072e70;
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      puVar29 = (undefined4 *)FUN_00029148(iVar32,puVar29);
      if ((*(char *)((int)puVar29 + 0x61) == '\0') && (puVar29[0x19] == 1)) {
        uVar40 = FUN_00029010();
        puVar29 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
        if ((int)uVar40 == 0) goto LAB_00015cc8;
      }
    }
  }
  puVar29 = puVar17;
  if (DAT_000686f1 != '\0') goto LAB_000158e4;
  goto LAB_0001593c;
LAB_00012f0c:
  pclose(pFVar5);
  uVar37 = 0;
  iVar32 = 0;
  pbVar11 = (byte *)local_938;
  for (uVar26 = 1; sVar7 = strlen((char *)local_938), uVar26 <= sVar7; uVar26 = uVar26 + 1) {
    memset(acStack_a08,0,0x20);
    ppuVar8 = __ctype_b_loc();
    if (((*ppuVar8)[*pbVar11] & 0x2000) != 0) {
      strncpy(acStack_a08,(char *)((int)local_938 + uVar37),(uVar26 - uVar37) - 1);
      lVar9 = strtol(acStack_a08,(char **)0x0,10);
      uVar37 = uVar26;
      if (((0 < lVar9) && (iVar32 = iVar32 + 1, DAT_000686f1 != '\0')) &&
         ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
        snprintf((char *)&local_838,0x800,"Parsed proc id is: %d\n");
        FUN_0001dd98(7,&local_838,0);
      }
    }
    pbVar11 = pbVar11 + 1;
  }
  if (iVar32 != 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf((char *)&local_838,0x800," %d instance of %s is  already Running on this machine",
               iVar32,pcVar30);
      FUN_0001dd98(3,&local_838,0);
    }
    if (iVar32 != 1) {
      snprintf((char *)&local_838,0x800,"%s is forbidden to start twice, will exit immediately!",
               (char *)*param_2);
      FUN_0001dd98(3,&local_838,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(0xffffffff,0);
    }
  }
  goto LAB_00013180;
LAB_00016058:
  piVar19 = __errno_location();
  uVar10 = 0x322f;
  pcVar30 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
LAB_00016078:
  pcVar6 = "main";
LAB_00016084:
  snprintf((char *)&local_838,0x800,pcVar30,*piVar19,"cgminer.c",pcVar6,uVar10);
  goto LAB_00014730;
LAB_00015cc8:
  if (DAT_000686f1 == '\0') {
LAB_00015cd4:
    iVar32 = FUN_00029010(puVar29);
    if (iVar32 == 0) goto code_r0x00015ce4;
  }
  else {
LAB_000158e4:
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
      snprintf((char *)&local_838,0x800,"Selecting pool %d for work",*puVar29);
      FUN_0001dd98(7,&local_838,0);
    }
LAB_0001593c:
    if ((*(char *)((int)puVar29 + 0x61) == '\0') && (puVar29[0x19] == 1)) goto LAB_00015cd4;
  }
  FUN_00031afc(0);
  puVar17 = (undefined4 *)FUN_0002fbd8();
  puVar31 = DAT_00072f14;
  puVar29 = DAT_00072e70;
  if (DAT_00068af4 == 4) {
    puVar17 = (undefined4 *)FUN_00029034();
  }
  else if (DAT_00068af4 == 3) {
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      if (*(int *)(DAT_00072f14[iVar32] + 0x40) < *(int *)(DAT_00072f14[iVar32] + 0x3c))
      goto LAB_00015b9c;
    }
    for (iVar32 = 0; iVar32 < (int)puVar29; iVar32 = iVar32 + 1) {
      *(undefined4 *)(puVar31[iVar32] + 0x40) = 0;
    }
    DAT_0006a6b0 = DAT_0006a6b0 + 1;
    if ((int)puVar29 <= DAT_0006a6b0) {
      DAT_0006a6b0 = 0;
    }
LAB_00015b9c:
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      iVar27 = DAT_00072f14[DAT_0006a6b0];
      iVar33 = *(int *)(iVar27 + 0x40);
      *(int *)(iVar27 + 0x40) = iVar33 + 1;
      if (iVar33 < *(int *)(iVar27 + 0x3c)) {
        if ((*(char *)(iVar27 + 0x61) == '\0') && (*(int *)(iVar27 + 100) == 1)) {
          uVar40 = FUN_00029010(iVar27);
          puVar29 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
          if ((int)uVar40 == 0) goto LAB_00015ea8;
        }
        if (DAT_00074f75 != '\0') {
          iVar27 = FUN_00029148(0);
          *(int *)(iVar27 + 0x40) = *(int *)(iVar27 + 0x40) + -1;
        }
      }
      DAT_0006a6b0 = DAT_0006a6b0 + 1;
      if ((int)DAT_00072e70 <= DAT_0006a6b0) {
        DAT_0006a6b0 = 0;
      }
    }
    puVar29 = DAT_00072e70;
    for (iVar32 = 0; iVar32 < (int)DAT_00072e70; iVar32 = iVar32 + 1) {
      puVar29 = (undefined4 *)FUN_00029148(iVar32,puVar29);
      if ((*(char *)((int)puVar29 + 0x61) == '\0') && (puVar29[0x19] == 1)) {
        uVar40 = FUN_00029010();
        puVar29 = (undefined4 *)((ulonglong)uVar40 >> 0x20);
        if ((int)uVar40 == 0) goto LAB_00015ea8;
      }
    }
  }
  puVar29 = puVar17;
  if (DAT_000686f1 != '\0') goto LAB_00015994;
LAB_000159ec:
  if ((*(char *)((int)puVar29 + 0x61) != '\0') || (puVar29[0x19] != 1)) goto LAB_00015a04;
  goto LAB_00015eb4;
code_r0x00015ce4:
  DAT_0006a268 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0006a24c);
  if (DAT_0006a268 == 1) {
    DAT_0006a268 = iVar32;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
    goto LAB_00015810;
  }
  if (*(char *)(puVar29 + 0xa4) != '\0') {
    FUN_00033628(puVar29,local_a0c);
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      local_838 = (code *)0x656e6547;
      local_834._0_1_ = 'r';
      local_834._1_1_ = 'a';
      local_834._2_1_ = 't';
      local_834._3_1_ = 'e';
      iStack_830._0_1_ = 'd';
      iStack_830._1_1_ = ' ';
      iStack_830._2_1_ = 's';
      iStack_830._3_1_ = 't';
      iStack_82c._0_1_ = 'r';
      iStack_82c._1_1_ = 'a';
      iStack_82c._2_1_ = 't';
      iStack_82c._3_1_ = 'u';
      local_828 = (code *)0x6f77206d;
      local_824 = CONCAT22(local_824._2_2_,0x6b72);
      FUN_0001dd98(7,&local_838,0);
    }
    FUN_0003b0b8(local_a0c);
    local_a0c = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
    goto LAB_00015810;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
  iVar32 = local_a0c;
  if (DAT_00072dc0 == 0) {
    if (DAT_00068c60 == '\0') goto LAB_00015810;
    *(undefined8 *)(local_a0c + 0x178) = 0x4040000000000000;
    iVar27 = local_a0c + 400;
    FUN_00023324(local_a0c + 0xa0,&DAT_0006a474,0x20,"cgminer.c","get_benchmark_work",0x10ec);
    puVar29 = DAT_00072f14;
    *(undefined1 *)(iVar32 + 0x11a) = 1;
    *(undefined4 *)(iVar32 + 0xf4) = 0;
    *(undefined4 *)(iVar32 + 0x104) = *puVar29;
    FUN_000206d8(iVar27);
    FUN_00023634(iVar32 + 0x198,iVar27);
    cVar4 = DAT_000686f1;
    *(undefined1 *)(iVar32 + 0x1b8) = 0x42;
    if ((cVar4 == '\0') ||
       (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))))
    goto LAB_00015e28;
    pcVar30 = "Generated benchmark work";
  }
  else {
    iVar27 = local_a0c + 400;
    FUN_0002c608(local_a0c);
    puVar29 = DAT_00072f14;
    *(undefined1 *)(iVar32 + 0x11a) = 1;
    *(undefined4 *)(iVar32 + 0x104) = *puVar29;
    FUN_000206d8(iVar27);
    FUN_00023634(iVar32 + 0x198,iVar27);
    *(undefined1 *)(iVar32 + 0x1b8) = 0x42;
    FUN_00028af0(0,iVar32);
    if ((DAT_000686f1 == '\0') ||
       (((DAT_00072da0 == '\0' && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))))
    goto LAB_00015e28;
    pcVar30 = "Generated benchfile work";
  }
  local_838 = *(code **)pcVar30;
  local_834 = *(int *)((int)pcVar30 + 4);
  iStack_830 = *(int *)((int)pcVar30 + 8);
  iStack_82c = *(int *)((int)pcVar30 + 0xc);
  local_828 = *(code **)((int)pcVar30 + 0x10);
  local_824 = *(int *)((int)pcVar30 + 0x14);
  local_820 = CONCAT31(local_820._1_3_,(char)*(int *)((int)pcVar30 + 0x18));
  FUN_0001dd98(7,&local_838,0);
LAB_00015e28:
  FUN_0003b0b8(local_a0c);
  local_a0c = 0;
  goto LAB_00015810;
LAB_00015ea8:
  if (DAT_000686f1 != '\0') {
LAB_00015994:
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
      snprintf((char *)&local_838,0x800,"Selecting pool %d for work",*puVar29);
      FUN_0001dd98(7,&local_838,0);
    }
    goto LAB_000159ec;
  }
LAB_00015eb4:
  iVar32 = FUN_00029010(puVar29);
  if (iVar32 == 0) {
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
    goto LAB_00015a18;
  }
LAB_00015a04:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0006a24c);
  FUN_0002090c(0xb);
  goto LAB_00015a18;
}

