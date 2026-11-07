// FUN_0002d114 @ 0002d114  size=2516  callers=1
// program: bmminer


void FUN_0002d114(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  char *param3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  pthread_mutex_t *__mutex;
  pthread_rwlock_t *__rwlock;
  bool bVar11;
  uint in_fpscr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  undefined4 local_8d8;
  uint uStack_8d4;
  uint local_8d0 [7];
  uint uStack_8b4;
  uint local_8b0 [8];
  undefined1 auStack_890 [28];
  uint uStack_874;
  uint local_870 [16];
  char local_830 [136];
  undefined1 auStack_7a8 [1916];
  
  __mutex = (pthread_mutex_t *)(param_1 + 0xd4);
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "gen_stratum_work",0x4f4);
    FUN_00032218(3,local_830,1);
  }
  __rwlock = (pthread_rwlock_t *)(param_1 + 0xec);
  iVar2 = pthread_rwlock_wrlock(__rwlock);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "gen_stratum_work",0x4f4);
    FUN_00032218(3,local_830,1);
  }
  local_8d8 = *(undefined4 *)(param_1 + 0x280);
  uStack_8d4 = *(uint *)(param_1 + 0x284);
  FUN_00035430(*(int *)(param_1 + 0x630) + *(int *)(param_1 + 0x638),&local_8d8,
               *(undefined4 *)(param_1 + 0x288),"bmminer.c","gen_stratum_work");
  uVar8 = *(uint *)(param_1 + 0x280);
  iVar2 = *(int *)(param_1 + 0x284);
  *(uint *)(param_1 + 0x280) = uVar8 + 1;
  *(uint *)(param_1 + 0x284) = iVar2 + (uint)(0xfffffffe < uVar8);
  *(uint *)(param_2 + 0x128) = uVar8;
  *(int *)(param_2 + 300) = iVar2;
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x288);
  iVar2 = pthread_rwlock_unlock(__rwlock);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_rdlock(__rwlock);
    if (iVar2 == 0) goto LAB_0002d1f4;
LAB_0002d9ec:
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "gen_stratum_work",0x4ff);
    FUN_00032218(3,local_830,1);
    iVar2 = pthread_mutex_unlock(__mutex);
  }
  else {
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","gen_stratum_work",0x4ff);
    FUN_00032218(3,local_830,1);
    iVar2 = pthread_rwlock_rdlock(__rwlock);
    if (iVar2 != 0) goto LAB_0002d9ec;
LAB_0002d1f4:
    iVar2 = pthread_mutex_unlock(__mutex);
  }
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c"
             ,"gen_stratum_work",0x4ff);
    FUN_00032218(3,local_830,1);
  }
  FUN_00033774(*(undefined4 *)(param_1 + 0x630),*(undefined4 *)(param_1 + 0x634),local_830);
  FUN_00033774(local_830,0x20,local_8d0);
  FUN_00035430(local_8b0,local_8d0,0x20,"bmminer.c","gen_stratum_work");
  if (0 < *(int *)(param_1 + 0x6bc)) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      FUN_00035430(auStack_890,*(undefined4 *)(*(int *)(param_1 + 0x2b4) + iVar1),0x20,"bmminer.c",
                   "gen_stratum_work");
      FUN_00033774(local_8b0,0x40,local_830);
      FUN_00033774(local_830,0x20,local_8d0);
      FUN_00035430(local_8b0,local_8d0,0x20,"bmminer.c","gen_stratum_work");
    } while (iVar2 < *(int *)(param_1 + 0x6bc));
  }
  puVar7 = &uStack_8b4;
  puVar5 = &uStack_8d4;
  do {
    puVar7 = puVar7 + 1;
    uVar8 = *puVar7;
    puVar5 = puVar5 + 1;
    *puVar5 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
  } while (local_8b0 + 7 != puVar7);
  FUN_00035430(param_2,param_1 + 0x63c,0x70,"bmminer.c","gen_stratum_work");
  FUN_00035430(param_2 + 0x24,local_8d0,0x20,"bmminer.c","gen_stratum_work");
  uVar9 = *(undefined4 *)(param_1 + 0x734);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_1 + 0x730);
  *(undefined4 *)(param_2 + 0x13c) = uVar9;
  uVar9 = __strdup(*(undefined4 *)(param_1 + 0x2b0));
  *(undefined4 *)(param_2 + 0x120) = uVar9;
  uVar9 = __strdup(*(undefined4 *)(param_1 + 0x274));
  *(undefined4 *)(param_2 + 0x140) = uVar9;
  uVar9 = __strdup(param_1 + 0x71c);
  *(undefined4 *)(param_2 + 0x134) = uVar9;
  iVar2 = pthread_rwlock_unlock(__rwlock);
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","gen_stratum_work",0x51e);
    FUN_00032218(3,local_830,1);
  }
  (*DAT_00087ce8)();
  if (DAT_0048d36e != '\0') {
    pcVar10 = (char *)FUN_00033bf8(param_2,0x70);
    param3 = (char *)FUN_00033bf8(local_8d0,0x20);
    if (DAT_0048d36e != '\0') {
      if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 7)) {
LAB_0002d780:
        if ((DAT_0048d36d == '\0') && (DAT_00087bc4 < 7)) {
LAB_0002d7e8:
          if ((DAT_0048d36d != '\0') || (6 < DAT_00087bc4)) {
LAB_0002d808:
            snprintf(local_830,0x800,"Work job_id %s nonce2 %llu ntime %s",
                     *(char **)(param_2 + 0x120),*(ulonglong *)(param_2 + 0x128),
                     *(char **)(param_2 + 0x134));
            FUN_00032218(7,local_830,0);
          }
        }
        else {
LAB_0002d7a0:
          snprintf(local_830,0x800,"Generated stratum header %s",pcVar10);
          FUN_00032218(7,local_830,0);
          if (DAT_0048d36e != '\0') {
            if (DAT_0071e84c == '\0') goto LAB_0002d7e8;
            goto LAB_0002d808;
          }
        }
      }
      else {
        snprintf(local_830,0x800,"Generated stratum merkle %s",param3);
        FUN_00032218(7,local_830,0);
        if (DAT_0048d36e != '\0') {
          if (DAT_0071e84c == '\0') goto LAB_0002d780;
          goto LAB_0002d7a0;
        }
      }
    }
    free(pcVar10);
    free(param3);
  }
  puVar5 = (uint *)(param_2 + -4);
  puVar7 = &uStack_874;
  do {
    puVar5 = puVar5 + 1;
    uVar8 = *puVar5;
    puVar7 = puVar7 + 1;
    *puVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
              uVar8 >> 0x18;
  } while (local_870 + 0xf != puVar7);
  FUN_000335ac(local_830);
  FUN_000335dc(local_830,local_870,0x40);
  FUN_00035430(param_2 + 0x80,auStack_7a8,0x20,"bmminer.c","calc_midstate");
  FUN_0002ce80((int)*(undefined8 *)(param_2 + 0x138),param_2 + 0xa0);
  DAT_007229fc = DAT_007229fc + 1;
  tVar3 = time((time_t *)0x0);
  if (5 < tVar3 - DAT_0008a420) {
    DAT_0008a420 = time((time_t *)0x0);
    DAT_0008a424 = DAT_007229fc;
  }
  dVar15 = *(double *)(param_2 + 0x138);
  *(undefined1 *)(param_2 + 0x11c) = 1;
  *(int *)(param_2 + 0x104) = param_1;
  in_fpscr = in_fpscr & 0xfffffff;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  *(undefined1 *)(param_2 + 0x118) = 0;
  *(undefined4 *)(param_2 + 0x150) = 0;
  *(undefined1 *)(param_2 + 0x1b8) = 0x53;
  *(undefined4 *)(param_2 + 0xf4) = 0x3c;
  if (dVar15 == 0.0) {
    dVar14 = (double)FUN_000679c4(*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xbc));
    dVar12 = (double)FUN_000679c4(*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
    dVar13 = (double)FUN_000679c4(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
    dVar15 = (double)FUN_000679c4(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4));
    dVar15 = dVar15 + dVar14 * 6.277101735386681e+57 + dVar12 * 3.402823669209385e+38 +
                      dVar13 * 1.8446744073709552e+19;
    in_fpscr = in_fpscr & 0xfffffff;
    if (dVar15 == 0.0) {
      dVar15 = 2.695953529101131e+67;
      lVar16 = -1;
    }
    else {
      dVar15 = 2.695953529101131e+67 / dVar15;
      dVar12 = round(dVar15);
      lVar16 = FUN_00067b30(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20));
    }
    *(double *)(param_2 + 0x178) = dVar15;
  }
  else {
    *(double *)(param_2 + 0x178) = dVar15;
    dVar12 = round(dVar15);
    lVar16 = FUN_00067b30(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20));
  }
  uVar6 = (uint)((ulonglong)lVar16 >> 0x20);
  uVar8 = (uint)lVar16;
  *(double *)(param_1 + 0x1e0) = dVar15;
  bVar11 = 0xde0b6b2 < uVar6;
  local_830[0] = '\0';
  local_830[1] = '\0';
  if (uVar6 == 0xde0b6b3) {
    bVar11 = 0xa763fffe < uVar8;
  }
  pcVar10 = (char *)(*(int *)(param_2 + 0x104) + 0x30);
  if (bVar11 && lVar16 != 999999999999999999) {
    uVar9 = FUN_00067ad0(uVar8,uVar6,0xa4c68000,0x38d7e);
    dVar12 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
    local_830[0] = 'E';
    local_830[1] = '\0';
    dVar12 = dVar12 / 1000.0;
LAB_0002d500:
    snprintf(pcVar10,8,"%.3g%s",dVar12,local_830);
  }
  else {
    bVar11 = 0x38d7d < uVar6;
    if (uVar6 == 0x38d7e) {
      bVar11 = 0xa4c67ffe < uVar8;
    }
    if (bVar11 && (uVar6 != 0x38d7e || uVar8 != 0xa4c67fff)) {
      uVar9 = FUN_00067ad0(uVar8,uVar6,0xd4a51000,0xe8);
      dVar12 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      local_830[0] = 'P';
      local_830[1] = '\0';
      dVar12 = dVar12 / 1000.0;
      goto LAB_0002d500;
    }
    bVar11 = 0xe7 < uVar6;
    if (uVar6 == 0xe8) {
      bVar11 = 0xd4a50ffe < uVar8;
    }
    if (bVar11 && lVar16 != 999999999999) {
      uVar9 = FUN_00067ad0(uVar8,uVar6,1000000000,0);
      dVar12 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      local_830[0] = 'T';
      local_830[1] = '\0';
      dVar12 = dVar12 / 1000.0;
      goto LAB_0002d500;
    }
    if (uVar6 != 0 || 999999999 < uVar8) {
      uVar9 = FUN_00067ad0(uVar8,uVar6,&DAT_000f4240,0);
      dVar12 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      local_830[0] = 'G';
      local_830[1] = '\0';
      dVar12 = dVar12 / 1000.0;
      goto LAB_0002d500;
    }
    if (uVar6 != 0 || 999999 < uVar8) {
      uVar9 = FUN_00067ad0(uVar8,uVar6,1000,0);
      dVar12 = (double)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      local_830[0] = 'M';
      local_830[1] = '\0';
      dVar12 = dVar12 / 1000.0;
      goto LAB_0002d500;
    }
    if (uVar6 != 0 || 999 < uVar8) {
      dVar12 = (double)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      local_830[0] = 'K';
      local_830[1] = '\0';
      dVar12 = dVar12 / 1000.0;
      goto LAB_0002d500;
    }
    snprintf(pcVar10,8,"%d%s",uVar8,local_830);
  }
  dVar12 = *(double *)(param_1 + 0x1d0);
  if (dVar12 == dVar15) {
    *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
LAB_0002d538:
    dVar12 = *(double *)(param_1 + 0x1d8);
  }
  else {
    if (dVar12 <= dVar15) {
      if (dVar12 != 0.0) goto LAB_0002d538;
      *(double *)(param_1 + 0x1d0) = dVar15;
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
    else {
      *(double *)(param_1 + 0x1d0) = dVar15;
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
    dVar12 = *(double *)(param_1 + 0x1d8);
  }
  if (dVar12 == dVar15) {
    *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  }
  else if (dVar12 < dVar15) {
    *(double *)(param_1 + 0x1d8) = dVar15;
    *(undefined4 *)(param_1 + 0x1ec) = 1;
  }
  FUN_00034828(param_2 + 0x108);
  return;
}

