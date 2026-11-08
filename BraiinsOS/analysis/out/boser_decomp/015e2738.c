// FUN_015e2738 @ 015e2738 size=2464 calls_out=13 calls_in=3
// strings: 

undefined4 FUN_015e2738(int *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  uint local_a8;
  int local_98;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  pbVar14 = (byte *)0x0;
  if ((param_3 != 0) && (pbVar14 = param_2, param_2[param_3 + -1] != 0x2e)) {
    pbVar14 = (byte *)0x0;
  }
  if (pbVar14 != (byte *)0x0) {
    param_2 = pbVar14;
  }
  pbVar25 = param_2 + param_3;
  if (pbVar14 != (byte *)0x0) {
    pbVar25 = pbVar25 + -1;
  }
  iVar23 = 4;
  local_38 = 1;
  iVar5 = 0;
  iVar21 = 1;
  puVar27 = (undefined1 *)0x110001;
  local_40 = 0;
  local_44 = 4;
  local_48 = 0;
  local_34 = 0;
  local_3c = 0;
  local_5c = 0;
  iVar8 = 0;
LAB_015e27bc:
  iVar15 = local_38;
  iVar22 = local_3c;
  iVar28 = local_40;
  if (puVar27 == (undefined1 *)0x110001) {
    if (param_2 == pbVar25) goto LAB_015e2b34;
    puVar27 = (undefined1 *)(uint)*param_2;
    pbVar14 = param_2 + 1;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (puVar27 < (undefined1 *)0xe0) {
        puVar27 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar27 & 0x1f) << 6);
        pbVar14 = param_2 + 2;
      }
      else {
        uVar16 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (puVar27 < (undefined1 *)0xf0) {
          puVar27 = (undefined1 *)(uVar16 | ((uint)puVar27 & 0x1f) << 0xc);
          pbVar14 = param_2 + 3;
        }
        else {
          puVar27 = (undefined1 *)(param_2[3] & 0x3f | uVar16 << 6 | ((uint)puVar27 & 7) << 0x12);
          pbVar14 = param_2 + 4;
        }
      }
    }
  }
  else {
    pbVar14 = param_2;
  }
  param_2 = pbVar14;
  if (puVar27 == (undefined1 *)0x2e) goto code_r0x015e2830;
  if (puVar27 == (undefined1 *)0x5c) {
    pbVar14 = pbVar25;
    iVar28 = iVar8;
    if (param_2 == pbVar25) {
LAB_015e2984:
      if (local_3c == iVar8) {
        FUN_006520b4(&local_3c,iVar8,1,1,1);
        iVar28 = local_34;
      }
      puVar27 = &DAT_00110000;
      param_2 = pbVar14;
    }
    else {
      puVar27 = (undefined1 *)(uint)*param_2;
      pbVar14 = param_2 + 1;
      if (0x7fffffff < (uint)(int)(char)*param_2) {
        if (puVar27 < (undefined1 *)0xe0) {
          puVar27 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar27 & 0x1f) << 6);
          pbVar14 = param_2 + 2;
        }
        else {
          uVar16 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
          if (puVar27 < (undefined1 *)0xf0) {
            puVar27 = (undefined1 *)(uVar16 | ((uint)puVar27 & 0x1f) << 0xc);
            pbVar14 = param_2 + 3;
          }
          else {
            pbVar14 = param_2 + 4;
            puVar27 = (undefined1 *)(param_2[3] & 0x3f | uVar16 << 6 | ((uint)puVar27 & 7) << 0x12);
            if (puVar27 == &DAT_00110000) goto LAB_015e2984;
          }
        }
      }
      param_2 = pbVar14;
      if (puVar27 == (undefined1 *)0x2e || puVar27 == (undefined1 *)0x5c) {
        if (local_3c == iVar8) {
          FUN_006520b4(&local_3c,iVar8,1,1,1);
          iVar28 = local_34;
          iVar21 = local_38;
        }
        iVar5 = iVar8 + 1;
        *(char *)(iVar21 + iVar28) = (char)puVar27;
        goto LAB_015e2a6c;
      }
      if (local_3c == iVar8) {
        FUN_006520b4(&local_3c,iVar8,1,1,1);
        iVar28 = local_34;
      }
    }
    iVar5 = iVar8 + 1;
    *(undefined1 *)(local_38 + iVar28) = 0x5c;
    iVar21 = local_38;
    goto LAB_015e2a94;
  }
  if (puVar27 != &DAT_00110000) {
    uVar16 = 1;
    if ((undefined1 *)0x7f < puVar27) {
      uVar16 = 2;
    }
    if (((undefined1 *)0x7ff < puVar27) && (uVar16 = 4, puVar27 < (undefined1 *)0x10000)) {
      uVar16 = 3;
    }
    iVar21 = iVar8;
    if ((uint)(local_3c - iVar8) < uVar16) {
      FUN_006520b4(&local_3c,iVar8,uVar16,1,1);
      iVar21 = local_34;
    }
    pbVar14 = (byte *)(local_38 + iVar21);
    if (puVar27 < (undefined1 *)0x80) {
      *pbVar14 = (byte)puVar27;
    }
    else {
      bVar2 = (byte)puVar27 & 0x3f | 0x80;
      bVar3 = (byte)((uint)puVar27 >> 6);
      if (puVar27 < (undefined1 *)0x800) {
        pbVar14[1] = bVar2;
        *pbVar14 = bVar3 | 0xc0;
      }
      else {
        bVar3 = bVar3 & 0x3f | 0x80;
        bVar4 = (byte)((uint)puVar27 >> 0xc);
        if ((uint)puVar27 >> 0x10 == 0) {
          pbVar14[1] = bVar3;
          pbVar14[2] = bVar2;
          *pbVar14 = bVar4 | 0xe0;
        }
        else {
          pbVar14[3] = bVar2;
          pbVar14[2] = bVar3;
          pbVar14[1] = bVar4 & 0x3f | 0x80;
          *pbVar14 = (byte)((uint)puVar27 >> 0x12) | 0xf0;
        }
      }
    }
    iVar5 = uVar16 + iVar8;
    iVar21 = local_38;
LAB_015e2a6c:
    puVar27 = (undefined1 *)0x110001;
    goto LAB_015e2a94;
  }
LAB_015e2b34:
  if (iVar8 == 0) {
    local_58 = local_48;
    local_54 = local_44;
    local_50 = local_40;
    FUN_0134bd64(local_3c,local_38);
  }
  else {
    if (local_40 == local_48) {
      FUN_019abd3c(&local_48);
    }
    piVar7 = (int *)(local_44 + iVar28 * 0xc);
    *piVar7 = iVar22;
    piVar7[1] = iVar15;
    piVar7[2] = iVar8;
    local_50 = iVar28 + 1;
    local_58 = local_48;
    local_54 = local_44;
    local_40 = local_50;
  }
  iVar23 = local_50;
  iVar21 = local_54;
  if (local_50 != 0) {
    iVar28 = local_54 + local_50 * 0xc;
    iVar8 = local_50 * 0xc;
    iVar5 = local_54;
    do {
      if (iVar8 == 0) {
        iVar5 = local_50 + 1;
        iVar22 = 0;
        piVar7 = param_1 + 9;
        iVar8 = local_54;
        goto LAB_015e2c50;
      }
      puVar6 = (uint *)(iVar5 + 8);
      iVar8 = iVar8 + -0xc;
      iVar5 = iVar5 + 0xc;
    } while (*puVar6 < 0x40);
LAB_015e2be8:
    uVar19 = 0;
    goto LAB_015e3090;
  }
  iVar21 = param_1[0xb];
  if (iVar21 == param_1[9]) {
    FUN_006666a0();
  }
LAB_015e2c08:
  *(undefined1 *)(param_1[10] + iVar21) = 0;
  param_1[0xb] = iVar21 + 1;
LAB_015e308c:
  uVar19 = 2;
LAB_015e3090:
  FUN_006a41c0(&local_58);
  return uVar19;
code_r0x015e2830:
  bVar32 = iVar5 == 0;
  iVar5 = 0;
  puVar27 = (undefined1 *)0x110001;
  if (bVar32) goto LAB_015e27bc;
  FUN_006666fc(&local_30,iVar21,iVar8);
  if (local_5c == local_48) {
    FUN_019abd3c(&local_48);
    iVar23 = local_44;
  }
  iVar5 = 0;
  puVar27 = (undefined1 *)0x110001;
  local_40 = local_5c + 1;
  puVar6 = (uint *)(iVar23 + local_5c * 0xc);
  *puVar6 = local_30;
  puVar6[1] = local_2c;
  puVar6[2] = local_28;
  local_5c = local_40;
LAB_015e2a94:
  iVar8 = iVar5;
  local_34 = iVar5;
  goto LAB_015e27bc;
LAB_015e2c50:
  if (iVar22 == iVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(iVar22,iVar23,iVar23,&DAT_01cfd468);
  }
  FUN_015fb97c(&local_30,iVar21 + iVar22 * 0xc,iVar23 - iVar22,".",1);
  uVar13 = local_28;
  uVar16 = local_2c;
  iVar17 = param_1[6];
  iVar18 = param_1[7];
  iVar20 = param_1[4];
  iVar15 = param_1[5];
  if (param_1[3] != 0) {
    uVar12 = local_2c;
    uVar30 = local_28;
    uVar9 = FUN_01adafd4(iVar20);
    uVar1 = uVar9 >> 0x19;
    iVar29 = *param_1;
    uVar31 = param_1[1];
    local_98 = 0;
    while( true ) {
      uVar9 = uVar31 & uVar9;
      uVar24 = *(uint *)(iVar29 + uVar9);
      uVar10 = uVar24 ^ uVar1 * 0x1010101;
      for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
          uVar10 = uVar10 - 1 & uVar10) {
        uVar26 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar31;
        iVar11 = iVar29 + -0x10 + uVar26 * -0x10;
        if ((uVar13 == *(uint *)(iVar11 + 8)) &&
           (iVar11 = thunk_FUN_01bed842(uVar16,*(undefined4 *)(iVar11 + 4),uVar13,iVar18,uVar12,
                                        uVar30), iVar11 == 0)) {
          uVar13 = (uint)*(ushort *)(iVar29 + uVar26 * -0x10 + -4);
          FUN_015e9368(piVar7,(uVar13 << 0x18 | ((uVar13 | 0xc000) >> 8) << 0x10) >> 0x10);
          FUN_0134bd64(local_30,uVar16);
          goto LAB_015e308c;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_98 = local_98 + 4;
      uVar9 = uVar9 + local_98;
    }
  }
  uVar1 = local_30;
  iVar29 = param_1[0xb];
  uVar12 = FUN_01adafd4(iVar20,iVar15,iVar17,iVar18,uVar16,uVar13);
  if (param_1[2] == 0) {
    FUN_015d3cd4(param_1,param_1 + 4);
  }
  iVar15 = iVar8 + 0xc;
  iVar22 = iVar22 + 1;
  bVar32 = false;
  puVar6 = (uint *)*param_1;
  uVar9 = param_1[1];
  iVar17 = 0;
  uVar30 = uVar12;
  do {
    uVar30 = uVar9 & uVar30;
    uVar10 = *(uint *)((int)puVar6 + uVar30);
    uVar31 = uVar10 ^ (uVar12 >> 0x19) * 0x1010101;
    for (uVar31 = ~uVar31 & 0x80808080 & uVar31 + 0xfefefeff; uVar31 != 0;
        uVar31 = uVar31 - 1 & uVar31) {
      uVar24 = uVar30 + ((uint)LZCOUNT(uVar31 << 0x18 | (uVar31 >> 8 & 0xff) << 0x10 |
                                       (uVar31 >> 0x10 & 0xff) << 8 | uVar31 >> 0x18) >> 3) & uVar9;
      if ((uVar13 == puVar6[uVar24 * -4 + -2]) &&
         (iVar18 = thunk_FUN_01bed842(uVar16,puVar6[uVar24 * -4 + -3]), iVar18 == 0)) {
        *(short *)(puVar6 + uVar24 * -4 + -1) = (short)iVar29;
        FUN_0134bd64(uVar1,uVar16);
        goto LAB_015e2f58;
      }
    }
    uVar24 = uVar10 & 0x80808080;
    uVar31 = local_a8;
    if (bVar32) {
LAB_015e2f00:
      if ((uVar24 & uVar10 << 1) != 0) break;
      bVar32 = true;
      local_a8 = uVar31;
    }
    else {
      if (uVar24 != 0) {
        uVar31 = uVar30 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                         (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                 uVar9;
        goto LAB_015e2f00;
      }
      bVar32 = false;
    }
    iVar17 = iVar17 + 4;
    uVar30 = iVar17 + uVar30;
  } while( true );
  uVar30 = (uint)*(char *)((int)puVar6 + uVar31);
  if (-1 < (int)uVar30) {
    uVar30 = *puVar6 & 0x80808080;
    uVar31 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar30 >> 8 & 0xff) << 0x10 |
                     (uVar30 >> 0x10 & 0xff) << 8 | uVar30 >> 0x18);
    uVar30 = (uint)*(byte *)((int)puVar6 + (uVar31 >> 3));
    uVar31 = uVar31 >> 3;
  }
  iVar17 = param_1[3];
  iVar18 = param_1[2];
  bVar2 = (byte)(uVar12 >> 0x19);
  *(byte *)((int)puVar6 + uVar31) = bVar2;
  param_1[2] = iVar18 - (uVar30 & 1);
  param_1[3] = iVar17 + 1;
  *(byte *)((int)puVar6 + (uVar9 & uVar31 - 4) + 4) = bVar2;
  *(short *)(puVar6 + uVar31 * -4 + -1) = (short)iVar29;
  puVar6[uVar31 * -4 + -4] = uVar1;
  puVar6[uVar31 * -4 + -3] = uVar16;
  puVar6[uVar31 * -4 + -2] = uVar13;
LAB_015e2f58:
  uVar16 = *(uint *)(iVar8 + 8);
  if (0x3f < uVar16) goto LAB_015e2be8;
  uVar19 = *(undefined4 *)(iVar8 + 4);
  iVar8 = param_1[0xb];
  if (iVar8 == param_1[9]) {
    FUN_006666a0(piVar7);
  }
  *(char *)(param_1[10] + iVar8) = (char)uVar16;
  param_1[0xb] = iVar8 + 1;
  FUN_01ac6cbc(piVar7,uVar19,uVar16);
  iVar8 = iVar15;
  if (iVar15 == iVar28) goto LAB_015e30a4;
  goto LAB_015e2c50;
LAB_015e30a4:
  iVar21 = param_1[0xb];
  if (iVar21 == param_1[9]) {
    FUN_006666a0(piVar7);
  }
  goto LAB_015e2c08;
}

