// FUN_0136ec40 @ 0136ec40 size=756 calls_out=8 calls_in=1
// strings: 

void FUN_0136ec40(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  uint extraout_r2;
  int unaff_r4;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  bool bVar28;
  uint local_28;
  
  uVar25 = param_4[2];
  iVar16 = param_4[1];
  uVar24 = *(uint *)(param_3 + 8);
  uVar15 = uVar25 * 8;
  iVar12 = -0x340d631c;
  uVar9 = 0x84222325;
  if (uVar25 != 0) {
    pbVar17 = (byte *)(iVar16 + 4);
    uVar23 = uVar15;
    do {
      uVar23 = uVar23 - 8;
      uVar10 = uVar9 ^ *pbVar17;
      lVar4 = (ulonglong)uVar10 * 0x1b3;
      uVar13 = (uint)lVar4 ^ (uint)pbVar17[1];
      lVar5 = (ulonglong)uVar13 * 0x1b3;
      puVar26 = (uint *)(pbVar17 + -4);
      pbVar17 = pbVar17 + 8;
      uVar21 = (uint)lVar5 ^ *puVar26;
      lVar6 = (ulonglong)uVar21 * 0x1b3;
      uVar9 = (uint)lVar6;
      iVar12 = ((iVar12 * 0x1b3 + uVar10 * 0x100 + (int)((ulonglong)lVar4 >> 0x20)) * 0x1b3 +
               uVar13 * 0x100 + (int)((ulonglong)lVar5 >> 0x20)) * 0x1b3 +
               uVar21 * 0x100 + (int)((ulonglong)lVar6 >> 0x20);
    } while (uVar23 != 0);
  }
  if (uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_018927b0,iVar12);
  }
  FUN_01846088(uVar9,iVar12,uVar24,0);
  if (uVar24 <= extraout_r2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(extraout_r2,uVar24,&DAT_01894148);
  }
  iVar12 = *(int *)(param_3 + 4) + extraout_r2 * 0x14;
  uVar9 = (uint)*(ushort *)(param_3 + 0x10);
  bVar27 = *(ushort *)(iVar12 + 0x10) == uVar9;
  if (bVar27) {
    uVar9 = *(uint *)(iVar12 + 8);
  }
  if (bVar27 && uVar9 == uVar25) {
    if (uVar25 != 0) {
      iVar20 = 0;
      do {
        iVar19 = iVar16 + iVar20 * -8;
        iVar18 = *(int *)(iVar12 + 4) + iVar20 * -8;
        cVar1 = *(char *)(iVar19 + 4);
        cVar2 = *(char *)(iVar18 + 4);
        bVar27 = cVar2 != cVar1;
        if (!bVar27) {
          cVar2 = *(char *)(iVar19 + 5);
          cVar1 = *(char *)(iVar18 + 5);
        }
        if ((bVar27 || cVar1 != cVar2) ||
           (*(int *)(*(int *)(iVar12 + 4) + iVar20 * -8) != *(int *)(iVar16 + iVar20 * -8)))
        goto LAB_0136ed28;
        iVar20 = iVar20 + -1;
      } while (-iVar20 != uVar25);
    }
    uVar11 = *(undefined4 *)(iVar12 + 0xc);
    *param_1 = 0x2a;
    param_1[1] = uVar11;
    iVar12 = *param_4;
  }
  else {
LAB_0136ed28:
    bVar28 = 0x1ffffffe < uVar25;
    bVar27 = uVar25 == 0x1fffffff;
    uVar11 = 0;
    if (uVar25 < 0x20000000) {
      bVar28 = 0x7ffffffb < uVar15;
      bVar27 = uVar15 == 0x7ffffffc;
    }
    if (bVar28 && !bVar27) {
LAB_0136ed38:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar11,uVar15);
    }
    if (uVar15 == 0) {
      iVar12 = 4;
      uVar9 = 0;
    }
    else {
      iVar12 = thunk_FUN_016d4a50(uVar15);
      if (iVar12 == 0) {
        uVar11 = 4;
        goto LAB_0136ed38;
      }
      uVar9 = uVar25;
    }
    FUN_016dd1aa(iVar12,iVar16,uVar15);
    iVar20 = *(int *)(param_2 + 0x18);
    *(uint *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + uVar15;
    local_28 = uVar25;
    if (iVar20 == *(int *)(param_2 + 0x10)) {
      FUN_013c40f0();
    }
    *(int *)(param_2 + 0x18) = iVar20 + 1;
    puVar14 = (undefined4 *)(*(int *)(param_2 + 0x14) + iVar20 * 0x10);
    *puVar14 = 2;
    puVar14[1] = uVar9;
    puVar14[2] = iVar12;
    puVar14[3] = uVar25;
    if ((*(int *)(param_2 + 8) != 1) ||
       (uVar15 = *(uint *)(param_2 + 0xc),
       (uint)(*(int *)(param_2 + 0x34) + (iVar20 + 1) * 0x10) <= uVar15)) {
      iVar12 = *param_4;
      if (*(uint *)(param_3 + 8) <= extraout_r2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(extraout_r2,*(uint *)(param_3 + 8),&DAT_01894158);
      }
      uVar3 = *(undefined2 *)(param_3 + 0x10);
      piVar22 = (int *)(*(int *)(param_3 + 4) + extraout_r2 * 0x14);
      if (*piVar22 != 0) {
        thunk_FUN_016d3fb4(piVar22[1]);
      }
      *piVar22 = iVar12;
      piVar22[1] = iVar16;
      piVar22[2] = uVar25;
      *(undefined2 *)(piVar22 + 4) = uVar3;
      piVar22[3] = iVar20;
      *param_1 = 0x2a;
      param_1[1] = iVar20;
      return;
    }
    *param_1 = 0x27;
    param_1[1] = uVar15;
    iVar12 = *param_4;
  }
  if (iVar12 == 0) {
    return;
  }
  if (iVar16 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar16 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar20 = uVar9 - 0x10, uVar9 == 0)) {
    iVar20 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar9 = (uint)(*(byte *)(iVar16 + -3) >> 5);
  iVar19 = *(int *)(iVar12 + 8) + 0x10;
  iVar18 = iVar20 * uVar15 + iVar20 + -4;
  iVar20 = iVar19 + iVar18;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar7)();
    }
    uVar9 = *(uint *)(iVar20 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar7)();
    }
    if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar7)();
    }
  }
  if ((uint)(iVar20 - iVar16) < uVar9) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar7)();
  }
  if (*(char *)(iVar20 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar7)();
  }
  if (*(char *)(iVar19 + iVar18) != '\0') {
                    /* WARNING: Does not return */
    pcVar7 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar7)();
  }
  bVar8 = *(byte *)(iVar12 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar16 + -3) = 0xff;
  *(undefined2 *)(iVar16 + -2) = 0;
  do {
    uVar25 = *(uint *)(iVar12 + 0x10);
    uVar24 = *(uint *)(iVar12 + 0xc) | uVar25;
    if ((uVar9 & uVar24) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar7)();
    }
    if ((uVar25 == 0) || (uVar24 + uVar9 == (2 << (bVar8 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar12,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar14;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar14 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar9 + uVar25;
      return;
    }
    puVar26 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar26);
      uVar24 = *puVar26;
      if (uVar25 != uVar24) goto LAB_016d409c;
      bVar27 = (bool)hasExclusiveAccess(puVar26);
    } while (!bVar27);
    *puVar26 = uVar9 + uVar25;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar25 == uVar24) {
      return;
    }
  } while( true );
}

