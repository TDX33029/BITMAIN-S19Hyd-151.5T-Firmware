// FUN_016083ec @ 016083ec size=1456 calls_out=3 calls_in=1
// strings: 

undefined8
FUN_016083ec(int param_1,undefined4 *param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint *extraout_r12;
  uint *puVar21;
  uint *local_40;
  uint *local_38;
  ushort *local_28;
  
  puVar15 = (uint *)param_3[2];
  puVar12 = (uint *)param_3[1];
  uVar19 = 0;
  uVar20 = *param_5;
  uVar18 = param_5[1];
  uVar16 = param_5[3];
  local_40._0_1_ = (byte)param_5[4];
  local_38 = (uint *)param_5[2];
  uVar9 = 0xc;
  if (0x102 < (uint)((int)puVar12 - (int)puVar15)) {
    local_28 = (ushort *)*param_2;
    uVar17 = param_2[1];
    puVar13 = (uint *)*param_3;
    puVar21 = param_3;
    local_40 = (uint *)(uint)(byte)local_40;
LAB_01608488:
    do {
      if (uVar17 < 0xe) break;
      if (uVar18 < 0xf) {
        uVar17 = uVar17 - 2;
        uVar1 = *local_28;
        *param_2 = local_28 + 1;
        param_2[1] = uVar17;
        uVar20 = uVar20 | (uint)uVar1 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
        local_28 = local_28 + 1;
      }
      uVar16 = (uint)*(short *)(param_1 + 0x200 + (uVar20 & 0x3ff) * 2);
      if ((int)uVar16 < 0) {
        uVar14 = 10;
        do {
          uVar10 = uVar14;
          uVar16 = (uVar20 >> (uVar10 & 0x1f) & 1) + ~uVar16;
          if (0x23f < uVar16) {
            uVar16 = 0x7fff;
            break;
          }
          uVar16 = (uint)*(short *)(param_1 + 0xa00 + uVar16 * 2);
          uVar14 = uVar10 + 1;
        } while ((int)uVar16 < 0);
        uVar14 = uVar10 + 1 & 0xff;
      }
      else {
        uVar14 = uVar16 >> 9;
      }
      uVar18 = uVar18 - uVar14;
      uVar20 = uVar20 >> (uVar14 & 0x1f);
      puVar6 = puVar15;
      uVar14 = uVar16;
      if ((uVar16 & 0x100) == 0) {
        if (uVar18 < 0xf) {
          uVar17 = uVar17 - 2;
          uVar1 = *local_28;
          *param_2 = local_28 + 1;
          param_2[1] = uVar17;
          uVar20 = uVar20 | (uint)uVar1 << (uVar18 & 0xff);
          uVar18 = uVar18 | 0x10;
          local_28 = local_28 + 1;
        }
        uVar14 = (uint)*(short *)(param_1 + 0x200 + (uVar20 & 0x3ff) * 2);
        if ((int)uVar14 < 0) {
          uVar10 = 10;
          do {
            uVar5 = uVar10;
            uVar14 = (uVar20 >> (uVar5 & 0x1f) & 1) + ~uVar14;
            if (0x23f < uVar14) {
              uVar14 = 0x7fff;
              break;
            }
            uVar14 = (uint)*(short *)(param_1 + 0xa00 + uVar14 * 2);
            uVar10 = uVar5 + 1;
          } while ((int)uVar14 < 0);
          uVar10 = uVar5 + 1 & 0xff;
        }
        else {
          uVar10 = uVar14 >> 9;
        }
        if (puVar12 <= puVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar15,puVar12,&DAT_01d05b50);
        }
        uVar18 = uVar18 - uVar10;
        uVar20 = uVar20 >> (uVar10 & 0x1f);
        *(char *)((int)puVar13 + (int)puVar15) = (char)uVar16;
        puVar6 = (uint *)((int)puVar15 + 1);
        param_3[2] = (uint)puVar6;
        if ((uVar14 & 0x100) == 0) {
          if (puVar12 <= puVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(puVar6,puVar12,&DAT_01d05b50);
          }
          puVar15 = (uint *)((int)puVar15 + 2);
          param_3[2] = (uint)puVar15;
          *(char *)((int)puVar13 + (int)puVar6) = (char)uVar14;
          puVar21 = puVar13;
          if ((uint)((int)puVar12 - (int)puVar15) < 0x103) break;
          goto LAB_01608488;
        }
      }
      uVar16 = uVar14 & 0x1ff;
      if (uVar16 == 0x100) {
        uVar16 = 0x100;
        uVar9 = 0x14;
        goto LAB_016088f8;
      }
      if (0x8e < uVar16 >> 1) {
        uVar9 = 0x21;
LAB_01608958:
        uVar19 = 0xff;
        goto LAB_01608900;
      }
      uVar16 = uVar14 - 1 & 0x1f;
      local_40._0_1_ = (&DAT_0056b3e8)[uVar16];
      uVar14 = (uint)(byte)local_40;
      uVar16 = (uint)*(ushort *)(&DAT_004bae1a + uVar16 * 2);
      if (uVar18 < 0xf) {
        if (uVar17 < 2) goto LAB_01608960;
        uVar17 = uVar17 - 2;
        uVar1 = *local_28;
        *param_2 = local_28 + 1;
        param_2[1] = uVar17;
        uVar20 = uVar20 | (uint)uVar1 << (uVar18 & 0xff);
        uVar18 = uVar18 | 0x10;
        local_28 = local_28 + 1;
      }
      if (uVar14 != 0) {
        uVar18 = uVar18 - uVar14;
        uVar10 = uVar20 & ~(-1 << (uVar14 & 0x1f));
        uVar20 = uVar20 >> (uVar14 & 0x1f);
        uVar16 = uVar10 + uVar16;
        if (uVar18 < 0xf) {
          if (uVar17 < 2) goto LAB_01608960;
          uVar17 = uVar17 - 2;
          uVar1 = *local_28;
          *param_2 = local_28 + 1;
          param_2[1] = uVar17;
          uVar20 = uVar20 | (uint)uVar1 << (uVar18 & 0xff);
          uVar18 = uVar18 | 0x10;
          local_28 = local_28 + 1;
        }
      }
      uVar14 = (uint)*(short *)(param_1 + 0xe80 + (uVar20 & 0x3ff) * 2);
      if ((int)uVar14 < 0) {
        uVar10 = 10;
        do {
          uVar5 = uVar10;
          uVar14 = (uVar20 >> (uVar5 & 0x1f) & 1) + ~uVar14;
          if (0x23f < uVar14) {
            uVar14 = 0x7fff;
            break;
          }
          uVar14 = (uint)*(short *)(param_1 + 0x1680 + uVar14 * 2);
          uVar10 = uVar5 + 1;
        } while ((int)uVar14 < 0);
        uVar10 = uVar5 + 1 & 0xff;
      }
      else {
        uVar10 = uVar14 >> 9;
      }
      uVar18 = uVar18 - uVar10;
      uVar20 = uVar20 >> (uVar10 & 0x1f);
      if (0x1d < (uVar14 & 0x1ff)) {
        uVar9 = 0x22;
        uVar19 = 0xff;
        goto LAB_01608900;
      }
      local_38 = (uint *)(uint)*(ushort *)(&DAT_004bae6e + (uVar14 & 0x1ff) * 2);
      bVar2 = UnsignedSaturate((char)((uVar14 & 0xff) >> 1) + -1,0x10);
      uVar1 = UnsignedSaturate(0,0x10);
      uVar3 = UnsignedSaturate(0,0x10);
      uVar4 = UnsignedSaturate(0,0x10);
      uVar10 = (uint)bVar2;
      local_40 = (uint *)((uint)uVar4 << 0x18 | (uint)uVar3 << 0x10 | (uint)uVar1 << 8 | uVar10);
      if ((uVar14 & 0xff) < 4) {
      }
      else {
        if (uVar18 < 0xf) {
          if (uVar17 < 2) {
LAB_01608960:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,2,uVar17,&DAT_01d05bf0);
          }
          uVar17 = uVar17 - 2;
          uVar1 = *local_28;
          *param_2 = local_28 + 1;
          param_2[1] = uVar17;
          uVar20 = uVar20 | (uint)uVar1 << (uVar18 & 0xff);
          uVar18 = uVar18 | 0x10;
          local_28 = local_28 + 1;
        }
        uVar14 = uVar20 & ~(-1 << (uVar10 & 0x1f));
        uVar20 = uVar20 >> (uVar10 & 0x1f);
        local_38 = (uint *)(uVar14 + (int)local_38);
        uVar18 = uVar18 - uVar10;
        puVar21 = local_40;
      }
      if ((((uint)(puVar6 < local_38) & param_4 >> 2) != 0) || (puVar12 < local_38)) {
        uVar9 = 0x1e;
        goto LAB_01608958;
      }
      puVar15 = (uint *)((int)puVar6 - (int)local_38 & param_6);
      if (uVar16 == 3) {
        if (puVar6 < (uint *)0xfffffffd) {
          puVar7 = (uint *)((int)puVar6 + 3);
          puVar8 = puVar7;
          if (puVar7 <= puVar12) {
            puVar8 = (uint *)((int)puVar15 + 1);
            puVar7 = (uint *)((uint)puVar8 & param_6);
            puVar21 = puVar7;
          }
          if (puVar7 < puVar12) {
            if (puVar15 < puVar12) {
              puVar8 = (uint *)((int)puVar15 + 2U & param_6);
            }
            if (puVar15 < puVar12 && puVar8 < puVar12) {
              puVar11 = (undefined1 *)((int)puVar13 + (int)puVar6);
              *puVar11 = *(undefined1 *)((int)puVar13 + (int)puVar15);
              puVar11[1] = *(undefined1 *)((int)puVar13 + (int)puVar21);
              puVar11[2] = *(undefined1 *)((int)puVar13 + (int)puVar8);
              puVar21 = puVar13;
            }
          }
        }
      }
      else {
        FUN_016089b4(puVar13,puVar12,puVar15,puVar6,uVar16,param_6);
        puVar21 = extraout_r12;
      }
      puVar15 = (uint *)((int)puVar6 + uVar16);
      param_3[2] = (uint)puVar15;
    } while (0x102 < (uint)((int)puVar12 - (int)puVar15));
    uVar9 = 0xc;
LAB_016088f8:
    uVar19 = 0;
  }
LAB_01608900:
  param_5[3] = uVar16;
  *(byte *)(param_5 + 4) = (byte)local_40;
  *param_5 = uVar20;
  param_5[1] = uVar18;
  param_5[2] = (uint)local_38;
  return CONCAT44(uVar9,uVar19);
}

