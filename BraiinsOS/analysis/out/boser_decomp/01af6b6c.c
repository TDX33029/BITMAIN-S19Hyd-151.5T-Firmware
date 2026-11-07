// FUN_01af6b6c @ 01af6b6c size=1788 calls_out=3 calls_in=2
// strings: 

void FUN_01af6b6c(undefined4 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  byte bVar13;
  byte bVar14;
  undefined1 *puVar15;
  byte *unaff_r8;
  byte *unaff_r9;
  byte *pbVar16;
  byte *unaff_r10;
  byte *unaff_r11;
  byte *unaff_lr;
  bool bVar17;
  byte *local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  byte *local_cc;
  int local_c4;
  int local_c0;
  uint local_bc;
  uint local_b4;
  byte *local_b0;
  byte *local_ac;
  byte *local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_78;
  byte *local_74;
  byte *local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  uint local_44;
  byte *local_40;
  byte *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar14 = 0x19;
  local_98 = 0x8000001d;
  local_94 = 0x19;
  if (((param_3 == (byte *)0x0) || ((~*param_2 & 0x1f) == 0)) || (param_3 == &DAT_00000001)) {
switchD_01af6fac_default:
    local_74 = (byte *)0x0;
    local_70 = unaff_r11;
LAB_01af70ac:
    puVar12 = &local_78;
    local_78 = 0x80000000;
    puVar15 = (undefined1 *)0x8000001d;
    pbVar16 = unaff_r9;
    unaff_r10 = unaff_r10;
  }
  else {
    uVar11 = (uint)(char)param_2[1];
    if ((int)uVar11 < 0) {
      switch(param_2[1]) {
      case 0x81:
        if (((byte *)0x2 < param_3) && (uVar11 = (uint)(char)param_2[2], 0x7fffffff < uVar11)) {
          uVar10 = 3;
          goto LAB_01af6bbc;
        }
        break;
      case 0x82:
        if ((&DAT_00000003 < param_3) && (param_2[2] != 0)) {
          unaff_r11 = (byte *)(uint)CONCAT11(param_2[2],param_2[3]);
          uVar10 = 4;
LAB_01af7088:
          if (unaff_r11 < (byte *)0xffff) goto LAB_01af6bc0;
        }
        break;
      case 0x83:
        if ((&SUB_00000004 < param_3) && (param_2[2] != 0)) {
          unaff_r11 = (byte *)((uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4]);
          uVar10 = 5;
          goto LAB_01af7088;
        }
        break;
      case 0x84:
        if (((((byte *)0x2 < param_3) && (param_3 != &DAT_00000003)) &&
            ((&DAT_00000005 < param_3 || ((0x37U >> ((uint)param_3 & 0xff) & 1) == 0)))) &&
           (param_2[2] != 0)) {
          unaff_lr = (byte *)(uint)param_2[5];
          unaff_r11 = (byte *)((uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18 |
                               (uint)param_2[4] << 8 | (uint)unaff_lr);
          uVar10 = 6;
          goto LAB_01af7088;
        }
      }
      goto switchD_01af6fac_default;
    }
    uVar10 = 2;
LAB_01af6bbc:
    unaff_r11 = (byte *)(uVar11 & 0xff);
LAB_01af6bc0:
    if ((CARRY4((uint)unaff_r11,uVar10)) || (param_3 < unaff_r11 + uVar10))
    goto switchD_01af6fac_default;
    if (*param_2 != 0x30) goto LAB_01af70ac;
    param_2 = param_2 + uVar10;
    local_74 = param_2;
    local_70 = unaff_r11;
    if (unaff_r11 == (byte *)0x0) {
      local_a0 = 0;
      local_b4 = 0;
      local_b0 = (byte *)0x0;
LAB_01af7100:
      FUN_01aeb5f4(&local_98);
      puVar15 = (undefined1 *)0x80000012;
      if ((local_a0 & 0x1000000) == 0) {
        puVar15 = &DAT_80000028;
        bVar17 = (local_a0 & 0x10000) != 0;
        if (bVar17) {
          puVar15 = (undefined1 *)0x80000025;
        }
        if (!bVar17 && local_b4 == 0) {
          FUN_01af72b0(&local_48,local_b0,local_f0);
          if (local_48 != (undefined1 *)0x8000002d) {
            *param_1 = 0x80000012;
            FUN_01aeb5f4(&local_48);
            return;
          }
          uVar8 = 0x80000022;
          if ((local_44 == 1) && (local_40 != (byte *)0x0)) {
            param_1[1] = local_b0;
            param_1[3] = 0;
            uVar8 = 0x8000002d;
            param_1[2] = local_f0;
            param_1[4] = unaff_r10;
            param_1[5] = local_a0;
          }
          *param_1 = uVar8;
          return;
        }
      }
      goto LAB_01af70e8;
    }
    local_a0 = 0;
    local_b4 = 0;
    puVar15 = (undefined1 *)0x80000000;
    local_b0 = (byte *)0x0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = 0;
    bVar3 = 0;
    local_cc = (byte *)0x0;
    bVar4 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_a8 = (byte *)0x0;
    local_dc = 0;
    bVar2 = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_ec = 0;
    pbVar6 = (byte *)0x0;
    bVar5 = 0;
    bVar13 = 0;
    do {
      bVar14 = bVar5;
      puVar12 = &local_98;
      bVar1 = param_2[(int)pbVar6];
      unaff_r8 = pbVar6;
      if ((~bVar1 & 0x1f) == 0) goto switchD_01af6ca4_default;
      if (unaff_r11 <= pbVar6 + 1) {
        bVar13 = (byte)local_a8;
        goto LAB_01af7198;
      }
      pbVar9 = pbVar6 + 2;
      local_a8 = (byte *)(uint)param_2[(int)(pbVar6 + 1)];
      pbVar16 = local_a8;
      if (0x7fffffff < (uint)(int)(char)param_2[(int)(pbVar6 + 1)]) {
        switch(local_a8) {
        case (byte *)0x81:
          if (pbVar9 < unaff_r11) {
            if (0x7fffffff < (uint)(int)(char)param_2[(int)pbVar9]) {
              pbVar16 = (byte *)(uint)param_2[(int)pbVar9];
              pbVar9 = pbVar6 + 3;
              local_cc = pbVar16;
              goto LAB_01af6df8;
            }
            goto switchD_01af6ca4_default;
          }
          bVar13 = (byte)local_cc;
          break;
        case (byte *)0x82:
          if (pbVar9 < unaff_r11) {
            if (pbVar6 + 3 < unaff_r11) {
              bVar3 = param_2[(int)pbVar9];
              if (bVar3 != 0) {
                bVar4 = param_2[(int)(pbVar6 + 3)];
                pbVar16 = (byte *)(uint)CONCAT11(bVar3,bVar4);
                pbVar9 = pbVar6 + 4;
LAB_01af6dec:
                if (pbVar16 < (byte *)0xffff) goto LAB_01af6df8;
              }
              goto switchD_01af6ca4_default;
            }
            bVar13 = bVar4;
          }
          else {
            bVar13 = bVar3;
          }
          break;
        case (byte *)0x83:
          if (pbVar9 < unaff_r11) {
            if (pbVar6 + 3 < unaff_r11) {
              if (pbVar6 + 4 < unaff_r11) {
                local_d4 = (uint)param_2[(int)pbVar9];
                if (local_d4 != 0) {
                  local_d8 = (uint)param_2[(int)(pbVar6 + 3)];
                  local_dc = (uint)param_2[(int)(pbVar6 + 4)];
                  pbVar9 = pbVar6 + 5;
                  pbVar16 = (byte *)(local_d8 << 8 | local_d4 << 0x10 | local_dc);
                  goto LAB_01af6dec;
                }
                goto switchD_01af6ca4_default;
              }
              bVar13 = (byte)local_dc;
            }
            else {
              bVar13 = (byte)local_d8;
            }
          }
          else {
            bVar13 = (byte)local_d4;
          }
          break;
        case (byte *)0x84:
          if (pbVar9 < unaff_r11) {
            if (pbVar6 + 3 < unaff_r11) {
              if (pbVar6 + 4 < unaff_r11) {
                if (pbVar6 + 5 < unaff_r11) {
                  bVar2 = param_2[(int)pbVar9];
                  if (bVar2 != 0) {
                    local_e4 = (uint)param_2[(int)(pbVar6 + 3)];
                    local_e8 = (uint)param_2[(int)(pbVar6 + 4)];
                    local_ec = (uint)param_2[(int)(pbVar6 + 5)];
                    pbVar16 = (byte *)(local_e4 << 0x10 | (uint)bVar2 << 0x18 | local_e8 << 8 |
                                      local_ec);
                    pbVar9 = pbVar6 + 6;
                    goto LAB_01af6dec;
                  }
                  break;
                }
                bVar14 = (byte)local_ec;
              }
              else {
                bVar14 = (byte)local_e8;
              }
            }
            else {
              bVar14 = (byte)local_e4;
            }
            pbVar16 = local_ac;
            unaff_r10 = unaff_lr;
            goto LAB_01af70b8;
          }
          bVar13 = bVar2;
          break;
        default:
switchD_01af6ca4_default:
        }
LAB_01af7198:
        pbVar16 = local_ac;
        unaff_r10 = unaff_lr;
        bVar14 = bVar13;
        break;
      }
LAB_01af6df8:
      pbVar6 = pbVar16 + (int)pbVar9;
      if ((CARRY4((uint)pbVar16,(uint)pbVar9)) || (unaff_r11 < pbVar6)) {
        bVar14 = (byte)unaff_lr;
        unaff_r8 = (byte *)((uint)unaff_lr >> 8);
        pbVar16 = local_ac;
        unaff_r10 = local_ac;
        break;
      }
      unaff_lr = param_2 + (int)pbVar9;
      bVar5 = bVar14;
      switch(bVar1) {
      case 0x81:
        if (pbVar16 != &DAT_00000001) {
LAB_01af71e0:
          bVar14 = (byte)local_bc;
          goto LAB_01af70b8;
        }
        uVar11 = 1;
        if (*unaff_lr != 0xff) {
          if (*unaff_lr != 0) goto LAB_01af71e0;
          uVar11 = 0;
        }
        local_a0 = local_a0 & 0xffffff00 | uVar11;
        local_bc = uVar11;
        break;
      case 0x82:
        if (pbVar16 != &DAT_00000001) {
LAB_01af71f0:
          bVar14 = (byte)local_c0;
          goto LAB_01af70b8;
        }
        iVar7 = 1;
        if (*unaff_lr != 0xff) {
          if (*unaff_lr != 0) goto LAB_01af71f0;
          iVar7 = 0;
        }
        local_a0 = local_a0 & 0xffff00ff | iVar7 << 8;
        local_c0 = iVar7;
        break;
      case 0x83:
        if (local_b4 == 0) {
          FUN_01af38d8(&local_48,unaff_lr,pbVar16);
          local_b4 = local_44;
          unaff_r10 = local_40;
          if (local_48 != (undefined1 *)0x8000002d) {
            local_58 = local_38;
            uStack_54 = uStack_34;
            uStack_50 = uStack_30;
            uStack_4c = uStack_2c;
            pbVar16 = local_3c;
            goto LAB_01af722c;
          }
          unaff_r8 = unaff_lr;
          goto LAB_01af6f7c;
        }
        local_48 = &DAT_80000009;
        local_44 = local_b4;
LAB_01af722c:
        bVar14 = (byte)local_44;
        puVar15 = local_48;
        unaff_r8 = (byte *)(local_44 >> 8);
        goto LAB_01af70b8;
      case 0x84:
        if (pbVar16 != &DAT_00000001) {
LAB_01af71e8:
          bVar14 = (byte)local_c4;
          goto LAB_01af70b8;
        }
        iVar7 = 1;
        if (*unaff_lr != 0xff) {
          if (*unaff_lr != 0) goto LAB_01af71e8;
          iVar7 = 0;
        }
        local_a0 = local_a0 & 0xff00ffff | iVar7 << 0x10;
        local_c4 = iVar7;
        break;
      case 0x85:
        if (pbVar16 != &DAT_00000001) {
LAB_01af71d8:
          goto LAB_01af70b8;
        }
        bVar5 = 1;
        if (*unaff_lr != 0xff) {
          if (*unaff_lr != 0) goto LAB_01af71d8;
          bVar5 = 0;
        }
        bVar14 = bVar5;
        local_a0 = local_a0 & 0xffffff | (uint)bVar14 << 0x18;
        break;
      default:
        if (bVar1 == 0xa0) {
          bVar17 = local_b0 == (byte *)0x0;
          local_f0 = pbVar16;
          local_b0 = unaff_lr;
          if (bVar17) goto LAB_01af6f7c;
          puVar15 = &DAT_80000009;
        }
        bVar14 = 0;
        goto LAB_01af70b8;
      }
      bVar5 = bVar14;
LAB_01af6f7c:
      if (pbVar6 == unaff_r11) {
        goto LAB_01af7100;
      }
      bVar14 = bVar1;
      local_ac = pbVar16;
      bVar13 = bVar1;
    } while (pbVar6 < unaff_r11);
  }
LAB_01af70b8:
  FUN_01aeb5f4(puVar12);
  *(char *)((int)param_1 + 7) = (char)((uint)unaff_r8 >> 0x10);
  param_1[2] = unaff_r10;
  *(short *)((int)param_1 + 5) = (short)unaff_r8;
  param_1[3] = pbVar16;
  *(byte *)(param_1 + 1) = bVar14;
  param_1[4] = local_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
LAB_01af70e8:
  *param_1 = puVar15;
  return;
}

