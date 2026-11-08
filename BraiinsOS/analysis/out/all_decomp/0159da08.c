// FUN_0159da08 @ 0159da08 size=1200 calls_out=12 calls_in=1
// strings: 7 bits don't fit into 8; cause ... | attempt to divide by zero

void FUN_0159da08(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  int extraout_r1;
  uint extraout_r1_00;
  uint *puVar3;
  undefined1 *puVar4;
  uint extraout_r2;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  uint local_78;
  uint *local_74;
  uint local_70;
  uint local_68;
  undefined1 *local_64;
  uint local_60;
  uint local_58;
  uint *local_54;
  int local_50;
  uint local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  int local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  uVar6 = param_3 * 4;
  bVar18 = 0x3ffffffe < param_3;
  bVar17 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar18 = 0x7ffffffb < uVar6;
    bVar17 = uVar6 == 0x7ffffffc;
  }
  if (bVar18 && !bVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar6);
  }
  local_74 = (uint *)&DAT_00000004;
  local_78 = 0;
  if ((uVar6 != 0) &&
     (local_74 = (uint *)thunk_FUN_016d4a50(uVar6), local_78 = param_3, local_74 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar6);
  }
  FUN_016dd1aa(local_74,param_2,uVar6);
  local_60 = 0;
  local_64 = &DAT_00000001;
  local_68 = 0;
  local_40 = 0;
  local_44 = (uint *)&DAT_00000004;
  local_48 = 0;
  local_70 = param_3;
  FUN_0127ac28(&local_48);
  *local_44 = 0x80;
  local_58 = local_48;
  local_54 = local_44;
  local_50 = 1;
  if (local_70 == 0) {
    FUN_006029c0(&local_68);
    local_60 = 1;
    *local_64 = 0;
    *param_1 = local_68;
    param_1[1] = (uint)local_64;
    param_1[2] = 1;
  }
  else {
    uVar6 = 1;
    while (puVar15 = local_74, uVar6 != 0) {
      if (local_50 == 0) {
LAB_0159de98:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("attempt to divide by zero",0x33,&DAT_018aa014);
      }
      iVar2 = local_50 * 4;
      if (iVar2 - 9U < 0xfffffffb) {
LAB_0159dbd0:
        FUN_01279adc(&local_48,&local_78,&local_58);
        iVar2 = local_34;
        puVar15 = local_38;
        uVar6 = local_3c;
        if (local_48 != 0) {
          thunk_FUN_016d3fb4(local_44);
        }
      }
      else {
        uVar16 = 0;
        iVar11 = 0;
        uVar6 = 0;
        puVar3 = local_54;
        do {
          uVar13 = *puVar3;
          uVar9 = uVar6 & 0xff;
          uVar7 = (uVar6 & 0xff) - 0x20;
          uVar6 = uVar6 + 0x20;
          uVar8 = uVar13 >> (0x20 - uVar9 & 0xff);
          if (-1 < (int)uVar7) {
            uVar8 = uVar13 << (uVar7 & 0xff);
          }
          uVar13 = uVar13 << uVar9;
          if (-1 < (int)uVar7) {
            uVar13 = 0;
          }
          bVar17 = CARRY4(uVar13,uVar16);
          uVar16 = uVar13 + uVar16;
          iVar11 = uVar8 + iVar11 + (uint)bVar17;
          iVar2 = iVar2 + -4;
          puVar3 = puVar3 + 1;
        } while (iVar2 != 0);
        if (iVar11 != 0) goto LAB_0159dbd0;
        if (uVar16 == 0) goto LAB_0159de98;
        if (uVar16 < 0x10000) {
          if (local_70 != 0) {
            uVar6 = 0;
            iVar2 = local_70 * -4;
            do {
              uVar8 = *(uint *)((int)puVar15 + (-4 - iVar2));
              FUN_0184606c(uVar6 << 0x10 | uVar8 >> 0x10,uVar16);
              FUN_0184606c((uVar8 & 0xffff) + extraout_r1 * 0x10000,uVar16);
              iVar2 = iVar2 + 4;
              uVar8 = extraout_r1_00;
              uVar6 = extraout_r1_00;
            } while (iVar2 != 0);
            goto LAB_0159dd8c;
          }
LAB_0159ddc8:
          puVar15 = (uint *)&DAT_00000004;
          iVar2 = 0;
          uVar6 = 0;
        }
        else {
          if (local_70 == 0) goto LAB_0159ddc8;
          uVar6 = 0;
          iVar2 = local_70 * -4;
          do {
            FUN_01846088(*(undefined4 *)((int)puVar15 + (-4 - iVar2)),uVar6,uVar16,0);
            iVar2 = iVar2 + 4;
            uVar8 = extraout_r2;
            uVar6 = extraout_r2;
          } while (iVar2 != 0);
LAB_0159dd8c:
          iVar2 = 0;
          local_40 = 0;
          local_44 = (uint *)&DAT_00000004;
          local_48 = 0;
          puVar15 = (uint *)&DAT_00000004;
          uVar6 = 0;
          if (uVar8 != 0) {
            FUN_0127ac28(&local_48);
            iVar2 = 1;
            *local_44 = uVar8;
            puVar15 = local_44;
            uVar6 = local_48;
          }
        }
      }
      uVar8 = local_70;
      puVar3 = local_74;
      uVar16 = local_78;
      local_74 = (uint *)0x4;
      bVar17 = local_78 == 0x80000000;
      local_78 = 0;
      local_70 = 0;
      if (bVar17) {
        if (puVar3[2] == 0) {
          uVar16 = 0;
          puVar3 = (uint *)&DAT_00000004;
          goto LAB_0159dc70;
        }
LAB_0159dc4c:
        local_48 = uVar16;
        local_44 = puVar3;
        local_40 = uVar8;
        FUN_0127b2d8(&local_30,&local_48,0,7);
      }
      else {
        if (uVar8 != 0) goto LAB_0159dc4c;
LAB_0159dc70:
        local_28 = 0;
        local_30 = uVar16;
        local_2c = puVar3;
      }
      uVar16 = local_60;
      local_78 = local_30;
      local_74 = local_2c;
      local_70 = local_28;
      if (iVar2 == 0) {
        uVar8 = 0;
        if (local_60 != 0) goto LAB_0159dd00;
LAB_0159dd28:
        if (local_68 == 0) {
          FUN_006029c0(&local_68);
        }
        *local_64 = (char)uVar8;
      }
      else {
        iVar2 = iVar2 * 4;
        if (iVar2 - 9U < 0xfffffffb) {
LAB_0159de7c:
                    /* WARNING: Subroutine does not return */
          FUN_015be724("7 bits don\'t fit into 8, cause ...",0x22,&DAT_018aa024);
        }
        uVar8 = 0;
        uVar13 = 0;
        uVar7 = 0;
        puVar3 = puVar15;
        do {
          uVar10 = *puVar3;
          uVar12 = uVar7 & 0xff;
          uVar14 = (uVar7 & 0xff) - 0x20;
          uVar7 = uVar7 + 0x20;
          uVar9 = uVar10 >> (0x20 - uVar12 & 0xff);
          if (-1 < (int)uVar14) {
            uVar9 = uVar10 << (uVar14 & 0xff);
          }
          uVar10 = uVar10 << uVar12;
          if (-1 < (int)uVar14) {
            uVar10 = 0;
          }
          bVar17 = CARRY4(uVar10,uVar8);
          uVar8 = uVar10 + uVar8;
          uVar13 = uVar9 + uVar13 + (uint)bVar17;
          iVar2 = iVar2 + -4;
          puVar3 = puVar3 + 1;
        } while (iVar2 != 0);
        if (uVar13 != 0 || uVar13 < (0xff < uVar8)) goto LAB_0159de7c;
        if (local_60 == 0) goto LAB_0159dd28;
LAB_0159dd00:
        if (local_60 == local_68) {
          FUN_006029c0(&local_68);
        }
        local_64[uVar16] = (byte)uVar8 | 0x80;
      }
      local_60 = uVar16 + 1;
      if (uVar6 != 0) {
        local_60 = uVar16 + 1;
        thunk_FUN_016d3fb4(puVar15);
      }
      uVar6 = local_70;
    }
    uVar6 = local_60 >> 1;
    if (uVar6 != 0) {
      puVar5 = local_64 + local_60;
      puVar4 = local_64;
      do {
        puVar5 = puVar5 + -1;
        uVar1 = *puVar5;
        uVar6 = uVar6 - 1;
        *puVar5 = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
    }
    *param_1 = local_68;
    param_1[1] = (uint)local_64;
    param_1[2] = local_60;
  }
  if (local_58 != 0) {
    thunk_FUN_016d3fb4(local_54);
  }
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(local_74);
  }
  return;
}

