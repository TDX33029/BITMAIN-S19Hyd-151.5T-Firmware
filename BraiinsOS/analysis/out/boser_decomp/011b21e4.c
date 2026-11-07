// FUN_011b21e4 @ 011b21e4 size=1636 calls_out=1 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011b21e4(int param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r1;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint unaff_r6;
  int *piVar15;
  uint uVar16;
  int local_50;
  int local_48;
  int local_40;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  piVar15 = *(int **)(param_1 + 0x1c);
  uVar10 = 0x1b3;
  if (piVar15 != (int *)0x0) {
    param_2 = piVar15[3];
  }
  uVar16 = 0x84222325;
  if (piVar15 != (int *)0x0 && param_2 != 0) {
    iVar14 = 0;
    local_38 = 0x5241f71b;
    uVar12 = 0x84222325;
    unaff_r6 = 0xcbf29ce4;
    local_34 = 0x52794af7;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar14);
      iVar14 = iVar14 + 1;
      uVar7 = uVar12 ^ *pbVar2;
      lVar3 = (ulonglong)uVar7 * 0x1b3;
      uVar12 = (uint)lVar3;
      unaff_r6 = unaff_r6 * 0x1b3 + uVar7 * 0x100 + (int)((ulonglong)lVar3 >> 0x20);
    } while (iVar14 != 8);
    uVar7 = uVar12 >> 0x19;
    local_40 = *piVar15;
    local_48 = 0;
    while( true ) {
      uVar12 = piVar15[1] & uVar12;
      uVar6 = *(uint *)(local_40 + uVar12);
      uVar8 = uVar6 ^ uVar7 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar4 = uVar12 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                piVar15[1];
        piVar5 = (int *)(local_40 + -0x18 + uVar4 * -0x18);
        unaff_r6 = 0x5241f71b;
        uVar8 = uVar8 - 1 & uVar8;
        if ((*piVar5 == 0xb63f810 && piVar5[2] == 0x5241f71b) &&
            (piVar5[1] == 0x620053ed && piVar5[3] == 0x52794af7)) goto LAB_011b2680;
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar12 = uVar12 + local_48;
    }
  }
  uVar12 = **(uint **)(param_1 + 0x18);
  iVar14 = *(int *)(uVar12 + 0xdc);
  if (*(int *)(iVar14 + 0x14) != 0) {
    iVar13 = 0;
    local_38 = 0x5241f71b;
    uVar7 = 0x84222325;
    local_34 = 0x52794af7;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar13);
      iVar13 = iVar13 + 1;
      uVar7 = (uVar7 ^ *pbVar2) * 0x1b3;
    } while (iVar13 != 8);
    uVar6 = uVar7 >> 0x19;
    local_40 = *(int *)(iVar14 + 8);
    local_50 = 0;
    do {
      unaff_r6 = *(uint *)(iVar14 + 0xc) & uVar7;
      uVar8 = *(uint *)(local_40 + unaff_r6);
      uVar7 = uVar8 ^ uVar6 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar4 = unaff_r6 +
                ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                               (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                *(uint *)(iVar14 + 0xc);
        piVar15 = (int *)(local_40 + -0x18 + uVar4 * -0x18);
        uVar7 = uVar7 - 1 & uVar7;
        if ((*piVar15 == 0xb63f810 && piVar15[2] == 0x5241f71b) &&
            (piVar15[1] == 0x620053ed && piVar15[3] == 0x52794af7)) {
LAB_011b2680:
          local_34 = 0x52794af7;
          local_38 = 0x5241f71b;
          local_40 = local_40 + uVar4 * -0x18;
          goto LAB_011b2688;
        }
      }
      if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
      local_50 = local_50 + 4;
      uVar7 = unaff_r6 + local_50;
    } while( true );
  }
  iVar14 = *(int *)(uVar12 + 0xd8);
  if (*(int *)(iVar14 + 0x14) != 0) {
    iVar13 = 0;
    local_38 = 0x5241f71b;
    uVar7 = 0x84222325;
    local_34 = 0x52794af7;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar13);
      iVar13 = iVar13 + 1;
      uVar7 = (uVar7 ^ *pbVar2) * 0x1b3;
    } while (iVar13 != 8);
    uVar6 = uVar7 >> 0x19;
    unaff_r6 = *(uint *)(iVar14 + 8);
    local_48 = 0;
    while( true ) {
      uVar7 = *(uint *)(iVar14 + 0xc) & uVar7;
      uVar4 = *(uint *)(unaff_r6 + uVar7);
      uVar12 = 0x80808080;
      uVar8 = uVar4 ^ uVar6 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar12 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                        (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                 *(uint *)(iVar14 + 0xc);
        iVar13 = -uVar12;
        piVar15 = (int *)((unaff_r6 - 0x18) + uVar12 * -0x18);
        uVar12 = piVar15[1] ^ 0x620053edU | piVar15[3] ^ 0x52794af7U;
        uVar8 = uVar8 - 1 & uVar8;
        if ((*piVar15 == 0xb63f810 && piVar15[2] == 0x5241f71b) && uVar12 == 0) goto LAB_011b26f0;
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_48 = local_48 + 4;
      uVar7 = uVar7 + local_48;
    }
  }
  uVar6 = **(uint **)(param_1 + 0x14);
  uVar7 = 0;
  if (*(int *)(uVar6 + 0x34) != 0) {
    local_38 = 0x5241f71b;
    local_34 = 0x52794af7;
    iVar14 = 0;
    do {
      pbVar2 = (byte *)((int)&local_38 + iVar14);
      iVar14 = iVar14 + 1;
      uVar10 = uVar16 ^ *pbVar2;
      lVar3 = (ulonglong)uVar10 * 0x1b3;
      uVar16 = (uint)lVar3;
      uVar12 = uVar10 * 0x100 + (int)((ulonglong)lVar3 >> 0x20);
    } while (iVar14 != 8);
    uVar8 = uVar16 >> 0x19;
    uVar10 = 0x1010101;
    puVar1 = (uint *)(uVar6 + 0x2c);
    uVar6 = *(uint *)(uVar6 + 0x28);
    iVar14 = 0;
    while( true ) {
      uVar16 = *puVar1 & uVar16;
      uVar4 = *(uint *)(uVar6 + uVar16);
      uVar7 = uVar4 ^ uVar8 * 0x1010101;
      unaff_r6 = ~uVar7 & 0x80808080;
      uVar7 = unaff_r6 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar11 = uVar16 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                         (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                 *puVar1;
        unaff_r6 = -uVar11;
        puVar9 = (uint *)((uVar6 - 0x18) + uVar11 * -0x18);
        uVar12 = puVar9[2] ^ 0x5241f71b;
        uVar10 = *puVar9 ^ 0xb63f810 | uVar12;
        uVar7 = uVar7 - 1 & uVar7;
        if (uVar10 == 0 && (puVar9[1] == 0x620053ed && puVar9[3] == 0x52794af7)) {
          local_40 = uVar6 + uVar11 * -0x18;
          goto LAB_011b2688;
        }
      }
      uVar7 = uVar4 & 0x80808080;
      if ((uVar7 & uVar4 << 1) != 0) break;
      iVar14 = iVar14 + 4;
      uVar16 = uVar16 + iVar14;
    }
  }
  do {
    FUN_011b2b20(uVar6,uVar7,uVar10,uVar12);
    iVar13 = extraout_r1;
LAB_011b26f0:
    local_40 = unaff_r6 + iVar13 * 0x18;
LAB_011b2688:
    (**(code **)(*(int *)(local_40 + -4) + 0xc))(&local_38,*(undefined4 *)(local_40 + -8));
    uVar7 = local_34 ^ 0x620053ed | uStack_2c ^ 0x52794af7;
    uVar10 = uStack_30 ^ 0x5241f71b;
    uVar12 = 0xb63f810;
    uVar6 = local_38 ^ 0xb63f810 | uVar10 | uVar7;
  } while (uVar6 != 0);
  return;
}

