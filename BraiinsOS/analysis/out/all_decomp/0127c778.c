// FUN_0127c778 @ 0127c778 size=404 calls_out=3 calls_in=15
// strings: 

void FUN_0127c778(int param_1)

{
  byte bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar14 = *(uint *)(param_1 + 0xc);
  iVar11 = *(int *)(param_1 + 0x10);
  uVar8 = (uint)(iVar11 != 0);
  if (uVar14 != 0 && iVar11 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x14);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar11);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(iVar11);
    }
  }
  piVar12 = *(int **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (piVar12 != (int *)0x0) {
    if ((uVar14 & uVar8) != 0) {
      *(undefined1 *)(piVar12 + 4) = 1;
    }
    piVar2 = piVar12 + 3;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar2;
      bVar16 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar16);
    *piVar2 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      piVar2 = (int *)(piVar12[2] + 0x18);
      do {
        iVar11 = *piVar2;
        bVar16 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar16);
      *piVar2 = 1;
      if (iVar11 == -1) {
        FUN_016d6968(0xf0,piVar2,0x81,1);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01284dec(*(undefined4 *)(param_1 + 8));
    }
    bVar16 = *(uint *)(param_1 + 0xc) != 0;
    if (bVar16) {
      uVar8 = *(uint *)(param_1 + 0x10);
    }
    if (bVar16 && uVar8 != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar8);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
    }
  }
  if (param_1 != -1) {
    piVar12 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar16 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar16);
    *piVar12 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar8 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar4 = uVar14 - 0x10, uVar14 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar14 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar11 + 8) + 0x10;
      iVar9 = iVar4 * uVar8 + iVar4 + -4;
      iVar4 = iVar13 + iVar9;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar14 = *(uint *)(iVar4 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar3)();
        }
        if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar3)();
        }
      }
      if ((uint)(iVar4 - param_1) < uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar4 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar13 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar1 = *(byte *)(iVar11 + 0x14);
      uVar14 = 1 << uVar8;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar11 + 0x10);
        uVar5 = *(uint *)(iVar11 + 0xc) | uVar10;
        if ((uVar14 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar10 == 0) || (uVar5 + uVar14 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar14 + uVar10;
          return;
        }
        puVar15 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar10 != uVar5) goto LAB_016d409c;
          bVar16 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar16);
        *puVar15 = uVar14 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

