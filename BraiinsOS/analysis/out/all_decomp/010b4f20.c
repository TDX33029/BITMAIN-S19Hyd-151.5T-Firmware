// FUN_010b4f20 @ 010b4f20 size=272 calls_out=2 calls_in=3
// strings: 

void FUN_010b4f20(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar10 != 0) {
    puVar4 = (uint *)(iVar10 + 0x18);
    do {
      uVar14 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar14 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar14 & 10) == 8) {
      (**(code **)(*(int *)(iVar10 + 8) + 8))(*(undefined4 *)(iVar10 + 0xc));
    }
    if ((uVar14 & 2) != 0) {
      local_38 = *(int *)(iVar10 + 0x1c);
      uStack_34 = *(undefined4 *)(iVar10 + 0x20);
      uStack_30 = *(undefined4 *)(iVar10 + 0x24);
      local_2c = *(undefined4 *)(iVar10 + 0x28);
      uStack_28 = *(undefined4 *)(iVar10 + 0x2c);
      iStack_24 = *(int *)(iVar10 + 0x30);
      uStack_20 = *(undefined4 *)(iVar10 + 0x34);
      *(undefined4 *)(iVar10 + 0x1c) = 0;
      if (local_38 != 0) {
        FUN_010bf29c((uint)&local_38 | 4);
      }
    }
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b50b8(*(undefined4 *)(param_1 + 0x10));
      }
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar10 = FUN_016d3bc8();
      uVar14 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar10 + 8) + 0x10;
      iVar12 = iVar7 * uVar14 + iVar7 + -4;
      iVar7 = iVar15 + iVar12;
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
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar10 + 0x14);
      uVar11 = 1 << uVar14;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar10 + 0x10);
        uVar8 = *(uint *)(iVar10 + 0xc) | uVar13;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar10,uVar14);
          iVar10 = iStack_24;
          FUN_016dddc0(&DAT_018ddd48);
          if (iVar10 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,iVar10);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar4 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar4);
          uVar8 = *puVar4;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = uVar11 + uVar13;
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

