// FUN_0125e31c @ 0125e31c size=780 calls_out=5 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0125e31c(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *extraout_r2;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_ac;
  uint *local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c [4];
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  
  uVar17 = thunk_FUN_01bee35a(param_1,0x2c0,param_1);
  puVar11 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  if ((char)puVar11[4] == '\x01') {
    local_68 = *puVar11;
    uStack_64 = puVar11[1];
    local_60 = puVar11[2];
    local_5c[0] = puVar11[3];
  }
  else {
    FUN_019ae6ac(&local_68);
    *(undefined1 *)(puVar11 + 4) = 1;
    *puVar11 = local_68;
    puVar11[1] = uStack_64;
    puVar11[2] = local_60;
    puVar11[3] = local_5c[0];
  }
  *puVar11 = local_68 + 1;
  puVar11[1] = uStack_64 + (0xfffffffe < local_68);
  local_88 = &DAT_0056d238;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = local_68;
  uStack_74 = uStack_64;
  local_70 = local_60;
  local_6c = local_5c[0];
  FUN_0125e8a4(&local_88,2,local_68,uStack_64,local_60,local_5c[0]);
  local_60 = *param_2;
  local_5c[0] = param_2[1];
  local_5c[1] = param_2[2];
  local_5c[2] = param_2[3];
  local_5c[3] = param_2[4];
  local_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  uStack_3c = param_2[9];
  iVar13 = 0;
LAB_0125e3c8:
  uVar12 = local_6c;
  uVar9 = local_70;
  uVar8 = uStack_74;
  uVar10 = local_78;
  cVar1 = (char)local_5c[iVar13 * 5 + -1];
  uVar7 = FUN_0125c3e4(local_78,uStack_74,local_70,local_6c,cVar1);
  if (local_80 == 0) {
    FUN_0125e8a4(&local_88,1,uVar10,uVar8,uVar9,uVar12);
  }
  uVar10 = local_84;
  puVar11 = local_88;
  iVar14 = iVar13 + 1;
  iVar15 = 0;
  bVar6 = false;
  uVar8 = uVar7;
  do {
    uVar8 = local_84 & uVar8;
    uVar9 = *(uint *)((int)local_88 + uVar8);
    uVar12 = uVar9 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar16 = uVar12 >> 8;
      uVar2 = uVar12 >> 0x10;
      uVar3 = uVar12 >> 0x18;
      uVar4 = uVar12 << 0x18;
      uVar12 = uVar12 - 1 & uVar12;
      uVar16 = uVar8 + ((uint)LZCOUNT(uVar4 | (uVar16 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                       >> 3) & local_84;
      if ((char)local_88[uVar16 * -5 + -5] == cVar1) {
        uVar10 = local_5c[iVar13 * 5 + 1];
        uVar8 = local_5c[iVar13 * 5 + 2];
        uVar9 = local_5c[iVar13 * 5 + 3];
        local_88[uVar16 * -5 + -4] = local_5c[iVar13 * 5];
        local_88[uVar16 * -5 + -3] = uVar10;
        local_88[uVar16 * -5 + -2] = uVar8;
        local_88[uVar16 * -5 + -1] = uVar9;
        goto LAB_0125e51c;
      }
    }
    uVar12 = uVar9 & 0x80808080;
    if (bVar6) {
LAB_0125e4d8:
      if ((uVar12 & uVar9 << 1) != 0) break;
      bVar6 = true;
    }
    else {
      if (uVar12 != 0) {
        local_ac = uVar8 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                          (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   local_84;
        goto LAB_0125e4d8;
      }
      bVar6 = false;
    }
    iVar15 = iVar15 + 4;
    uVar8 = iVar15 + uVar8;
  } while( true );
  uVar9 = (uint)*(char *)((int)local_88 + local_ac);
  uVar8 = local_ac;
  if (-1 < (int)uVar9) {
    uVar8 = *local_88 & 0x80808080;
    uVar8 = LZCOUNT((*local_88 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18);
    uVar9 = (uint)*(byte *)((int)local_88 + (uVar8 >> 3));
    uVar8 = uVar8 >> 3;
  }
  FUN_01bed4e2((uint)auStack_38 | 3,local_5c + iVar13 * 5,0x10);
  bVar5 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar11 + uVar8) = bVar5;
  *(byte *)((int)puVar11 + (uVar8 - 4 & uVar10) + 4) = bVar5;
  *(char *)(puVar11 + uVar8 * -5 + -5) = cVar1;
  local_80 = local_80 - (uVar9 & 1);
  local_7c = local_7c + 1;
  FUN_01bed4e2((int)puVar11 + uVar8 * -0x14 + -0x13,auStack_38,0x13);
LAB_0125e51c:
  iVar13 = iVar14;
  if (iVar14 == 2) {
    *extraout_r2 = local_88;
    extraout_r2[1] = local_84;
    extraout_r2[2] = local_80;
    extraout_r2[3] = local_7c;
    extraout_r2[4] = local_78;
    extraout_r2[5] = uStack_74;
    extraout_r2[6] = local_70;
    extraout_r2[7] = local_6c;
    return;
  }
  goto LAB_0125e3c8;
}

