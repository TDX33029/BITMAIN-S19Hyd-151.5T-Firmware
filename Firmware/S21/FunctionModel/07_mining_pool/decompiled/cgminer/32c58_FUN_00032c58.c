// FUN_00032c58 @ 00032c58  size=1172  callers=2
// program: cgminer


int FUN_00032c58(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  char *__format;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  timespec local_828;
  int local_820;
  int local_81c;
  char local_818 [36];
  uint local_7f4;
  char acStack_7f0 [2008];
  
  iVar2 = pthread_mutex_lock(DAT_00068b30);
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    iVar2 = *piVar5;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar10 = 0x2049;
    goto LAB_00033074;
  }
  if ((DAT_00068c14 == 0) || (*(int *)(*(int *)(DAT_00068c14 + 0x158) + 0xc) == 0)) {
    iVar2 = 0;
    if (param_1 != 0) {
      do {
        FUN_000206d8(&local_820);
        local_828.tv_nsec = local_81c * 1000;
        local_828.tv_sec = local_820 + 10;
        pthread_cond_signal((pthread_cond_t *)&DAT_00072e78);
        iVar2 = pthread_cond_timedwait
                          ((pthread_cond_t *)(DAT_00074f70 + 0x28),DAT_00068b30,&local_828);
        if (((iVar2 != 0) && (DAT_00068b88 == '\0')) &&
           ((DAT_00068b88 = '\x01', DAT_00072da0 != '\0' ||
            ((DAT_000686f0 != '\0' || (3 < DAT_00067848)))))) {
          builtin_strncpy(local_818,"Waiting for work to be available fro",0x24);
          local_7f4._0_1_ = 'm';
          local_7f4._1_1_ = ' ';
          local_7f4._2_1_ = 'p';
          local_7f4._3_1_ = 'o';
          builtin_strncpy(acStack_7f0,"ols.",5);
          FUN_0001dd98(4,local_818,0);
        }
      } while ((DAT_00068c14 == 0) || (*(int *)(*(int *)(DAT_00068c14 + 0x158) + 0xc) == 0));
      goto LAB_00032d84;
    }
  }
  else {
LAB_00032d84:
    if (DAT_00068b88 != '\0') {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        builtin_strncpy(local_818,"Work available from pools, resuming.",0x24);
        local_7f4 = local_7f4 & 0xffffff00;
        FUN_0001dd98(4,local_818,0);
      }
      DAT_00068b88 = '\0';
      if (DAT_00068c14 == 0) {
LAB_00032f90:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x32f98);
        (*pcVar1)();
      }
    }
    iVar7 = DAT_00068c14;
    puVar3 = *(undefined4 **)(DAT_00068c14 + 0x158);
    if (((DAT_00068c88 < (int)puVar3[3]) && (*(char *)(DAT_00068c14 + 0x111) == '\0')) &&
       (*(int *)(DAT_00068c14 + 0x114) != 0)) {
      iVar6 = *(int *)(DAT_00068c14 + 0x160);
      do {
        iVar2 = iVar6;
        if (iVar2 == 0) goto LAB_00032f90;
      } while ((*(char *)(iVar2 + 0x111) == '\0') &&
              (iVar6 = *(int *)(iVar2 + 0x160), *(int *)(iVar2 + 0x114) != 0));
    }
    else {
      iVar2 = DAT_00068c14;
    }
    iVar6 = *(int *)(iVar2 + 0x15c);
    if (iVar6 == 0) {
      iVar4 = *(int *)(iVar2 + 0x160);
      if (iVar4 != 0) {
        iVar8 = puVar3[5];
        if (iVar2 == puVar3[4] - iVar8) goto LAB_00032fcc;
LAB_00032fc0:
        iVar7 = iVar4;
        DAT_00068c14 = iVar4;
        goto LAB_00032df0;
      }
      free((void *)*puVar3);
      free(*(void **)(DAT_00068c14 + 0x158));
      DAT_00068c14 = iVar4;
    }
    else {
      iVar8 = puVar3[5];
      if (iVar2 == puVar3[4] - iVar8) {
LAB_00032fcc:
        puVar3[4] = iVar6 + iVar8;
        iVar6 = *(int *)(iVar2 + 0x15c);
        if (iVar6 == 0) {
          iVar4 = *(int *)(iVar2 + 0x160);
          goto LAB_00032fc0;
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x158) + 0x14);
      }
      iVar4 = DAT_00068c14;
      *(undefined4 *)(iVar6 + iVar8 + 8) = *(undefined4 *)(iVar2 + 0x160);
      iVar7 = *(int *)(iVar2 + 0x160);
LAB_00032df0:
      piVar5 = *(int **)(iVar4 + 0x158);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + piVar5[5] + 4) = *(undefined4 *)(iVar2 + 0x15c);
        piVar5 = *(int **)(iVar4 + 0x158);
      }
      iVar7 = (piVar5[1] - 1U & *(uint *)(iVar2 + 0x174)) * 0xc;
      *(int *)(*piVar5 + iVar7 + 4) = *(int *)(*piVar5 + iVar7 + 4) + -1;
      puVar3 = (undefined4 *)(iVar4 + 0x158);
      bVar9 = *(int *)(*(int *)*puVar3 + iVar7) == iVar2 + 0x158;
      if (bVar9) {
        iVar4 = *(int *)(iVar2 + 0x168);
        *(int *)(*(int *)*puVar3 + iVar7) = iVar4;
      }
      iVar7 = *(int *)(iVar2 + 0x168);
      if (bVar9) {
        iVar4 = DAT_00068c14;
      }
      if (*(int *)(iVar2 + 0x164) != 0) {
        *(int *)(*(int *)(iVar2 + 0x164) + 0x10) = iVar7;
        iVar7 = *(int *)(iVar2 + 0x168);
      }
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar2 + 0x164);
      }
      *(int *)(*(int *)(iVar4 + 0x158) + 0xc) = *(int *)(*(int *)(iVar4 + 0x158) + 0xc) + -1;
    }
    if ((*(char *)(iVar2 + 0x111) == '\0') && (*(int *)(iVar2 + 0x114) != 0)) {
      DAT_00068c88 = DAT_00068c88 + -1;
    }
    pthread_cond_signal((pthread_cond_t *)&DAT_00072e78);
    pthread_cond_signal((pthread_cond_t *)(DAT_00074f70 + 0x28));
    DAT_00076090 = time((time_t *)0x0);
  }
  iVar7 = pthread_mutex_unlock(DAT_00068b30);
  if (iVar7 == 0) {
    (*DAT_0006796c)();
    return iVar2;
  }
  piVar5 = __errno_location();
  iVar2 = *piVar5;
  __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  uVar10 = 0x2091;
LAB_00033074:
  snprintf(local_818,0x800,__format,iVar2,"cgminer.c","hash_pop",uVar10);
  FUN_0001dd98(3,local_818,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

