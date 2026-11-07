// FUN_016aa9d4 @ 016aa9d4 size=1252 calls_out=4 calls_in=2
// strings: lock poisonedPatternIDError

undefined4 FUN_016aa9d4(int param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  puVar10 = (uint *)(param_1 + 0x20);
  if (uVar6 < 0x3ffffffe) {
    if (*puVar10 == uVar6) {
      bVar2 = (bool)hasExclusiveAccess(puVar10);
      if (bVar2) {
        *puVar10 = uVar6 + 1;
        DataMemoryBarrier(0xb);
        cVar1 = *(char *)(param_1 + 0x28);
        goto joined_r0x016aae38;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_015bebb8(puVar10);
  cVar1 = *(char *)(param_1 + 0x28);
joined_r0x016aae38:
  if (cVar1 == '\0') {
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar15 = *param_2;
      uVar19 = param_2[1];
      uVar12 = *(uint *)(param_1 + 0x40) ^ 0x70736575;
      uVar8 = *(uint *)(param_1 + 0x4c) ^ 0x646f7261;
      uVar4 = *(uint *)(param_1 + 0x48) ^ 0x6e646f6d;
      uVar6 = uVar4 + uVar12;
      uVar7 = uVar6 ^ (uVar4 << 0xd | uVar8 >> 0x13);
      uVar12 = uVar8 + (*(uint *)(param_1 + 0x44) ^ 0x736f6d65) + (uint)CARRY4(uVar4,uVar12);
      uVar9 = uVar12 ^ (uVar8 << 0xd | uVar4 >> 0x13);
      uVar11 = *(uint *)(param_1 + 0x4c) ^ uVar19 ^ 0x74656462;
      uVar8 = *(uint *)(param_1 + 0x40) ^ 0x6e657261;
      uVar4 = *(uint *)(param_1 + 0x48) ^ uVar15 ^ 0x79746573;
      uVar17 = uVar4 + uVar8;
      uVar13 = uVar11 + (*(uint *)(param_1 + 0x44) ^ 0x6c796765) + (uint)CARRY4(uVar4,uVar8);
      uVar14 = uVar9 + uVar13 + (uint)CARRY4(uVar7,uVar17);
      uVar8 = uVar17 ^ (uVar4 << 0x10 | uVar11 >> 0x10);
      uVar13 = uVar13 ^ (uVar11 << 0x10 | uVar4 >> 0x10);
      uVar18 = uVar14 ^ (uVar9 << 0x11 | uVar7 >> 0xf);
      uVar11 = uVar13 + uVar6 + (uint)CARRY4(uVar8,uVar12);
      uVar6 = uVar7 + uVar17 ^ (uVar7 << 0x11 | uVar9 >> 0xf);
      uVar4 = uVar8 + uVar12 ^ uVar15;
      uVar20 = uVar4 + uVar6;
      uVar16 = (uVar11 ^ uVar19) + uVar18 + (uint)CARRY4(uVar4,uVar6);
      uVar4 = uVar16 ^ (uVar18 << 0xd | uVar6 >> 0x13);
      uVar18 = uVar20 ^ (uVar6 << 0xd | uVar18 >> 0x13);
      uVar11 = (uVar13 << 0x15 | uVar8 >> 0xb) ^ uVar11;
      uVar12 = (uVar8 << 0x15 | uVar13 >> 0xb) ^ uVar8 + uVar12;
      uVar8 = uVar11 ^ 0x8000000;
      uVar13 = uVar12 + uVar14;
      uVar6 = uVar8 + uVar7 + uVar17 + (uint)CARRY4(uVar12,uVar14);
      uVar17 = uVar6 + uVar4 + (uint)CARRY4(uVar13,uVar18);
      uVar6 = (uVar11 << 0x10 | uVar12 >> 0x10) ^ uVar6;
      uVar9 = (uVar12 << 0x10 | uVar8 >> 0x10) ^ uVar13;
      uVar14 = uVar9 + uVar16;
      uVar8 = uVar6 + uVar20 + (uint)CARRY4(uVar9,uVar16);
      uVar12 = uVar13 + uVar18 ^ (uVar18 << 0x11 | uVar4 >> 0xf);
      uVar4 = uVar17 ^ (uVar4 << 0x11 | uVar18 >> 0xf);
      uVar20 = (uVar8 ^ 0x8000000) + uVar4 + (uint)CARRY4(uVar14,uVar12);
      uVar7 = uVar20 ^ (uVar4 << 0xd | uVar12 >> 0x13);
      uVar4 = uVar14 + uVar12 ^ (uVar12 << 0xd | uVar4 >> 0x13);
      uVar8 = (uVar6 << 0x15 | uVar9 >> 0xb) ^ uVar8;
      uVar17 = uVar17 ^ 0xff;
      uVar11 = (uVar9 << 0x15 | uVar6 >> 0xb) ^ uVar14;
      uVar16 = uVar11 + uVar17;
      uVar6 = uVar8 + uVar13 + uVar18 + (uint)CARRY4(uVar11,uVar17);
      uVar18 = uVar7 + uVar6 + (uint)CARRY4(uVar4,uVar16);
      uVar17 = uVar18 ^ (uVar7 << 0x11 | uVar4 >> 0xf);
      uVar9 = uVar4 + uVar16 ^ (uVar4 << 0x11 | uVar7 >> 0xf);
      uVar6 = (uVar8 << 0x10 | uVar11 >> 0x10) ^ uVar6;
      uVar8 = (uVar11 << 0x10 | uVar8 >> 0x10) ^ uVar16;
      uVar13 = uVar8 + uVar20;
      uVar12 = uVar6 + uVar14 + uVar12 + (uint)CARRY4(uVar8,uVar20);
      uVar14 = uVar17 + uVar12 + (uint)CARRY4(uVar9,uVar13);
      uVar20 = (uVar17 << 0xd | uVar9 >> 0x13) ^ uVar14;
      uVar11 = (uVar9 << 0xd | uVar17 >> 0x13) ^ uVar9 + uVar13;
      uVar12 = (uVar6 << 0x15 | uVar8 >> 0xb) ^ uVar12;
      uVar6 = (uVar8 << 0x15 | uVar6 >> 0xb) ^ uVar13;
      uVar8 = uVar6 + uVar18;
      uVar7 = uVar12 + uVar4 + uVar16 + (uint)CARRY4(uVar6,uVar18);
      uVar4 = (uVar12 << 0x10 | uVar6 >> 0x10) ^ uVar7;
      uVar6 = (uVar6 << 0x10 | uVar12 >> 0x10) ^ uVar8;
      uVar17 = uVar20 + uVar7 + (uint)CARRY4(uVar11,uVar8);
      uVar7 = uVar6 + uVar14;
      uVar16 = uVar4 + uVar9 + uVar13 + (uint)CARRY4(uVar6,uVar14);
      uVar13 = (uVar20 << 0x11 | uVar11 >> 0xf) ^ uVar17;
      uVar12 = (uVar6 << 0x15 | uVar4 >> 0xb) ^ uVar7;
      uVar14 = (uVar4 << 0x15 | uVar6 >> 0xb) ^ uVar16;
      uVar18 = uVar12 + uVar17;
      uVar9 = (uVar11 << 0x11 | uVar20 >> 0xf) ^ uVar11 + uVar8;
      uVar6 = uVar14 + uVar11 + uVar8 + (uint)CARRY4(uVar12,uVar17);
      uVar4 = (uVar13 << 0xd | uVar9 >> 0x13) ^ uVar13 + uVar16 + (uint)CARRY4(uVar9,uVar7);
      uVar8 = (uVar9 << 0xd | uVar13 >> 0x13) ^ uVar9 + uVar7;
      uVar12 = ((uVar18 ^ uVar14 >> 0x10) << 0x15 |
               ((uVar14 << 0x10 | uVar12 >> 0x10) ^ uVar6) >> 0xb) ^ (uVar8 << 0x11 | uVar4 >> 0xf)
               ^ uVar4 + uVar6 + (uint)CARRY4(uVar8,uVar18) ^ uVar8 + uVar18;
      iVar21 = 0;
      uVar6 = uVar12 >> 0x19;
      while( true ) {
        uVar12 = *(uint *)(param_1 + 0x34) & uVar12;
        uVar8 = *(uint *)(*(int *)(param_1 + 0x30) + uVar12);
        uVar4 = uVar8 ^ uVar6 * 0x1010101;
        uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff;
        while (uVar4 != 0) {
          puVar5 = (uint *)(*(int *)(param_1 + 0x30) + -0x18 +
                           (uVar12 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >>
                                     3) & *(uint *)(param_1 + 0x34)) * -0x18);
          uVar4 = uVar4 - 1 & uVar4;
          uVar3 = 1;
          if (uVar15 == *puVar5 && uVar19 == puVar5[1]) goto LAB_016aadf0;
        }
        uVar3 = 0;
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        iVar21 = iVar21 + 4;
        uVar12 = uVar12 + iVar21;
      }
    }
LAB_016aadf0:
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar10 - 1;
      bVar2 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar2);
    *puVar10 = uVar6;
  }
  else {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar21 = FUN_015bf3f8(), iVar21 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("lock poisonedPatternIDError",0xd,&DAT_018ae8e0);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar10 - 1;
      bVar2 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar2);
    *puVar10 = uVar6;
    uVar3 = 0;
  }
  if ((uVar6 & 0xbfffffff) == 0x80000000) {
    FUN_015e9814(puVar10);
    return uVar3;
  }
  return uVar3;
}

