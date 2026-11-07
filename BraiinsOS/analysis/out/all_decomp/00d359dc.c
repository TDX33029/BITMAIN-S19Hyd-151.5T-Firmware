// FUN_00d359dc @ 00d359dc size=404 calls_out=5 calls_in=2
// strings: 

void FUN_00d359dc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    bVar16 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar16 = unaff_r6 == 0;
    }
    if (!bVar16) {
      puVar7 = (undefined4 *)param_1[5];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar7[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar2 = FUN_016d3bc8();
        uVar14 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
          iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar13 = *(int *)(iVar2 + 8) + 0x10;
        iVar10 = iVar5 * uVar14 + iVar5 + -4;
        iVar5 = iVar13 + iVar10;
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
        if ((uint)(iVar5 - unaff_r6) < uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar2 + 0x14);
        uVar9 = 1 << uVar14;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar2 + 0x10);
          uVar6 = *(uint *)(iVar2 + 0xc) | uVar11;
          if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar2,uVar14);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar8 = *puVar7;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar7 = uVar8;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar2 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar15 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar6 = *puVar15;
            if (uVar11 != uVar6) goto LAB_016d409c;
            bVar16 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar16);
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
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x23] == '\x03') {
    FUN_00887914(param_1 + 0x1c);
    return;
  }
  if ((char)param_1[0x23] != '\0') {
    return;
  }
  if (5 < *(byte *)((int)param_1 + 0x1e)) goto switchD_00d35a24_caseD_1;
  piVar12 = param_1 + 2;
  switch(*(byte *)((int)param_1 + 0x1e)) {
  case 0:
    piVar12 = param_1 + 6;
    piVar3 = (int *)*piVar12;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar2 + -1;
    goto LAB_00d35b68;
  default:
    goto switchD_00d35a24_caseD_1;
  case 3:
    iVar2 = param_1[8];
    puVar7 = (undefined4 *)param_1[9];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    goto LAB_00d35b28;
  case 4:
    iVar2 = param_1[8];
    puVar7 = (undefined4 *)param_1[9];
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(iVar2);
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 8);
  }
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
LAB_00d35b28:
  bVar16 = (char)param_1[7] != '\0';
  iVar2 = 0;
  if (bVar16) {
    iVar2 = param_1[3];
  }
  if (bVar16 && iVar2 != 0) {
    thunk_FUN_016d3fb4(param_1[4]);
  }
  piVar3 = (int *)param_1[2];
  *(undefined1 *)(param_1 + 7) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar16 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar16);
  *piVar3 = iVar2 + -1;
LAB_00d35b68:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(*piVar12);
  }
switchD_00d35a24_caseD_1:
  FUN_00ac9c30(param_1 + 0x20);
  return;
}

