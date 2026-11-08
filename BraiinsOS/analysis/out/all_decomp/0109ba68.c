// FUN_0109ba68 @ 0109ba68 size=620 calls_out=5 calls_in=2
// strings: 

void FUN_0109ba68(int param_1,uint param_2)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int unaff_r4;
  uint uVar16;
  undefined1 auStack_830 [1032];
  undefined4 local_428 [257];
  
  if (param_1 == 0) {
    puVar8 = (undefined4 *)(param_2 & 0xfffffff8);
    DataMemoryBarrier(0xb);
    if ((param_2 & 2) == 0) {
      piVar4 = (int *)puVar8[1];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
    piVar4 = (int *)*puVar8;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0108a158(*puVar8);
    }
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    iVar7 = FUN_016d3bc8();
    uVar14 = *(byte *)((int)puVar8 + -3) & 0x1f;
    if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
       (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar15 = uVar10 - 0x10, uVar10 == 0)) {
      iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar10 = (uint)(*(byte *)((int)puVar8 + -3) >> 5);
    iVar11 = *(int *)(iVar7 + 8) + 0x10;
    iVar9 = iVar15 * uVar14 + iVar15 + -4;
    iVar15 = iVar11 + iVar9;
    if (4 < uVar10) {
      if (uVar10 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar10 = *(uint *)(iVar15 + -4);
      if (uVar10 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar15 - (int)puVar8) < uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 - uVar10) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar7 + 0x14);
    uVar10 = 1 << uVar14;
    *(undefined1 *)((int)puVar8 + -3) = 0xff;
    *(undefined2 *)((int)puVar8 + -2) = 0;
    do {
      uVar16 = *(uint *)(iVar7 + 0x10);
      uVar13 = *(uint *)(iVar7 + 0xc) | uVar16;
      if ((uVar10 & uVar13) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar16 == 0) || (uVar13 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(local_428 + 0x100,iVar7,uVar14);
        FUN_016dddc0(&DAT_018ddd48);
        if (unaff_r4 == 0) {
          return;
        }
        puVar8 = (undefined4 *)FUN_016d2bc8();
        uVar5 = *puVar8;
        FUN_016d6ac4(local_428[0x100],unaff_r4);
        *puVar8 = uVar5;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar7 + 0x10) = uVar10 + uVar16;
        return;
      }
      puVar6 = (uint *)(iVar7 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar6);
        uVar13 = *puVar6;
        if (uVar16 != uVar13) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar10 + uVar16;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar16 == uVar13) {
        return;
      }
    } while( true );
  }
  uVar14 = *(uint *)(param_1 + 0x408);
  iVar7 = param_1 + 8;
  if (uVar14 < 0x40) {
LAB_0109ba98:
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
    puVar8 = (undefined4 *)(iVar7 + uVar14 * 0x10);
    *puVar8 = FUN_0109bce0;
    puVar8[1] = param_2;
    return;
  }
LAB_0109bb84:
  iVar9 = *(int *)(param_1 + 4);
  iVar15 = 0;
  do {
    local_428[iVar15 * 4] = &DAT_01040efc;
    iVar11 = iVar15 + 1;
    local_428[iVar15 * 4 + 1] = 0;
    local_428[iVar15 * 4 + 2] = 0;
    local_428[iVar15 * 4 + 3] = 0;
    iVar15 = iVar11;
  } while (iVar11 != 0x40);
  FUN_016dd1aa(auStack_830,iVar7,0x404);
  FUN_016dd1aa(iVar7,local_428,0x400);
  *(undefined4 *)(param_1 + 0x408) = 0;
  DataMemoryBarrier(0xb);
  uVar5 = *(undefined4 *)(iVar9 + 0x60);
  uVar14 = thunk_FUN_016d4a50(0x40c);
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x40c);
  }
  FUN_016dd1aa(uVar14,auStack_830,0x404);
  *(undefined4 *)(uVar14 + 0x404) = uVar5;
  *(undefined4 *)(uVar14 + 0x408) = 0;
  puVar6 = (uint *)(iVar9 + 0x40);
LAB_0109bc34:
  do {
    uVar10 = *puVar6;
    DataMemoryBarrier(0xb);
    uVar13 = *(uint *)((uVar10 & 0xfffffffc) + 0x408);
    DataMemoryBarrier(0xb);
    if (uVar13 < 4) {
      puVar12 = (uint *)((uVar10 & 0xfffffffc) + 0x408);
      if (*puVar12 == 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar12);
          if (bVar1) {
            *puVar12 = uVar14;
            if (*puVar6 != uVar10) goto LAB_0109bb6c;
            DataMemoryBarrier(0xb);
            goto LAB_0109bcac;
          }
        } while (*puVar12 == 0);
      }
    }
    else if (*puVar6 == uVar10) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (bVar1) {
          *puVar6 = uVar13;
          goto LAB_0109bc34;
        }
      } while (*puVar6 == uVar10);
    }
    ClearExclusiveLocal();
  } while( true );
  while (*puVar6 == uVar10) {
LAB_0109bcac:
    bVar1 = (bool)hasExclusiveAccess(puVar6);
    if (bVar1) {
      *puVar6 = uVar14;
      goto LAB_0109bb70;
    }
  }
LAB_0109bb6c:
  ClearExclusiveLocal();
LAB_0109bb70:
  uVar14 = *(uint *)(param_1 + 0x408);
  if (uVar14 < 0x40) goto LAB_0109ba98;
  goto LAB_0109bb84;
}

