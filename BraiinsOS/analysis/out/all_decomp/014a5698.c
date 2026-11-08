// FUN_014a5698 @ 014a5698 size=268 calls_out=2 calls_in=3
// strings: 

void FUN_014a5698(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar5 = *(int **)(param_1 + 0xc);
  while (piVar5 != (int *)0x0) {
    piVar10 = (int *)piVar5[5];
    iVar4 = 0;
    if (*piVar5 != 0) {
      iVar4 = piVar5[1];
    }
    if (*piVar5 != 0 && iVar4 != 0) {
      (**(code **)(iVar4 + 0x10))(piVar5 + 4,piVar5[2],piVar5[3]);
    }
    thunk_FUN_016d3fb4(piVar5);
    piVar5 = piVar10;
  }
  piVar5 = (int *)*(int *)(param_1 + 0x14);
  while (piVar5 != (int *)0x0) {
    iVar4 = *piVar5;
    piVar10 = (int *)piVar5[1];
    if (piVar10 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar5[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar5);
    piVar5 = (int *)iVar4;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar15 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar4 + 8) + 0x10;
      iVar12 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar14 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar7 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - param_1) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar4 + 0x14);
      uVar11 = 1 << uVar15;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar4 + 0x10);
        uVar8 = *(uint *)(iVar4 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar4,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar16 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar8 = *puVar16;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar11 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

