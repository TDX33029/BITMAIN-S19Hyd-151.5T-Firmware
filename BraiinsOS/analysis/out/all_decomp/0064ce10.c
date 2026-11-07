// FUN_0064ce10 @ 0064ce10 size=340 calls_out=2 calls_in=8
// strings: 

void FUN_0064ce10(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x10));
  }
  FUN_00750dec((int *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1c));
  }
  piVar4 = *(int **)(param_1 + 0xb4);
  if (((uint)piVar4 & 1) == 0) {
    piVar8 = piVar4 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar5 + -1;
    if (iVar5 != 1) goto LAB_0064cec8;
    DataMemoryBarrier(0xb);
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
  }
  else {
    if (*(int *)(param_1 + 0xb0) + ((uint)piVar4 >> 5) == 0) goto LAB_0064cec8;
    piVar4 = (int *)(*(int *)(param_1 + 0xa8) - ((uint)piVar4 >> 5));
  }
  thunk_FUN_016d3fb4(piVar4);
LAB_0064cec8:
  iVar5 = *(int *)(param_1 + 0x70);
  if (iVar5 != 4) {
    if (iVar5 == 0 || iVar5 == 3) {
      (**(code **)(*(int *)(param_1 + 0x74) + 0x10))
                (param_1 + 0x80,*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    }
    else if ((iVar5 == 1) && (*(int *)(param_1 + 0x7c) != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    }
  }
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 3) {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0064cf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(int *)(param_1 + 0x3c) + 0x10))
                  (param_1 + 0x48,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar16 = *(byte *)(iVar5 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
        iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar12 = (uint)(*(byte *)(iVar5 + -3) >> 5);
      iVar15 = *(int *)(iVar6 + 8) + 0x10;
      iVar13 = iVar9 * uVar16 + iVar9 + -4;
      iVar9 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar12 = *(uint *)(iVar9 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar9 - iVar5) < uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar12 = 1 << uVar16;
      *(undefined1 *)(iVar5 + -3) = 0xff;
      *(undefined2 *)(iVar5 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar6 + 0x10);
        uVar10 = *(uint *)(iVar6 + 0xc) | uVar14;
        if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar7;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar7 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar17 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar10 = *puVar17;
          if (uVar14 != uVar10) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar10) {
          return;
        }
      } while( true );
    }
  }
  return;
}

