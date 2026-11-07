// FUN_011db7dc @ 011db7dc size=324 calls_out=3 calls_in=5
// strings: 

void FUN_011db7dc(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *(uint *)(param_1 + 8);
  uVar3 = 1;
  if ((int)uVar5 < 0) {
    uVar3 = uVar5 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) goto LAB_011db8e0;
    puVar11 = *(undefined4 **)(param_1 + 0x10);
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar6);
    }
    if (puVar11[1] == 0) goto LAB_011db8e0;
  }
  else if (uVar3 == 1) {
    piVar4 = *(int **)(param_1 + 0x14);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01353488(*(undefined4 *)(param_1 + 0x14));
      }
    }
    iVar10 = *(int *)(param_1 + 0x10) + 1;
    iVar6 = *(int *)(param_1 + 0xc);
    while (iVar10 = iVar10 + -1, iVar10 != 0) {
      FUN_01158ab8(iVar6);
      iVar6 = iVar6 + 0x20;
    }
    if (*(uint *)(param_1 + 8) == 0) goto LAB_011db8e0;
    iVar6 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x14) + 1;
    iVar6 = *(int *)(param_1 + 0x10);
    while (iVar10 = iVar10 + -1, iVar10 != 0) {
      FUN_01158ab8(iVar6);
      iVar6 = iVar6 + 0x20;
    }
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_011db8e0;
    iVar6 = *(int *)(param_1 + 0x10);
  }
  thunk_FUN_016d3fb4(iVar6);
LAB_011db8e0:
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar3 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar5 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar5 - 0x10, uVar5 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar5 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar14 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar10 * uVar3 + iVar10 + -4;
      iVar10 = iVar14 + iVar12;
      if (4 < uVar5) {
        if (uVar5 != 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar7)();
        }
        uVar5 = *(uint *)(iVar10 + -4);
        if (uVar5 < 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar7)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar7)();
        }
      }
      if ((uint)(iVar10 - param_1) < uVar5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar7)();
      }
      if (*(char *)(iVar10 - uVar5) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar7)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar7)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar5 = 1 << uVar3;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar5 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar7)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar3);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar11 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar11;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar11 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar5 + uVar13;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar8 = *puVar15;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar1);
        *puVar15 = uVar5 + uVar13;
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

