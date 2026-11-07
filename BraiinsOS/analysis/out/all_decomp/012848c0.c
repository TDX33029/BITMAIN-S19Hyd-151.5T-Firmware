// FUN_012848c0 @ 012848c0 size=928 calls_out=8 calls_in=15
// strings: 

void FUN_012848c0(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int unaff_r4;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  piVar9 = (int *)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar9;
    bVar21 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar21);
  *piVar9 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    puVar13 = (uint *)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      uVar10 = *puVar13;
      bVar21 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar21);
    *puVar13 = uVar10 | *(uint *)(param_1 + 0x48);
    DataMemoryBarrier(0xb);
    if ((*(uint *)(param_1 + 0x48) & uVar10) == 0) {
      piVar9 = (int *)(param_1 + 0x70);
      do {
        if (*piVar9 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar9);
          goto LAB_01284948;
        }
        bVar21 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar21);
      *piVar9 = 1;
      DataMemoryBarrier(0xb);
LAB_01284948:
      uVar10 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = *(char *)(param_1 + 0x74);
      }
      else {
        uVar10 = FUN_015bf3f8();
        uVar10 = uVar10 ^ 1;
        cVar1 = *(char *)(param_1 + 0x74);
      }
      if (cVar1 != '\0') {
        uVar6 = (uint)local_34 >> 8;
        local_34 = (int *)CONCAT31((int3)uVar6,(char)uVar10);
        local_38 = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_0188ba30,&DAT_0188b9f0);
      }
      iVar4 = *(int *)(param_1 + 0x80);
      if (iVar4 != 0) {
        piVar19 = *(int **)(param_1 + 0x7c);
        piVar12 = piVar19;
        do {
          piVar20 = piVar12 + 3;
          piVar11 = (int *)(*piVar12 + 0xc);
          if (*piVar11 == 0) {
            DataMemoryBarrier(0xb);
LAB_012849c0:
            bVar21 = (bool)hasExclusiveAccess(piVar11);
            if (!bVar21) goto code_r0x012849cc;
            *piVar11 = 2;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar12 = (int *)(*(int *)(*piVar12 + 8) + 0x18);
            do {
              iVar5 = *piVar12;
              bVar21 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar21);
            *piVar12 = 1;
            if (iVar5 == -1) {
              FUN_016d6968(0xf0,piVar12,0x81,1);
            }
            goto LAB_0128499c;
          }
LAB_01284994:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_0128499c:
          piVar12 = piVar20;
        } while (piVar20 != piVar19 + iVar4 * 3);
      }
      local_38 = *(int **)(param_1 + 0x88);
      local_2c = *(int *)(param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      local_28 = 0;
      local_30 = param_1 + 0x84;
      local_34 = local_38 + local_2c * 3;
      if (local_2c != 0) {
        do {
          piVar11 = (int *)*local_38;
          piVar12 = local_38 + 1;
          local_38 = local_38 + 3;
          piVar19 = piVar11 + 3;
          if (*piVar19 == 0) {
            DataMemoryBarrier(0xb);
LAB_01284a8c:
            bVar21 = (bool)hasExclusiveAccess(piVar19);
            if (!bVar21) goto code_r0x01284a98;
            *piVar19 = *piVar12;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            piVar12 = (int *)(piVar11[2] + 0x18);
            do {
              iVar4 = *piVar12;
              bVar21 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar21);
            *piVar12 = 1;
            if (iVar4 == -1) {
              FUN_016d6968(0xf0,piVar12,0x81,1);
            }
            goto LAB_01284aac;
          }
LAB_01284aa4:
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
LAB_01284aac:
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar11;
            bVar21 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar21);
          *piVar11 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01284dec(piVar11);
          }
        } while (local_38 != local_34);
      }
      FUN_01286b68(&local_38);
      uVar6 = 0;
      bVar21 = *(int *)(param_1 + 0x80) == 0;
      if (bVar21) {
        uVar6 = *(uint *)(param_1 + 0x8c);
      }
      DataMemoryBarrier(0xb);
      if (bVar21) {
        uVar6 = (uint)(uVar6 == 0);
      }
      *(char *)(param_1 + 0x90) = (char)uVar6;
      DataMemoryBarrier(0xb);
      if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(param_1 + 0x74) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar9;
        bVar21 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar21);
      *piVar9 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
    }
    pcVar7 = (char *)(param_1 + 0xa8);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar21 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar21);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x98) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
      }
      FUN_01284260(param_1 + 0x54);
      FUN_01284260(param_1 + 0x78);
      if (param_1 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar10 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar6 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar5 = uVar6 - 0x10, uVar6 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar6 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar18 = *(int *)(iVar4 + 8) + 0x10;
      iVar16 = iVar5 * uVar10 + iVar5 + -4;
      iVar5 = iVar18 + iVar16;
      if (4 < uVar6) {
        if (uVar6 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar6 = *(uint *)(iVar5 + -4);
        if (uVar6 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar5 - param_1) < uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar5 - uVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar18 + iVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar4 + 0x14);
      uVar6 = 1 << uVar10;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar17 = *(uint *)(iVar4 + 0x10);
        uVar14 = *(uint *)(iVar4 + 0xc) | uVar17;
        if ((uVar6 & uVar14) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar17 == 0) || (uVar14 + uVar6 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar10);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar8;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar8 = uVar15;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar6 + uVar17;
          return;
        }
        puVar13 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar13);
          uVar14 = *puVar13;
          if (uVar17 != uVar14) goto LAB_016d409c;
          bVar21 = (bool)hasExclusiveAccess(puVar13);
        } while (!bVar21);
        *puVar13 = uVar6 + uVar17;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar17 == uVar14) {
          return;
        }
      } while( true );
    }
  }
  return;
code_r0x012849cc:
  if (*piVar11 != 0) goto LAB_01284994;
  goto LAB_012849c0;
code_r0x01284a98:
  if (*piVar19 != 0) goto LAB_01284aa4;
  goto LAB_01284a8c;
}

