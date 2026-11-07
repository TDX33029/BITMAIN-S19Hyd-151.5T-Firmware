// FUN_000320b0 @ 000320b0  size=2024  callers=0
// program: cgminer


void FUN_000320b0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  time_t tVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  pthread_mutex_t *__mutex;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  char *pcVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_850 [8];
  int local_848 [2];
  int local_840 [2];
  char acStack_838 [2052];
  
  pthread_setcanceltype(1,(int *)0x0);
  FUN_00022ed0("Watchpool");
  FUN_00029c00();
  iVar14 = 0;
  FUN_00020788(auStack_850);
  while( true ) {
    iVar14 = iVar14 + 1;
    if (0x78 < iVar14) {
      iVar14 = 0;
    }
    FUN_000206d8(local_848);
    if (0 < DAT_00072e70) break;
LAB_0003223c:
    iVar11 = FUN_0002fbd8();
    if (*(char *)(iVar11 + 0x61) != '\0') {
      FUN_00031afc(0);
    }
    if ((DAT_00068af4 == 2) && (DAT_00073f2c * 0x3c < local_848[0] - DAT_00068c80)) {
      FUN_000206d8(&DAT_00068c80);
      FUN_00031afc(0);
    }
    FUN_00020794(auStack_850,5000);
    FUN_00020788(auStack_850);
  }
  iVar11 = 0;
LAB_0003219c:
  piVar10 = *(int **)(DAT_00072f14 + iVar11 * 4);
  if ((DAT_00068c60 == '\0') && (DAT_00072dc0 == 0)) {
    __mutex = (pthread_mutex_t *)(piVar10 + 0x2f);
    FUN_000206d8(local_840);
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 != 0) {
      piVar10 = __errno_location();
      uVar7 = 0x280b;
      pcVar8 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
      pcVar17 = "reap_curl";
      goto LAB_000327ec;
    }
    piVar5 = piVar10 + 0x56;
    piVar15 = (int *)*piVar5;
    if (piVar5 != piVar15) {
      iVar3 = piVar10[0x48];
      if (1 < iVar3) {
        iVar13 = 0;
        piVar6 = (int *)*piVar15;
        do {
          piVar9 = piVar6;
          if (300 < local_840[0] - piVar15[2]) {
            piVar10[0x48] = iVar3 + -1;
            iVar13 = iVar13 + 1;
            iVar3 = *piVar15;
            piVar6 = (int *)piVar15[1];
            *(int **)(iVar3 + 4) = piVar6;
            *piVar6 = iVar3;
            free(piVar15 + -1);
          }
          if (piVar5 == piVar9) {
            iVar3 = pthread_mutex_unlock(__mutex);
            if (iVar3 != 0) goto LAB_0003287c;
            (*DAT_0006796c)();
            if (((iVar13 != 0) && (DAT_000686f1 != '\0')) &&
               ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
              pcVar8 = "";
              if (iVar13 != 1) {
                pcVar8 = "s";
              }
              snprintf(acStack_838,0x800,"Reaped %d curl%s from pool %d",iVar13,pcVar8,*piVar10);
              FUN_0001dd98(7,acStack_838,0);
            }
            break;
          }
          iVar3 = piVar10[0x48];
          piVar6 = (int *)*piVar9;
          piVar15 = piVar9;
        } while (1 < iVar3);
      }
LAB_0003240c:
      tVar4 = time((time_t *)0x0);
      iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c64);
      if (iVar3 != 0) {
        piVar10 = __errno_location();
        uVar7 = 0x282f;
        pcVar8 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
        pcVar17 = "prune_stratum_shares";
        goto LAB_000327ec;
      }
      uVar2 = 0;
      if (DAT_00068c7c != (int *)0x0) {
        piVar9 = *(int **)(DAT_00068c7c[9] + 0x104);
        piVar6 = (int *)DAT_00068c7c[2];
        piVar15 = DAT_00068c7c;
        piVar5 = DAT_00068c7c;
        do {
          piVar1 = piVar6;
          DAT_00068c7c = piVar5;
          if ((piVar10 == piVar9) && (piVar15[0xb] + 0x78 < tVar4)) {
            iVar3 = piVar15[1];
            puVar16 = (undefined4 *)*piVar5;
            if (iVar3 == 0) {
              piVar6 = (int *)piVar15[2];
              if (piVar6 != (int *)0x0) {
                iVar13 = puVar16[5];
                if (piVar15 == (int *)(puVar16[4] - iVar13)) goto LAB_00032778;
LAB_0003276c:
                DAT_00068c7c = piVar6;
                goto LAB_000324c0;
              }
              free((void *)*puVar16);
              free((void *)*piVar5);
              DAT_00068c7c = piVar6;
            }
            else {
              iVar13 = puVar16[5];
              if (piVar15 == (int *)(puVar16[4] - iVar13)) {
LAB_00032778:
                puVar16[4] = iVar3 + iVar13;
                iVar3 = piVar15[1];
                if (iVar3 == 0) {
                  piVar6 = (int *)piVar15[2];
                  goto LAB_0003276c;
                }
                iVar13 = *(int *)(*piVar5 + 0x14);
              }
              *(int *)(iVar3 + iVar13 + 8) = piVar15[2];
              piVar6 = piVar5;
LAB_000324c0:
              if (piVar15[2] != 0) {
                *(int *)(piVar15[2] + *(int *)(*piVar6 + 0x14) + 4) = piVar15[1];
              }
              uVar12 = ((int *)*piVar6)[1] - 1U & piVar15[7];
              iVar3 = *(int *)*piVar6 + uVar12 * 0xc;
              *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
              if (*(int **)(*(int *)*piVar6 + uVar12 * 0xc) == piVar15) {
                *(int *)(*(int *)*piVar6 + uVar12 * 0xc) = piVar15[4];
              }
              if (piVar15[3] != 0) {
                *(int *)(piVar15[3] + 0x10) = piVar15[4];
              }
              if (piVar15[4] != 0) {
                *(int *)(piVar15[4] + 0xc) = piVar15[3];
              }
              *(int *)(*piVar6 + 0xc) = *(int *)(*piVar6 + 0xc) + -1;
            }
            uVar2 = uVar2 + 1;
            FUN_0002a76c(piVar15 + 9,"cgminer.c","prune_stratum_shares",0x2836);
            free(piVar15);
          }
          if (piVar1 == (int *)0x0) goto LAB_0003257c;
          piVar9 = *(int **)(piVar1[9] + 0x104);
          piVar6 = (int *)piVar1[2];
          piVar15 = piVar1;
          piVar5 = DAT_00068c7c;
        } while( true );
      }
      iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
      if (iVar3 == 0) {
        (*DAT_0006796c)();
        goto LAB_000321c0;
      }
      goto LAB_00032840;
    }
    iVar3 = pthread_mutex_unlock(__mutex);
    if (iVar3 == 0) {
      (*DAT_0006796c)();
      goto LAB_0003240c;
    }
LAB_0003287c:
    piVar10 = __errno_location();
    pcVar17 = "reap_curl";
    uVar7 = 0x281d;
    goto LAB_00032854;
  }
  goto LAB_000321c0;
LAB_0003257c:
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
  if (iVar3 != 0) {
LAB_00032840:
    piVar10 = __errno_location();
    pcVar17 = "prune_stratum_shares";
    uVar7 = 0x283c;
LAB_00032854:
    pcVar8 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
LAB_000327ec:
    snprintf(acStack_838,0x800,pcVar8,*piVar10,"cgminer.c",pcVar17,uVar7);
    FUN_0001dd98(3,acStack_838,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1);
  }
  (*DAT_0006796c)();
  if (uVar2 != 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
      snprintf(acStack_838,0x800,"Lost %d shares due to no stratum share response from pool %d",
               uVar2,*piVar10);
      FUN_0001dd98(4,acStack_838,0);
    }
    bVar18 = CARRY4(DAT_000762d8,uVar2);
    DAT_000762d8 = DAT_000762d8 + uVar2;
    piVar10[0x1e] = piVar10[0x1e] + uVar2;
    DAT_000762dc = DAT_000762dc + ((int)uVar2 >> 0x1f) + (uint)bVar18;
  }
LAB_000321c0:
  if (iVar14 == 0x78) {
    uVar2 = piVar10[0x26];
    uVar12 = piVar10[10];
    dVar19 = (double)FUN_0004accc(uVar12 - uVar2,
                                  piVar10[0xb] - (((int)uVar2 >> 0x1f) + (uint)(uVar12 < uVar2)));
    piVar10[0x26] = uVar12;
    dVar19 = (*(double *)(piVar10 + 0x24) + dVar19 * 0.63) / 1.63;
    *(double *)(piVar10 + 0x24) = dVar19;
    piVar10[0x27] = (int)(longlong)dVar19;
  }
  if ((piVar10[0x19] != 0) && ((char)piVar10[0x47] == '\0')) {
    iVar3 = FUN_0002cd4c(piVar10,1);
    if (iVar3 == 0) {
      FUN_000206d8(piVar10 + 0x22);
    }
    else {
      iVar3 = FUN_0002cce4(piVar10,(int)piVar10 + 0x61);
      if (iVar3 != 0) {
        FUN_0002fe1c(piVar10);
      }
    }
    if (((*(char *)((int)piVar10 + 0x61) == '\0') && (DAT_00068af4 == 0)) &&
       ((iVar13 = piVar10[1], iVar3 = FUN_0002fd70(), iVar13 < iVar3 &&
        (DAT_00068200 < local_848[0] - piVar10[0x22])))) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf(acStack_838,0x800,"Pool %d %s stable for >%d seconds",*piVar10,
                 (char *)piVar10[0x29],DAT_00068200);
        FUN_0001dd98(4,acStack_838,0);
      }
      FUN_00031afc(0);
    }
  }
  iVar11 = iVar11 + 1;
  if (DAT_00072e70 <= iVar11) goto LAB_0003223c;
  goto LAB_0003219c;
}

