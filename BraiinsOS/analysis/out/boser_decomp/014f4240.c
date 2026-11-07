// FUN_014f4240 @ 014f4240 size=1744 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014f4240(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined4 **ppuVar23;
  int local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 *local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  undefined8 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  if ((undefined1 *)*param_2 != &DAT_80000014) {
    uVar9 = FUN_014c8278(param_2,&local_58,&DAT_01cf9c74);
    *param_1 = 1;
    param_1[1] = uVar9;
    return;
  }
  local_8c = param_2[1];
  local_94 = param_2[2];
  local_84 = 0;
  local_88 = local_94 + param_2[3] * 0x10;
  local_68 = 0;
  local_70._0_4_ = (undefined4 *)0x0;
  local_90 = local_94;
LAB_014f428c:
  FUN_014ca8dc(&local_64,&local_94);
  uVar22 = local_5c;
  iVar4 = local_60;
  iVar11 = local_64;
  if (local_64 == -0x80000000) {
    param_1[1] = (undefined4 *)local_70;
    param_1[2] = local_70._4_4_;
    param_1[3] = local_68;
    *param_1 = 0;
    local_80 = param_1[1];
    uStack_7c = param_1[2];
    uStack_78 = param_1[3];
    iVar11 = FUN_014ca838(&local_94);
    if (iVar11 == 0) {
      *param_1 = 0;
      return;
    }
    *param_1 = 1;
    param_1[1] = iVar11;
    FUN_01960c70(&local_80);
    return;
  }
  if (local_64 == -0x7fffffff) {
    *param_1 = 1;
    param_1[1] = local_60;
    FUN_01960c70(&local_70);
    FUN_014deb6c(&local_94);
    return;
  }
  if ((undefined4 *)local_70 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)local_70;
    iVar13 = local_70._4_4_;
    do {
      uVar17 = (uint)*(ushort *)((int)puVar6 + 0x8a);
      puVar16 = puVar6 + 1;
      uVar20 = 0xffffffff;
      iVar21 = uVar17 * 0xc;
      do {
        if (iVar21 == 0) goto LAB_014f434c;
        uVar15 = puVar16[2];
        uVar10 = uVar15;
        if (uVar22 < uVar15) {
          uVar10 = uVar22;
        }
        iVar5 = FUN_01bed842(iVar4,puVar16[1],uVar10);
        if (iVar5 == 0) {
          iVar5 = uVar22 - uVar15;
        }
        iVar21 = iVar21 + -0xc;
        uVar20 = uVar20 + 1;
        puVar16 = puVar16 + 3;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      uVar17 = uVar20;
      if (0 < iVar5 == iVar5 < 0) {
        FUN_0134bd64(iVar11,iVar4);
        goto LAB_014f428c;
      }
LAB_014f434c:
      if (iVar13 == 0) goto LAB_014f4478;
      iVar13 = iVar13 + -1;
      puVar6 = (undefined4 *)puVar6[uVar17 + 0x23];
    } while( true );
  }
  puVar6 = (undefined4 *)0x0;
  goto LAB_014f4380;
LAB_014f4478:
  local_a0 = uVar17;
  if (iVar11 != -0x80000000) {
LAB_014f4380:
    uVar17 = local_a0;
    local_4c = &local_70;
    local_44 = 0;
    local_50 = uVar22;
    local_54 = iVar4;
    local_58 = iVar11;
    local_48 = puVar6;
    local_40 = local_a0;
    if (puVar6 == (undefined4 *)0x0) {
      local_70._0_4_ = (undefined4 *)FUN_01961624();
      *(undefined2 *)((int)(undefined4 *)local_70 + 0x8a) = 0;
      *(undefined4 *)local_70 = 0;
      local_70._4_4_ = 0;
      FUN_0196081c(&local_38,(undefined4 *)local_70,&local_58);
      uVar3 = CONCAT44(local_70._4_4_,(undefined4 *)local_70);
    }
    else {
      puVar18 = (ushort *)((int)puVar6 + 0x8a);
      uVar22 = local_a0;
      puVar16 = puVar6;
      if (*puVar18 < 0xb) {
        uVar20 = *puVar18 + 1;
        if (local_a0 + 1 < uVar20) {
          FUN_01bed864(puVar6 + (local_a0 + 1) * 3 + 1,puVar6 + local_a0 * 3 + 1,
                       (uVar20 + ~local_a0) * 0xc);
        }
        piVar7 = puVar6 + local_a0 * 3 + 1;
        *piVar7 = local_58;
        piVar7[1] = local_54;
        piVar7[2] = local_50;
        *puVar18 = (ushort)uVar20;
      }
      else {
        bVar2 = false;
        uVar20 = 4;
        if ((4 < local_a0) && (uVar20 = local_a0, local_a0 != 5)) {
          if (local_a0 == 6) {
            uVar20 = 5;
            uVar22 = 0;
          }
          else {
            uVar22 = local_a0 - 7;
            uVar20 = 6;
          }
          bVar2 = true;
        }
        puVar8 = (undefined4 *)FUN_01961624();
        puVar14 = puVar6 + 1;
        *puVar8 = 0;
        puVar19 = (ushort *)((int)puVar8 + 0x8a);
        *puVar19 = 0;
        puVar12 = puVar14 + uVar20 * 3;
        local_98 = (undefined4 *)*puVar12;
        uVar10 = ~uVar20 + (uint)*(ushort *)((int)puVar6 + 0x8a);
        local_a0 = puVar12[1];
        local_a4 = puVar12[2];
        *puVar19 = (ushort)uVar10;
        if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(puVar8 + 1,puVar14 + uVar20 * 3 + 3,uVar10 * 0xc);
        *(short *)((int)puVar6 + 0x8a) = (short)uVar20;
        if (!bVar2) {
          puVar19 = puVar18;
        }
        else {
          puVar16 = puVar8;
        }
        uVar1 = *(ushort *)((int)puVar16 + 0x8a);
        if (bVar2) {
          puVar14 = puVar8 + 1;
        }
        if (uVar22 + 1 <= (uint)uVar1) {
          FUN_01bed864(puVar14 + (uVar22 + 1) * 3,puVar14 + uVar22 * 3,(uVar1 - uVar22) * 0xc);
        }
        piVar7 = puVar14 + uVar22 * 3;
        *piVar7 = local_58;
        piVar7[1] = local_54;
        piVar7[2] = local_50;
        *puVar19 = uVar1 + 1;
        if (local_98 == (undefined4 *)&DAT_80000000) {
LAB_014f4594:
        }
        else {
          puVar14 = (undefined4 *)*puVar6;
          if (puVar14 == (undefined4 *)0x0) {
            local_a8 = 0;
          }
          else {
            local_a8 = 0;
            do {
              uVar1 = *(ushort *)((int)puVar14 + 0x8a);
              uVar20 = (uint)*(ushort *)(puVar6 + 0x22);
              local_30 = local_a4;
              local_38 = local_98;
              local_34 = local_a0;
              if (uVar1 < 0xb) {
                FUN_01960998(puVar14,uVar20,&local_38);
                goto LAB_014f4594;
              }
              ppuVar23 = &local_28;
              uVar10 = 4;
              if (4 < uVar20) {
                if (uVar20 == 5) {
                  uVar10 = 5;
                }
                else if (uVar20 == 6) {
                  ppuVar23 = &local_2c;
                  uVar20 = 0;
                  uVar10 = 5;
                }
                else {
                  uVar20 = uVar20 - 7;
                  ppuVar23 = &local_2c;
                  uVar10 = 6;
                }
              }
              puVar6 = (undefined4 *)FUN_016c9094();
              *(undefined2 *)((int)puVar6 + 0x8a) = 0;
              *puVar6 = 0;
              puVar12 = puVar14 + uVar10 * 3 + 1;
              local_98 = (undefined4 *)*puVar12;
              uVar15 = ~uVar10 + (uint)*(ushort *)((int)puVar14 + 0x8a);
              local_a0 = puVar12[1];
              local_a4 = puVar12[2];
              *(short *)((int)puVar6 + 0x8a) = (short)uVar15;
              if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(puVar6 + 1,puVar14 + uVar10 * 3 + 4,uVar15 * 0xc);
              *(short *)((int)puVar14 + 0x8a) = (short)uVar10;
              uVar15 = (uint)*(ushort *)((int)puVar6 + 0x8a);
              iVar11 = uVar15 + 1;
              if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar11,0xc,&DAT_01d2ff20);
              }
              if (uVar1 - uVar10 != iVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              local_a8 = local_a8 + 1;
              FUN_01bed4e2(puVar6 + 0x23,puVar14 + uVar10 + 0x24,iVar11 * 4);
              uVar10 = 0;
              do {
                puVar12 = (undefined4 *)(puVar6 + 0x23)[uVar10];
                *(short *)(puVar12 + 0x22) = (short)uVar10;
                *puVar12 = puVar6;
                if (uVar15 <= uVar10) break;
                uVar10 = uVar10 + 1;
              } while (uVar10 <= uVar15);
              local_2c = puVar6;
              local_28 = puVar14;
              FUN_01960998(*ppuVar23,uVar20,&local_38,puVar8);
              if (local_98 == (undefined4 *)&DAT_80000000) goto LAB_014f4594;
              puVar14 = (undefined4 *)*local_28;
              puVar8 = local_2c;
              puVar6 = local_28;
            } while (puVar14 != (undefined4 *)0x0);
          }
          if ((undefined4 *)local_70 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          local_70 = FUN_01960938((undefined4 *)local_70,local_70._4_4_);
          local_30 = local_a4;
          local_38 = local_98;
          local_34 = local_a0;
          FUN_01960890((int)local_70,(int)((ulonglong)local_70 >> 0x20),&local_38,puVar8,local_a8);
        }
      }
      local_34 = 0;
      local_38 = puVar16;
      local_30 = uVar22;
      uVar3 = local_70;
    }
    local_70._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    local_70._0_4_ = (undefined4 *)uVar3;
    local_68 = local_68 + 1;
    local_a0 = uVar17;
  }
  goto LAB_014f428c;
}

