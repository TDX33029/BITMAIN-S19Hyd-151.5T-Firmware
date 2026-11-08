// FUN_00c87964 @ 00c87964 size=328 calls_out=3 calls_in=5
// strings: 

void FUN_00c87964(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1[10] == -0x80000000) {
    iVar13 = param_1[1];
    if (iVar13 == 0) {
      return;
    }
    iVar10 = *param_1;
    iVar6 = 0;
    do {
      iVar15 = iVar6 + 1;
      piVar8 = (int *)(iVar10 + iVar6 * 0x14);
      if (*piVar8 == 0) {
        if ((char)piVar8[4] == '\0') {
          piVar8 = piVar8 + 1;
          piVar4 = (int *)*piVar8;
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar6 + -1;
        }
        else {
          if ((char)piVar8[4] != '\x03') goto LAB_00c87994;
          piVar4 = (int *)piVar8[3];
          if (*piVar4 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(piVar4);
            if (!bVar1) goto LAB_00c87a10;
            *piVar4 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_00c87a10:
            (**(code **)(piVar4[2] + 0x10))();
          }
          piVar8 = piVar8 + 2;
          piVar4 = (int *)*piVar8;
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar6 + -1;
        }
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f31e8(*piVar8);
        }
      }
LAB_00c87994:
      iVar6 = iVar15;
    } while (iVar15 != iVar13);
  }
  else {
    piVar4 = param_1 + 4;
    FUN_00ceccf8(piVar4);
    piVar8 = (int *)*piVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d05f64(*piVar4);
    }
    if (param_1[7] == 0) {
      return;
    }
    iVar10 = param_1[8];
  }
  if (iVar10 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar15 = iVar6 * uVar16 + iVar6 + -4;
  iVar6 = iVar14 + iVar15;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar6 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar6 - iVar10) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar13 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar7 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar7 = *puVar17;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

