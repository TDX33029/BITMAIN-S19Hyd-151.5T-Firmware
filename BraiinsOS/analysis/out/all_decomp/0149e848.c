// FUN_0149e848 @ 0149e848 size=200 calls_out=1 calls_in=3
// strings: 

void FUN_0149e848(int param_1)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0x14));
  }
  if ((uVar7 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  }
  piVar12 = *(int **)(param_1 + 0x1c);
  if (piVar12 != (int *)0x0) {
    iVar14 = *piVar12;
    if (iVar14 != 0) {
      puVar8 = (undefined4 *)piVar12[1];
      pcVar3 = (code *)*puVar8;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar14);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    }
    thunk_FUN_016d3fb4(piVar12);
  }
  if (param_1 != -1) {
    piVar12 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar12;
      bVar1 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar1);
    *piVar12 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar14 = FUN_016d3bc8();
      uVar7 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar4 = uVar9 - 0x10, uVar9 == 0)) {
        iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar14 + 8) + 0x10;
      iVar10 = iVar4 * uVar7 + iVar4 + -4;
      iVar4 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar3)();
        }
        uVar9 = *(uint *)(iVar4 + -4);
        if (uVar9 < 5) {
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
      if ((uint)(iVar4 - param_1) < uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar3)();
      }
      if (*(char *)(iVar4 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar3)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar3)();
      }
      bVar2 = *(byte *)(iVar14 + 0x14);
      uVar9 = 1 << uVar7;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar14 + 0x10);
        uVar5 = *(uint *)(iVar14 + 0xc) | uVar11;
        if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar3)();
        }
        if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar14,uVar7);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar14 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar14 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar5 = *puVar15;
          if (uVar11 != uVar5) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

