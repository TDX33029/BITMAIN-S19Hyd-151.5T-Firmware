// FUN_0143f6a0 @ 0143f6a0 size=248 calls_out=3 calls_in=5
// strings: 

void FUN_0143f6a0(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(char *)(param_1 + 0x21) != '\x02') {
    iVar13 = *(int *)(param_1 + 0x14);
    if (iVar13 != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x18);
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar13);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
    }
    piVar3 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0x1c));
    }
    FUN_0143f878(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*(int *)(param_1 + 0x28) + 0xc))(*(undefined4 *)(param_1 + 0x2c));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(*(int *)(param_1 + 0x34) + 0xc))(*(undefined4 *)(param_1 + 0x38));
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar10 = iVar5 * uVar14 + iVar5 + -4;
      iVar5 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar4)();
        }
        uVar9 = *(uint *)(iVar5 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar4)();
        }
      }
      if ((uint)(iVar5 - param_1) < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar4)();
      }
      if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar4)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar4)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar13 + 0x10);
        uVar6 = *(uint *)(iVar13 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar4)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar8 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar8;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar8 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar15 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar6 = *puVar15;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

