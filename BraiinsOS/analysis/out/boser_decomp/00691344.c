// FUN_00691344 @ 00691344 size=3020 calls_out=7 calls_in=1
// strings: Hash table capacity overflow

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00691344(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  bool bVar27;
  uint local_88;
  uint *local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  
  iVar18 = param_1[3];
  uVar3 = iVar18 + 1;
  if (iVar18 == -1) {
LAB_00691ef8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01cf1734);
  }
  uVar20 = param_1[1];
  uVar10 = uVar20 + 1;
  uVar4 = uVar20;
  if (7 < uVar20) {
    uVar4 = (uVar10 & 0xfffffff8) - (uVar10 >> 3);
  }
  if (uVar4 >> 1 < uVar3) {
    if (uVar3 < uVar4 + 1) {
      uVar3 = uVar4 + 1;
    }
    if (uVar3 < 8) {
      iVar5 = (uVar3 & 4) + 4;
    }
    else {
      if (0x1fffffff < uVar3) goto LAB_00691ef8;
      iVar5 = (int)((ulonglong)(uVar3 << 3) * 0x24924925 >> 0x20);
      iVar5 = (0xffffffffU >> LZCOUNT((iVar5 + (uVar3 * 8 - iVar5 >> 1) >> 2) - 1)) + 1;
    }
    FUN_00691f18(&local_68,iVar5);
    uVar4 = local_60;
    uVar3 = local_64;
    puVar9 = local_68;
    if (local_68 == (uint *)0x0) {
      return local_64;
    }
    FUN_01bed93e(local_68,0xff,local_64 + 5);
    iVar5 = 0;
    local_6c = local_5c;
    local_70 = local_60;
    local_74 = uVar3;
    local_78 = puVar9;
    if (iVar18 != 0) {
      puVar21 = (uint *)*param_1;
      iVar5 = 0;
      uVar10 = ~*puVar21 & 0x80808080;
      puVar25 = puVar21;
      do {
        if (uVar10 == 0) {
          do {
            puVar25 = puVar25 + 1;
            iVar5 = iVar5 + 4;
          } while ((*puVar25 & 0x80808080) == 0x80808080);
          uVar10 = *puVar25 & 0x80808080 ^ 0x80808080;
        }
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_48 = *(uint *)(param_2 + 8);
        uStack_44 = *(uint *)(param_2 + 0xc);
        local_40 = *(uint *)(param_2 + 0x10);
        uStack_3c = *(uint *)(param_2 + 0x14);
        local_5c = uStack_44 ^ 0x6c796765;
        local_60 = local_48 ^ 0x6e657261;
        uStack_54 = uStack_3c ^ 0x646f7261;
        local_58 = local_40 ^ 0x6e646f6d;
        uStack_4c = uStack_3c ^ 0x74656462;
        local_50 = local_40 ^ 0x79746573;
        local_64 = uStack_44 ^ 0x736f6d65;
        local_68 = (uint *)(local_48 ^ 0x70736575);
        uVar6 = iVar5 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                       (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3);
        FUN_0067c5ec(puVar21 + uVar6 * -0x28 + -0x28,&local_68);
        uVar7 = local_34 | local_30 << 0x18;
        uVar16 = uVar7 ^ uStack_4c;
        uVar12 = local_38 ^ local_50;
        uVar20 = uVar12 + local_60;
        uVar8 = uVar16 + local_5c + (uint)CARRY4(uVar12,local_60);
        uVar19 = (uVar16 << 0x10 | uVar12 >> 0x10) ^ uVar8;
        uVar13 = (uVar12 << 0x10 | uVar16 >> 0x10) ^ uVar20;
        uVar26 = uStack_54 + local_64 + (uint)CARRY4(local_58,(uint)local_68);
        uVar24 = uVar19 + local_58 + (int)local_68 + (uint)CARRY4(uVar13,uVar26);
        uVar22 = (uVar19 << 0x15 | uVar13 >> 0xb) ^ uVar24;
        uVar12 = (uVar13 << 0x15 | uVar19 >> 0xb) ^ uVar13 + uVar26;
        uVar14 = (uStack_54 << 0xd | local_58 >> 0x13) ^ uVar26;
        uVar19 = (local_58 << 0xd | uStack_54 >> 0x13) ^ local_58 + (int)local_68;
        uVar16 = uVar8 + uVar14 + (uint)CARRY4(uVar20,uVar19);
        uVar8 = uVar16 ^ 0xff;
        uVar17 = uVar12 + uVar8;
        uVar8 = uVar22 + uVar20 + uVar19 + (uint)CARRY4(uVar12,uVar8);
        uVar23 = (uVar12 << 0x10 | uVar22 >> 0x10) ^ uVar17;
        uVar12 = (uVar22 << 0x10 | uVar12 >> 0x10) ^ uVar8;
        uVar22 = uVar20 + uVar19 ^ (uVar19 << 0x11 | uVar14 >> 0xf);
        uVar16 = uVar16 ^ (uVar14 << 0x11 | uVar19 >> 0xf);
        uVar20 = uVar13 + uVar26 ^ local_38;
        uVar19 = uVar20 + uVar22;
        uVar20 = (uVar24 ^ uVar7) + uVar16 + (uint)CARRY4(uVar20,uVar22);
        uVar24 = uVar23 + uVar20;
        uVar7 = uVar20 ^ (uVar16 << 0xd | uVar22 >> 0x13);
        uVar26 = uVar12 + uVar19 + (uint)CARRY4(uVar23,uVar20);
        uVar19 = uVar19 ^ (uVar22 << 0xd | uVar16 >> 0x13);
        uVar20 = (uVar12 << 0x15 | uVar23 >> 0xb) ^ uVar26;
        uVar14 = (uVar23 << 0x15 | uVar12 >> 0xb) ^ uVar24;
        uVar12 = uVar7 + uVar8 + (uint)CARRY4(uVar19,uVar17);
        uVar16 = uVar14 + uVar12;
        uVar13 = uVar20 + uVar19 + uVar17 + (uint)CARRY4(uVar14,uVar12);
        uVar22 = (uVar14 << 0x10 | uVar20 >> 0x10) ^ uVar16;
        uVar20 = (uVar20 << 0x10 | uVar14 >> 0x10) ^ uVar13;
        uVar12 = uVar12 ^ (uVar7 << 0x11 | uVar19 >> 0xf);
        uVar7 = uVar19 + uVar17 ^ (uVar19 << 0x11 | uVar7 >> 0xf);
        uVar14 = uVar12 + uVar26 + (uint)CARRY4(uVar7,uVar24);
        uVar17 = uVar22 + uVar14;
        uVar23 = uVar20 + uVar7 + uVar24 + (uint)CARRY4(uVar22,uVar14);
        uVar8 = (uVar22 << 0x15 | uVar20 >> 0xb) ^ uVar17;
        uVar22 = (uVar20 << 0x15 | uVar22 >> 0xb) ^ uVar23;
        uVar20 = (uVar7 << 0xd | uVar12 >> 0x13) ^ uVar7 + uVar24;
        uVar14 = (uVar12 << 0xd | uVar7 >> 0x13) ^ uVar14;
        uVar7 = uVar14 + uVar13 + (uint)CARRY4(uVar20,uVar16);
        uVar13 = uVar8 + uVar7;
        uVar19 = (uVar14 << 0x11 | uVar20 >> 0xf) ^ uVar7;
        uVar12 = (uVar20 << 0x11 | uVar14 >> 0xf) ^ uVar20 + uVar16;
        uVar7 = uVar22 + uVar20 + uVar16 + (uint)CARRY4(uVar8,uVar7);
        uVar20 = (uVar12 << 0xd | uVar19 >> 0x13) ^ uVar12 + uVar17;
        uVar12 = (uVar19 << 0xd | uVar12 >> 0x13) ^ uVar19 + uVar23 + (uint)CARRY4(uVar12,uVar17);
        uVar20 = ((uVar22 >> 0x10 ^ uVar13) << 0x15 |
                 ((uVar22 << 0x10 | uVar8 >> 0x10) ^ uVar7) >> 0xb) ^
                 (uVar20 << 0x11 | uVar12 >> 0xf) ^ uVar12 + uVar7 + (uint)CARRY4(uVar20,uVar13) ^
                 uVar20 + uVar13;
        uVar8 = uVar3 & uVar20;
        uVar12 = *(uint *)((int)puVar9 + uVar8) & 0x80808080;
        if (uVar12 == 0) {
          iVar11 = 4;
          do {
            uVar8 = uVar8 + iVar11;
            iVar11 = iVar11 + 4;
            uVar8 = uVar8 & uVar3;
            uVar12 = *(uint *)((int)puVar9 + uVar8) & 0x80808080;
          } while (uVar12 == 0);
        }
        iVar18 = iVar18 + -1;
        uVar8 = uVar8 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                       (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) & uVar3;
        bVar27 = -1 < *(char *)((int)puVar9 + uVar8);
        if (bVar27) {
          uVar8 = *puVar9;
        }
        uVar10 = uVar10 - 1 & uVar10;
        if (bVar27) {
          uVar8 = uVar8 & 0x80808080;
          uVar8 = (uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3;
        }
        bVar2 = (byte)(uVar20 >> 0x19);
        *(byte *)((int)puVar9 + uVar8) = bVar2;
        *(byte *)((int)puVar9 + (uVar8 - 4 & uVar3) + 4) = bVar2;
        puVar21 = (uint *)*param_1;
        FUN_01bed4e2(puVar9 + ~uVar8 * 0x28,puVar21 + ~uVar6 * 0x28,0xa0);
      } while (iVar18 != 0);
      iVar5 = param_1[3];
    }
    local_6c = iVar5;
    local_70 = uVar4 - iVar5;
    iVar18 = 0;
    do {
      puVar9 = (uint *)param_1[iVar18];
      param_1[iVar18] = (&local_78)[iVar18];
      iVar5 = iVar18 + 1;
      (&local_78)[iVar18] = puVar9;
      iVar18 = iVar5;
    } while (iVar5 != 4);
    if (local_74 != 0) {
      thunk_FUN_01be4678(local_78 + (local_74 + 1) * -0x28);
    }
  }
  else {
    if (uVar10 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar10 >> 2;
      if ((uVar10 & 3) != 0) {
        uVar3 = (uVar10 >> 2) + 1;
      }
      puVar9 = (uint *)*param_1;
      iVar18 = 0;
      do {
        puVar9[-iVar18] = (~(puVar9[-iVar18] >> 7) & 0x1010101) + (puVar9[-iVar18] | 0x7f7f7f7f);
        iVar18 = iVar18 + -1;
      } while (-iVar18 != uVar3);
      if (uVar10 < 4) {
        FUN_01bed864(puVar9 + 1,puVar9);
      }
      else {
        *(uint *)((int)puVar9 + uVar10) = *puVar9;
      }
      iVar18 = 0;
      uVar3 = 0;
      local_88 = uVar20;
      do {
        puVar25 = puVar9;
        if (*(char *)((int)puVar9 + uVar3) == -0x80) {
          while( true ) {
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            local_48 = *(uint *)(param_2 + 8);
            uStack_44 = *(uint *)(param_2 + 0xc);
            local_40 = *(uint *)(param_2 + 0x10);
            uStack_3c = *(uint *)(param_2 + 0x14);
            local_60 = local_48 ^ 0x6e657261;
            local_5c = uStack_44 ^ 0x6c796765;
            uStack_54 = uStack_3c ^ 0x646f7261;
            local_58 = local_40 ^ 0x6e646f6d;
            uStack_4c = uStack_3c ^ 0x74656462;
            local_50 = local_40 ^ 0x79746573;
            local_64 = uStack_44 ^ 0x736f6d65;
            local_68 = (uint *)(local_48 ^ 0x70736575);
            FUN_0067c5ec(puVar25 + uVar3 * -0x28 + -0x28,&local_68);
            uVar8 = local_34 | local_30 << 0x18;
            uVar10 = uVar8 ^ uStack_4c;
            uVar4 = local_38 ^ local_50;
            uVar14 = uVar4 + local_60;
            uVar6 = uVar10 + local_5c + (uint)CARRY4(uVar4,local_60);
            uVar12 = (uVar10 << 0x10 | uVar4 >> 0x10) ^ uVar6;
            uVar7 = (uVar4 << 0x10 | uVar10 >> 0x10) ^ uVar14;
            uVar10 = uStack_54 + local_64 + (uint)CARRY4(local_58,(uint)local_68);
            uVar17 = uVar12 + local_58 + (int)local_68 + (uint)CARRY4(uVar7,uVar10);
            uVar19 = (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar17;
            uVar16 = (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar7 + uVar10;
            uVar13 = (uStack_54 << 0xd | local_58 >> 0x13) ^ uVar10;
            uVar4 = (local_58 << 0xd | uStack_54 >> 0x13) ^ local_58 + (int)local_68;
            uVar12 = uVar6 + uVar13 + (uint)CARRY4(uVar14,uVar4);
            uVar6 = uVar12 ^ 0xff;
            uVar22 = uVar16 + uVar6;
            uVar23 = uVar19 + uVar14 + uVar4 + (uint)CARRY4(uVar16,uVar6);
            uVar6 = (uVar19 << 0x10 | uVar16 >> 0x10) ^ uVar23;
            uVar16 = (uVar16 << 0x10 | uVar19 >> 0x10) ^ uVar22;
            uVar12 = uVar12 ^ (uVar13 << 0x11 | uVar4 >> 0xf);
            uVar19 = uVar14 + uVar4 ^ (uVar4 << 0x11 | uVar13 >> 0xf);
            uVar4 = uVar7 + uVar10 ^ local_38;
            uVar10 = uVar4 + uVar19;
            uVar4 = (uVar17 ^ uVar8) + uVar12 + (uint)CARRY4(uVar4,uVar19);
            uVar13 = uVar16 + uVar4;
            uVar14 = uVar6 + uVar10 + (uint)CARRY4(uVar16,uVar4);
            uVar7 = (uVar6 << 0x15 | uVar16 >> 0xb) ^ uVar14;
            uVar6 = (uVar16 << 0x15 | uVar6 >> 0xb) ^ uVar13;
            uVar4 = uVar4 ^ (uVar12 << 0xd | uVar19 >> 0x13);
            uVar10 = uVar10 ^ (uVar19 << 0xd | uVar12 >> 0x13);
            uVar8 = uVar4 + uVar23 + (uint)CARRY4(uVar10,uVar22);
            uVar19 = uVar6 + uVar8;
            uVar17 = uVar7 + uVar10 + uVar22 + (uint)CARRY4(uVar6,uVar8);
            uVar12 = (uVar7 << 0x10 | uVar6 >> 0x10) ^ uVar17;
            uVar7 = (uVar6 << 0x10 | uVar7 >> 0x10) ^ uVar19;
            uVar8 = uVar8 ^ (uVar4 << 0x11 | uVar10 >> 0xf);
            uVar10 = uVar10 + uVar22 ^ (uVar10 << 0x11 | uVar4 >> 0xf);
            uVar16 = uVar8 + uVar14 + (uint)CARRY4(uVar10,uVar13);
            uVar22 = uVar7 + uVar16;
            uVar14 = uVar12 + uVar10 + uVar13 + (uint)CARRY4(uVar7,uVar16);
            uVar6 = (uVar7 << 0x15 | uVar12 >> 0xb) ^ uVar22;
            uVar4 = (uVar12 << 0x15 | uVar7 >> 0xb) ^ uVar14;
            uVar16 = (uVar8 << 0xd | uVar10 >> 0x13) ^ uVar16;
            uVar10 = (uVar10 << 0xd | uVar8 >> 0x13) ^ uVar10 + uVar13;
            uVar12 = uVar16 + uVar17 + (uint)CARRY4(uVar10,uVar19);
            uVar7 = (uVar16 << 0x11 | uVar10 >> 0xf) ^ uVar12;
            uVar13 = uVar6 + uVar12;
            uVar8 = (uVar10 << 0x11 | uVar16 >> 0xf) ^ uVar10 + uVar19;
            uVar12 = uVar4 + uVar10 + uVar19 + (uint)CARRY4(uVar6,uVar12);
            uVar10 = (uVar8 << 0xd | uVar7 >> 0x13) ^ uVar8 + uVar22;
            uVar8 = (uVar7 << 0xd | uVar8 >> 0x13) ^ uVar7 + uVar14 + (uint)CARRY4(uVar8,uVar22);
            uVar10 = ((uVar4 >> 0x10 ^ uVar13) << 0x15 |
                     ((uVar4 << 0x10 | uVar6 >> 0x10) ^ uVar12) >> 0xb) ^
                     (uVar10 << 0x11 | uVar8 >> 0xf) ^ uVar8 + uVar12 + (uint)CARRY4(uVar10,uVar13)
                     ^ uVar10 + uVar13;
            uVar8 = local_88 & uVar10;
            uVar12 = *(uint *)((int)puVar25 + uVar8) & 0x80808080;
            uVar4 = uVar8;
            if (uVar12 == 0) {
              iVar5 = 4;
              do {
                uVar4 = uVar4 + iVar5;
                iVar5 = iVar5 + 4;
                uVar4 = uVar4 & local_88;
                uVar12 = *(uint *)((int)puVar25 + uVar4) & 0x80808080;
              } while (uVar12 == 0);
            }
            uVar4 = uVar4 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                    local_88;
            if (-1 < *(char *)((int)puVar25 + uVar4)) {
              uVar4 = *puVar25 & 0x80808080;
              uVar4 = (uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                    (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar10 >> 0x18);
            if (((uVar4 - uVar8 ^ uVar3 - uVar8) & local_88) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar25 + uVar3) = bVar2;
              *(byte *)((int)puVar25 + (local_88 & uVar3 - 4) + 4) = bVar2;
              goto LAB_00691eb0;
            }
            cVar1 = *(char *)((int)puVar25 + uVar4);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar25 + uVar4) = bVar2;
            *(byte *)((int)puVar25 + (uVar4 - 4 & local_88) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar5 = -0xa0;
            do {
              uVar15 = *(undefined4 *)((int)puVar9 + iVar5 + iVar18);
              *(undefined4 *)((int)puVar9 + iVar5 + iVar18) =
                   *(undefined4 *)((int)puVar25 + iVar5 + uVar4 * -0xa0);
              *(undefined4 *)((int)puVar25 + iVar5 + uVar4 * -0xa0) = uVar15;
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0);
            puVar25 = (uint *)*param_1;
            local_88 = param_1[1];
          }
          local_88 = param_1[1];
          puVar21 = puVar25 + ~uVar4 * 0x28;
          puVar25 = (uint *)*param_1;
          *(undefined1 *)((int)puVar25 + uVar3) = 0xff;
          *(undefined1 *)((int)puVar25 + (local_88 & uVar3 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar21,puVar9 + ~uVar3 * 0x28,0xa0);
        }
LAB_00691eb0:
        iVar18 = iVar18 + -0xa0;
        bVar27 = uVar3 != uVar20;
        uVar3 = uVar3 + 1;
        puVar9 = puVar25;
      } while (bVar27);
      uVar3 = param_1[1];
      iVar18 = param_1[3];
      if (7 < uVar3) {
        uVar3 = (uVar3 + 1 & 0xfffffff8) - (uVar3 + 1 >> 3);
      }
    }
    param_1[2] = uVar3 - iVar18;
  }
  return 0x80000001;
}

