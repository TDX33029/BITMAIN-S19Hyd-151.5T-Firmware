// FUN_0003b0b8 @ 0003b0b8  size=1992  callers=1
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0003b0b8(int param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *__format;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  uint local_834;
  char acStack_828 [2052];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_828,0x800,"Pushing work from pool %d to hash queue",**(int **)(param_1 + 0x104)
            );
    FUN_0001dd98(7,acStack_828,0);
  }
  *(undefined4 *)(param_1 + 0x150) = DAT_00068cac;
  FUN_00037ce0(param_1);
  __mutex = DAT_00068b30;
  *(int *)(*(int *)(param_1 + 0x104) + 0x44) = *(int *)(*(int *)(param_1 + 0x104) + 0x44) + 1;
  iVar1 = pthread_mutex_lock(__mutex);
  iVar15 = DAT_00068c14;
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0x111) == '\0') && (*(int *)(param_1 + 0x114) != 0)) {
      DAT_00068c88 = DAT_00068c88 + 1;
    }
    iVar1 = DAT_00074f70;
    if (*(char *)(DAT_00074f70 + 8) == '\0') {
      bVar20 = DAT_00068c14 == 0;
      uVar2 = *(byte *)(param_1 + 0x154) + 0x112410d + (uint)*(byte *)(param_1 + 0x157) * 0x1000000
              + (uint)*(byte *)(param_1 + 0x156) * 0x10000 +
              (uint)*(byte *)(param_1 + 0x155) * 0x100 ^ 0x7f76d;
      uVar9 = 0x9f49bac6 - uVar2 ^ uVar2 << 8;
      *(int *)(param_1 + 0x16c) = param_1 + 0x154;
      uVar5 = (-0x112410d - uVar2) - uVar9 ^ uVar9 >> 0xd;
      *(undefined4 *)(param_1 + 0x170) = 4;
      uVar2 = (uVar2 - uVar9) - uVar5 ^ uVar5 >> 0xc;
      uVar9 = (uVar9 - uVar5) - uVar2 ^ uVar2 << 0x10;
      uVar5 = (uVar5 - uVar2) - uVar9 ^ uVar9 >> 5;
      uVar2 = (uVar2 - uVar9) - uVar5 ^ uVar5 >> 3;
      uVar9 = (uVar9 - uVar5) - uVar2 ^ uVar2 << 10;
      uVar2 = (uVar5 - uVar2) - uVar9 ^ uVar9 >> 0xf;
      *(uint *)(param_1 + 0x174) = uVar2;
      if (bVar20) {
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x15c) = 0;
        DAT_00068c14 = param_1;
        puVar12 = malloc(0x2c);
        *(undefined4 **)(param_1 + 0x158) = puVar12;
        if (puVar12 == (undefined4 *)0x0) goto LAB_0003b878;
        memset(puVar12 + 3,0,0x20);
        puVar12[1] = 0x20;
        puVar12[4] = param_1 + 0x158;
        puVar12[2] = 5;
        puVar12[5] = 0x158;
        pvVar3 = calloc(0x180,1);
        *puVar12 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_0003b878;
        puVar12[10] = 0xa0111fe1;
        iVar15 = param_1;
      }
      else {
        uVar10 = *(undefined4 *)(iVar15 + 0x158);
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x158) = uVar10;
        *(int *)(param_1 + 0x15c) =
             *(int *)(*(int *)(iVar15 + 0x158) + 0x10) - *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
        *(int *)(*(int *)(*(int *)(iVar15 + 0x158) + 0x10) + 8) = param_1;
        *(int *)(*(int *)(iVar15 + 0x158) + 0x10) = param_1 + 0x158;
        puVar12 = *(undefined4 **)(iVar15 + 0x158);
      }
      puVar12[3] = puVar12[3] + 1;
      iVar1 = ((*(int **)(iVar15 + 0x158))[1] - 1U & uVar2) * 0xc;
      iVar7 = **(int **)(iVar15 + 0x158) + iVar1;
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
      uVar10 = *(undefined4 *)(**(int **)(iVar15 + 0x158) + iVar1);
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined4 *)(param_1 + 0x168) = uVar10;
      iVar7 = **(int **)(iVar15 + 0x158);
      if (*(int *)(iVar7 + iVar1) != 0) {
        *(int *)(*(int *)(iVar7 + iVar1) + 0xc) = param_1 + 0x158;
        iVar7 = **(int **)(iVar15 + 0x158);
      }
      *(int *)(iVar7 + iVar1) = param_1 + 0x158;
      iVar1 = **(int **)(DAT_00068c14 + 0x158) + iVar1;
      iVar15 = DAT_00068c14;
      if ((*(uint *)(iVar1 + 4) < (uint)((*(int *)(iVar1 + 8) + 1) * 10)) ||
         (iVar1 = *(int *)(param_1 + 0x158), *(int *)(iVar1 + 0x24) == 1)) {
LAB_0003b4f8:
        iVar1 = DAT_00074f70;
        iVar11 = iVar15 + 0x158;
        iVar7 = 1;
LAB_0003b500:
        iVar6 = 0;
        uVar2 = 0;
        iVar13 = iVar11;
        iVar11 = 0;
LAB_0003b510:
        uVar2 = uVar2 + 1;
        iVar19 = iVar7;
        if (iVar7 == 0) {
          iVar8 = 0;
          iVar16 = iVar13;
        }
        else {
          iVar16 = *(int *)(iVar13 + 8);
          if (iVar16 != 0) {
            iVar18 = *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
            iVar16 = iVar16 + iVar18;
            if (iVar16 != 0) {
              iVar8 = 1;
              do {
                if (iVar8 == iVar7) {
                  iVar19 = iVar8;
                  goto LAB_0003b564;
                }
                iVar16 = *(int *)(iVar16 + 8);
                iVar8 = iVar8 + 1;
              } while ((iVar16 != 0) && (iVar16 = iVar16 + iVar18, iVar16 != 0));
              goto LAB_0003b564;
            }
          }
          iVar8 = 1;
        }
LAB_0003b564:
LAB_0003b56c:
        do {
          iVar18 = iVar6;
          if (iVar8 != 0) goto LAB_0003b5ec;
LAB_0003b574:
          if (iVar19 == 0 || iVar16 == 0) {
            iVar13 = iVar16;
            if (iVar16 != 0) goto LAB_0003b510;
            if (iVar6 != 0) {
              *(undefined4 *)(iVar6 + 8) = 0;
            }
            if (1 < uVar2) {
              iVar7 = iVar7 << 1;
              if (iVar11 != 0) goto LAB_0003b500;
              iVar6 = iVar11;
            }
            *(int *)(*(int *)(iVar15 + 0x158) + 0x10) = iVar6;
            DAT_00068c14 = iVar11 - *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
            goto LAB_0003b708;
          }
          iVar18 = iVar6;
          iVar6 = iVar16;
          iVar17 = iVar8;
          if (*(int *)(iVar16 + 8) != 0) {
            iVar17 = *(int *)(iVar16 + 8) + *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
          }
LAB_0003b598:
          iVar16 = iVar17;
          iVar19 = iVar19 + -1;
          if (iVar18 == 0) goto LAB_0003b65c;
          *(int *)(iVar18 + 8) = iVar6 - *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
          if (iVar6 != 0) {
            while( true ) {
              iVar18 = iVar18 - *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
              while( true ) {
                *(int *)(iVar6 + 4) = iVar18;
                iVar18 = iVar6;
                if (iVar8 == 0) goto LAB_0003b574;
LAB_0003b5ec:
                iVar6 = iVar13;
                iVar13 = iVar6;
                if (iVar16 == 0 || iVar19 == 0) {
                  if (iVar6 != 0) {
                    iVar13 = *(int *)(iVar6 + 8);
                    if (iVar13 != 0) {
                      iVar13 = iVar13 + *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
                    }
                  }
                }
                else {
                  iVar14 = *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
                  if (0 < *(int *)(iVar6 + -iVar14 + 0x108) - *(int *)(iVar16 + -iVar14 + 0x108)) {
                    iVar17 = *(int *)(iVar16 + 8);
                    iVar6 = iVar16;
                    if (iVar17 != 0) {
                      iVar17 = iVar17 + iVar14;
                    }
                    goto LAB_0003b598;
                  }
                  if (iVar6 != 0) {
                    if (*(int *)(iVar6 + 8) == 0) {
                      iVar13 = 0;
                    }
                    else {
                      iVar13 = *(int *)(iVar6 + 8) + iVar14;
                    }
                  }
                }
                iVar8 = iVar8 + -1;
                if (iVar18 != 0) break;
LAB_0003b65c:
                iVar11 = iVar6;
                if (iVar6 == 0) goto LAB_0003b56c;
                iVar18 = 0;
              }
              if (iVar6 == 0) break;
              *(int *)(iVar18 + 8) = iVar6 - *(int *)(*(int *)(iVar15 + 0x158) + 0x14);
            }
            *(undefined4 *)(iVar18 + 8) = 0;
          }
        } while( true );
      }
      pvVar3 = calloc(*(int *)(iVar1 + 4) * 0x18,1);
      if (pvVar3 == (void *)0x0) {
LAB_0003b878:
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      iVar15 = 0;
      *(uint *)(iVar1 + 0x18) =
           (uint)((*(int *)(iVar1 + 4) * 2 - 1U & *(uint *)(iVar1 + 0xc)) != 0) +
           (*(uint *)(iVar1 + 0xc) >> (*(int *)(iVar1 + 8) + 1U & 0xff));
      *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x1c) = 0;
      piVar4 = *(int **)(param_1 + 0x158);
      uVar2 = piVar4[1];
      if (uVar2 != 0) {
        local_834 = 0;
        do {
          if (*(int *)(*piVar4 + iVar15) != 0) {
            iVar1 = *(int *)(*piVar4 + iVar15);
            while( true ) {
              iVar7 = *(int *)(iVar1 + 0x10);
              uVar5 = uVar2 * 2 - 1 & *(uint *)(iVar1 + 0x1c);
              uVar2 = *(int *)((int)pvVar3 + uVar5 * 0xc + 4) + 1;
              *(uint *)((int)pvVar3 + uVar5 * 0xc + 4) = uVar2;
              if ((uint)piVar4[6] < uVar2) {
                piVar4[7] = piVar4[7] + 1;
                uVar10 = FUN_0004a488(*(undefined4 *)((int)pvVar3 + uVar5 * 0xc + 4),
                                      *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x18));
                *(undefined4 *)((int)pvVar3 + uVar5 * 0xc + 8) = uVar10;
              }
              *(undefined4 *)(iVar1 + 0xc) = 0;
              *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)pvVar3 + uVar5 * 0xc);
              iVar11 = *(int *)((int)pvVar3 + uVar5 * 0xc);
              if (iVar11 != 0) {
                *(int *)(iVar11 + 0xc) = iVar1;
              }
              *(int *)((int)pvVar3 + uVar5 * 0xc) = iVar1;
              piVar4 = *(int **)(param_1 + 0x158);
              if (iVar7 == 0) break;
              uVar2 = piVar4[1];
              iVar1 = iVar7;
            }
            uVar2 = piVar4[1];
          }
          iVar15 = iVar15 + 0xc;
          local_834 = local_834 + 1;
        } while (local_834 < uVar2);
      }
      free((void *)*piVar4);
      *(int *)(*(int *)(param_1 + 0x158) + 4) = *(int *)(*(int *)(param_1 + 0x158) + 4) << 1;
      *(int *)(*(int *)(param_1 + 0x158) + 8) = *(int *)(*(int *)(param_1 + 0x158) + 8) + 1;
      **(undefined4 **)(param_1 + 0x158) = pvVar3;
      iVar15 = DAT_00068c14;
      iVar1 = *(int *)(param_1 + 0x158);
      if (*(uint *)(iVar1 + 0xc) >> 1 < *(uint *)(iVar1 + 0x1c)) {
        iVar7 = *(int *)(iVar1 + 0x20) + 1;
      }
      else {
        iVar7 = 0;
      }
      *(int *)(iVar1 + 0x20) = iVar7;
      if (1 < *(uint *)(*(int *)(param_1 + 0x158) + 0x20)) {
        *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x24) = 1;
      }
      iVar1 = DAT_00074f70;
      if (iVar15 != 0) goto LAB_0003b4f8;
    }
LAB_0003b708:
    pthread_cond_broadcast((pthread_cond_t *)(iVar1 + 0x28));
    iVar15 = pthread_mutex_unlock(DAT_00068b30);
    if (iVar15 == 0) {
      (*DAT_0006796c)();
      return;
    }
    piVar4 = __errno_location();
    iVar15 = *piVar4;
    __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar10 = 0x16e5;
  }
  else {
    piVar4 = __errno_location();
    iVar15 = *piVar4;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar10 = 0x16d3;
  }
  snprintf(acStack_828,0x800,__format,iVar15,"cgminer.c","hash_push",uVar10);
  FUN_0001dd98(3,acStack_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

