// FUN_006d13fc @ 006d13fc size=1184 calls_out=12 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d13fc(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  undefined8 uVar26;
  uint local_a4;
  int local_9c;
  uint *local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  int **local_48;
  undefined1 *local_44;
  uint uStack_40;
  int **local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar26 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar20 = (uint *)((int)uVar26 + (int)((ulonglong)uVar26 >> 0x20));
  if ((char)puVar20[4] == '\0') {
    FUN_019ae6ac(&local_38);
    *puVar20 = (uint)local_38;
    puVar20[1] = uStack_34;
    puVar20[2] = uStack_30;
    puVar20[3] = uStack_2c;
    *(undefined1 *)(puVar20 + 4) = 1;
  }
  local_68 = *puVar20;
  uStack_64 = puVar20[1];
  local_60 = puVar20[2];
  local_5c = puVar20[3];
  *puVar20 = local_68 + 1;
  puVar20[1] = uStack_64 + (0xfffffffe < local_68);
  local_78 = &DAT_0056d238;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  if (param_3 == 0) {
    return;
  }
  puVar8 = param_2 + param_3 * 9;
LAB_006d1480:
  piVar23 = param_2 + 7;
  iVar24 = *piVar23;
  iVar19 = iVar24 + 8;
  iVar21 = param_2[8];
  local_58 = piVar23;
  iVar9 = FUN_006c0238(*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x4c),
                       *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x50),iVar19,iVar21);
  uVar16 = local_5c;
  uVar22 = local_60;
  uVar7 = uStack_64;
  uVar15 = local_68;
  if ((iVar9 != 0) && (*(char *)(iVar9 + 100) == '\0')) {
    if (local_6c != 0) {
      uVar10 = FUN_00701e18();
      uVar17 = local_74;
      puVar20 = local_78;
      uVar25 = uVar10 >> 0x19;
      local_a4 = 0;
      while( true ) {
        uVar10 = uVar17 & uVar10;
        uVar11 = *(uint *)((int)puVar20 + uVar10);
        uVar12 = uVar11 ^ uVar25 * 0x1010101;
        uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
        while (uVar12 != 0) {
          uVar1 = uVar12 >> 8;
          uVar2 = uVar12 >> 0x10;
          uVar3 = uVar12 >> 0x18;
          uVar4 = uVar12 << 0x18;
          uVar12 = uVar12 - 1 & uVar12;
          piVar13 = (int *)puVar20[-1 - (uVar10 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 |
                                                                 (uVar2 & 0xff) << 8 | uVar3) >> 3)
                                        & uVar17)];
          if ((iVar21 == piVar13[1]) &&
             (iVar9 = thunk_FUN_01bed842(iVar19,*piVar13 + 8,iVar21), iVar9 == 0)) {
            puVar14 = (undefined4 *)thunk_FUN_01be5118(8);
            if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,8);
            }
            uVar18 = param_2[1];
            *puVar14 = *param_2;
            puVar14[1] = uVar18;
            local_4c = 1;
            local_54 = 1;
            local_44 = &LAB_00700f68;
            local_48 = &local_58;
            local_50 = puVar14;
            FUN_00664898(&local_38,&DAT_005803b8,&local_48);
            local_48 = local_38;
            local_44 = (undefined1 *)uStack_34;
            uStack_40 = uStack_30;
            FUN_006d6c3c(param_1,&local_54,&local_48);
            goto LAB_006d1658;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_a4 = local_a4 + 4;
        uVar10 = uVar10 + local_a4;
      }
    }
    uVar15 = FUN_006c52f8(uVar15,uVar7,uVar22,uVar16,iVar24,iVar21);
    if (local_70 == 0) {
      FUN_006b7fd4(&local_78,&local_68);
    }
    uVar7 = local_74;
    puVar20 = local_78;
    bVar6 = false;
    local_9c = 0;
    uVar22 = uVar15;
    do {
      uVar22 = uVar7 & uVar22;
      uVar25 = *(uint *)((int)puVar20 + uVar22);
      uVar16 = uVar25 ^ (uVar15 >> 0x19) * 0x1010101;
      uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
      while (uVar16 != 0) {
        uVar17 = uVar16 >> 8;
        uVar10 = uVar16 >> 0x10;
        uVar11 = uVar16 >> 0x18;
        uVar12 = uVar16 << 0x18;
        uVar16 = uVar16 - 1 & uVar16;
        if ((iVar21 == ((int *)puVar20[-1 - (uVar22 + ((uint)LZCOUNT(uVar12 | (uVar17 & 0xff) <<
                                                                              0x10 |
                                                                     (uVar10 & 0xff) << 8 | uVar11)
                                                      >> 3) & uVar7)])[1]) &&
           (iVar9 = thunk_FUN_01bed842(iVar19,*(int *)puVar20[-1 - (uVar22 + ((uint)LZCOUNT(uVar12 |
                                                                                            (uVar17 
                                                  & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar11)
                                                  >> 3) & uVar7)] + 8,iVar21), iVar9 == 0))
        goto LAB_006d1658;
      }
      uVar17 = uVar25 & 0x80808080;
      uVar16 = local_a4;
      if (bVar6) {
LAB_006d1770:
        if ((uVar17 & uVar25 << 1) != 0) goto LAB_006d17b0;
        bVar6 = true;
        local_a4 = uVar16;
      }
      else {
        if (uVar17 != 0) {
          uVar16 = uVar22 + ((uint)LZCOUNT((uVar25 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                           (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                   uVar7;
          goto LAB_006d1770;
        }
        bVar6 = false;
      }
      local_9c = local_9c + 4;
      uVar22 = local_9c + uVar22;
    } while( true );
  }
  goto LAB_006d1658;
LAB_006d17b0:
  uVar22 = (uint)*(char *)((int)puVar20 + uVar16);
  if (-1 < (int)uVar22) {
    uVar22 = *puVar20 & 0x80808080;
    uVar16 = LZCOUNT((*puVar20 & 0x80) << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                     (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18);
    uVar22 = (uint)*(byte *)((int)puVar20 + (uVar16 >> 3));
    uVar16 = uVar16 >> 3;
  }
  local_70 = local_70 - (uVar22 & 1);
  bVar5 = (byte)(uVar15 >> 0x19);
  *(byte *)((int)puVar20 + uVar16) = bVar5;
  *(byte *)((int)puVar20 + (uVar7 & uVar16 - 4) + 4) = bVar5;
  puVar20[-1 - uVar16] = (uint)piVar23;
  local_6c = local_6c + 1;
LAB_006d1658:
  param_2 = param_2 + 9;
  if (param_2 == puVar8) {
    if (local_74 == 0) {
      return;
    }
    iVar9 = local_74 * 4 + 4;
    if (local_74 + iVar9 == -5) {
      return;
    }
    thunk_FUN_01be4678((int)local_78 - iVar9);
    return;
  }
  goto LAB_006d1480;
}

