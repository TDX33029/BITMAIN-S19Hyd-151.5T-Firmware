// FUN_00c5037c @ 00c5037c size=988 calls_out=5 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x00c50480) */
/* WARNING: Removing unreachable block (ram,0x00c504a0) */
/* WARNING: Removing unreachable block (ram,0x00c504a8) */
/* WARNING: Removing unreachable block (ram,0x00c504b4) */
/* WARNING: Removing unreachable block (ram,0x00c50498) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c5037c(undefined4 *param_1,undefined4 *param_2)

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
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  uint local_d0;
  uint *local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint auStack_54 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined3 uStack_2c;
  
  uVar18 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar10 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar10[4] == '\0') {
    FUN_015f62e4(&local_60);
    *puVar10 = local_60;
    puVar10[1] = local_5c;
    puVar10[2] = uStack_58;
    puVar10[3] = auStack_54[0];
    *(undefined1 *)(puVar10 + 4) = 1;
  }
  local_98 = *puVar10;
  local_94 = puVar10[1];
  local_8c = puVar10[3];
  *puVar10 = local_98 + 1;
  puVar10[1] = local_94 + (0xfffffffe < local_98);
  local_90 = puVar10[2];
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_a8 = &DAT_005674cc;
  local_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  local_74 = param_2[3];
  local_70 = param_2[4];
  uStack_6c = param_2[5];
  uStack_68 = param_2[6];
  uStack_64 = param_2[7];
  local_84 = 2;
  local_88 = 0;
  FUN_00c50b94(&local_a8,2);
  uVar7 = local_84;
  puVar10 = &local_60;
  local_60 = local_88;
  local_5c = local_84;
  uStack_58 = local_80;
  auStack_54[0] = uStack_7c;
  auStack_54[1] = uStack_78;
  auStack_54[2] = local_74;
  auStack_54[3] = local_70;
  uStack_44 = uStack_6c;
  uStack_40 = uStack_68;
  uStack_3c = uStack_64;
  if (local_84 == local_88) {
LAB_00c50720:
    *param_1 = local_a8;
    param_1[1] = local_a4;
    param_1[2] = local_a0;
    param_1[3] = local_9c;
    param_1[4] = local_98;
    param_1[5] = local_94;
    param_1[6] = local_90;
    param_1[7] = local_8c;
    return;
  }
  puVar8 = (uint *)((uint)&local_38 | 3);
  uVar12 = local_88;
LAB_00c505cc:
  cVar1 = (char)auStack_54[uVar12 * 4 + -1];
  uVar9 = FUN_00c507d4(local_98,local_94,local_90,local_8c,cVar1,puVar10);
  uVar15 = uVar12 + 1;
  if (local_a0 == 0) {
    FUN_00c50b94(&local_a8,1,&local_98);
  }
  iVar17 = 0;
  bVar6 = false;
  uVar11 = uVar9;
  do {
    uVar11 = local_a4 & uVar11;
    uVar16 = *(uint *)((int)local_a8 + uVar11);
    uVar13 = uVar16 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar13 = ~uVar13 & 0x80808080 & uVar13 + 0xfefefeff;
    while (uVar13 != 0) {
      uVar14 = uVar13 >> 8;
      uVar2 = uVar13 >> 0x10;
      uVar3 = uVar13 >> 0x18;
      uVar4 = uVar13 << 0x18;
      uVar13 = uVar13 - 1 & uVar13;
      uVar14 = uVar11 + ((uint)LZCOUNT(uVar4 | (uVar14 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & local_a4;
      if (cVar1 == (char)local_a8[uVar14 * -4 + -4]) {
        uVar11 = auStack_54[uVar12 * 4];
        uVar13 = auStack_54[uVar12 * 4 + 1];
        uVar9 = local_a8[uVar14 * -4 + -2];
        uVar16 = local_a8[uVar14 * -4 + -3];
        local_a8[uVar14 * -4 + -1] = auStack_54[uVar12 * 4 + 2];
        local_a8[uVar14 * -4 + -2] = uVar13;
        local_a8[uVar14 * -4 + -3] = uVar11;
        if ((uVar16 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        goto LAB_00c505c0;
      }
    }
    uVar14 = uVar16 & 0x80808080;
    uVar13 = local_d0;
    if (bVar6) {
LAB_00c5056c:
      if ((uVar14 & uVar16 << 1) != 0) break;
      bVar6 = true;
      local_d0 = uVar13;
    }
    else {
      if (uVar14 != 0) {
        uVar13 = uVar11 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                 local_a4;
        goto LAB_00c5056c;
      }
      bVar6 = false;
    }
    iVar17 = iVar17 + 4;
    uVar11 = iVar17 + uVar11;
  } while( true );
  uVar11 = (uint)*(char *)((int)local_a8 + uVar13);
  if (-1 < (int)uVar11) {
    uVar11 = *local_a8 & 0x80808080;
    uVar13 = LZCOUNT((*local_a8 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)local_a8 + (uVar13 >> 3));
    uVar13 = uVar13 >> 3;
  }
  uVar16 = auStack_54[uVar12 * 4 + 2];
  puVar8[1] = auStack_54[uVar12 * 4 + 1];
  uVar12 = auStack_54[uVar12 * 4];
  puVar8[2] = uVar16;
  *puVar8 = uVar12;
  bVar5 = (byte)(uVar9 >> 0x19);
  *(byte *)((int)local_a8 + uVar13) = bVar5;
  *(byte *)((int)local_a8 + (local_a4 & uVar13 - 4) + 4) = bVar5;
  *(undefined4 *)((int)local_a8 + uVar13 * -0x10 + -7) = local_30;
  *(char *)(local_a8 + uVar13 * -4 + -4) = cVar1;
  *(undefined4 *)((int)local_a8 + uVar13 * -0x10 + -0xf) = local_38;
  *(undefined4 *)((int)local_a8 + uVar13 * -0x10 + -0xb) = local_34;
  local_a8[uVar13 * -4 + -1] = CONCAT31(uStack_2c,local_30._3_1_);
  local_a0 = local_a0 - (uVar11 & 1);
  local_9c = local_9c + 1;
LAB_00c505c0:
  uVar12 = uVar15;
  if (uVar15 == uVar7) goto LAB_00c50720;
  goto LAB_00c505cc;
}

