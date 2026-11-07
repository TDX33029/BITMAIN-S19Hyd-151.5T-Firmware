// FUN_009f3df0 @ 009f3df0 size=420 calls_out=2 calls_in=6
// strings: 

/* WARNING: Removing unreachable block (ram,0x009f3f8c) */

void FUN_009f3df0(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r6;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (iVar3 == 0) {
    bVar15 = false;
LAB_009f3f08:
    if (!bVar15) {
      return;
    }
    if (iVar7 == 0) {
      for (; iVar7 = iVar3, unaff_r6 != 0; unaff_r6 = unaff_r6 - 1) {
        iVar3 = *(int *)(iVar7 + 0x60);
      }
    }
    iVar3 = *(int *)(iVar7 + 0x58);
    iVar14 = iVar7;
    if (*(int *)(iVar7 + 0x58) != 0) {
      do {
        iVar7 = iVar3;
        thunk_FUN_016d3fb4(iVar14);
        iVar3 = *(int *)(iVar7 + 0x58);
        iVar14 = iVar7;
      } while (*(int *)(iVar7 + 0x58) != 0);
    }
    if (iVar7 == 0) {
      return;
    }
    iVar3 = FUN_016d3bc8();
    uVar10 = *(byte *)(iVar7 + -3) & 0x1f;
    if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
      iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
    iVar13 = *(int *)(iVar3 + 8) + 0x10;
    iVar8 = iVar14 * uVar10 + iVar14 + -4;
    iVar14 = iVar13 + iVar8;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar11 = *(uint *)(iVar14 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar14 - iVar7) < uVar11) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + iVar8) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar3 + 0x14);
    uVar11 = 1 << uVar10;
    *(undefined1 *)(iVar7 + -3) = 0xff;
    *(undefined2 *)(iVar7 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar3 + 0x10);
      uVar6 = *(uint *)(iVar3 + 0xc) | uVar12;
      if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar6 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar3,uVar10);
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
        *(uint *)(iVar3 + 0x10) = uVar11 + uVar12;
        return;
      }
      puVar16 = (uint *)(iVar3 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar16);
        uVar6 = *puVar16;
        if (uVar12 != uVar6) goto LAB_016d409c;
        bVar15 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar15);
      *puVar16 = uVar11 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar6) {
        return;
      }
    } while( true );
  }
  unaff_r6 = param_1[1];
  iVar14 = param_1[2];
joined_r0x009f3e18:
  bVar15 = true;
  if (iVar14 != 0) {
    do {
      if (iVar7 == 0) {
        uVar10 = 0;
        iVar7 = iVar3;
        for (; unaff_r6 != 0; unaff_r6 = unaff_r6 - 1) {
          iVar7 = *(int *)(iVar7 + 0x60);
        }
        iVar3 = 0;
        if (*(short *)(iVar7 + 0x5e) == 0) goto LAB_009f3ea8;
LAB_009f3e74:
      }
      else {
        uVar10 = unaff_r6;
        if (unaff_r6 < *(ushort *)(iVar7 + 0x5e)) goto LAB_009f3e74;
LAB_009f3ea8:
        do {
          iVar8 = *(int *)(iVar7 + 0x58);
          if (iVar8 == 0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar10 = (uint)*(ushort *)(iVar7 + 0x5c);
          thunk_FUN_016d3fb4();
          iVar3 = iVar3 + 1;
          iVar7 = iVar8;
        } while (*(ushort *)(iVar8 + 0x5e) <= uVar10);
      }
      bVar15 = true;
      iVar14 = iVar14 + -1;
      if (iVar3 != 0) goto code_r0x009f3edc;
      unaff_r6 = uVar10 + 1;
      iVar3 = 0;
      if (iVar14 == 0) break;
    } while( true );
  }
  goto LAB_009f3f08;
code_r0x009f3edc:
  piVar4 = (int *)(iVar7 + uVar10 * 4 + 100);
  do {
    iVar7 = *piVar4;
    iVar3 = iVar3 + -1;
    piVar4 = (int *)(iVar7 + 0x60);
  } while (iVar3 != 0);
  unaff_r6 = 0;
  iVar3 = 0;
  goto joined_r0x009f3e18;
}

