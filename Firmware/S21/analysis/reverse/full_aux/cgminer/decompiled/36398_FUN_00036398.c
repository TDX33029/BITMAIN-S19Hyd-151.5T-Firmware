// FUN_00036398 @ 00036398  size=2116  callers=0
// program: cgminer


void FUN_00036398(void)

{
  char cVar1;
  int iVar2;
  time_t tVar3;
  int *piVar4;
  undefined4 extraout_r1;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_840 [2];
  char acStack_838 [8];
  char local_830 [2052];
  
  pthread_setcanceltype(1,(int *)0x0);
  FUN_00022ed0("Watchdog");
  FUN_00029c00();
  FUN_000206d8(&DAT_00068c80);
  do {
    iVar9 = 200;
    do {
      usleep(10000);
      FUN_000346ac();
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    FUN_00034b64(0xffffffff,extraout_r1,0,0);
    FUN_000206d8(local_840);
    if (DAT_00072e6c == '\0') {
      if ((DAT_00076040 != '\0') || (DAT_00074f40 != '\0')) {
        iVar9 = FUN_000296a0();
        if (iVar9 == 0) {
          if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
            if (DAT_00076040 == '\0') {
LAB_00036b20:
              builtin_strncpy(local_830,"Terminating execution as planned",0x21);
              FUN_0001dd98(3,local_830,1);
                    /* WARNING: Subroutine does not return */
              FUN_0002c290(0,1);
            }
LAB_00036814:
            if (3 < DAT_00067848) goto LAB_00036820;
          }
          else {
            snprintf(local_830,0x800,"Pausing execution as per stop time %02d:%02d scheduled",
                     DAT_00074f4c,DAT_00074f48);
            FUN_0001dd98(4,local_830,0);
            if (DAT_00076040 == '\0') goto LAB_00036b20;
            if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00036814;
LAB_00036820:
            snprintf(local_830,0x800,"Will restart execution as scheduled at %02d:%02d",DAT_0007604c
                     ,DAT_00076048);
            FUN_0001dd98(4,local_830,0);
          }
          DAT_00072e6c = '\x01';
          iVar9 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fa0);
          if (iVar9 != 0) {
            piVar4 = __errno_location();
            snprintf(local_830,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
                     "cgminer.c","watchdog_thread",0x291c);
            goto LAB_00036b9c;
          }
          if (0 < DAT_00076238) {
            piVar6 = DAT_00073f30 + DAT_00076238;
            piVar4 = DAT_00073f30;
            do {
              piVar8 = piVar4 + 1;
              *(undefined1 *)(*piVar4 + 0x3c) = 1;
              piVar4 = piVar8;
            } while (piVar6 != piVar8);
          }
          iVar9 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fa0);
          if (iVar9 != 0) {
            piVar4 = __errno_location();
            snprintf(local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
                     "cgminer.c","watchdog_thread",0x2923);
LAB_00036b9c:
            FUN_0001dd98(3,local_830,1);
                    /* WARNING: Subroutine does not return */
            FUN_0002c290(1);
          }
          (*DAT_0006796c)();
        }
        else if (DAT_00072e6c != '\0') goto LAB_0003645c;
      }
    }
    else {
LAB_0003645c:
      if (((DAT_00076040 == '\0') && (DAT_00074f40 == '\0')) || (iVar9 = FUN_000296a0(), iVar9 != 0)
         ) {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
          if (DAT_00074f40 != '\0') {
LAB_00036a58:
            if (3 < DAT_00067848) goto LAB_00036a64;
          }
        }
        else {
          snprintf(local_830,0x800,"Restarting execution as per start time %02d:%02d scheduled",
                   DAT_0007604c,DAT_00076048);
          FUN_0001dd98(4,local_830,0);
          if (DAT_00074f40 != '\0') {
            if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00036a58;
LAB_00036a64:
            snprintf(local_830,0x800,"Will pause execution as scheduled at %02d:%02d",DAT_00074f4c,
                     DAT_00074f48);
            FUN_0001dd98(4,local_830,0);
          }
        }
        iVar9 = 0;
        DAT_00072e6c = '\0';
        if (0 < DAT_00076238) {
          do {
            piVar4 = (int *)FUN_0002f6e8(iVar9);
            cVar1 = DAT_000686f1;
            if (*(int *)(piVar4[9] + 0x20) != 1) {
              *(undefined1 *)(piVar4 + 0xf) = 0;
              if ((cVar1 != '\0') &&
                 (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                snprintf(local_830,0x800,"Pushing sem post to thread %d",*piVar4);
                FUN_0001dd98(7,local_830,0);
              }
              FUN_00022fd4(piVar4 + 4,"cgminer.c","watchdog_thread",0x293e);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < DAT_00076238);
        }
      }
    }
    if (0 < DAT_00074ff0) {
      iVar9 = 0;
      do {
        iVar2 = FUN_0002e054(iVar9);
        iVar10 = **(int **)(iVar2 + 0x98);
        if (iVar10 != 0) {
          (**(code **)(*(int *)(iVar2 + 4) + 0x20))();
          snprintf(acStack_838,8,"%s %d",*(char **)(*(int *)(iVar2 + 4) + 8),*(int *)(iVar2 + 8));
          cVar1 = DAT_00072da0;
          if ((*(char *)(iVar10 + 0x3d) == '\0') && (*(int *)(iVar2 + 0x20) != 1)) {
            iVar5 = *(int *)(iVar2 + 0x60);
            iVar7 = local_840[0] - *(int *)(iVar10 + 0x2c);
            if (iVar5 == 0) {
              if (0x78 < iVar7) {
                *(undefined8 *)(iVar2 + 0x30) = 0;
                *(undefined4 *)(iVar2 + 0x60) = 1;
                if (((cVar1 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
                  snprintf(local_830,0x800,"%s: Idle for more than 60 seconds, declaring SICK!",
                           acStack_838);
                  FUN_0001dd98(3,local_830,0);
                }
                FUN_000206d8(iVar10 + 0x34);
                FUN_00022bec(iVar2,3);
                if (DAT_0006820c != '\0') {
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
                    snprintf(local_830,0x800,"%s: Attempting to restart",acStack_838);
                    FUN_0001dd98(3,local_830,0);
                  }
LAB_000365ac:
                  if (*(int *)(iVar2 + 0x20) != 1) {
                    (**(code **)(*(int *)(iVar2 + 4) + 0x10))(iVar2);
                  }
                }
              }
            }
            else if (iVar7 < 0x78) {
              if ((iVar5 != 4) &&
                 (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)))) {
                snprintf(local_830,0x800,"%s: Recovered, declaring WELL!",acStack_838);
                FUN_0001dd98(3,local_830,0);
              }
              *(undefined4 *)(iVar2 + 0x60) = 0;
              tVar3 = time((time_t *)0x0);
              *(time_t *)(iVar2 + 0xf0) = tVar3;
            }
            else if (iVar5 == 1) {
              if (iVar7 < 0x259) {
                if (0x3c < local_840[0] - *(int *)(iVar10 + 0x34)) goto LAB_00036774;
              }
              else {
                *(undefined4 *)(iVar2 + 0x60) = 2;
                if (((cVar1 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
                  snprintf(local_830,0x800,
                           "%s: Not responded for more than 10 minutes, declaring DEAD!",acStack_838
                          );
                  FUN_0001dd98(3,local_830,0);
                }
                FUN_000206d8(iVar10 + 0x34);
                FUN_00022bec(iVar2,4);
              }
            }
            else if ((0x3c < local_840[0] - *(int *)(iVar10 + 0x34)) && (iVar5 == 2)) {
LAB_00036774:
              FUN_000206d8(iVar10 + 0x34);
              if (DAT_0006820c != '\0') goto LAB_000365ac;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < DAT_00074ff0);
    }
  } while( true );
}

