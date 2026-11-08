// FUN_009a0000 @ 009a0000 size=1304 calls_out=2 calls_in=1
// strings: 

void FUN_009a0000(int *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint local_88;
  uint local_5c [4];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  
  uVar11 = 1;
  if (param_1[3] == 0) {
    uVar11 = 2;
  }
  if ((uint)param_1[2] < uVar11) {
    FUN_0099bae8(param_1,uVar11,param_1[4],param_1[5],param_1[6],param_1[7]);
  }
  iVar18 = 0;
  local_5c[0] = *(uint *)(param_2 + 4);
  local_5c[1] = *(undefined4 *)(param_2 + 8);
  local_5c[2] = *(undefined4 *)(param_2 + 0xc);
  local_5c[3] = *(undefined4 *)(param_2 + 0x10);
  local_4c = *(undefined4 *)(param_2 + 0x14);
  uStack_48 = *(undefined4 *)(param_2 + 0x18);
  uStack_44 = *(undefined4 *)(param_2 + 0x1c);
  uStack_40 = *(undefined4 *)(param_2 + 0x20);
  uStack_3c = *(undefined4 *)(param_2 + 0x24);
  puVar4 = (uint *)((uint)auStack_38 | 3);
  bVar2 = false;
LAB_009a0064:
  bVar3 = bVar2;
  uVar12 = param_1[4];
  local_88 = param_1[5];
  uVar19 = param_1[6];
  uVar8 = param_1[7];
  uVar14 = uVar8 ^ 0x646f7261;
  uVar11 = uVar19 ^ 0x6e646f6d;
  uVar22 = uVar11 + (uVar12 ^ 0x70736575);
  uVar25 = (uVar11 << 0xd | uVar14 >> 0x13) ^ uVar22;
  uVar23 = uVar14 + (local_88 ^ 0x736f6d65) + (uint)CARRY4(uVar11,uVar12 ^ 0x70736575);
  uVar15 = (uVar14 << 0xd | uVar11 >> 0x13) ^ uVar23;
  uVar6 = uVar8 ^ 0x70656462;
  uVar11 = local_5c[iVar18 * 5 + -1];
  uVar13 = (uint)(byte)uVar11;
  uVar9 = uVar19 ^ uVar13 ^ 0x79746573;
  uVar14 = uVar9 + (uVar12 ^ 0x6e657261);
  uVar10 = uVar6 + (local_88 ^ 0x6c796765) + (uint)CARRY4(uVar9,uVar12 ^ 0x6e657261);
  uVar7 = (uVar9 << 0x10 | uVar6 >> 0x10) ^ uVar14;
  uVar20 = uVar15 + uVar10 + (uint)CARRY4(uVar25,uVar14);
  uVar10 = (uVar6 << 0x10 | uVar9 >> 0x10) ^ uVar10;
  uVar16 = uVar25 + uVar14 ^ (uVar25 << 0x11 | uVar15 >> 0xf);
  uVar9 = uVar10 + uVar22 + (uint)CARRY4(uVar7,uVar23);
  uVar6 = uVar7 + uVar23 ^ uVar13;
  uVar22 = uVar20 ^ (uVar15 << 0x11 | uVar25 >> 0xf);
  uVar24 = uVar6 + uVar16;
  uVar17 = (uVar9 ^ 0x4000000) + uVar22 + (uint)CARRY4(uVar6,uVar16);
  uVar9 = (uVar10 << 0x15 | uVar7 >> 0xb) ^ uVar9;
  uVar15 = uVar17 ^ (uVar22 << 0xd | uVar16 >> 0x13);
  uVar6 = (uVar7 << 0x15 | uVar10 >> 0xb) ^ uVar7 + uVar23;
  uVar20 = uVar20 ^ 0xff;
  uVar16 = uVar24 ^ (uVar16 << 0xd | uVar22 >> 0x13);
  uVar7 = uVar20 + uVar6;
  uVar20 = uVar25 + uVar14 + uVar9 + (uint)CARRY4(uVar20,uVar6);
  uVar25 = uVar15 + uVar20 + (uint)CARRY4(uVar16,uVar7);
  uVar23 = uVar25 ^ (uVar15 << 0x11 | uVar16 >> 0xf);
  uVar14 = uVar7 ^ (uVar6 << 0x10 | uVar9 >> 0x10);
  uVar22 = uVar16 + uVar7 ^ (uVar16 << 0x11 | uVar15 >> 0xf);
  uVar20 = uVar20 ^ (uVar9 << 0x10 | uVar6 >> 0x10);
  uVar6 = uVar14 + uVar17;
  uVar10 = uVar20 + uVar24 + (uint)CARRY4(uVar14,uVar17);
  uVar24 = uVar23 + uVar10 + (uint)CARRY4(uVar22,uVar6);
  uVar17 = (uVar23 << 0xd | uVar22 >> 0x13) ^ uVar24;
  uVar23 = (uVar22 << 0xd | uVar23 >> 0x13) ^ uVar22 + uVar6;
  uVar10 = (uVar20 << 0x15 | uVar14 >> 0xb) ^ uVar10;
  uVar14 = (uVar14 << 0x15 | uVar20 >> 0xb) ^ uVar6;
  uVar9 = uVar14 + uVar25;
  uVar20 = uVar10 + uVar16 + uVar7 + (uint)CARRY4(uVar14,uVar25);
  uVar15 = uVar17 + uVar20 + (uint)CARRY4(uVar23,uVar9);
  uVar20 = (uVar10 << 0x10 | uVar14 >> 0x10) ^ uVar20;
  uVar16 = (uVar17 << 0x11 | uVar23 >> 0xf) ^ uVar15;
  uVar14 = (uVar14 << 0x10 | uVar10 >> 0x10) ^ uVar9;
  uVar7 = uVar14 + uVar24;
  uVar6 = uVar20 + uVar22 + uVar6 + (uint)CARRY4(uVar14,uVar24);
  uVar22 = (uVar20 << 0x15 | uVar14 >> 0xb) ^ uVar6;
  uVar10 = (uVar14 << 0x15 | uVar20 >> 0xb) ^ uVar7;
  uVar20 = uVar10 + uVar15;
  uVar14 = (uVar23 << 0x11 | uVar17 >> 0xf) ^ uVar23 + uVar9;
  uVar15 = uVar22 + uVar23 + uVar9 + (uint)CARRY4(uVar10,uVar15);
  uVar9 = (uVar14 << 0xd | uVar16 >> 0x13) ^ uVar14 + uVar7;
  uVar14 = (uVar16 << 0xd | uVar14 >> 0x13) ^ uVar16 + uVar6 + (uint)CARRY4(uVar14,uVar7);
  if (param_1[2] == 0) {
    FUN_0099bae8(param_1,1,uVar12,local_88,uVar19,uVar8);
  }
  puVar5 = (uint *)*param_1;
  uVar6 = param_1[1];
  bVar2 = false;
  iVar26 = 0;
  uVar9 = (uVar9 << 0x11 | uVar14 >> 0xf) ^
          ((uVar22 >> 0x10 ^ uVar20) << 0x15 | ((uVar22 << 0x10 | uVar10 >> 0x10) ^ uVar15) >> 0xb)
          ^ uVar14 + uVar15 + (uint)CARRY4(uVar9,uVar20) ^ uVar9 + uVar20;
  uVar14 = uVar9;
  do {
    uVar14 = uVar6 & uVar14;
    uVar10 = *(uint *)((int)puVar5 + uVar14);
    uVar7 = uVar10 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar20 = uVar7 >> 8;
      uVar8 = uVar7 >> 0x10;
      uVar15 = uVar7 >> 0x18;
      uVar12 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar20 = uVar14 + ((uint)LZCOUNT(uVar12 | (uVar20 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 |
                                       uVar15) >> 3) & uVar6;
      if (uVar13 == (byte)puVar5[uVar20 * -5 + -5]) {
        uVar11 = local_5c[iVar18 * 5];
        uVar14 = local_5c[iVar18 * 5 + 1];
        uVar6 = local_5c[iVar18 * 5 + 2];
        puVar5[uVar20 * -5 + -1] = local_5c[iVar18 * 5 + 3];
        puVar5[uVar20 * -5 + -2] = uVar6;
        puVar5[uVar20 * -5 + -3] = uVar14;
        puVar5[uVar20 * -5 + -4] = uVar11;
        goto LAB_009a03f4;
      }
    }
    uVar7 = uVar10 & 0x80808080;
    if (bVar2) {
LAB_009a03b8:
      if ((uVar7 & uVar10 << 1) != 0) break;
      bVar2 = true;
    }
    else {
      if (uVar7 != 0) {
        local_88 = uVar14 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar6;
        goto LAB_009a03b8;
      }
      bVar2 = false;
    }
    iVar26 = iVar26 + 4;
    uVar14 = iVar26 + uVar14;
  } while( true );
  uVar14 = (uint)*(char *)((int)puVar5 + local_88);
  if (-1 < (int)uVar14) {
    uVar14 = *puVar5 & 0x80808080;
    local_88 = LZCOUNT((*puVar5 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18);
    uVar14 = (uint)*(byte *)((int)puVar5 + (local_88 >> 3));
    local_88 = local_88 >> 3;
  }
  bVar1 = (byte)(uVar9 >> 0x19);
  *(byte *)((int)puVar5 + local_88) = bVar1;
  uVar10 = local_5c[iVar18 * 5];
  uVar9 = local_5c[iVar18 * 5 + 1];
  uVar7 = local_5c[iVar18 * 5 + 2];
  iVar21 = param_1[2];
  iVar26 = param_1[3];
  puVar4[3] = local_5c[iVar18 * 5 + 3];
  puVar4[2] = uVar7;
  puVar4[1] = uVar9;
  *puVar4 = uVar10;
  param_1[2] = iVar21 - (uVar14 & 1);
  param_1[3] = iVar26 + 1;
  *(byte *)((int)puVar5 + (uVar6 & local_88 - 4) + 4) = bVar1;
  *(byte *)(puVar5 + local_88 * -5 + -5) = (byte)uVar11;
  FUN_016dd1aa((int)puVar5 + local_88 * -0x14 + -0x13,auStack_38,0x13);
LAB_009a03f4:
  iVar18 = 1;
  bVar2 = true;
  if (bVar3) {
    return;
  }
  goto LAB_009a0064;
}

