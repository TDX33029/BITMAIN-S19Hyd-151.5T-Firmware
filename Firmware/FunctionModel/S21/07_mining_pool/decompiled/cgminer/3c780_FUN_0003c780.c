// FUN_0003c780 @ 0003c780  size=2480  callers=1
// program: cgminer


undefined4 FUN_0003c780(int param_1)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  time_t tVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *__c;
  int iVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint local_30;
  
  uVar12 = 0x9e3779b9;
  pbVar11 = *(byte **)(*(int *)(param_1 + 4) + 8);
  sVar1 = strlen((char *)pbVar11);
  uVar8 = 0xfeedbeef;
  uVar2 = 0x9e3779b9;
  uVar20 = sVar1;
  if (sVar1 < 0xc) {
    pbVar14 = pbVar11;
  }
  else {
    pbVar18 = pbVar11;
    do {
      uVar20 = uVar20 - 0xc;
      iVar13 = (uint)pbVar18[6] * 0x10000 + (uint)pbVar18[5] * 0x100 + (uint)pbVar18[4] +
               (uint)pbVar18[7] * 0x1000000 + uVar12;
      uVar8 = (uint)pbVar18[10] * 0x10000 + (uint)pbVar18[9] * 0x100 + (uint)pbVar18[8] +
              (uint)pbVar18[0xb] * 0x1000000 + uVar8;
      uVar12 = ((((uint)pbVar18[2] * 0x10000 + (uint)pbVar18[1] * 0x100 + (uint)*pbVar18 +
                 (uint)pbVar18[3] * 0x1000000) - iVar13) - uVar8) + uVar2 ^ uVar8 >> 0xd;
      uVar2 = (iVar13 - uVar8) - uVar12 ^ uVar12 << 8;
      uVar9 = (uVar8 - uVar12) - uVar2 ^ uVar2 >> 0xd;
      uVar12 = (uVar12 - uVar2) - uVar9 ^ uVar9 >> 0xc;
      uVar8 = (uVar2 - uVar9) - uVar12 ^ uVar12 << 0x10;
      uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar8 >> 5;
      uVar2 = (uVar12 - uVar8) - uVar9 ^ uVar9 >> 3;
      uVar12 = (uVar8 - uVar9) - uVar2 ^ uVar2 << 10;
      uVar8 = (uVar9 - uVar2) - uVar12 ^ uVar12 >> 0xf;
      pbVar14 = pbVar18 + 0xc;
      pbVar18 = pbVar18 + 0xc;
    } while (0xb < uVar20);
  }
  uVar8 = sVar1 + uVar8;
  switch(uVar20) {
  case 0xb:
    uVar8 = uVar8 + (uint)pbVar14[10] * 0x1000000;
  case 10:
    uVar8 = uVar8 + (uint)pbVar14[9] * 0x10000;
  case 9:
    uVar8 = uVar8 + (uint)pbVar14[8] * 0x100;
  case 8:
    uVar12 = uVar12 + (uint)pbVar14[7] * 0x1000000;
  case 7:
    uVar12 = uVar12 + (uint)pbVar14[6] * 0x10000;
  case 6:
    uVar12 = uVar12 + (uint)pbVar14[5] * 0x100;
  case 5:
    uVar12 = uVar12 + pbVar14[4];
  case 4:
    uVar2 = uVar2 + (uint)pbVar14[3] * 0x1000000;
  case 3:
    uVar2 = uVar2 + (uint)pbVar14[2] * 0x10000;
  case 2:
    uVar2 = uVar2 + (uint)pbVar14[1] * 0x100;
  case 1:
    uVar2 = uVar2 + *pbVar14;
  }
  uVar20 = (uVar2 - uVar12) - uVar8 ^ uVar8 >> 0xd;
  uVar2 = (uVar12 - uVar8) - uVar20 ^ uVar20 << 8;
  uVar12 = (uVar8 - uVar20) - uVar2 ^ uVar2 >> 0xd;
  uVar8 = (uVar20 - uVar2) - uVar12 ^ uVar12 >> 0xc;
  uVar20 = (uVar2 - uVar12) - uVar8 ^ uVar8 << 0x10;
  uVar12 = (uVar12 - uVar8) - uVar20 ^ uVar20 >> 5;
  uVar2 = (uVar8 - uVar20) - uVar12 ^ uVar12 >> 3;
  uVar20 = (uVar20 - uVar12) - uVar2 ^ uVar2 << 10;
  uVar20 = (uVar12 - uVar2) - uVar20 ^ uVar20 >> 0xf;
  if (DAT_0006a240 != (byte *)0x0) {
    piVar6 = *(int **)(DAT_0006a240 + 8);
    iVar13 = *(int *)(*piVar6 + (piVar6[1] - 1U & uVar20) * 0xc);
    if (iVar13 != 0) {
      iVar17 = piVar6[5];
      do {
        iVar13 = iVar13 - iVar17;
        if (iVar13 == 0) break;
        if (((*(uint *)(iVar13 + 0x24) == uVar20) && (*(size_t *)(iVar13 + 0x20) == sVar1)) &&
           (iVar3 = memcmp(*(void **)(iVar13 + 0x1c),pbVar11,sVar1), iVar3 == 0)) {
          iVar17 = *(int *)(iVar13 + 4) + 1;
          *(int *)(iVar13 + 4) = iVar17;
          *(int *)(param_1 + 8) = iVar17;
          goto LAB_0003ca5c;
        }
        iVar13 = *(int *)(iVar13 + 0x18);
      } while (iVar13 != 0);
    }
  }
  pbVar14 = (byte *)FUN_0001f860(0x28,"cgminer.c","add_cgpu",0x2c73);
  FUN_00023324(pbVar14,*(undefined4 *)(*(int *)(param_1 + 4) + 8),4,"cgminer.c","add_cgpu",0x2c74);
  pbVar14[4] = 0;
  pbVar14[5] = 0;
  pbVar14[6] = 0;
  pbVar14[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  sVar1 = strlen((char *)pbVar14);
  uVar12 = 0x9e3779b9;
  uVar2 = 0xfeedbeef;
  uVar8 = 0x9e3779b9;
  uVar20 = sVar1;
  pbVar11 = pbVar14;
  if (sVar1 < 0xc) {
    pbVar18 = pbVar14;
  }
  else {
    do {
      uVar20 = uVar20 - 0xc;
      iVar13 = (uint)pbVar11[6] * 0x10000 + (uint)pbVar11[5] * 0x100 + (uint)pbVar11[4] +
               (uint)pbVar11[7] * 0x1000000 + uVar12;
      uVar2 = (uint)pbVar11[10] * 0x10000 + (uint)pbVar11[9] * 0x100 + (uint)pbVar11[8] +
              (uint)pbVar11[0xb] * 0x1000000 + uVar2;
      uVar9 = ((((uint)pbVar11[2] * 0x10000 + (uint)pbVar11[1] * 0x100 + (uint)*pbVar11 +
                (uint)pbVar11[3] * 0x1000000) - iVar13) - uVar2) + uVar8 ^ uVar2 >> 0xd;
      uVar8 = (iVar13 - uVar2) - uVar9 ^ uVar9 << 8;
      uVar12 = (uVar2 - uVar9) - uVar8 ^ uVar8 >> 0xd;
      uVar10 = (uVar9 - uVar8) - uVar12 ^ uVar12 >> 0xc;
      uVar2 = (uVar8 - uVar12) - uVar10 ^ uVar10 << 0x10;
      uVar9 = (uVar12 - uVar10) - uVar2 ^ uVar2 >> 5;
      uVar8 = (uVar10 - uVar2) - uVar9 ^ uVar9 >> 3;
      uVar12 = (uVar2 - uVar9) - uVar8 ^ uVar8 << 10;
      uVar2 = (uVar9 - uVar8) - uVar12 ^ uVar12 >> 0xf;
      pbVar18 = pbVar11 + 0xc;
      pbVar11 = pbVar11 + 0xc;
    } while (0xb < uVar20);
  }
  uVar2 = sVar1 + uVar2;
  switch(uVar20) {
  case 0xb:
    uVar2 = uVar2 + (uint)pbVar18[10] * 0x1000000;
  case 10:
    uVar2 = uVar2 + (uint)pbVar18[9] * 0x10000;
  case 9:
    uVar2 = uVar2 + (uint)pbVar18[8] * 0x100;
  case 8:
    uVar12 = uVar12 + (uint)pbVar18[7] * 0x1000000;
  case 7:
    uVar12 = uVar12 + (uint)pbVar18[6] * 0x10000;
  case 6:
    uVar12 = uVar12 + (uint)pbVar18[5] * 0x100;
  case 5:
    uVar12 = uVar12 + pbVar18[4];
  case 4:
    uVar8 = uVar8 + (uint)pbVar18[3] * 0x1000000;
  case 3:
    uVar8 = uVar8 + (uint)pbVar18[2] * 0x10000;
  case 2:
    uVar8 = uVar8 + (uint)pbVar18[1] * 0x100;
  case 1:
    uVar8 = uVar8 + *pbVar18;
  default:
    *(byte **)(pbVar14 + 0x1c) = pbVar14;
    uVar9 = (uVar8 - uVar12) - uVar2 ^ uVar2 >> 0xd;
    uVar8 = (uVar12 - uVar2) - uVar9 ^ uVar9 << 8;
    uVar20 = (uVar2 - uVar9) - uVar8 ^ uVar8 >> 0xd;
    uVar12 = (uVar9 - uVar8) - uVar20 ^ uVar20 >> 0xc;
    uVar2 = (uVar8 - uVar20) - uVar12 ^ uVar12 << 0x10;
    uVar20 = (uVar20 - uVar12) - uVar2 ^ uVar2 >> 5;
    uVar8 = (uVar12 - uVar2) - uVar20 ^ uVar20 >> 3;
    uVar2 = (uVar2 - uVar20) - uVar8 ^ uVar8 << 10;
    puVar15 = (undefined4 *)((uVar20 - uVar8) - uVar2 ^ uVar2 >> 0xf);
    *(undefined4 **)(pbVar14 + 0x24) = puVar15;
    sVar1 = strlen((char *)pbVar14);
    pbVar11 = DAT_0006a240;
    *(size_t *)(pbVar14 + 0x20) = sVar1;
    __c = (undefined4 *)0x0;
    if (pbVar11 == (byte *)0x0) goto LAB_0003d0c8;
    uVar7 = *(undefined4 *)(pbVar11 + 8);
    pbVar14[0x10] = 0;
    pbVar14[0x11] = 0;
    pbVar14[0x12] = 0;
    pbVar14[0x13] = 0;
    pbVar18 = pbVar14 + 8;
    *(undefined4 *)(pbVar14 + 8) = uVar7;
    *(int *)(pbVar14 + 0xc) =
         *(int *)(*(int *)(pbVar11 + 8) + 0x10) - *(int *)(*(int *)(pbVar11 + 8) + 0x14);
    *(byte **)(*(int *)(*(int *)(pbVar11 + 8) + 0x10) + 8) = pbVar14;
    *(byte **)(*(int *)(pbVar11 + 8) + 0x10) = pbVar18;
  }
  do {
    *(int *)(*(int *)(pbVar11 + 8) + 0xc) = *(int *)(*(int *)(pbVar11 + 8) + 0xc) + 1;
    iVar13 = ((*(int **)(pbVar11 + 8))[1] - 1U & (uint)puVar15) * 0xc;
    iVar17 = **(int **)(pbVar11 + 8) + iVar13;
    *(int *)(iVar17 + 4) = *(int *)(iVar17 + 4) + 1;
    uVar7 = *(undefined4 *)(**(int **)(pbVar11 + 8) + iVar13);
    pbVar14[0x14] = 0;
    pbVar14[0x15] = 0;
    pbVar14[0x16] = 0;
    pbVar14[0x17] = 0;
    *(undefined4 *)(pbVar14 + 0x18) = uVar7;
    iVar17 = **(int **)(pbVar11 + 8);
    if (*(int *)(iVar17 + iVar13) != 0) {
      *(byte **)(*(int *)(iVar17 + iVar13) + 0xc) = pbVar18;
      iVar17 = **(int **)(pbVar11 + 8);
    }
    *(byte **)(iVar17 + iVar13) = pbVar18;
    if (((uint)((*(int *)(**(int **)(pbVar11 + 8) + iVar13 + 8) + 1) * 10) <=
         *(uint *)(**(int **)(pbVar11 + 8) + iVar13 + 4)) &&
       (*(int *)(*(int *)(pbVar14 + 8) + 0x24) != 1)) {
      pvVar5 = calloc(*(int *)(*(int *)(pbVar14 + 8) + 4) * 0x18,1);
      if (pvVar5 == (void *)0x0) {
LAB_0003d180:
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      iVar13 = *(int *)(pbVar14 + 8);
      iVar17 = 0;
      *(uint *)(iVar13 + 0x18) =
           (uint)((*(int *)(iVar13 + 4) * 2 - 1U & *(uint *)(iVar13 + 0xc)) != 0) +
           (*(uint *)(iVar13 + 0xc) >> (*(int *)(iVar13 + 8) + 1U & 0xff));
      *(undefined4 *)(*(int *)(pbVar14 + 8) + 0x1c) = 0;
      piVar6 = *(int **)(pbVar14 + 8);
      uVar20 = piVar6[1];
      if (uVar20 != 0) {
        local_30 = 0;
        do {
          if (*(int *)(*piVar6 + iVar17) != 0) {
            iVar13 = *(int *)(*piVar6 + iVar17);
            while( true ) {
              iVar16 = *(int *)(iVar13 + 0x10);
              uVar2 = uVar20 * 2 - 1 & *(uint *)(iVar13 + 0x1c);
              uVar20 = *(int *)((int)pvVar5 + uVar2 * 0xc + 4) + 1;
              *(uint *)((int)pvVar5 + uVar2 * 0xc + 4) = uVar20;
              iVar3 = *(int *)(pbVar14 + 8);
              if (*(uint *)(iVar3 + 0x18) < uVar20) {
                *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
                uVar7 = FUN_0004a488(*(undefined4 *)((int)pvVar5 + uVar2 * 0xc + 4),
                                     *(undefined4 *)(*(int *)(pbVar14 + 8) + 0x18));
                *(undefined4 *)((int)pvVar5 + uVar2 * 0xc + 8) = uVar7;
              }
              *(undefined4 *)(iVar13 + 0xc) = 0;
              *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)((int)pvVar5 + uVar2 * 0xc);
              iVar3 = *(int *)((int)pvVar5 + uVar2 * 0xc);
              if (iVar3 != 0) {
                *(int *)(iVar3 + 0xc) = iVar13;
              }
              *(int *)((int)pvVar5 + uVar2 * 0xc) = iVar13;
              piVar6 = *(int **)(pbVar14 + 8);
              if (iVar16 == 0) break;
              uVar20 = piVar6[1];
              iVar13 = iVar16;
            }
            uVar20 = piVar6[1];
          }
          iVar17 = iVar17 + 0xc;
          local_30 = local_30 + 1;
        } while (local_30 < uVar20);
      }
      free((void *)*piVar6);
      *(int *)(*(int *)(pbVar14 + 8) + 4) = *(int *)(*(int *)(pbVar14 + 8) + 4) << 1;
      *(int *)(*(int *)(pbVar14 + 8) + 8) = *(int *)(*(int *)(pbVar14 + 8) + 8) + 1;
      **(undefined4 **)(pbVar14 + 8) = pvVar5;
      iVar13 = *(int *)(pbVar14 + 8);
      if (*(uint *)(iVar13 + 0xc) >> 1 < *(uint *)(iVar13 + 0x1c)) {
        iVar17 = *(int *)(iVar13 + 0x20) + 1;
      }
      else {
        iVar17 = 0;
      }
      *(int *)(iVar13 + 0x20) = iVar17;
      if (1 < *(uint *)(*(int *)(pbVar14 + 8) + 0x20)) {
        *(undefined4 *)(*(int *)(pbVar14 + 8) + 0x24) = 1;
      }
    }
LAB_0003ca5c:
    iVar13 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar13 != 0) {
      FUN_0002cb64("add_cgpu",0x2c79);
LAB_0003d0b0:
                    /* WARNING: Subroutine does not return */
      FUN_0002d70c("add_cgpu",0x2c7b);
    }
    puVar15 = &DAT_00074ff0;
    __c = &DAT_00074f78;
    DAT_00074f78 = FUN_0001f978(DAT_00074f78,(DAT_00074ff0 + DAT_0006a244 + 2) * 4,"cgminer.c",
                                "add_cgpu",0x2c7a);
    iVar13 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fd0);
    if (iVar13 != 0) goto LAB_0003d0b0;
    pbVar14 = (byte *)&DAT_0006796c;
    (*DAT_0006796c)();
    iVar13 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar13 == 0) {
      tVar4 = time((time_t *)0x0);
      *(time_t *)(param_1 + 0xe8) = tVar4;
      iVar13 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
      if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0002cc1c("add_cgpu",0x2c7f);
      }
      (*DAT_0006796c)();
      if (DAT_00075020 == '\0') {
        iVar13 = DAT_00074ff0;
        DAT_00074ff0 = DAT_00074ff0 + 1;
      }
      else {
        iVar13 = DAT_0006a244 + DAT_00074ff0;
        DAT_0006a244 = DAT_0006a244 + 1;
      }
      *(int *)(DAT_00074f78 + iVar13 * 4) = param_1;
      if (DAT_0006a248 < DAT_00074ff0 - DAT_0007607c) {
        DAT_0006a248 = DAT_00074ff0 - DAT_0007607c;
      }
      return 1;
    }
    FUN_0002cbc0("add_cgpu",0x2c7d);
LAB_0003d0c8:
    *(undefined4 **)(pbVar14 + 0x10) = __c;
    *(undefined4 **)(pbVar14 + 0xc) = __c;
    DAT_0006a240 = pbVar14;
    pvVar5 = malloc(0x2c);
    *(void **)(pbVar14 + 8) = pvVar5;
    if (pvVar5 == (void *)0x0) goto LAB_0003d180;
    memset(pvVar5,(int)__c,0x2c);
    pbVar18 = pbVar14 + 8;
    *(byte **)(*(int *)pbVar18 + 0x10) = pbVar18;
    *(undefined4 *)(*(int *)(pbVar14 + 8) + 4) = 0x20;
    *(undefined4 *)(*(int *)(pbVar14 + 8) + 8) = 5;
    *(undefined4 *)(*(int *)(pbVar14 + 8) + 0x14) = 8;
    puVar19 = *(undefined4 **)(pbVar14 + 8);
    pvVar5 = malloc(0x180);
    *puVar19 = pvVar5;
    if ((void *)**(undefined4 **)(pbVar14 + 8) == (void *)0x0) goto LAB_0003d180;
    memset((void *)**(undefined4 **)(pbVar14 + 8),(int)__c,0x180);
    *(undefined4 *)(*(int *)(pbVar14 + 8) + 0x28) = 0xa0111fe1;
    pbVar11 = pbVar14;
  } while( true );
}

