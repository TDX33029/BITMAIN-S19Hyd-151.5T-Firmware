// FUN_00c51108 @ 00c51108 size=968 calls_out=6 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c511f8) */
/* WARNING: Removing unreachable block (ram,0x00c51218) */
/* WARNING: Removing unreachable block (ram,0x00c51220) */
/* WARNING: Removing unreachable block (ram,0x00c5122c) */
/* WARNING: Removing unreachable block (ram,0x00c51210) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c51108(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_130;
  uint *local_108;
  uint local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [80];
  uint local_90;
  uint local_8c;
  uint uStack_88;
  uint auStack_84 [19];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined3 uStack_2c;
  
  uVar16 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar8 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar8[4] == '\0') {
    FUN_015f62e4(&local_90);
    *puVar8 = local_90;
    puVar8[1] = local_8c;
    puVar8[2] = uStack_88;
    puVar8[3] = auStack_84[0];
    *(undefined1 *)(puVar8 + 4) = 1;
  }
  local_f8 = *puVar8;
  uStack_f4 = puVar8[1];
  local_ec = puVar8[3];
  *puVar8 = local_f8 + 1;
  puVar8[1] = uStack_f4 + (0xfffffffe < local_f8);
  local_f0 = puVar8[2];
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_108 = &DAT_005674cc;
  FUN_016dd1aa(auStack_e0,param_2,0x50);
  local_e4 = 5;
  local_e8 = 0;
  FUN_00c515bc(&local_108,5,&local_f8);
  FUN_016dd1aa(&local_90,&local_e8,0x58);
  if (local_8c == local_90) {
LAB_00c51498:
    *param_1 = local_108;
    param_1[1] = local_104;
    param_1[2] = local_100;
    param_1[3] = local_fc;
    param_1[4] = local_f8;
    param_1[5] = uStack_f4;
    param_1[6] = local_f0;
    param_1[7] = local_ec;
    return;
  }
  puVar8 = (uint *)((uint)&local_38 | 3);
  uVar10 = local_90;
LAB_00c51344:
  cVar1 = (char)auStack_84[uVar10 * 4 + -1];
  uVar7 = FUN_00c507d4(local_f8,uStack_f4,local_f0,local_ec,cVar1);
  uVar13 = uVar10 + 1;
  if (local_100 == 0) {
    FUN_00c515bc(&local_108,1,&local_f8);
  }
  iVar15 = 0;
  bVar6 = false;
  uVar9 = uVar7;
  do {
    uVar9 = local_104 & uVar9;
    uVar14 = *(uint *)((int)local_108 + uVar9);
    uVar11 = uVar14 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar12 = uVar11 >> 8;
      uVar2 = uVar11 >> 0x10;
      uVar3 = uVar11 >> 0x18;
      uVar4 = uVar11 << 0x18;
      uVar11 = uVar11 - 1 & uVar11;
      uVar12 = uVar9 + ((uint)LZCOUNT(uVar4 | (uVar12 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                       >> 3) & local_104;
      if (cVar1 == (char)local_108[uVar12 * -4 + -4]) {
        uVar9 = auStack_84[uVar10 * 4];
        uVar11 = auStack_84[uVar10 * 4 + 1];
        uVar7 = local_108[uVar12 * -4 + -2];
        uVar14 = local_108[uVar12 * -4 + -3];
        local_108[uVar12 * -4 + -1] = auStack_84[uVar10 * 4 + 2];
        local_108[uVar12 * -4 + -2] = uVar11;
        local_108[uVar12 * -4 + -3] = uVar9;
        if ((uVar14 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        goto LAB_00c51338;
      }
    }
    uVar12 = uVar14 & 0x80808080;
    uVar11 = local_130;
    if (bVar6) {
LAB_00c512e4:
      if ((uVar12 & uVar14 << 1) != 0) break;
      bVar6 = true;
      local_130 = uVar11;
    }
    else {
      if (uVar12 != 0) {
        uVar11 = uVar9 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                        (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 local_104;
        goto LAB_00c512e4;
      }
      bVar6 = false;
    }
    iVar15 = iVar15 + 4;
    uVar9 = iVar15 + uVar9;
  } while( true );
  uVar9 = (uint)*(char *)((int)local_108 + uVar11);
  if (-1 < (int)uVar9) {
    uVar9 = *local_108 & 0x80808080;
    uVar11 = LZCOUNT((*local_108 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                     (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
    uVar9 = (uint)*(byte *)((int)local_108 + (uVar11 >> 3));
    uVar11 = uVar11 >> 3;
  }
  uVar14 = auStack_84[uVar10 * 4 + 2];
  puVar8[1] = auStack_84[uVar10 * 4 + 1];
  uVar10 = auStack_84[uVar10 * 4];
  puVar8[2] = uVar14;
  *puVar8 = uVar10;
  bVar5 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)local_108 + uVar11) = bVar5;
  *(byte *)((int)local_108 + (local_104 & uVar11 - 4) + 4) = bVar5;
  *(undefined4 *)((int)local_108 + uVar11 * -0x10 + -7) = local_30;
  *(char *)(local_108 + uVar11 * -4 + -4) = cVar1;
  *(undefined4 *)((int)local_108 + uVar11 * -0x10 + -0xf) = local_38;
  *(undefined4 *)((int)local_108 + uVar11 * -0x10 + -0xb) = local_34;
  local_108[uVar11 * -4 + -1] = CONCAT31(uStack_2c,local_30._3_1_);
  local_100 = local_100 - (uVar9 & 1);
  local_fc = local_fc + 1;
LAB_00c51338:
  uVar10 = uVar13;
  if (uVar13 == local_8c) goto LAB_00c51498;
  goto LAB_00c51344;
}

