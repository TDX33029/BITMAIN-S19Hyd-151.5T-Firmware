// FUN_00d27cf4 @ 00d27cf4 size=328 calls_out=5 calls_in=2
// strings: 

void FUN_00d27cf4(int *param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar17 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar17 = unaff_r6 == 0;
    }
    if (!bVar17) {
      puVar14 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar14;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar14[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar12 = FUN_016d3bc8();
        uVar15 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar13 = *(int *)(iVar12 + 8) + 0x10;
        iVar10 = iVar6 * uVar15 + iVar6 + -4;
        iVar6 = iVar13 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar9 = *(uint *)(iVar6 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar6 - unaff_r6) < uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar2 = *(byte *)(iVar12 + 0x14);
        uVar9 = 1 << uVar15;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar12 + 0x10);
          uVar7 = *(uint *)(iVar12 + 0xc) | uVar11;
          if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar12,uVar15);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar14 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar14;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar14 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar12 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar16 = (uint *)(iVar12 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar7 = *puVar16;
            if (uVar11 != uVar7) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar17);
          *puVar16 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar7) {
            return;
          }
        } while( true );
      }
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x19] == '\x03') {
    FUN_00887914(param_1 + 0x12);
    return;
  }
  if ((char)param_1[0x19] != '\0') {
    return;
  }
  cVar1 = (char)param_1[10];
  if (cVar1 == '\0') {
    piVar3 = param_1 + 8;
    piVar5 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar17 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar17);
    *piVar5 = iVar12 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      iVar12 = param_1[0x10];
      puVar14 = (undefined4 *)param_1[0x11];
      pcVar4 = (code *)*puVar14;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(iVar12);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    else if (cVar1 != '\x04') goto LAB_00d27e30;
    iVar12 = param_1[6];
    FUN_00a07b4c(iVar12);
    thunk_FUN_016d3fb4(iVar12);
    piVar3 = param_1 + 9;
    piVar5 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar17 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar17);
    *piVar5 = iVar12 + -1;
  }
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*piVar3);
  }
LAB_00d27e30:
  FUN_00ac9c30(param_1 + 0x16);
  return;
}

