// FUN_00ea0d40 @ 00ea0d40 size=1868 calls_out=9 calls_in=9
// strings: 

void FUN_00ea0d40(uint *param_1,uint *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint local_20c;
  undefined1 auStack_1c8 [112];
  undefined1 local_158 [112];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined1 auStack_78 [72];
  uint local_30;
  
  local_bc = param_2[3];
  local_cc = local_bc ^ 0x74656462;
  local_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  local_d0 = uStack_c0 ^ 0x79746573;
  local_d4 = local_bc ^ 0x646f7261;
  local_d8 = uStack_c0 ^ 0x6e646f6d;
  local_dc = uStack_c4 ^ 0x6c796765;
  local_e0 = local_c8 ^ 0x6e657261;
  local_e4 = uStack_c4 ^ 0x736f6d65;
  local_e8 = local_c8 ^ 0x70736575;
  local_b8 = 0;
  bVar2 = false;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  FUN_00ed56f4(&local_e8,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  local_158[0] = 0xff;
  FUN_00ed56f4(&local_e8,local_158,1);
  iVar19 = local_b0;
  uVar18 = local_b4;
  uVar9 = local_b8;
  uVar11 = local_cc;
  uVar4 = local_d0;
  uVar17 = local_d4;
  uVar14 = local_d8;
  uVar12 = local_dc;
  uVar13 = local_e0;
  uVar16 = local_e4;
  uVar5 = local_e8;
  uVar3 = *(undefined4 *)(param_3 + 4);
  iVar7 = *(int *)(param_3 + 8);
  FUN_016dd1aa(auStack_1c8,param_4,0x70);
  uVar22 = uVar14 + uVar5;
  uVar10 = uVar17 + uVar16 + (uint)CARRY4(uVar14,uVar5);
  uVar8 = (uVar14 << 0xd | uVar17 >> 0x13) ^ uVar22;
  uVar18 = uVar18 | iVar19 << 0x18;
  uVar16 = (uVar17 << 0xd | uVar14 >> 0x13) ^ uVar10;
  uVar11 = uVar18 ^ uVar11;
  uVar4 = uVar9 ^ uVar4;
  uVar21 = uVar4 + uVar13;
  uVar14 = uVar11 + uVar12 + (uint)CARRY4(uVar4,uVar13);
  uVar20 = uVar14 + uVar16 + (uint)CARRY4(uVar21,uVar8);
  uVar5 = (uVar4 << 0x10 | uVar11 >> 0x10) ^ uVar21;
  uVar17 = uVar21 + uVar8 ^ (uVar8 << 0x11 | uVar16 >> 0xf);
  uVar14 = (uVar11 << 0x10 | uVar4 >> 0x10) ^ uVar14;
  uVar12 = uVar14 + uVar22 + (uint)CARRY4(uVar5,uVar10);
  uVar9 = uVar5 + uVar10 ^ uVar9;
  uVar13 = uVar20 ^ (uVar16 << 0x11 | uVar8 >> 0xf);
  uVar22 = uVar9 + uVar17;
  uVar23 = (uVar12 ^ uVar18) + uVar13 + (uint)CARRY4(uVar9,uVar17);
  uVar16 = uVar23 ^ (uVar13 << 0xd | uVar17 >> 0x13);
  uVar4 = uVar22 ^ (uVar17 << 0xd | uVar13 >> 0x13);
  uVar12 = (uVar14 << 0x15 | uVar5 >> 0xb) ^ uVar12;
  uVar20 = uVar20 ^ 0xff;
  uVar5 = (uVar5 << 0x15 | uVar14 >> 0xb) ^ uVar5 + uVar10;
  uVar11 = uVar5 + uVar20;
  uVar14 = uVar12 + uVar21 + uVar8 + (uint)CARRY4(uVar5,uVar20);
  uVar18 = uVar16 + uVar14 + (uint)CARRY4(uVar4,uVar11);
  uVar13 = uVar18 ^ (uVar16 << 0x11 | uVar4 >> 0xf);
  uVar16 = uVar4 + uVar11 ^ (uVar4 << 0x11 | uVar16 >> 0xf);
  uVar14 = (uVar12 << 0x10 | uVar5 >> 0x10) ^ uVar14;
  uVar17 = (uVar5 << 0x10 | uVar12 >> 0x10) ^ uVar11;
  uVar9 = uVar17 + uVar23;
  uVar12 = uVar14 + uVar22 + (uint)CARRY4(uVar17,uVar23);
  uVar8 = uVar13 + uVar12 + (uint)CARRY4(uVar16,uVar9);
  uVar5 = (uVar13 << 0xd | uVar16 >> 0x13) ^ uVar8;
  uVar13 = (uVar16 << 0xd | uVar13 >> 0x13) ^ uVar16 + uVar9;
  uVar12 = (uVar14 << 0x15 | uVar17 >> 0xb) ^ uVar12;
  uVar14 = (uVar17 << 0x15 | uVar14 >> 0xb) ^ uVar9;
  uVar17 = uVar14 + uVar18;
  uVar4 = uVar12 + uVar4 + uVar11 + (uint)CARRY4(uVar14,uVar18);
  uVar11 = (uVar12 << 0x10 | uVar14 >> 0x10) ^ uVar4;
  uVar12 = (uVar14 << 0x10 | uVar12 >> 0x10) ^ uVar17;
  uVar18 = uVar5 + uVar4 + (uint)CARRY4(uVar13,uVar17);
  uVar14 = uVar12 + uVar8;
  uVar4 = (uVar5 << 0x11 | uVar13 >> 0xf) ^ uVar18;
  uVar16 = uVar11 + uVar16 + uVar9 + (uint)CARRY4(uVar12,uVar8);
  uVar9 = (uVar12 << 0x15 | uVar11 >> 0xb) ^ uVar14;
  uVar12 = (uVar11 << 0x15 | uVar12 >> 0xb) ^ uVar16;
  uVar8 = uVar9 + uVar18;
  uVar5 = (uVar13 << 0x11 | uVar5 >> 0xf) ^ uVar13 + uVar17;
  uVar17 = uVar12 + uVar13 + uVar17 + (uint)CARRY4(uVar9,uVar18);
  uVar11 = (uVar5 << 0xd | uVar4 >> 0x13) ^ uVar5 + uVar14;
  uVar13 = (uVar4 << 0xd | uVar5 >> 0x13) ^ uVar4 + uVar16 + (uint)CARRY4(uVar5,uVar14);
  uVar5 = param_2[5];
  uVar16 = param_2[6];
  if (param_2[9] == 0) {
    FUN_0167cb88(param_2 + 7,1,uVar5,uVar16);
  }
  uVar14 = param_2[8];
  iVar19 = 0;
  uVar12 = ((uVar8 ^ uVar12 >> 0x10) << 0x15 | ((uVar12 << 0x10 | uVar9 >> 0x10) ^ uVar17) >> 0xb) ^
           (uVar11 << 0x11 | uVar13 >> 0xf) ^ uVar13 + uVar17 + (uint)CARRY4(uVar11,uVar8) ^
           uVar11 + uVar8;
  puVar15 = (uint *)param_2[7];
  uVar13 = uVar12;
  do {
    uVar13 = uVar14 & uVar13;
    uVar4 = *(uint *)((int)puVar15 + uVar13);
    uVar17 = uVar4 ^ (uVar12 >> 0x19) * 0x1010101;
    for (uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff; uVar17 != 0;
        uVar17 = uVar17 - 1 & uVar17) {
      uVar11 = puVar15[-1 - (uVar13 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18)
                                      >> 3) & uVar14)];
      if (uVar16 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar11,uVar16,&DAT_018adbc8);
      }
      iVar6 = uVar5 + uVar11 * 0xc0;
      if ((iVar7 == *(int *)(iVar6 + 0x78)) &&
         (iVar6 = thunk_FUN_016dd50a(uVar3,*(undefined4 *)(iVar6 + 0x74)), iVar6 == 0)) {
        if (param_2[6] <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,param_2[6],&DAT_01882cc0);
        }
        iVar19 = param_2[5] + uVar11 * 0xc0;
        FUN_016dd1aa(param_1 + 2,iVar19,0x70);
        FUN_016dd1aa(iVar19,param_4,0x70);
        *param_1 = uVar11;
        FUN_00f174cc(param_3);
        return;
      }
    }
    uVar17 = uVar4 & 0x80808080;
    if (bVar2) {
LAB_00ea1204:
      if ((uVar17 & uVar4 << 1) != 0) break;
      bVar2 = true;
    }
    else {
      if (uVar17 != 0) {
        local_20c = uVar13 + ((uint)LZCOUNT((uVar4 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                            (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                    uVar14;
        goto LAB_00ea1204;
      }
      bVar2 = false;
    }
    iVar19 = iVar19 + 4;
    uVar13 = iVar19 + uVar13;
  } while( true );
  uVar5 = (uint)*(char *)((int)puVar15 + local_20c);
  if (-1 < (int)uVar5) {
    uVar5 = *puVar15 & 0x80808080;
    uVar16 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                     (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
    uVar5 = (uint)*(byte *)((int)puVar15 + (uVar16 >> 3));
    local_20c = uVar16 >> 3;
  }
  uVar16 = param_2[9];
  uVar13 = param_2[10];
  uVar17 = param_2[6];
  bVar1 = (byte)(uVar12 >> 0x19);
  *(byte *)((int)puVar15 + local_20c) = bVar1;
  param_2[9] = uVar16 - (uVar5 & 1);
  param_2[10] = uVar13 + 1;
  *(byte *)((int)puVar15 + (local_20c - 4 & uVar14) + 4) = bVar1;
  puVar15[-1 - local_20c] = uVar17;
  FUN_016dd1aa(local_158,param_4,0x70);
  uVar13 = param_2[6];
  uVar5 = uVar13;
  uVar16 = param_2[4];
  if (uVar13 != param_2[4]) goto LAB_00ea12f4;
  uVar5 = param_2[9] + param_2[10];
  uVar16 = 0xaaaaaa;
  if (uVar5 < 0xaaaaaa) {
    uVar16 = uVar5;
  }
  if ((uVar16 - uVar13 < 2) || (uVar5 < uVar13)) {
LAB_00ea1398:
    uVar16 = uVar13 + 1;
    FUN_00ed7c88(&local_e8,uVar13,param_2[5],uVar16,8,0xc0);
    if (local_e8 == 1) {
      uVar16 = local_e4;
      uVar5 = local_e0;
LAB_00ea1490:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,uVar5);
    }
  }
  else {
    FUN_00ed7c88(&local_e8,uVar13,param_2[5],uVar16,8,0xc0);
    if (local_e8 != 0) {
      uVar13 = param_2[4];
      uVar5 = param_2[6];
      uVar16 = uVar13;
      if (uVar13 != uVar5) goto LAB_00ea12f4;
      if (uVar13 == 0xffffffff) {
        uVar16 = 0;
        uVar5 = 0xffffffff;
        goto LAB_00ea1490;
      }
      goto LAB_00ea1398;
    }
  }
  param_2[5] = local_e4;
  param_2[4] = uVar16;
  uVar5 = param_2[6];
LAB_00ea12f4:
  FUN_016dd1aa(auStack_78,param_3,0x48);
  FUN_016dd1aa(&local_e8,param_4,0x70);
  local_30 = uVar12;
  if (uVar5 == uVar16) {
    FUN_0166e1c4(param_2 + 4);
  }
  FUN_016dd1aa(param_2[5] + uVar5 * 0xc0,&local_e8,0xc0);
  param_2[6] = uVar5 + 1;
  param_1[2] = 4;
  *param_1 = uVar17;
  return;
}

