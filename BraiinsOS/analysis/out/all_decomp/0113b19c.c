// FUN_0113b19c @ 0113b19c size=264 calls_out=2 calls_in=10
// strings: 

void FUN_0113b19c(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar17 = *(uint **)(param_1 + 0xc);
  while (puVar17 != (uint *)0x0) {
    puVar14 = (uint *)puVar17[5];
    if ((*puVar17 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar17[1]);
    }
    thunk_FUN_016d3fb4(puVar17);
    puVar17 = puVar14;
  }
  piVar5 = (int *)*(int *)(param_1 + 0x14);
  while (piVar5 != (int *)0x0) {
    iVar10 = *piVar5;
    piVar4 = (int *)piVar5[1];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar5[1]);
      }
    }
    thunk_FUN_016d3fb4(piVar5);
    piVar5 = (int *)iVar10;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(int *)(param_1 + 0x24) + 0xc))(*(undefined4 *)(param_1 + 0x28));
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
      uVar16 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar15 = *(int *)(iVar10 + 8) + 0x10;
      iVar12 = iVar7 * uVar16 + iVar7 + -4;
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
      uVar11 = 1 << uVar16;
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
          FUN_016d3ca8(&uStack_28,iVar10,uVar16);
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
          *(uint *)(iVar10 + 0x10) = uVar11 + uVar13;
          return;
        }
        puVar17 = (uint *)(iVar10 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar8 = *puVar17;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar11 + uVar13;
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

