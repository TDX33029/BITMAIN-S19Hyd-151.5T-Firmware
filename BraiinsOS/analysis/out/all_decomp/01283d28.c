// FUN_01283d28 @ 01283d28 size=1252 calls_out=8 calls_in=15
// strings: 

void FUN_01283d28(uint *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int unaff_r4;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  undefined4 local_28;
  
  puVar15 = param_1 + 0x20;
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *puVar15;
    bVar2 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar2);
  *puVar15 = uVar5 - 1;
  DataMemoryBarrier(0xb);
  if (uVar5 == 1) {
    puVar15 = param_1 + 8;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar5 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 1) == 0) {
      puVar15 = param_1 + 0x10;
      do {
        if (*puVar15 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(puVar15);
          goto LAB_01283dac;
        }
        bVar2 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar2);
      *puVar15 = 1;
      DataMemoryBarrier(0xb);
LAB_01283dac:
      uVar5 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)param_1[0x11];
      }
      else {
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)param_1[0x11];
      }
      if (cVar1 != '\0') {
        uVar6 = (uint)local_34 >> 8;
        local_34 = (uint *)CONCAT31((int3)uVar6,(char)uVar5);
        local_38 = puVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0188b9c0,&DAT_0188b9f0);
      }
      uVar6 = param_1[0x14];
      if (uVar6 != 0) {
        piVar12 = (int *)param_1[0x13];
        piVar20 = piVar12;
        do {
          piVar13 = piVar20 + 3;
          piVar11 = (int *)(*piVar20 + 0xc);
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_01283e28:
            bVar2 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar2) goto code_r0x01283e34;
            *piVar11 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar20 = (int *)(*(int *)(*piVar20 + 8) + 0x18);
            do {
              iVar8 = *piVar20;
              bVar2 = (bool)hasExclusiveAccess(piVar20);
            } while (!bVar2);
            *piVar20 = 1;
            if (iVar8 == -1) {
              FUN_016d6968(0xf0,piVar20,0x81,1);
            }
            goto LAB_01283e04;
          }
LAB_01283dfc:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01283e04:
          piVar20 = piVar13;
        } while (piVar13 != piVar12 + uVar6 * 3);
      }
      local_28 = 0;
      local_38 = (uint *)param_1[0x16];
      local_2c = param_1[0x17];
      param_1[0x17] = 0;
      local_30 = param_1 + 0x15;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar20 = (int *)*local_38;
          puVar22 = local_38 + 1;
          local_38 = local_38 + 3;
          puVar7 = (uint *)(piVar20 + 3);
          if (*puVar7 == 0) {
            DataMemoryBarrier(0xb);
LAB_01283ef8:
            bVar2 = (bool)hasExclusiveAccess(puVar7);
            if (!bVar2) goto code_r0x01283f04;
            *puVar7 = *puVar22;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar12 = (int *)(piVar20[2] + 0x18);
            do {
              iVar8 = *piVar12;
              bVar2 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar2);
            *piVar12 = 1;
            if (iVar8 == -1) {
              FUN_016d6968(0xf0,piVar12,0x81,1);
            }
            goto LAB_01283f18;
          }
LAB_01283f10:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01283f18:
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar20;
            bVar2 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar2);
          *piVar20 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01284dec(piVar20);
          }
        } while (local_38 != local_34);
      }
      FUN_01286b68(&local_38);
      uVar6 = 0;
      if (param_1[0x14] == 0) {
        uVar6 = param_1[0x17];
      }
      DataMemoryBarrier(0xb);
      if (param_1[0x14] == 0) {
        uVar6 = (uint)(uVar6 == 0);
      }
      *(char *)(param_1 + 0x18) = (char)uVar6;
      DataMemoryBarrier(0xb);
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
        *(undefined1 *)(param_1 + 0x11) = 1;
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
    }
    puVar15 = param_1 + 0x22;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar15;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *(char *)puVar15 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)uVar5 != '\0') {
      puVar15 = (uint *)param_1[1];
      uVar5 = *param_1 & 0xfffffffe;
      uVar6 = param_1[8] & 0xfffffffe;
      if (uVar5 != uVar6) {
        do {
          while (uVar9 = (uVar5 & 0x3f) >> 1, uVar9 == 0x1f) {
            puVar22 = puVar15;
            puVar15 = (uint *)*puVar15;
LAB_0128407c:
            thunk_FUN_016d3fb4(puVar22);
            uVar5 = uVar5 + 2;
            if (uVar5 == uVar6) goto LAB_01284030;
          }
          uVar23 = puVar15[uVar9 * 5 + 2];
          uVar24 = puVar15[uVar9 * 5 + 3];
          uVar17 = 0;
          while (uVar17 != uVar24) {
            uVar21 = uVar17 + 1;
            iVar16 = uVar23 + uVar17 * 0x1c;
            iVar8 = *(int *)(iVar16 + 0x10);
            uVar17 = uVar21;
            if (iVar8 != -0x80000000) {
              iVar18 = *(int *)(iVar16 + 0x14);
              iVar19 = *(int *)(iVar16 + 0x18);
              if (iVar19 != 0) {
                puVar22 = (uint *)(iVar18 + 0x18);
                do {
                  if ((*puVar22 & 0x7fffffff) == 0) {
                    uVar21 = puVar22[3];
                  }
                  else {
                    thunk_FUN_016d3fb4(puVar22[1]);
                    uVar21 = puVar22[3];
                  }
                  if ((uVar21 & 0x7fffffff) != 0) {
                    thunk_FUN_016d3fb4(puVar22[4]);
                  }
                  puVar22 = puVar22 + 0xc;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
                iVar8 = *(int *)(iVar16 + 0x10);
              }
              if (iVar8 != 0) {
                thunk_FUN_016d3fb4(iVar18);
              }
            }
          }
          if (puVar15[uVar9 * 5 + 1] != 0) {
            puVar22 = (uint *)puVar15[uVar9 * 5 + 2];
            goto LAB_0128407c;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 != uVar6);
      }
LAB_01284030:
      if (puVar15 != (uint *)0x0) {
        thunk_FUN_016d3fb4(puVar15);
      }
      FUN_01284260(param_1 + 0x12);
      if (param_1 == (uint *)0x0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar5 = *(byte *)((int)param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar6 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar16 = uVar6 - 0x10, uVar6 == 0)) {
        iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar6 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
      iVar19 = *(int *)(iVar8 + 8) + 0x10;
      iVar18 = iVar16 * uVar5 + iVar16 + -4;
      iVar16 = iVar19 + iVar18;
      if (4 < uVar6) {
        if (uVar6 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar6 = *(uint *)(iVar16 + -4);
        if (uVar6 < 5) {
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
      if ((uint)(iVar16 - (int)param_1) < uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar16 - uVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar19 + iVar18) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar4 = *(byte *)(iVar8 + 0x14);
      uVar6 = 1 << uVar5;
      *(undefined1 *)((int)param_1 + -3) = 0xff;
      *(undefined2 *)((int)param_1 + -2) = 0;
      do {
        uVar17 = *(uint *)(iVar8 + 0x10);
        uVar9 = *(uint *)(iVar8 + 0xc) | uVar17;
        if ((uVar6 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar17 == 0) || (uVar9 + uVar6 == (2 << (bVar4 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar8,uVar5);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar10 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar10;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar10 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar6 + uVar17;
          return;
        }
        puVar15 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar9 = *puVar15;
          if (uVar17 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar2);
        *puVar15 = uVar6 + uVar17;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar17 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x01283e34:
  if (*piVar11 != 0) goto LAB_01283dfc;
  goto LAB_01283e28;
code_r0x01283f04:
  if (*puVar7 != 0) goto LAB_01283f10;
  goto LAB_01283ef8;
}

