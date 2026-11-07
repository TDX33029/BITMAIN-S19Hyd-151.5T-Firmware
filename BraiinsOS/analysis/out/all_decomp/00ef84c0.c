// FUN_00ef84c0 @ 00ef84c0 size=948 calls_out=8 calls_in=3
// strings: 

void FUN_00ef84c0(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int unaff_r4;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  int iVar26;
  int *local_2c;
  undefined4 local_28;
  
  iVar10 = param_1[2];
  piVar12 = (int *)param_1[3];
  param_1[2] = -0x7fffffff;
  if (iVar10 == -0x80000000) {
    piVar17 = param_1 + 1;
    if (*param_1 != 0) {
      piVar17 = (int *)param_1[1];
    }
    iVar19 = *piVar17;
    piVar17 = (int *)(iVar19 + 8);
    do {
      if (*piVar17 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar17);
        goto LAB_00ef8524;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = 1;
    DataMemoryBarrier(0xb);
LAB_00ef8524:
    uVar13 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar19 + 0xc);
    }
    else {
      uVar13 = FUN_015bf3f8();
      uVar13 = uVar13 ^ 1;
      cVar1 = *(char *)(iVar19 + 0xc);
    }
    if (cVar1 != '\0') {
      uVar22 = (uint)local_28 >> 8;
      local_28 = CONCAT31((int3)uVar22,(char)uVar13);
      local_2c = piVar17;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0187c31c,&DAT_01886a4c);
    }
    uVar22 = *(uint *)(iVar19 + 0x34);
    if (uVar22 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187c354);
    }
    uVar23 = *(uint *)(iVar19 + 0x40);
    if (uVar23 == 0) {
      uVar18 = 0;
      uVar22 = 0;
LAB_00ef8714:
      if (uVar22 != uVar18) {
        FUN_00ef36a4((uint *)(iVar19 + 0x34),uVar18);
      }
    }
    else {
      iVar21 = *(int *)(iVar19 + 0x3c);
      uVar18 = 0;
      iVar20 = *(int *)(iVar19 + 0x38) + iVar21 * 8 + 4;
      do {
        uVar5 = uVar22;
        if (iVar21 + uVar18 < uVar22) {
          uVar5 = 0;
        }
        piVar11 = (int *)(iVar20 + uVar5 * -8);
        iVar6 = *piVar11;
        uVar14 = *(uint *)(iVar6 + 8);
        uVar5 = uVar14 - 1;
        if (uVar14 < 5) {
          uVar14 = 4;
        }
        piVar11 = (int *)(**(code **)(iVar6 + 0x14))
                                   (piVar11[-1] + (uVar14 - 1 & 0xfffffff8) + (uVar5 & 0xffffffe8) +
                                    0x20);
        if (piVar11 == piVar12 + 8) {
          uVar22 = uVar18 + 1;
          if (uVar22 < uVar23) {
            uVar14 = *(uint *)(iVar19 + 0x34);
            iVar20 = *(int *)(iVar19 + 0x38);
            iVar21 = *(int *)(iVar19 + 0x3c);
            uVar5 = uVar23;
            if (uVar23 < uVar18) {
              uVar5 = uVar18;
            }
            do {
              iVar6 = iVar20 + (iVar21 + uVar22) * 8;
              while( true ) {
                uVar7 = uVar14;
                if (iVar21 + uVar22 < uVar14) {
                  uVar7 = 0;
                }
                piVar11 = (int *)(iVar6 + uVar7 * -8);
                uVar7 = *(uint *)(piVar11[1] + 8);
                uVar15 = uVar7 - 1;
                if (uVar7 < 5) {
                  uVar7 = 4;
                }
                piVar8 = (int *)(**(code **)(piVar11[1] + 0x14))
                                          (*piVar11 + (uVar7 - 1 & 0xfffffff8) +
                                           (uVar15 & 0xffffffe8) + 0x20);
                if (piVar8 != piVar12 + 8) break;
                iVar6 = iVar6 + 8;
                uVar22 = uVar22 + 1;
                if (uVar23 <= uVar22) goto LAB_00ef8714;
              }
              if (uVar18 == uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_005666b0,0x20,&DAT_018a6c20);
              }
              uVar15 = uVar18 + iVar21;
              uVar18 = uVar18 + 1;
              uVar7 = uVar15 - uVar14;
              if (uVar15 < uVar14) {
                uVar7 = uVar15;
              }
              piVar8 = (int *)(iVar20 + uVar7 * 8);
              iVar24 = *piVar8;
              uVar22 = uVar22 + 1;
              iVar26 = piVar11[1];
              iVar6 = piVar8[1];
              *piVar8 = *piVar11;
              piVar8[1] = iVar26;
              *piVar11 = iVar24;
              piVar11[1] = iVar6;
            } while (uVar22 < uVar23);
          }
          goto LAB_00ef8714;
        }
        uVar18 = uVar18 + 1;
        iVar20 = iVar20 + 8;
      } while (uVar23 != uVar18);
    }
    if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar20 = FUN_015bf3f8(), iVar20 == 0)) {
      *(undefined1 *)(iVar19 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = 0;
    if (iVar19 == 2) {
      FUN_016d6968(0xf0,piVar17,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar19 + -1;
    if (iVar19 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac624(piVar12,&DAT_0187c32c);
    }
  }
  if ((iVar10 < -0x7ffffffe) || (iVar10 == 0)) {
    return;
  }
  if (piVar12 == (int *)0x0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)piVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar22 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar19 = uVar22 - 0x10, uVar22 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar22 = (uint)(*(byte *)((int)piVar12 + -3) >> 5);
  iVar21 = *(int *)(iVar10 + 8) + 0x10;
  iVar20 = iVar19 * uVar13 + iVar19 + -4;
  iVar19 = iVar21 + iVar20;
  if (4 < uVar22) {
    if (uVar22 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar22 = *(uint *)(iVar19 + -4);
    if (uVar22 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar19 - (int)piVar12) < uVar22) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar19 - uVar22) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar21 + iVar20) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar10 + 0x14);
  uVar22 = 1 << uVar13;
  *(undefined1 *)((int)piVar12 + -3) = 0xff;
  *(undefined2 *)((int)piVar12 + -2) = 0;
  do {
    uVar18 = *(uint *)(iVar10 + 0x10);
    uVar23 = *(uint *)(iVar10 + 0xc) | uVar18;
    if ((uVar22 & uVar23) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar18 == 0) || (uVar23 + uVar22 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar16 = *puVar9;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar9 = uVar16;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar22 + uVar18;
      return;
    }
    puVar25 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar25);
      uVar23 = *puVar25;
      if (uVar18 != uVar23) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar25);
    } while (!bVar2);
    *puVar25 = uVar22 + uVar18;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar18 == uVar23) {
      return;
    }
  } while( true );
}

