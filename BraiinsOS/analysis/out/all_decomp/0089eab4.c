// FUN_0089eab4 @ 0089eab4 size=320 calls_out=2 calls_in=3
// strings: 

void FUN_0089eab4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int unaff_r4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 *puStack_28;
  
  uVar7 = param_2[2];
  pcVar5 = (code *)*param_2;
  uVar12 = uVar7;
  if (uVar7 < 5) {
    uVar12 = 4;
  }
  iVar10 = param_1 + (uVar12 - 1 & 0xfffffff8);
  bVar15 = *(int *)(iVar10 + 8) != 0;
  iVar2 = 0;
  if (bVar15) {
    iVar2 = *(int *)(iVar10 + 0x14);
  }
  if (bVar15 && iVar2 != -0x80000000) {
    iVar2 = *(int *)(iVar10 + 0x18);
    puVar11 = (undefined4 *)(iVar2 + 4);
    puStack_28 = param_2;
    for (iVar13 = *(int *)(iVar10 + 0x1c); iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar11[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 3;
    }
    if (*(int *)(iVar10 + 0x14) != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    param_2 = puStack_28;
    FUN_008e7734(iVar10 + 0x20);
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar10 + 8 + (uVar7 - 1 & 0xffffffb8) + 0x48);
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar15 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar15);
    *piVar3 = iVar2 + -1;
    if ((iVar2 == 1) &&
       (DataMemoryBarrier(0xb), (uVar12 + (uVar12 + param_2[1] + 0x47 & -uVar12) + 7 & -uVar12) != 0
       )) {
      if (param_1 == 0) {
        return;
      }
      iVar2 = FUN_016d3bc8();
      uVar12 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar10 = uVar7 - 0x10, uVar7 == 0)) {
        iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar9 = *(int *)(iVar2 + 8) + 0x10;
      iVar13 = iVar10 * uVar12 + iVar10 + -4;
      iVar10 = iVar9 + iVar13;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar7 = *(uint *)(iVar10 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar10 - param_1) < uVar7) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar10 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar9 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar1 = *(byte *)(iVar2 + 0x14);
      uVar7 = 1 << uVar12;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar8 = *(uint *)(iVar2 + 0x10);
        uVar4 = *(uint *)(iVar2 + 0xc) | uVar8;
        if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar8 == 0) || (uVar4 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&puStack_28,iVar2,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar11 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar11;
          FUN_016d6ac4(puStack_28,unaff_r4);
          *puVar11 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar2 + 0x10) = uVar7 + uVar8;
          return;
        }
        puVar14 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar14);
          uVar4 = *puVar14;
          if (uVar8 != uVar4) goto LAB_016d409c;
          bVar15 = (bool)hasExclusiveAccess(puVar14);
        } while (!bVar15);
        *puVar14 = uVar7 + uVar8;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar8 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
}

