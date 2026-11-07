// FUN_015f35fc @ 015f35fc size=1160 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f35fc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  uint local_d0;
  uint local_cc;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = FUN_00664bdc(&local_b4,param_3,param_4);
  uVar18 = thunk_FUN_01bee35a(uVar2,0x2c0);
  puVar13 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar13[4] == '\0') {
    FUN_019ae6ac(&local_58);
    *puVar13 = local_58;
    puVar13[1] = local_54;
    puVar13[2] = local_50;
    puVar13[3] = local_4c;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  local_98 = *puVar13;
  uStack_94 = puVar13[1];
  local_8c = puVar13[3];
  puVar9 = puVar13 + 2;
  uStack_90 = *puVar9;
  *puVar13 = local_98 + 1;
  puVar13[1] = uStack_94 + (0xfffffffe < local_98);
  local_a8 = &DAT_0056d238;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (*(int *)(param_2 + 0x6c) != 0) {
    puVar3 = (uint *)((uint)&local_58 | 4);
    uVar4 = FUN_01adafd4(*(undefined4 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x74),
                         *(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x7c),local_b0,
                         local_ac);
    uVar8 = *(uint *)(param_2 + 100);
    local_cc = (uVar4 >> 0x19) * 0x1010101;
    iVar11 = *(int *)(param_2 + 0x60);
    iVar10 = 0;
    while( true ) {
      uVar4 = uVar8 & uVar4;
      uVar7 = *(uint *)(iVar11 + uVar4);
      for (uVar14 = ~(uVar7 ^ local_cc) & 0x80808080 & (uVar7 ^ local_cc) + 0xfefefeff; uVar14 != 0;
          uVar14 = uVar14 - 1 & uVar14) {
        uVar5 = uVar4 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                       (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar8;
        iVar6 = iVar11 + -0x18 + uVar5 * -0x18;
        if ((local_ac == *(int *)(iVar6 + 8)) &&
           (iVar6 = thunk_FUN_01bed842(local_b0,*(undefined4 *)(iVar6 + 4),local_ac), iVar6 == 0)) {
          iVar11 = iVar11 + uVar5 * -0x18;
          iVar10 = *(int *)(iVar11 + -4);
          if (iVar10 == 0) goto LAB_015f3a30;
          puVar15 = (undefined4 *)(*(int *)(iVar11 + -8) + 0x10);
          iVar10 = iVar10 * 0x18;
          goto LAB_015f37f8;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      iVar10 = iVar10 + 4;
      uVar4 = uVar4 + iVar10;
    }
  }
  goto LAB_015f3a30;
LAB_015f37f8:
  do {
    uVar18 = (**(code **)(puVar15[1] + 0x1c))(*puVar15);
    (**(code **)((int)((ulonglong)uVar18 >> 0x20) + 0xc))(&local_58,(int)uVar18);
    if ((local_58 == 0xda8c4f1e && local_50 == 0x19da2243) &&
        (local_54 == 0xb2415d58 && local_4c == 0xc983ed0b)) {
      lVar19 = (**(code **)(puVar15[1] + 0x3c))(*puVar15);
      uVar4 = (uint)((ulonglong)lVar19 >> 0x20);
      uVar2 = 0;
      if (lVar19 < 0) {
LAB_015f3a78:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar2,local_cc);
      }
      if (uVar4 == 0) {
        local_cc = 1;
        local_d0 = 0;
      }
      else {
        uVar2 = 1;
        local_cc = FUN_01298504(uVar4,1);
        if (local_cc == 0) {
          local_cc = uVar4;
          goto LAB_015f3a78;
        }
        local_d0 = uVar4;
      }
      FUN_01bed4e2(local_cc,(int)lVar19,uVar4);
      FUN_015df854(&local_88,(int)uVar18);
      local_64 = local_d0;
      local_60 = local_cc;
      local_5c = uVar4;
      FUN_015dae2c(&local_58,&local_a8,&local_64);
      uVar2 = local_44;
      puVar1 = local_48;
      uVar14 = local_4c;
      uVar7 = local_50;
      uVar8 = local_54;
      uVar4 = local_58;
      if (local_50 != 0x80000000) {
        if ((char)puVar13[4] == '\0') {
          FUN_019ae6ac(&local_58);
          *puVar13 = local_58;
          puVar13[1] = local_54;
          *puVar9 = local_50;
          puVar13[3] = local_4c;
          *(undefined1 *)(puVar13 + 4) = 1;
        }
        uVar12 = *puVar13;
        uVar5 = puVar13[1];
        uVar17 = *puVar9;
        uVar16 = puVar13[3];
        *puVar13 = uVar12 + 1;
        puVar13[1] = uVar5 + (0xfffffffe < uVar12);
        local_58 = uVar7;
        *puVar3 = uVar14;
        puVar3[1] = (uint)puVar1;
        local_48 = &DAT_0056d238;
        local_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        puVar3[9] = uVar17;
        puVar3[10] = uVar16;
        puVar3[7] = uVar12;
        puVar3[8] = uVar5;
        uVar4 = FUN_015d2e84(uVar2,uVar5,uVar4,uVar8,&local_58);
      }
      local_58 = local_88;
      local_54 = uStack_84;
      local_50 = uStack_80;
      local_4c = uStack_7c;
      local_48 = (undefined4 *)local_78;
      local_44 = uStack_74;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      FUN_015dbe44(uVar4 - 0x20,&local_58);
    }
    puVar15 = puVar15 + 6;
    iVar10 = iVar10 + -0x18;
  } while (iVar10 != 0);
LAB_015f3a30:
  *param_1 = local_a8;
  param_1[1] = uStack_a4;
  param_1[2] = uStack_a0;
  param_1[3] = uStack_9c;
  param_1[4] = local_98;
  param_1[5] = uStack_94;
  param_1[6] = uStack_90;
  param_1[7] = local_8c;
  FUN_0134bd64(local_b4,local_b0);
  return;
}

