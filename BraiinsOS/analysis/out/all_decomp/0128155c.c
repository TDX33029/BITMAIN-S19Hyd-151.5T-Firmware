// FUN_0128155c @ 0128155c size=1076 calls_out=8 calls_in=9
// strings: 

void FUN_0128155c(int param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int unaff_r4;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  uint *local_2c;
  undefined4 local_28;
  
  if (param_1 == 0) {
    puVar15 = param_2 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      puVar15 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar5 | param_2[0x12];
      DataMemoryBarrier(0xb);
      if ((param_2[0x12] & uVar5) == 0) {
        FUN_01281220(param_2 + 0x1c);
      }
      puVar15 = param_2 + 0x2a;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        if (param_2[0x26] != 0) {
          thunk_FUN_016d3fb4(param_2[0x25]);
        }
        FUN_012806ec(param_2 + 0x15);
        FUN_012806ec(param_2 + 0x1e);
        goto LAB_012817e4;
      }
    }
  }
  else if (param_1 == 1) {
    puVar15 = param_2 + 0x20;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      puVar15 = param_2 + 8;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = uVar5 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar5 & 1) == 0) {
        FUN_01281220(param_2 + 0x10);
      }
      puVar15 = param_2 + 0x22;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        uVar10 = param_2[8];
        piVar11 = (int *)param_2[1];
        for (uVar5 = *param_2 & 0xfffffffe; uVar5 != (uVar10 & 0xfffffffe); uVar5 = uVar5 + 2) {
          uVar7 = (uVar5 & 0x3f) >> 1;
          if (uVar7 == 0x1f) {
            piVar6 = (int *)*piVar11;
            piVar18 = piVar11;
LAB_01281814:
            thunk_FUN_016d3fb4(piVar18);
            piVar11 = piVar6;
          }
          else {
            piVar18 = (int *)piVar11[uVar7 * 5 + 2];
            iVar19 = piVar11[uVar7 * 5 + 3];
            if (iVar19 != 0) {
              iVar16 = 0;
              do {
                iVar17 = *(int *)((int)piVar18 + (iVar16 * 7 + 4) * 4);
                if (iVar17 != -0x80000000) {
                  iVar12 = *(int *)((int)piVar18 + (iVar16 * 7 + 5) * 4);
                  iVar14 = *(int *)((int)piVar18 + (iVar16 * 7 + 6) * 4);
                  if (iVar14 != 0) {
                    puVar15 = (uint *)(iVar12 + 0x18);
                    do {
                      if ((*puVar15 & 0x7fffffff) == 0) {
                        uVar8 = puVar15[3];
                      }
                      else {
                        thunk_FUN_016d3fb4(puVar15[1]);
                        uVar8 = puVar15[3];
                      }
                      if ((uVar8 & 0x7fffffff) != 0) {
                        thunk_FUN_016d3fb4(puVar15[4]);
                      }
                      puVar15 = puVar15 + 0xc;
                      iVar14 = iVar14 + -1;
                    } while (iVar14 != 0);
                  }
                  if (iVar17 != 0) {
                    thunk_FUN_016d3fb4(iVar12);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 != iVar19);
            }
            piVar6 = piVar11;
            if (piVar11[uVar7 * 5 + 1] != 0) goto LAB_01281814;
          }
        }
        if (piVar11 != (int *)0x0) {
          thunk_FUN_016d3fb4(piVar11);
        }
        FUN_012806ec(param_2 + 0x12);
LAB_012817e4:
        if (param_2 == (uint *)0x0) {
          return;
        }
        iVar19 = FUN_016d3bc8();
        uVar5 = *(byte *)((int)param_2 + -3) & 0x1f;
        if (((*(byte *)(iVar19 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar19 + 0x14) & 0xfffff000, iVar16 = uVar10 - 0x10, uVar10 == 0)) {
          iVar16 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar19 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar10 = (uint)(*(byte *)((int)param_2 + -3) >> 5);
        iVar12 = *(int *)(iVar19 + 8) + 0x10;
        iVar17 = iVar16 * uVar5 + iVar16 + -4;
        iVar16 = iVar12 + iVar17;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar3)();
          }
          uVar10 = *(uint *)(iVar16 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar3)();
          }
          if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar3)();
          }
        }
        if ((uint)(iVar16 - (int)param_2) < uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar3)();
        }
        if (*(char *)(iVar16 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar3)();
        }
        if (*(char *)(iVar12 + iVar17) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar3)();
        }
        bVar4 = *(byte *)(iVar19 + 0x14);
        uVar10 = 1 << uVar5;
        *(undefined1 *)((int)param_2 + -3) = 0xff;
        *(undefined2 *)((int)param_2 + -2) = 0;
        do {
          uVar8 = *(uint *)(iVar19 + 0x10);
          uVar7 = *(uint *)(iVar19 + 0xc) | uVar8;
          if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar3)();
          }
          if ((uVar8 == 0) || (uVar7 + uVar10 == (2 << (bVar4 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar19,uVar5);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar9 = (undefined4 *)FUN_016d2bc8();
            uVar13 = *puVar9;
            FUN_016d6ac4(local_28,unaff_r4);
            *puVar9 = uVar13;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar19 + 0x10) = uVar10 + uVar8;
            return;
          }
          puVar15 = (uint *)(iVar19 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar7 = *puVar15;
            if (uVar8 != uVar7) goto LAB_016d409c;
            bVar2 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar2);
          *puVar15 = uVar10 + uVar8;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar8 == uVar7) {
            return;
          }
        } while( true );
      }
    }
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if (uVar5 == 1) {
      puVar15 = param_2 + 2;
      do {
        if (*puVar15 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(puVar15);
          goto LAB_01281728;
        }
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = 1;
      DataMemoryBarrier(0xb);
LAB_01281728:
      uVar5 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)param_2[3];
      }
      else {
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)param_2[3];
      }
      if (cVar1 != '\0') {
        uVar10 = (uint)local_28 >> 8;
        local_28 = CONCAT31((int3)uVar10,(char)uVar5);
        local_2c = puVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0188b990,&DAT_0188ba80);
      }
      if ((char)param_2[0x10] == '\0') {
        *(undefined1 *)(param_2 + 0x10) = 1;
        FUN_012813a0(param_2 + 4);
        FUN_012813a0(param_2 + 10);
      }
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
        *(undefined1 *)(param_2 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = 0;
      if (uVar5 == 2) {
        FUN_016d6968(0xf0,puVar15,0x81,1);
      }
      puVar15 = param_2 + 0x11;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar15;
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *(char *)puVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)uVar5 != '\0') {
        FUN_012806ec(param_2 + 4);
        FUN_012806ec(param_2 + 10);
        goto LAB_012817e4;
      }
    }
  }
  return;
}

