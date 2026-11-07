// FUN_00731b20 @ 00731b20 size=2092 calls_out=3 calls_in=3
// strings: 

void FUN_00731b20(undefined4 *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint3 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint unaff_r8;
  char cVar17;
  uint in_r12;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint unaff_lr;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_60;
  uint local_50;
  uint local_48;
  ushort local_3c;
  ushort local_3a;
  byte local_38;
  byte local_37;
  ushort local_36;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar4 = param_2 + 6;
  puVar5 = (uint *)((uint)&local_38 | 1);
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_50 = 0;
LAB_00731b74:
  if (param_2[7] == 0) goto LAB_007322c0;
  uVar15 = param_2[5];
  if ((char)param_2[8] != '\x01') {
    FUN_007195f0(&local_38,puVar4,uVar15);
    uVar10 = local_2c;
    uVar11 = local_30;
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      FUN_007195f0(&local_38,puVar4,uVar15);
      uVar7 = (uint)local_38;
      if (uVar7 == 0x4f) {
        local_48 = local_2c;
        if ((local_30 != 0 || uVar11 != 0) || (local_2c != 0 || uVar10 != 0)) {
          uVar6 = uVar15 * -8 & 0x38;
          uVar15 = 0xffffffff >> uVar6;
          uVar7 = uVar15 | -1 << (0x20 - uVar6 & 0xff);
          if (-1 < (int)(uVar6 - 0x20)) {
            uVar15 = 0;
            uVar7 = 0xffffffff >> (uVar6 - 0x20 & 0xff);
          }
          unaff_r8 = uVar11;
          in_r12 = uVar10;
          if ((uVar11 ^ uVar7) == 0 && (uVar10 ^ uVar15) == 0) {
            unaff_r8 = local_30;
            in_r12 = local_2c;
          }
          cVar17 = (uVar11 ^ uVar7) == 0 && (uVar10 ^ uVar15) == 0;
          unaff_lr = local_30;
          goto LAB_00731f04;
        }
        uVar11 = 0;
        goto switchD_00731bc0_caseD_0;
      }
      uVar1 = *(undefined1 *)((int)puVar5 + 6);
      uVar2 = (undefined2)puVar5[1];
    }
    else {
      uVar1 = *(undefined1 *)((int)puVar5 + 6);
      uVar2 = (undefined2)puVar5[1];
    }
    uVar15 = *puVar5;
    cVar17 = '\t';
    local_50 = (uVar15 & 0xffffff) >> 8;
    uVar11 = uVar15 >> 0x18 | (uint)CONCAT12(uVar1,uVar2) << 8;
    uVar15 = uVar15 & 0xff;
    unaff_lr = local_30;
    local_48 = local_2c;
    goto LAB_00732018;
  }
  cVar17 = '\t';
  uVar11 = (uint)*(byte *)param_2[6];
  param_2[6] = (uint)((byte *)param_2[6] + 1);
  param_2[7] = param_2[7] - 1;
  switch(uVar11) {
  case 0:
switchD_00731bc0_caseD_0:
    local_48 = 0;
    local_50 = 0;
    cVar17 = '\b';
    uVar7 = 0;
    unaff_lr = 0;
    uVar15 = 0;
    break;
  case 1:
    unaff_lr = 0x731bf0;
    FUN_00719bb8(&local_38,puVar4);
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      uVar7 = 0x38;
      if (local_2c == 0) {
        local_60 = local_30;
        in_r12 = 0;
        cVar17 = '\x02';
        goto LAB_00731f04;
      }
      uVar11 = extraout_r12;
    }
    else {
      local_70 = (uint)local_36;
      local_6c = (uint)local_37;
      local_48 = local_2c;
      uVar11 = local_34;
      unaff_lr = local_30;
    }
    uVar15 = local_6c;
    local_50 = local_70;
    break;
  case 2:
    unaff_lr = 0x731d84;
    FUN_00719bb8(&local_38,puVar4);
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      if (local_2c != 0) {
        uVar7 = 0x38;
        uVar15 = 0;
        uVar11 = extraout_r12_00;
        goto LAB_00731fd4;
      }
      uVar15 = local_30;
      FUN_00719bb8(&local_38,puVar4);
      uVar7 = (uint)local_38;
      if (uVar7 == 0x4f) {
        unaff_lr = 0x731dac;
        if (local_2c == 0) {
          cVar17 = '\x03';
          unaff_r8 = local_30;
          in_r12 = 0;
          local_60 = uVar15;
          goto LAB_00731f04;
        }
        uVar7 = 0x38;
        uVar15 = 0;
        uVar11 = extraout_r12_01;
      }
      else {
        local_48 = local_2c;
        uVar15 = (uint)local_37;
        local_3a = local_36;
        uVar11 = local_34;
        unaff_lr = local_30;
      }
      puVar12 = &local_3a;
    }
    else {
      uVar15 = (uint)local_37;
      local_48 = local_2c;
      local_3c = local_36;
      uVar11 = local_34;
      unaff_lr = local_30;
LAB_00731fd4:
      puVar12 = &local_3c;
    }
    local_50 = (uint)*puVar12;
    break;
  case 3:
    unaff_lr = 0x731de8;
    FUN_00719bb8(&local_38,puVar4);
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      uVar7 = 0x38;
      if (local_2c == 0) {
        uVar15 = local_30;
        unaff_lr = 0x731e14;
        FUN_00719bb8(&local_38,puVar4);
        uVar7 = (uint)local_38;
        if (uVar7 != 0x4f) goto LAB_00731f14;
        cVar17 = '\x04';
        unaff_r8 = local_30;
        in_r12 = local_2c;
        local_60 = uVar15;
        goto LAB_00731f04;
      }
      uVar11 = extraout_r12_02;
    }
    else {
      local_78 = (uint)local_36;
      local_74 = (uint)local_37;
      local_48 = local_2c;
      uVar11 = local_34;
      unaff_lr = local_30;
    }
    uVar15 = local_74;
    local_50 = local_78;
    break;
  case 4:
    FUN_00719bb8(&local_38,puVar4);
    in_r12 = local_2c;
    unaff_r8 = local_30;
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      FUN_00719bb8(&local_38,puVar4);
      uVar7 = (uint)local_38;
      if (uVar7 == 0x4f) {
        cVar17 = '\x05';
        unaff_lr = local_30;
        local_48 = local_2c;
        goto LAB_00731f04;
      }
    }
    goto LAB_00731f14;
  case 5:
    unaff_lr = 0x731e98;
    FUN_007195f0(&local_38,puVar4,uVar15);
    uVar7 = (uint)local_38;
    if (uVar7 != 0x4f) goto LAB_00731f14;
    cVar17 = '\x01';
    unaff_r8 = local_30;
    in_r12 = local_2c;
LAB_00731f04:
    uVar15 = (unaff_r8 & 0xffff) >> 8;
    local_50 = unaff_r8 >> 0x10;
    uVar7 = unaff_r8 & 0xff;
    goto LAB_00732028;
  case 6:
    FUN_007195f0(&local_38,puVar4,uVar15);
    in_r12 = local_2c;
    unaff_r8 = local_30;
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      FUN_007195f0(&local_38,puVar4,uVar15);
      uVar7 = (uint)local_38;
      if (uVar7 == 0x4f) {
        local_48 = local_2c;
        cVar17 = '\x06';
        unaff_lr = local_30;
        goto LAB_00731f04;
      }
    }
    goto LAB_00731f14;
  case 7:
    FUN_007195f0(&local_38,puVar4,uVar15);
    in_r12 = local_2c;
    unaff_r8 = local_30;
    uVar7 = (uint)local_38;
    if (uVar7 == 0x4f) {
      FUN_00719bb8(&local_38,puVar4);
      uVar7 = (uint)local_38;
      if (uVar7 == 0x4f) {
        cVar17 = '\a';
        unaff_lr = local_30;
        local_48 = local_2c;
        goto LAB_00731f04;
      }
    }
LAB_00731f14:
    local_48 = local_2c;
    local_50 = (uint)local_36;
    uVar15 = (uint)local_37;
    uVar11 = local_34;
    unaff_lr = local_30;
    break;
  default:
    uVar7 = 0x18;
    uVar15 = uVar11;
    uVar11 = in_r12;
  }
LAB_00732018:
  param_2[6] = 1;
  param_2[7] = 0;
  in_r12 = uVar11;
LAB_00732028:
  if (cVar17 == '\b') {
LAB_007322c0:
    uVar9 = 0;
LAB_007322ec:
    *param_1 = uVar9;
    param_1[1] = 0;
    return;
  }
  uVar7 = local_50 << 0x10 | uVar15 << 8 | uVar7;
  if (cVar17 == '\t') {
    param_1[4] = unaff_lr;
    param_1[5] = local_48;
    uVar9 = 2;
    param_1[2] = uVar7;
    param_1[3] = in_r12;
    goto LAB_007322ec;
  }
  unaff_r8 = (uint)(byte)param_2[5];
  uVar10 = unaff_r8 * -8 & 0x38;
  uVar15 = 0xffffffff >> uVar10;
  uVar11 = uVar15 | -1 << (0x20 - uVar10 & 0xff);
  if (-1 < (int)(uVar10 - 0x20)) {
    uVar15 = 0;
    uVar11 = 0xffffffff >> (uVar10 - 0x20 & 0xff);
  }
  uVar6 = uVar15 - (uVar11 == 0);
  uVar10 = uVar11 - 1;
  if (4 < *(ushort *)((int)param_2 + 0x16)) {
    uVar6 = uVar15;
    uVar10 = uVar11;
  }
  uVar16 = uVar7;
  uVar13 = in_r12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar17) {
  default:
    uVar13 = *param_2;
    uVar14 = param_2[1];
    if (uVar13 == uVar10 && uVar14 == uVar6) goto LAB_00731b74;
    uVar8 = unaff_lr + uVar13 & uVar11;
    uVar16 = uVar7 + uVar13 & uVar11;
    uVar11 = local_48 + uVar14 + (uint)CARRY4(unaff_lr,uVar13) & uVar15;
    uVar13 = in_r12 + uVar14 + (uint)CARRY4(uVar7,uVar13) & uVar15;
    break;
  case '\x01':
    uVar15 = in_r12;
    goto LAB_007321d4;
  case '\x02':
    FUN_00719574(&local_38,param_2[2],param_2[3],unaff_r8,param_2[4],local_60);
    uVar8 = (uint)local_38;
    if (uVar8 != 0x4f) {
LAB_0073231c:
      uVar3 = (uint3)puVar5[1];
      uVar15 = *puVar5;
LAB_0073235c:
      param_1[2] = uVar8 | uVar15 << 8;
      param_1[3] = (uint)uVar3 << 8 | uVar15 >> 0x18;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[4] = local_30;
      param_1[5] = local_2c;
      return;
    }
    uVar15 = local_2c;
    uVar7 = local_30;
LAB_007321d4:
    *param_2 = uVar7;
    param_2[1] = uVar15;
    goto LAB_00731b74;
  case '\x03':
    uVar11 = param_2[2];
    uVar14 = param_2[3];
    uVar15 = param_2[4];
    FUN_00719574(&local_38,uVar11,uVar14,unaff_r8,uVar15,local_60);
    uVar13 = local_2c;
    uVar16 = local_30;
    uVar8 = (uint)local_38;
    if (uVar8 != 0x4f) goto LAB_0073231c;
    FUN_00719574(&local_38,uVar11,uVar14,unaff_r8,uVar15,uVar7);
    uVar8 = (uint)local_38;
    if (uVar8 != 0x4f) {
      uVar3 = (uint3)puVar5[1];
      uVar15 = *puVar5;
      goto LAB_0073235c;
    }
    uVar8 = local_30;
    uVar11 = local_2c;
    break;
  case '\x04':
    FUN_00719574(&local_38,param_2[2],param_2[3],unaff_r8,param_2[4],local_60);
    uVar8 = (uint)local_38;
    if (uVar8 != 0x4f) goto LAB_0073231c;
    uVar8 = local_30 + uVar7 & uVar11;
    uVar11 = local_2c + in_r12 + (uint)CARRY4(local_30,uVar7) & uVar15;
    uVar16 = local_30;
    uVar13 = local_2c;
    break;
  case '\x06':
    uVar8 = unaff_lr;
    uVar11 = local_48;
    break;
  case '\a':
    uVar8 = unaff_lr + uVar7 & uVar11;
    uVar11 = local_48 + in_r12 + (uint)CARRY4(unaff_lr,uVar7) & uVar15;
  }
  if ((uVar16 != uVar10 || uVar13 != uVar6) &&
     (uVar13 <= uVar11 && (uint)(uVar8 <= uVar16) <= uVar13 - uVar11)) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar16;
    param_1[3] = uVar13;
    param_1[4] = uVar8;
    param_1[5] = uVar11;
    return;
  }
  goto LAB_00731b74;
}

