// FUN_016af0b0 @ 016af0b0 size=1276 calls_out=3 calls_in=51
// strings: Some Trigger/Listener has panicked

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016af0b0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 in_stack_00000000;
  int local_3c;
  int *local_2c;
  undefined1 local_28;
  
  iVar16 = *param_1;
  piVar12 = (int *)(iVar16 + 8);
  do {
    if (*piVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar12);
      goto LAB_016af0e4;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_016af0e4:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar16 + 0xc);
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    cVar1 = *(char *)(iVar16 + 0xc);
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar13;
    local_2c = piVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("Some Trigger/Listener has panicked",0x22,&local_2c,&DAT_018aea3c,&DAT_018aea4c);
  }
  uVar4 = *(uint *)(iVar16 + 0x28) ^ 0x6e646f6d;
  uVar7 = *(uint *)(iVar16 + 0x2c) ^ 0x646f7261;
  uVar14 = *(uint *)(iVar16 + 0x20) ^ 0x70736575;
  uVar15 = uVar4 + uVar14;
  uVar24 = (uVar4 << 0xd | uVar7 >> 0x13) ^ uVar15;
  uVar22 = uVar7 + (*(uint *)(iVar16 + 0x24) ^ 0x736f6d65) + (uint)CARRY4(uVar4,uVar14);
  uVar8 = param_1[1];
  uVar10 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar22;
  uVar17 = *(uint *)(iVar16 + 0x2c) ^ 0x70656462;
  uVar4 = *(uint *)(iVar16 + 0x28) ^ uVar8 ^ 0x79746573;
  uVar14 = *(uint *)(iVar16 + 0x20) ^ 0x6e657261;
  uVar7 = uVar4 + uVar14;
  uVar19 = uVar17 + (*(uint *)(iVar16 + 0x24) ^ 0x6c796765) + (uint)CARRY4(uVar4,uVar14);
  uVar14 = (uVar4 << 0x10 | uVar17 >> 0x10) ^ uVar7;
  uVar20 = uVar19 + uVar10 + (uint)CARRY4(uVar7,uVar24);
  uVar19 = (uVar17 << 0x10 | uVar4 >> 0x10) ^ uVar19;
  uVar17 = uVar20 ^ (uVar10 << 0x11 | uVar24 >> 0xf);
  uVar15 = uVar19 + uVar15 + (uint)CARRY4(uVar14,uVar22);
  uVar10 = uVar7 + uVar24 ^ (uVar24 << 0x11 | uVar10 >> 0xf);
  uVar4 = uVar14 + uVar22 ^ uVar8;
  uVar23 = uVar4 + uVar10;
  uVar25 = (uVar15 ^ 0x4000000) + uVar17 + (uint)CARRY4(uVar4,uVar10);
  uVar4 = uVar25 ^ (uVar17 << 0xd | uVar10 >> 0x13);
  uVar10 = uVar23 ^ (uVar10 << 0xd | uVar17 >> 0x13);
  uVar15 = (uVar19 << 0x15 | uVar14 >> 0xb) ^ uVar15;
  uVar17 = (uVar14 << 0x15 | uVar19 >> 0xb) ^ uVar14 + uVar22;
  uVar20 = uVar20 ^ 0xff;
  uVar22 = uVar17 + uVar20;
  uVar7 = uVar15 + uVar7 + uVar24 + (uint)CARRY4(uVar17,uVar20);
  uVar21 = uVar4 + uVar7 + (uint)CARRY4(uVar10,uVar22);
  uVar14 = uVar21 ^ (uVar4 << 0x11 | uVar10 >> 0xf);
  uVar20 = uVar10 + uVar22 ^ (uVar10 << 0x11 | uVar4 >> 0xf);
  uVar7 = (uVar15 << 0x10 | uVar17 >> 0x10) ^ uVar7;
  uVar4 = (uVar17 << 0x10 | uVar15 >> 0x10) ^ uVar22;
  uVar24 = uVar4 + uVar25;
  uVar17 = uVar7 + uVar23 + (uint)CARRY4(uVar4,uVar25);
  uVar25 = uVar14 + uVar17 + (uint)CARRY4(uVar20,uVar24);
  uVar23 = (uVar14 << 0xd | uVar20 >> 0x13) ^ uVar25;
  uVar15 = (uVar20 << 0xd | uVar14 >> 0x13) ^ uVar20 + uVar24;
  uVar17 = (uVar7 << 0x15 | uVar4 >> 0xb) ^ uVar17;
  uVar7 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar24;
  uVar19 = uVar7 + uVar21;
  uVar10 = uVar17 + uVar10 + uVar22 + (uint)CARRY4(uVar7,uVar21);
  uVar4 = (uVar17 << 0x10 | uVar7 >> 0x10) ^ uVar10;
  uVar14 = (uVar7 << 0x10 | uVar17 >> 0x10) ^ uVar19;
  uVar21 = uVar23 + uVar10 + (uint)CARRY4(uVar15,uVar19);
  uVar10 = uVar14 + uVar25;
  uVar22 = uVar4 + uVar20 + uVar24 + (uint)CARRY4(uVar14,uVar25);
  uVar7 = (uVar14 << 0x15 | uVar4 >> 0xb) ^ uVar10;
  uVar24 = (uVar23 << 0x11 | uVar15 >> 0xf) ^ uVar21;
  uVar17 = (uVar4 << 0x15 | uVar14 >> 0xb) ^ uVar22;
  uVar25 = uVar7 + uVar21;
  uVar14 = (uVar15 << 0x11 | uVar23 >> 0xf) ^ uVar15 + uVar19;
  uVar4 = uVar17 + uVar15 + uVar19 + (uint)CARRY4(uVar7,uVar21);
  uVar20 = (uVar14 << 0xd | uVar24 >> 0x13) ^ uVar14 + uVar10;
  uVar14 = (uVar24 << 0xd | uVar14 >> 0x13) ^ uVar24 + uVar22 + (uint)CARRY4(uVar14,uVar10);
  uVar7 = ((uVar25 ^ uVar17 >> 0x10) << 0x15 | ((uVar17 << 0x10 | uVar7 >> 0x10) ^ uVar4) >> 0xb) ^
          (uVar20 << 0x11 | uVar14 >> 0xf) ^ uVar14 + uVar4 + (uint)CARRY4(uVar20,uVar25) ^
          uVar20 + uVar25;
  uVar14 = *(uint *)(iVar16 + 0x14);
  uVar4 = uVar7 >> 0x19;
  iVar9 = *(int *)(iVar16 + 0x10);
  local_3c = 0;
  while( true ) {
    uVar7 = uVar14 & uVar7;
    uVar10 = *(uint *)(iVar9 + uVar7);
    uVar20 = uVar10 ^ uVar4 * 0x1010101;
    uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
    while (uVar20 != 0) {
      uVar15 = uVar20 >> 8;
      uVar17 = uVar20 >> 0x10;
      uVar19 = uVar20 >> 0x18;
      uVar22 = uVar20 << 0x18;
      uVar20 = uVar20 - 1 & uVar20;
      uVar15 = uVar7 + ((uint)LZCOUNT(uVar22 | (uVar15 & 0xff) << 0x10 | (uVar17 & 0xff) << 8 |
                                      uVar19) >> 3) & uVar14;
      if (uVar8 == *(uint *)(iVar9 + -0xc + uVar15 * -0xc)) {
        iVar3 = ((int)(uVar15 * 0xc) >> 2) * -0x55555555;
        puVar11 = (uint *)(iVar9 + (iVar3 - 4U & uVar14));
        uVar4 = *puVar11;
        uVar7 = *(uint *)(iVar9 + iVar3) & 0x80808080 & *(uint *)(iVar9 + iVar3) << 1;
        uVar18 = 0x80;
        iVar5 = iVar9 + uVar15 * -0xc;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar4 & 0x80808080 & uVar4 << 1) >> 3) < 4) {
          *(int *)(iVar16 + 0x18) = *(int *)(iVar16 + 0x18) + 1;
          uVar18 = 0xff;
        }
        *(undefined1 *)(iVar9 + iVar3) = uVar18;
        *(undefined1 *)(puVar11 + 1) = uVar18;
        iVar9 = *(int *)(iVar5 + -8);
        uVar6 = *(undefined4 *)(iVar5 + -4);
        *(int *)(iVar16 + 0x1c) = *(int *)(iVar16 + 0x1c) + -1;
        if (iVar9 != 0) {
          (**(code **)(iVar9 + 0xc))(uVar6);
        }
        goto LAB_016af4cc;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
    local_3c = local_3c + 4;
    uVar7 = uVar7 + local_3c;
  }
LAB_016af4cc:
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(iVar16 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar16 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *piVar12 = 0;
  if (iVar16 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar12,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

