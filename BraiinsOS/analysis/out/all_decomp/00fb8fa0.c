// FUN_00fb8fa0 @ 00fb8fa0 size=1852 calls_out=4 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00fb8fa0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  code *pcVar22;
  uint uVar23;
  ushort *puVar24;
  ushort *local_64;
  undefined4 local_60;
  ushort local_5c;
  ushort local_5a;
  ushort local_58;
  ushort local_56;
  ushort local_54;
  ushort local_52 [15];
  ushort *local_34;
  ushort *local_30;
  ushort **local_2c;
  code *local_28;
  
  local_64 = param_1;
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) != 0) {
    local_60 = 0;
    local_28 = (code *)&LAB_00fb9a90;
    local_2c = &local_64;
    iVar12 = FUN_00fa948c(&local_60,&DAT_01881314,&DAT_00590e71,&local_2c);
    if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_018811fc,&DAT_0188132c);
    }
    if (0x27 < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_60,0x27,&DAT_018812f4);
    }
    uVar13 = FUN_00faace8(param_2,&local_5c);
    return uVar13;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  local_52[0] = uVar1 << 8 | uVar1 >> 8;
  uVar3 = param_1[5];
  local_54 = uVar2 << 8 | uVar2 >> 8;
  uVar4 = param_1[4];
  local_56 = uVar3 << 8 | uVar3 >> 8;
  uVar5 = param_1[3];
  local_58 = uVar4 << 8 | uVar4 >> 8;
  uVar6 = param_1[2];
  local_5a = uVar5 << 8 | uVar5 >> 8;
  uVar7 = param_1[1];
  local_5c = uVar6 << 8 | uVar6 >> 8;
  uVar8 = *param_1;
  local_60 = CONCAT22(uVar7 << 8 | uVar7 >> 8,uVar8 << 8 | uVar8 >> 8);
  if ((uVar8 & 0xff) == 0 && uVar8 >> 8 == 0) {
    uVar9 = uVar7 >> 8;
    uVar10 = uVar7 | uVar9;
    bVar11 = (uVar7 & 0xff) == 0;
    if (bVar11 && uVar9 == 0) {
      uVar10 = uVar6 | uVar6 >> 8;
    }
    if ((bVar11 && uVar9 == 0) && (uVar10 & 0xff) == 0) {
      uVar9 = uVar5 >> 8;
      uVar10 = uVar5 | uVar9;
      bVar11 = (uVar5 & 0xff) == 0;
      if (bVar11 && uVar9 == 0) {
        uVar10 = uVar4 | uVar4 >> 8;
      }
      if (((bVar11 && uVar9 == 0) && (uVar10 & 0xff) == 0) && ((uVar3 & uVar3 >> 8) == 0xff)) {
        local_30 = *(ushort **)(param_1 + 6);
        local_28 = FUN_00fb974c;
        local_2c = &local_30;
        uVar13 = FUN_00fa948c(*param_2,param_2[1],&DAT_00596a1f,&local_2c);
        return uVar13;
      }
    }
  }
  uVar20 = 2;
  if (uVar8 != 0) {
    uVar20 = 1;
  }
  uVar21 = uVar20;
  if (uVar7 != 0) {
    uVar21 = (uint)(uVar8 == 0);
  }
  uVar14 = (uint)(uVar7 == 0 && uVar8 != 0);
  uVar19 = 0;
  if (uVar6 == 0) {
    if (uVar7 == 0) {
      uVar23 = uVar14;
    }
    else {
      uVar20 = 0;
      uVar23 = 2;
    }
    uVar18 = uVar20 + 1;
    if (uVar21 <= uVar20) {
      uVar14 = uVar23;
    }
    if (uVar21 < uVar18) {
      uVar21 = uVar18;
    }
  }
  else {
    uVar23 = 0;
    uVar18 = 0;
  }
  if (uVar5 == 0) {
    uVar19 = uVar18 + 1;
    if (uVar18 == 0) {
      uVar23 = 3;
    }
    if (uVar21 <= uVar18) {
      uVar14 = uVar23;
    }
    if (uVar21 < uVar19) {
      uVar21 = uVar19;
    }
  }
  else {
    uVar23 = 0;
  }
  if (uVar4 == 0) {
    uVar20 = uVar19 + 1;
    if (uVar19 == 0) {
      uVar23 = 4;
    }
    if (uVar21 <= uVar19) {
      uVar14 = uVar23;
    }
    if (uVar21 < uVar20) {
      uVar21 = uVar20;
    }
  }
  else {
    uVar23 = 0;
    uVar20 = 0;
  }
  if (uVar3 == 0) {
    uVar19 = uVar20 + 1;
    if (uVar20 == 0) {
      uVar23 = 5;
    }
    if (uVar21 <= uVar20) {
      uVar14 = uVar23;
    }
    if (uVar21 < uVar19) {
      uVar21 = uVar19;
    }
  }
  else {
    uVar19 = 0;
    uVar23 = 0;
  }
  if (uVar2 == 0) {
    uVar20 = uVar19 + 1;
    if (uVar19 == 0) {
      uVar23 = 6;
    }
    if (uVar21 <= uVar19) {
      uVar14 = uVar23;
    }
    if (uVar21 < uVar20) {
      uVar21 = uVar20;
    }
  }
  else {
    uVar20 = 0;
    uVar23 = 0;
  }
  if (uVar1 == 0) {
    if (uVar20 == 0) {
      uVar23 = 7;
    }
    if (uVar20 < uVar21) {
      uVar23 = uVar14;
    }
    if (uVar21 < uVar20 + 1) {
      uVar21 = uVar20 + 1;
    }
  }
  else {
    uVar23 = uVar14;
  }
  puVar24 = (ushort *)((int)&local_60 + 2);
  uVar13 = *param_2;
  iVar12 = param_2[1];
  if (uVar21 < 2) {
    local_2c = &local_34;
    local_28 = FUN_00fb9a14;
    local_34 = (ushort *)&local_60;
    iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
    uVar17 = 1;
    if (iVar15 == 0) {
      pcVar22 = *(code **)(iVar12 + 0x10);
      local_30 = puVar24;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = &local_5c;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = &local_5a;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = &local_58;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = &local_56;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = &local_54;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      local_30 = local_52;
      iVar15 = (*pcVar22)(uVar13,0x3a);
      if (iVar15 != 0) {
        return 1;
      }
      local_28 = FUN_00fb9a14;
      local_2c = &local_30;
      iVar12 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar12 == 0) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (uVar23 != 0) {
      local_28 = FUN_00fb9a14;
      local_2c = &local_34;
      local_34 = (ushort *)&local_60;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      if (iVar15 != 0) {
        return 1;
      }
      if (uVar23 != 1) {
        pcVar22 = *(code **)(iVar12 + 0x10);
        iVar15 = uVar23 * 2 + -2;
        do {
          local_30 = puVar24;
          iVar16 = (*pcVar22)(uVar13,0x3a);
          if (iVar16 != 0) {
            return 1;
          }
          local_2c = &local_30;
          local_28 = FUN_00fb9a14;
          iVar16 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
          if (iVar16 != 0) {
            return 1;
          }
          puVar24 = puVar24 + 1;
          iVar15 = iVar15 + -2;
        } while (iVar15 != 0);
      }
    }
    iVar15 = (**(code **)(iVar12 + 0xc))(uVar13,&DAT_00418eb9,2);
    if (iVar15 != 0) {
      return 1;
    }
    uVar21 = uVar21 + uVar23;
    if (8 < uVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar21,8,8,&DAT_01881304);
    }
    uVar17 = 0;
    if (uVar21 != 8) {
      local_34 = local_52 + (uVar21 - 7);
      local_2c = &local_34;
      local_28 = FUN_00fb9a14;
      iVar15 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
      uVar17 = 1;
      if (iVar15 == 0) {
        if (uVar21 != 7) {
          pcVar22 = *(code **)(iVar12 + 0x10);
          iVar15 = uVar21 * 2;
          do {
            local_30 = (ushort *)((int)local_52 + iVar15 + -0xc);
            iVar16 = (*pcVar22)(uVar13,0x3a);
            if (iVar16 != 0) {
              return 1;
            }
            local_2c = &local_30;
            local_28 = FUN_00fb9a14;
            iVar16 = FUN_00fa948c(uVar13,iVar12,&DAT_00590e71,&local_2c);
            if (iVar16 != 0) {
              return 1;
            }
            iVar15 = iVar15 + 2;
          } while (iVar15 != 0xe);
        }
        return 0;
      }
    }
  }
  return uVar17;
}

