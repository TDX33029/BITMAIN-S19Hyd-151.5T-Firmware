// FUN_00019e28 @ 00019e28  size=2236  callers=0
// program: cgminer


undefined4 FUN_00019e28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar15;
  double dVar16;
  char acStack_840 [2052];
  
  if (param_1 == 0 || param_2 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_840,0x800,"%s: input bad api param\n","get_devs_old");
      FUN_0001dd98(3,acStack_840,0);
    }
    return 0x80000002;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
  if (iVar1 != 0) {
    piVar9 = __errno_location();
    snprintf(acStack_840,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar9,
             "api_new.c","numascs",0x4f2);
    FUN_0001dd98(3,acStack_840,1);
    FUN_0003c34c(1);
  }
  if (DAT_00074ff0 < 1) {
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      goto LAB_0001a504;
    }
    iVar1 = 0;
LAB_0001a604:
    piVar9 = __errno_location();
    snprintf(acStack_840,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar9,
             "api_new.c","numascs",0x4f7);
    FUN_0001dd98(3,acStack_840,1);
    FUN_0003c34c(1);
  }
  else {
    iVar1 = 0;
    piVar9 = DAT_00074f78;
    do {
      piVar10 = piVar9 + 1;
      if ((**(int **)(*piVar9 + 4) == 2) || (**(int **)(*piVar9 + 4) == 3)) {
        iVar1 = iVar1 + 1;
      }
      piVar9 = piVar10;
    } while (DAT_00074f78 + DAT_00074ff0 != piVar10);
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar2 != 0) goto LAB_0001a604;
  }
  (*DAT_0006796c)();
  if (iVar1 != 0) {
    uVar13 = 0;
    FUN_00016a60(param_1,1,9,*(undefined4 *)(param_2 + 8));
    iVar2 = 0;
    uVar3 = FUN_00048fb8();
    do {
      uVar4 = FUN_00048c28();
      iVar5 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fd0);
      if (iVar5 != 0) {
        piVar9 = __errno_location();
        snprintf(acStack_840,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar9,
                 "api_new.c","ascdevice",0x4ff);
        FUN_0001dd98(3,acStack_840,1);
        FUN_0003c34c(1);
      }
      if (0 < DAT_00074ff0) {
        iVar5 = 0;
        iVar12 = 0;
        piVar9 = DAT_00074f78 + -1;
        do {
          piVar9 = piVar9 + 1;
          if ((**(int **)(*piVar9 + 4) == 2) || (**(int **)(*piVar9 + 4) == 3)) {
            iVar5 = iVar5 + 1;
          }
          if (iVar5 == uVar13 + 1) {
            iVar5 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
            if (iVar5 != 0) {
              piVar9 = __errno_location();
              snprintf(acStack_840,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                       *piVar9,"api_new.c","ascdevice",0x50c);
              FUN_0001dd98(3,acStack_840,1);
              FUN_0003c34c(1);
            }
            (*DAT_0006796c)();
            goto LAB_0001a068;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != DAT_00074ff0);
      }
      iVar5 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
      if (iVar5 != 0) {
        piVar9 = __errno_location();
        snprintf(acStack_840,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar9,
                 "api_new.c","ascdevice",0x507);
        FUN_0001dd98(3,acStack_840,1);
        FUN_0003c34c(1);
      }
      iVar12 = -1;
      (*DAT_0006796c)();
LAB_0001a068:
      iVar5 = FUN_0002e054(iVar12);
      uVar6 = FUN_00049408(uVar13,iVar2);
      FUN_00049a4c(uVar4,&DAT_0004b920,uVar6);
      uVar6 = FUN_000491bc(*(undefined4 *)(*(int *)(iVar5 + 4) + 8));
      FUN_00049a4c(uVar4,&DAT_0004b924,uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 8),*(int *)(iVar5 + 8) >> 0x1f);
      FUN_00049a4c(uVar4,&DAT_0004b704,uVar6);
      if (*(int *)(iVar5 + 0x20) == 1) {
        puVar7 = &DAT_0004b3f8;
      }
      else {
        puVar7 = &DAT_0004b3e8;
      }
      uVar6 = FUN_000491bc(puVar7);
      FUN_00049a4c(uVar4,"Enabled",uVar6);
      uVar6 = FUN_000491bc("Alive");
      FUN_00049a4c(uVar4,"Status",uVar6);
      dVar15 = *(double *)(iVar5 + 0xb0) * 100.0;
      FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      dVar15 = (double)FUN_0004accc();
      uVar6 = FUN_0004948c(SUB84(dVar15 / 100.0,0));
      FUN_00049a4c(uVar4,"Tenperature",uVar6);
      dVar15 = *(double *)(iVar5 + 0x50);
      uVar6 = FUN_0002a800(iVar5);
      dVar15 = (dVar15 / (double)CONCAT44(extraout_s1,uVar6)) * 100.0;
      FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      dVar15 = (double)FUN_0004accc();
      uVar6 = FUN_0004948c(SUB84(dVar15 / 100.0,0));
      FUN_00049a4c(uVar4,"MHS av",uVar6);
      snprintf(acStack_840,0x18,"MHS %ds",DAT_000681e0);
      dVar15 = *(double *)(iVar5 + 0x30) * 100.0;
      FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      dVar15 = (double)FUN_0004accc();
      uVar6 = FUN_0004948c(SUB84(dVar15 / 100.0,0));
      FUN_00049a4c(uVar4,acStack_840,uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0x24),*(int *)(iVar5 + 0x24) >> 0x1f);
      FUN_00049a4c(uVar4,"Accepted",uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0x28),*(int *)(iVar5 + 0x28) >> 0x1f);
      FUN_00049a4c(uVar4,"Rejected",uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0x2c),*(int *)(iVar5 + 0x2c) >> 0x1f);
      FUN_00049a4c(uVar4,"Hardware Errors",uVar6);
      dVar15 = *(double *)(iVar5 + 0x58) * 100.0;
      FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      dVar15 = (double)FUN_0004accc();
      uVar6 = FUN_0004948c(SUB84(dVar15 / 100.0,0));
      FUN_00049a4c(uVar4,"Utility",uVar6);
      if (*(int *)(iVar5 + 0xdc) < 1) {
        iVar12 = -1;
        iVar8 = -1;
      }
      else {
        iVar8 = *(int *)(iVar5 + 0xd8);
        iVar12 = iVar8 >> 0x1f;
      }
      uVar6 = FUN_00049408(iVar8,iVar12);
      FUN_00049a4c(uVar4,"Last Share Pool",uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0xdc),*(int *)(iVar5 + 0xdc) >> 0x1f);
      FUN_00049a4c(uVar4,"Last Share Time",uVar6);
      dVar15 = *(double *)(iVar5 + 0x50) * 100.0;
      FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
      dVar15 = (double)FUN_0004accc();
      uVar6 = FUN_0004948c(SUB84(dVar15 / 100.0,0));
      FUN_00049a4c(uVar4,"Total MH",uVar6);
      uVar6 = FUN_00049408(*(undefined4 *)(iVar5 + 0xc0),*(undefined4 *)(iVar5 + 0xc4));
      FUN_00049a4c(uVar4,"Diff1 Work",uVar6);
      FUN_0004ad64(*(undefined4 *)(iVar5 + 200),*(undefined4 *)(iVar5 + 0xcc));
      uVar6 = FUN_00049408();
      FUN_00049a4c(uVar4,"Difficulty Accepted",uVar6);
      FUN_0004ad64(*(undefined4 *)(iVar5 + 0xd0),*(undefined4 *)(iVar5 + 0xd4));
      uVar6 = FUN_00049408();
      FUN_00049a4c(uVar4,"Difficulty Rejected",uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0xe8),*(int *)(iVar5 + 0xe8) >> 0x1f);
      FUN_00049a4c(uVar4,"Last Share Difficulty",uVar6);
      uVar6 = FUN_00049408(*(int *)(iVar5 + 0xe8),*(int *)(iVar5 + 0xe8) >> 0x1f);
      FUN_00049a4c(uVar4,"Last Valid Work",uVar6);
      uVar11 = *(uint *)(iVar5 + 0x2c);
      if (*(uint *)(iVar5 + 0xc0) + uVar11 == 0 &&
          *(int *)(iVar5 + 0xc4) + ((int)uVar11 >> 0x1f) +
          (uint)CARRY4(*(uint *)(iVar5 + 0xc0),uVar11) == 0) {
        uVar6 = 0;
      }
      else {
        dVar16 = (double)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
        dVar15 = (double)FUN_0004accc();
        dVar15 = (dVar16 / dVar15) * 100.0;
        FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
        dVar15 = (double)FUN_0004accc();
        uVar6 = SUB84(dVar15 / 100.0,0);
      }
      uVar6 = FUN_0004948c(uVar6);
      FUN_00049a4c(uVar4,"Device Hardware%",uVar6);
      if (*(int *)(iVar5 + 0xc0) == 0 && *(int *)(iVar5 + 0xc4) == 0) {
        uVar6 = 0;
      }
      else {
        dVar15 = (double)FUN_0004accc();
        dVar15 = (*(double *)(iVar5 + 0xd0) / dVar15) * 100.0;
        FUN_0004ad64(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
        dVar15 = (double)FUN_0004accc();
        uVar6 = SUB84(dVar15 / 100.0,0);
      }
      uVar6 = FUN_0004948c(uVar6);
      FUN_00049a4c(uVar4,"Device Rejected%",uVar6);
      uVar6 = FUN_0002a800(iVar5);
      FUN_0004ad64(uVar6,extraout_s1_00);
      uVar6 = FUN_00049408();
      FUN_00049a4c(uVar4,"Device Elapsed",uVar6);
      FUN_00049f0c(uVar3,uVar4);
      bVar14 = 0xfffffffe < uVar13;
      uVar13 = uVar13 + 1;
      iVar2 = iVar2 + (uint)bVar14;
      if (iVar1 <= (int)uVar13) {
        FUN_00049a4c(param_1,&DAT_0004b9d8,uVar3);
        uVar3 = FUN_00049408(1,0);
        FUN_00049a4c(param_1,&DAT_0004b220,uVar3);
        return 0;
      }
    } while( true );
  }
LAB_0001a504:
  FUN_00016a60(param_1,0,10,"No ASCs");
  return 0;
}

