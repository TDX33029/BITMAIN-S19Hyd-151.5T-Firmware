// FUN_00031afc @ 00031afc  size=1060  callers=6
// program: cgminer


void FUN_00031afc(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *__format;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char acStack_828 [2052];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar1 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00076170);
    piVar4 = DAT_00072f14;
    iVar5 = DAT_00072e70;
    piVar3 = DAT_00068b84;
    iVar1 = DAT_00068af4;
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      __format = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
      uVar10 = 0x14be;
      goto LAB_00031e60;
    }
    iVar7 = *DAT_00068b84;
    iVar2 = 0;
    if (param_1 == (int *)0x0) {
      switch(DAT_00068af4) {
      case 0:
      case 3:
      case 4:
switchD_00031bd0_caseD_0:
switchD_00031f54_caseD_0:
        if (0 < iVar5) goto switchD_00031bb0_caseD_0;
      default:
switchD_00031f54_default:
        piVar6 = (int *)DAT_00072f14[iVar7];
        break;
      case 1:
      case 2:
LAB_00031dc4:
        iVar1 = DAT_00072e70;
        if (1 < DAT_00072e70) {
          iVar2 = 1;
          iVar5 = iVar7;
          do {
            iVar5 = iVar5 + 1;
            if (iVar5 < iVar1) {
              piVar6 = piVar4 + iVar5;
            }
            else {
              iVar5 = 0;
              piVar6 = piVar4;
            }
            piVar6 = (int *)*piVar6;
            if ((*(char *)((int)piVar6 + 0x61) == '\0') && (piVar6[0x19] == 1)) {
              uVar11 = FUN_00029010(piVar6);
              piVar4 = (int *)((ulonglong)uVar11 >> 0x20);
              if ((int)uVar11 == 0) goto LAB_00031c90;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != iVar1);
        }
switchD_00031bb0_default:
        piVar6 = (int *)piVar4[iVar7];
      }
    }
    else {
      iVar8 = param_1[1];
      if (iVar8 != 0) {
        if (DAT_00072e70 < 1) {
          param_1[1] = 0;
          switch(iVar1) {
          case 0:
          case 3:
          case 4:
            goto switchD_00031f54_caseD_0;
          case 1:
          case 2:
            goto switchD_00031f54_caseD_1;
          default:
            goto switchD_00031f54_default;
          }
        }
        piVar9 = DAT_00072f14 + DAT_00072e70;
        piVar6 = DAT_00072f14;
        while( true ) {
          iVar5 = *(int *)(*piVar6 + 4);
          if (iVar5 < iVar8) {
            *(int *)(*piVar6 + 4) = iVar5 + 1;
          }
          if (piVar9 == piVar6 + 1) break;
          iVar8 = param_1[1];
          piVar6 = piVar6 + 1;
        }
        param_1[1] = 0;
        switch(iVar1) {
        case 0:
        case 3:
        case 4:
          goto switchD_00031bb0_caseD_0;
        case 1:
        case 2:
          goto switchD_00031bb0_caseD_1;
        default:
          goto switchD_00031bb0_default;
        }
      }
      switch(DAT_00068af4) {
      case 0:
      case 3:
      case 4:
        goto switchD_00031bd0_caseD_0;
      case 1:
      case 2:
switchD_00031f54_caseD_1:
        piVar4 = DAT_00072f14;
switchD_00031bb0_caseD_1:
        if (*(char *)((int)param_1 + 0x61) != '\0') goto LAB_00031dc4;
        piVar6 = (int *)piVar4[*param_1];
        break;
      default:
        goto switchD_00031f54_default;
      }
    }
    goto LAB_00031c90;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  uVar10 = 0x14be;
LAB_00031e4c:
  __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
  goto LAB_00031e60;
switchD_00031bb0_caseD_0:
  do {
    iVar1 = FUN_00029148(iVar2);
    if ((*(char *)(iVar1 + 0x61) == '\0') && (*(int *)(iVar1 + 100) == 1)) {
      uVar11 = FUN_00029010(iVar1,iVar1);
      if ((int)uVar11 == 0) {
        piVar6 = (int *)DAT_00072f14[*(int *)((ulonglong)uVar11 >> 0x20)];
        goto LAB_00031c90;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < DAT_00072e70);
  piVar6 = (int *)DAT_00072f14[iVar7];
LAB_00031c90:
  DAT_00068b84 = piVar6;
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
  if (iVar1 != 0) {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    __format = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar10 = 0x150f;
    goto LAB_00031e60;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
  if (iVar1 == 0) {
    (*DAT_0006796c)();
    if ((piVar3 != piVar6) && (1 < DAT_00068af4 - 3U)) {
      if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (3 < DAT_00067848)))) {
        snprintf(acStack_828,0x800,"Switching to pool %d %s",*piVar6,(char *)piVar6[0x29]);
        FUN_0001dd98(4,acStack_828,0);
      }
      FUN_000317d4(piVar3);
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c18);
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      iVar1 = *piVar3;
      uVar10 = 0x1517;
      goto LAB_00031e4c;
    }
    pthread_cond_broadcast((pthread_cond_t *)&DAT_00068c30);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c18);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return;
    }
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    uVar10 = 0x1519;
  }
  else {
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    uVar10 = 0x150f;
  }
  __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
LAB_00031e60:
  snprintf(acStack_828,0x800,__format,iVar1,"cgminer.c","switch_pools",uVar10);
  FUN_0001dd98(3,acStack_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

