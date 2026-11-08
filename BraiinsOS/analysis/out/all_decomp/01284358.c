// FUN_01284358 @ 01284358 size=1268 calls_out=7 calls_in=15
// strings: 

void FUN_01284358(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  uint *puVar20;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 == 1) {
    piVar11 = param_1 + 2;
    do {
      if (*piVar11 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar11);
        goto LAB_012843ac;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
LAB_012843ac:
    uVar17 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)param_1[3];
    }
    else {
      uVar17 = FUN_015bf3f8();
      uVar17 = uVar17 ^ 1;
      cVar1 = (char)param_1[3];
    }
    if (cVar1 != '\0') {
      uVar12 = (uint)local_34 >> 8;
      local_34 = (int *)CONCAT31((int3)uVar12,(char)uVar17);
      local_38 = piVar11;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0188bb50,&DAT_0188ba80);
    }
    if ((char)param_1[0x10] == '\0') {
      iVar5 = param_1[6];
      piVar18 = (int *)param_1[5];
      *(undefined1 *)(param_1 + 0x10) = 1;
      if (iVar5 != 0) {
        piVar16 = piVar18;
        do {
          piVar19 = piVar16 + 3;
          piVar8 = (int *)(*piVar16 + 0xc);
          if (*piVar8 == 0) {
            DataMemoryBarrier(0xb);
LAB_01284434:
            bVar2 = (bool)hasExclusiveAccess(piVar8);
            if (!bVar2) goto code_r0x01284440;
            *piVar8 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar16 = (int *)(*(int *)(*piVar16 + 8) + 0x18);
            do {
              iVar6 = *piVar16;
              bVar2 = (bool)hasExclusiveAccess(piVar16);
            } while (!bVar2);
            *piVar16 = 1;
            if (iVar6 == -1) {
              FUN_016d6968(0xf0,piVar16,0x81,1);
            }
            goto LAB_01284410;
          }
LAB_01284408:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01284410:
          piVar16 = piVar19;
        } while (piVar19 != piVar18 + iVar5 * 3);
      }
      local_38 = (int *)param_1[8];
      local_2c = param_1[9];
      param_1[9] = 0;
      local_28 = 0;
      local_30 = param_1 + 7;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar8 = (int *)*local_38;
          piVar18 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar16 = piVar8 + 3;
          if (*piVar16 == 0) {
            DataMemoryBarrier(0xb);
LAB_01284500:
            bVar2 = (bool)hasExclusiveAccess(piVar16);
            if (!bVar2) goto code_r0x0128450c;
            *piVar16 = *piVar18;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar18 = (int *)(piVar8[2] + 0x18);
            do {
              iVar5 = *piVar18;
              bVar2 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar2);
            *piVar18 = 1;
            if (iVar5 == -1) {
              FUN_016d6968(0xf0,piVar18,0x81,1);
            }
            goto LAB_01284520;
          }
LAB_01284518:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01284520:
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01284dec(piVar8);
          }
        } while (local_38 != local_34);
      }
      FUN_01286b68(&local_38);
      iVar5 = param_1[0xc];
      if (iVar5 != 0) {
        piVar16 = (int *)param_1[0xb];
        piVar18 = piVar16;
        do {
          piVar19 = piVar18 + 3;
          piVar8 = (int *)(*piVar18 + 0xc);
          if (*piVar8 == 0) {
            DataMemoryBarrier(0xb);
LAB_012845e4:
            bVar2 = (bool)hasExclusiveAccess(piVar8);
            if (!bVar2) goto code_r0x012845f0;
            *piVar8 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar18 = (int *)(*(int *)(*piVar18 + 8) + 0x18);
            do {
              iVar6 = *piVar18;
              bVar2 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar2);
            *piVar18 = 1;
            if (iVar6 == -1) {
              FUN_016d6968(0xf0,piVar18,0x81,1);
            }
            goto LAB_012845c0;
          }
LAB_012845b8:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_012845c0:
          piVar18 = piVar19;
        } while (piVar19 != piVar16 + iVar5 * 3);
      }
      local_38 = (int *)param_1[0xe];
      local_2c = param_1[0xf];
      param_1[0xf] = 0;
      local_28 = 0;
      local_30 = param_1 + 0xd;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar8 = (int *)*local_38;
          piVar18 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar16 = piVar8 + 3;
          if (*piVar16 == 0) {
            DataMemoryBarrier(0xb);
LAB_012846b0:
            bVar2 = (bool)hasExclusiveAccess(piVar16);
            if (!bVar2) goto code_r0x012846bc;
            *piVar16 = *piVar18;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar18 = (int *)(piVar8[2] + 0x18);
            do {
              iVar5 = *piVar18;
              bVar2 = (bool)hasExclusiveAccess(piVar18);
            } while (!bVar2);
            *piVar18 = 1;
            if (iVar5 == -1) {
              FUN_016d6968(0xf0,piVar18,0x81,1);
            }
            goto LAB_012846d0;
          }
LAB_012846c8:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_012846d0:
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar8;
            bVar2 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar2);
          *piVar8 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01284dec(piVar8);
          }
        } while (local_38 != local_34);
      }
      FUN_01286b68(&local_38);
    }
    if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
    }
    piVar11 = param_1 + 0x11;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *(char *)piVar11 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar5 != '\0') {
      FUN_01284260(param_1 + 4);
      FUN_01284260(param_1 + 10);
      if (param_1 == (int *)0x0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar17 = *(byte *)((int)param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar12 - 0x10, uVar12 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar5 + 8) + 0x10;
      iVar13 = iVar6 * uVar17 + iVar6 + -4;
      iVar6 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar12 = *(uint *)(iVar6 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar6 - (int)param_1) < uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar6 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar5 + 0x14);
      uVar12 = 1 << uVar17;
      *(undefined1 *)((int)param_1 + -3) = 0xff;
      *(undefined2 *)((int)param_1 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar5 + 0x10);
        uVar9 = *(uint *)(iVar5 + 0xc) | uVar14;
        if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar5,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar7;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar7 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar20 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar20);
          uVar9 = *puVar20;
          if (uVar14 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar2);
        *puVar20 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x01284440:
  if (*piVar8 != 0) goto LAB_01284408;
  goto LAB_01284434;
code_r0x0128450c:
  if (*piVar16 != 0) goto LAB_01284518;
  goto LAB_01284500;
code_r0x012845f0:
  if (*piVar8 != 0) goto LAB_012845b8;
  goto LAB_012845e4;
code_r0x012846bc:
  if (*piVar16 != 0) goto LAB_012846c8;
  goto LAB_012846b0;
}

