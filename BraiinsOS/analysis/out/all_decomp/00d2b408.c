// FUN_00d2b408 @ 00d2b408 size=516 calls_out=9 calls_in=2
// strings: 

void FUN_00d2b408(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r5;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar17 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r5 = param_1[4];
      bVar17 = unaff_r5 == 0;
    }
    if (!bVar17) {
      puVar8 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r5);
      }
      if (puVar8[1] != 0) {
        if (unaff_r5 == 0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar15 = *(byte *)(unaff_r5 + -3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
          iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)(unaff_r5 + -3) >> 5);
        iVar14 = *(int *)(iVar5 + 8) + 0x10;
        iVar12 = iVar6 * uVar15 + iVar6 + -4;
        iVar6 = iVar14 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar11 = *(uint *)(iVar6 + -4);
          if (uVar11 < 5) {
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
        if ((uint)(iVar6 - unaff_r5) < uVar11) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar5 + 0x14);
        uVar11 = 1 << uVar15;
        *(undefined1 *)(unaff_r5 + -3) = 0xff;
        *(undefined2 *)(unaff_r5 + -2) = 0;
        do {
          uVar13 = *(uint *)(iVar5 + 0x10);
          uVar7 = *(uint *)(iVar5 + 0xc) | uVar13;
          if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar13 == 0) || (uVar7 + uVar11 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar15);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar8 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar8;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar8 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar16 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar16);
            uVar7 = *puVar16;
            if (uVar13 != uVar7) goto LAB_016d409c;
            bVar17 = (bool)hasExclusiveAccess(puVar16);
          } while (!bVar17);
          *puVar16 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar7) {
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
  if ((char)param_1[0x34] == '\x03') {
    FUN_00887914(param_1 + 0x30);
    return;
  }
  if ((char)param_1[0x34] != '\0') {
    return;
  }
  if (5 < *(byte *)((int)param_1 + 0x4a)) goto switchD_00d2b454_caseD_1;
  switch(*(byte *)((int)param_1 + 0x4a)) {
  case 0:
    piVar9 = param_1 + 0x11;
    piVar3 = (int *)*piVar9;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar5 + -1;
    break;
  default:
    goto switchD_00d2b454_caseD_1;
  case 3:
    uVar2 = (ushort)*(byte *)(param_1 + 0x1c);
    bVar17 = uVar2 == 3;
    if (bVar17) {
      uVar2 = *(ushort *)(param_1 + 0x14);
    }
    if (bVar17 && uVar2 == 3) {
      piVar3 = (int *)param_1[0x15];
      if (*piVar3 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(piVar3);
        if (bVar17) {
          *piVar3 = 0x84;
          goto LAB_00d2b5c0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar3[2] + 0x10))();
    }
    goto LAB_00d2b5c0;
  case 5:
    FUN_00ceee6c(param_1 + 0x1c);
    piVar3 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d06854(param_1[0x13]);
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_005e6cdc(param_1 + 0x18);
    if (param_1[0x1b] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 0x18);
    *(undefined1 *)((int)param_1 + 0x49) = 0;
    if (param_1[0x14] == 2) {
      FUN_00bfb13c();
    }
  case 4:
    FUN_005e6cdc(param_1 + 5);
    if (param_1[8] != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1 + 5);
LAB_00d2b5c0:
    if (param_1[0xe] != 0) {
      thunk_FUN_016d3fb4(param_1[0xf]);
    }
    piVar9 = param_1 + 0xd;
    piVar3 = (int *)*piVar9;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar17 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar17);
    *piVar3 = iVar5 + -1;
  }
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06854(*piVar9);
  }
switchD_00d2b454_caseD_1:
  FUN_00ac9c30(param_1 + 2);
  return;
}

