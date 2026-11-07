// FUN_00c52398 @ 00c52398 size=744 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c52398(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_a0;
  uint *local_80;
  uint local_7c;
  int local_78;
  int local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54 [4];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar16 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar8 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar8[4] == '\0') {
    FUN_015f62e4(&local_60);
    *puVar8 = local_60;
    puVar8[1] = uStack_5c;
    puVar8[2] = local_58;
    puVar8[3] = local_54[0];
    *(undefined1 *)(puVar8 + 4) = 1;
  }
  local_70 = *puVar8;
  uStack_6c = puVar8[1];
  local_64 = puVar8[3];
  *puVar8 = local_70 + 1;
  puVar8[1] = uStack_6c + (0xfffffffe < local_70);
  local_68 = puVar8[2];
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_80 = &DAT_005674cc;
  FUN_00c526cc(&local_80,6,&local_70);
  local_58 = *param_2;
  local_54[0] = param_2[1];
  local_54[1] = param_2[2];
  local_54[2] = param_2[3];
  local_54[3] = param_2[4];
  uStack_44 = param_2[5];
  local_40 = param_2[6];
  uStack_3c = param_2[7];
  uStack_38 = param_2[8];
  uStack_34 = param_2[9];
  uStack_30 = param_2[10];
  uStack_2c = param_2[0xb];
  iVar9 = 0;
LAB_00c52454:
  cVar1 = (char)local_54[iVar9 * 2 + -1];
  uVar10 = local_54[iVar9 * 2];
  uVar7 = FUN_00c507d4(local_70,uStack_6c,local_68,local_64,cVar1);
  if (local_78 == 0) {
    FUN_00c526cc(&local_80,1,&local_70);
  }
  iVar9 = iVar9 + 1;
  iVar13 = 0;
  bVar6 = false;
  uVar11 = uVar7;
  do {
    uVar11 = local_7c & uVar11;
    uVar15 = *(uint *)((int)local_80 + uVar11);
    uVar12 = uVar15 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar14 = uVar12 >> 8;
      uVar2 = uVar12 >> 0x10;
      uVar3 = uVar12 >> 0x18;
      uVar4 = uVar12 << 0x18;
      uVar12 = uVar12 - 1 & uVar12;
      uVar14 = uVar11 + ((uint)LZCOUNT(uVar4 | (uVar14 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3
                                      ) >> 3) & local_7c;
      if (cVar1 == (char)local_80[uVar14 * -2 + -2]) {
        local_80[uVar14 * -2 + -1] = uVar10;
        goto joined_r0x00c52594;
      }
    }
    uVar14 = uVar15 & 0x80808080;
    uVar12 = local_a0;
    if (bVar6) {
LAB_00c5254c:
      if ((uVar14 & uVar15 << 1) != 0) break;
      bVar6 = true;
      local_a0 = uVar12;
    }
    else {
      if (uVar14 != 0) {
        uVar12 = uVar11 + ((uint)LZCOUNT((uVar15 & 0x80) << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                 local_7c;
        goto LAB_00c5254c;
      }
      bVar6 = false;
    }
    iVar13 = iVar13 + 4;
    uVar11 = iVar13 + uVar11;
  } while( true );
  uVar11 = (uint)*(char *)((int)local_80 + uVar12);
  if (-1 < (int)uVar11) {
    uVar11 = *local_80 & 0x80808080;
    uVar12 = LZCOUNT((*local_80 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                     (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)local_80 + (uVar12 >> 3));
    uVar12 = uVar12 >> 3;
  }
  bVar5 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)local_80 + uVar12) = bVar5;
  *(byte *)((int)local_80 + (local_7c & uVar12 - 4) + 4) = bVar5;
  *(char *)(local_80 + uVar12 * -2 + -2) = cVar1;
  local_78 = local_78 - (uVar11 & 1);
  local_74 = local_74 + 1;
  local_80[uVar12 * -2 + -1] = uVar10;
joined_r0x00c52594:
  if (iVar9 == 6) {
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    param_1[3] = local_74;
    param_1[4] = local_70;
    param_1[5] = uStack_6c;
    param_1[6] = local_68;
    param_1[7] = local_64;
    return;
  }
  goto LAB_00c52454;
}

