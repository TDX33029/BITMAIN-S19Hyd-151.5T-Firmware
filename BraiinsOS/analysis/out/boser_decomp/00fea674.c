// FUN_00fea674 @ 00fea674 size=1068 calls_out=11 calls_in=59
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fea674(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint local_d4;
  uint *local_98;
  uint local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar18 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar14 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar14[4] == '\0') {
    FUN_019ae6ac(&local_78);
    *puVar14 = local_78;
    puVar14[1] = uStack_74;
    puVar14[2] = uStack_70;
    puVar14[3] = uStack_6c;
    *(undefined1 *)(puVar14 + 4) = 1;
  }
  local_88 = *puVar14;
  local_84 = puVar14[1];
  local_80 = puVar14[2];
  local_7c = puVar14[3];
  *puVar14 = local_88 + 1;
  puVar14[1] = local_84 + (0xfffffffe < local_88);
  local_98 = &DAT_0056d238;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  uVar15 = param_2[8];
  if (uVar15 != 0) {
    FUN_014b51ec(&local_98,uVar15,local_88,local_84,local_80,local_7c);
  }
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  local_58 = uVar15;
LAB_00fea710:
  uVar18 = FUN_01a41998(&local_78);
  iVar8 = (int)uVar18;
  if (iVar8 == 0) {
    *param_1 = local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = local_84;
    param_1[6] = local_80;
    param_1[7] = local_7c;
    return;
  }
  FUN_006666fc(&local_50,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
  local_3c = 0;
  local_44 = 0;
  local_2c = 0;
  local_40 = 1;
  local_30 = 0x60000020;
  local_34 = &DAT_01c1d138;
  local_38 = &local_44;
  iVar8 = FUN_01968fa4((int)((ulonglong)uVar18 >> 0x20),&local_38);
  uVar7 = local_3c;
  uVar6 = local_40;
  uVar5 = local_44;
  uVar4 = local_48;
  uVar3 = local_4c;
  uVar2 = local_50;
  uVar17 = local_7c;
  uVar10 = local_80;
  uVar16 = local_84;
  uVar15 = local_88;
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c1d27c,&DAT_01d30334);
  }
  uVar9 = FUN_01adafd4(local_88,local_84,local_80,local_7c,local_4c,local_48);
  if (local_90 == 0) {
    FUN_014b51ec(&local_98,1,uVar15,uVar16,uVar10,uVar17);
  }
  uVar15 = local_94;
  puVar14 = local_98;
  bVar13 = false;
  iVar8 = 0;
  uVar16 = uVar9;
  do {
    uVar16 = uVar15 & uVar16;
    uVar17 = *(uint *)((int)puVar14 + uVar16);
    uVar10 = uVar17 ^ (uVar9 >> 0x19) * 0x1010101;
    for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = uVar16 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                       (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar15
      ;
      if ((uVar4 == puVar14[uVar11 * -6 + -4]) &&
         (iVar12 = thunk_FUN_01bed842(uVar3,puVar14[uVar11 * -6 + -5]), iVar12 == 0)) {
        uVar16 = puVar14[uVar11 * -6 + -3];
        uVar15 = puVar14[uVar11 * -6 + -2];
        puVar14[uVar11 * -6 + -3] = uVar5;
        puVar14[uVar11 * -6 + -2] = uVar6;
        puVar14[uVar11 * -6 + -1] = uVar7;
        FUN_0134bd64(uVar2,uVar3);
        if (uVar16 != 0x80000000) {
          FUN_019bb7e0(uVar16,uVar15);
        }
        goto LAB_00fea710;
      }
    }
    uVar11 = uVar17 & 0x80808080;
    uVar10 = local_d4;
    if (bVar13) {
LAB_00fea8ec:
      if ((uVar11 & uVar17 << 1) != 0) break;
      bVar13 = true;
      local_d4 = uVar10;
    }
    else {
      if (uVar11 != 0) {
        uVar10 = uVar16 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                         (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                 uVar15;
        goto LAB_00fea8ec;
      }
      bVar13 = false;
    }
    iVar8 = iVar8 + 4;
    uVar16 = iVar8 + uVar16;
  } while( true );
  uVar16 = (uint)*(char *)((int)puVar14 + uVar10);
  if (-1 < (int)uVar16) {
    uVar16 = *puVar14 & 0x80808080;
    uVar10 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                     (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
    uVar16 = (uint)*(byte *)((int)puVar14 + (uVar10 >> 3));
    uVar10 = uVar10 >> 3;
  }
  bVar1 = (byte)(uVar9 >> 0x19);
  *(byte *)((int)puVar14 + uVar10) = bVar1;
  *(byte *)((int)puVar14 + (uVar15 & uVar10 - 4) + 4) = bVar1;
  local_90 = local_90 - (uVar16 & 1);
  puVar14[uVar10 * -6 + -6] = uVar2;
  puVar14[uVar10 * -6 + -4] = uVar4;
  puVar14[uVar10 * -6 + -3] = uVar5;
  puVar14[uVar10 * -6 + -2] = uVar6;
  puVar14[uVar10 * -6 + -5] = uVar3;
  puVar14[uVar10 * -6 + -1] = uVar7;
  local_8c = local_8c + 1;
  goto LAB_00fea710;
}

