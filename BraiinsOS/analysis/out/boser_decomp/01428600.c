// FUN_01428600 @ 01428600 size=1344 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01428600(undefined4 *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  undefined8 uVar27;
  int local_dc;
  uint local_d0;
  uint local_ac;
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
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  int local_5c;
  undefined8 *local_58;
  int local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  uVar27 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar19 = (uint *)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
  if ((char)puVar19[4] == '\0') {
    FUN_019ae6ac(&local_50);
    *puVar19 = local_50;
    puVar19[1] = uStack_4c;
    puVar19[2] = uStack_48;
    puVar19[3] = uStack_44;
    *(undefined1 *)(puVar19 + 4) = 1;
  }
  local_98 = *puVar19;
  local_94 = puVar19[1];
  local_90 = puVar19[2];
  local_8c = puVar19[3];
  *puVar19 = local_98 + 1;
  puVar19[1] = local_94 + (0xfffffffe < local_98);
  local_a8 = &DAT_0056d238;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  if (param_3 == 0) {
LAB_01428ae0:
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
  iVar25 = param_2 + param_3 * 0x14;
  do {
    local_84 = *(uint *)(param_2 + 4);
    uStack_80 = *(uint *)(param_2 + 8);
    param_2 = param_2 + 0x14;
    uVar15 = 0;
LAB_014286a0:
    if (uStack_80 == uVar15) {
      local_64 = CONCAT22(local_64._2_2_,1);
      local_70 = CONCAT31(local_70._1_3_,1);
      local_6c = 0;
      local_74 = 0x2c;
      uStack_7c = 0;
      local_88 = 0x2c;
      local_78 = uStack_80;
      local_68 = uStack_80;
      uVar27 = FUN_014280cc(&local_88);
      if ((int)uVar27 == 0) {
        iVar22 = 0;
        puVar24 = (undefined8 *)&SUB_00000004;
      }
      else {
        puVar8 = (undefined8 *)thunk_FUN_01be5118(0x20);
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x20);
        }
        local_5c = 4;
        *puVar8 = uVar27;
        local_54 = 1;
        local_50 = local_88;
        uStack_4c = local_84;
        uStack_48 = uStack_80;
        uStack_44 = uStack_7c;
        uStack_40 = local_78;
        local_3c = local_74;
        uStack_38 = local_70;
        uStack_34 = local_6c;
        uStack_30 = local_68;
        uStack_2c = local_64;
        iVar13 = 0;
        local_58 = puVar8;
        while( true ) {
          uVar27 = FUN_014280cc(&local_50);
          puVar24 = local_58;
          iVar22 = local_5c;
          iVar20 = iVar13 + 1;
          if ((int)uVar27 == 0) break;
          if (iVar20 == local_5c) {
            FUN_016092cc(&local_5c,iVar20,1,4,8);
            puVar8 = local_58;
          }
          puVar8[iVar13 + 1] = uVar27;
          local_54 = iVar13 + 2;
          iVar13 = iVar20;
        }
        puVar9 = local_58 + iVar20;
        puVar8 = local_58;
        do {
          uVar15 = *(uint *)((int)puVar8 + 4);
          uVar18 = 0;
          if ((int)uVar15 < 0) {
LAB_01428b28:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar18,local_ac);
          }
          uVar14 = *(undefined4 *)puVar8;
          local_dc = 0;
          if (uVar15 == 0) {
            local_ac = 1;
            local_d0 = 0;
          }
          else {
            uVar18 = 1;
            local_ac = FUN_01298504(uVar15,1);
            if (local_ac == 0) {
              local_ac = uVar15;
              goto LAB_01428b28;
            }
            local_d0 = uVar15;
          }
          puVar8 = puVar8 + 1;
          FUN_01bed4e2(local_ac,uVar14,uVar15);
          uVar7 = local_8c;
          uVar6 = local_90;
          uVar5 = local_94;
          uVar4 = local_98;
          uVar16 = local_ac;
          uVar21 = uVar15;
          uVar10 = FUN_01adafd4(local_98);
          uVar3 = local_a4;
          puVar19 = local_a8;
          uVar17 = (uVar10 >> 0x19) * 0x1010101;
          uVar26 = uVar10;
          while( true ) {
            uVar26 = uVar3 & uVar26;
            uVar23 = *(uint *)((int)puVar19 + uVar26);
            uVar11 = uVar23 ^ uVar17;
            for (uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff; uVar11 != 0;
                uVar11 = uVar11 - 1 & uVar11) {
              uVar12 = uVar26 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                               (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3)
                       & uVar3;
              if ((puVar19[uVar12 * -3 + -1] == uVar15) &&
                 (iVar13 = thunk_FUN_01bed842(puVar19[uVar12 * -3 + -2],local_ac,uVar15,uVar17,
                                              uVar16,uVar21), iVar13 == 0)) {
                FUN_019bb7e0(local_d0,local_ac);
                goto LAB_01428a18;
              }
            }
            if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
            local_dc = local_dc + 4;
            uVar26 = uVar26 + local_dc;
          }
          if (local_a0 == 0) {
            FUN_0141fc50(&local_a8,uVar7,uVar4,uVar5,uVar6,uVar7);
          }
          uVar16 = local_a4 & uVar10;
          uVar21 = *(uint *)((int)local_a8 + uVar16) & 0x80808080;
          if (uVar21 == 0) {
            iVar13 = 4;
            do {
              uVar16 = uVar16 + iVar13 & local_a4;
              iVar13 = iVar13 + 4;
              uVar21 = *(uint *)((int)local_a8 + uVar16) & 0x80808080;
            } while (uVar21 == 0);
          }
          uVar16 = uVar16 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                           (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                   local_a4;
          uVar21 = (uint)*(char *)((int)local_a8 + uVar16);
          if (-1 < (int)uVar21) {
            uVar16 = *local_a8 & 0x80808080;
            uVar16 = LZCOUNT((*local_a8 & 0x80) << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
            uVar21 = (uint)*(byte *)((int)local_a8 + (uVar16 >> 3));
            uVar16 = uVar16 >> 3;
          }
          bVar2 = (byte)(uVar10 >> 0x19);
          *(byte *)((int)local_a8 + uVar16) = bVar2;
          *(byte *)((int)local_a8 + (uVar16 - 4 & local_a4) + 4) = bVar2;
          local_a8[uVar16 * -3 + -3] = local_d0;
          local_a8[uVar16 * -3 + -1] = uVar15;
          local_a8[uVar16 * -3 + -2] = local_ac;
          local_a0 = local_a0 - (uVar21 & 1);
          local_9c = local_9c + 1;
LAB_01428a18:
        } while (puVar8 != puVar9);
      }
      FUN_0134c054(iVar22,puVar24,4,8);
    }
    else {
      pbVar1 = (byte *)(local_84 + uVar15);
      uVar15 = uVar15 + 1;
      if ((*pbVar1 == 9) || (*pbVar1 - 0x20 < 0x5f)) goto LAB_014286a0;
    }
    if (param_2 == iVar25) goto LAB_01428ae0;
  } while( true );
}

