// FUN_000328bc @ 000328bc  size=904  callers=1
// program: cgminer


void FUN_000328bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *__format;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint param3;
  int *piVar9;
  bool bVar10;
  double dVar11;
  undefined4 uVar12;
  char acStack_830 [2052];
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c64);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar12 = 0x1d10;
    goto LAB_00032bc4;
  }
  if (DAT_00068c7c != (int *)0x0) {
    dVar11 = 0.0;
    piVar5 = *(int **)(DAT_00068c7c[9] + 0x104);
    param3 = 0;
    piVar7 = (int *)DAT_00068c7c[2];
    piVar3 = DAT_00068c7c;
    piVar9 = DAT_00068c7c;
    do {
      piVar1 = piVar7;
      DAT_00068c7c = piVar9;
      if (piVar5 == param_1) {
        iVar2 = piVar3[1];
        puVar4 = (undefined4 *)*piVar9;
        if (iVar2 == 0) {
          piVar7 = (int *)piVar3[2];
          if (piVar7 != (int *)0x0) {
            iVar6 = puVar4[5];
            if (piVar3 == (int *)(puVar4[4] - iVar6)) goto LAB_00032b28;
LAB_00032b40:
            piVar9 = piVar7;
            DAT_00068c7c = piVar7;
            goto LAB_0003296c;
          }
          free((void *)*puVar4);
          free((void *)*piVar9);
          DAT_00068c7c = piVar7;
        }
        else {
          iVar6 = puVar4[5];
          if (piVar3 == (int *)(puVar4[4] - iVar6)) {
LAB_00032b28:
            puVar4[4] = iVar2 + iVar6;
            iVar2 = piVar3[1];
            if (iVar2 == 0) {
              piVar7 = (int *)piVar3[2];
              goto LAB_00032b40;
            }
            iVar6 = *(int *)(*piVar9 + 0x14);
          }
          *(int *)(iVar2 + iVar6 + 8) = piVar3[2];
          piVar7 = (int *)piVar3[2];
LAB_0003296c:
          piVar5 = (int *)*piVar9;
          if (piVar7 != (int *)0x0) {
            *(int *)((int)piVar7 + piVar5[5] + 4) = piVar3[1];
            piVar5 = (int *)*piVar9;
          }
          uVar8 = piVar5[1] - 1U & piVar3[7];
          iVar2 = *piVar5 + uVar8 * 0xc;
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
          if (*(int **)(*(int *)*piVar9 + uVar8 * 0xc) == piVar3) {
            *(int *)(*(int *)*piVar9 + uVar8 * 0xc) = piVar3[4];
          }
          iVar2 = piVar3[4];
          if (piVar3[3] != 0) {
            *(int *)(piVar3[3] + 0x10) = iVar2;
            iVar2 = piVar3[4];
          }
          if (iVar2 != 0) {
            *(int *)(iVar2 + 0xc) = piVar3[3];
          }
          *(int *)(*piVar9 + 0xc) = *(int *)(*piVar9 + 0xc) + -1;
        }
        param3 = param3 + 1;
        dVar11 = dVar11 + *(double *)(piVar3[9] + 0x178);
        FUN_0002a76c(piVar3 + 9,"cgminer.c","clear_stratum_shares",0x1d18);
        param_1[0xbb] = param_1[0xbb] + -1;
        free(piVar3);
      }
      if (piVar1 == (int *)0x0) goto LAB_00032a34;
      piVar5 = *(int **)(piVar1[9] + 0x104);
      piVar7 = (int *)piVar1[2];
      piVar3 = piVar1;
      piVar9 = DAT_00068c7c;
    } while( true );
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
  if (iVar2 == 0) {
    (*DAT_0006796c)();
    return;
  }
  goto LAB_00032be8;
LAB_00032a34:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
  if (iVar2 == 0) {
    (*DAT_0006796c)();
    if (param3 != 0) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf(acStack_830,0x800,"Lost %d shares due to stratum disconnect on pool %d",param3,
                 *param_1);
        FUN_0001dd98(4,acStack_830,0);
      }
      DAT_00072f08 = DAT_00072f08 + dVar11;
      bVar10 = CARRY4(DAT_000762d8,param3);
      DAT_000762d8 = DAT_000762d8 + param3;
      DAT_000762dc = DAT_000762dc + ((int)param3 >> 0x1f) + (uint)bVar10;
      *(double *)(param_1 + 0x16) = *(double *)(param_1 + 0x16) + dVar11;
      param_1[0x1e] = param_1[0x1e] + param3;
    }
    return;
  }
LAB_00032be8:
  piVar3 = __errno_location();
  iVar2 = *piVar3;
  __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
  uVar12 = 0x1d1e;
LAB_00032bc4:
  snprintf(acStack_830,0x800,__format,iVar2,"cgminer.c","clear_stratum_shares",uVar12);
  FUN_0001dd98(3,acStack_830,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

