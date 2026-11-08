// FUN_0122f75c @ 0122f75c size=1516 calls_out=17 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements | cooldown_fan_speed

void FUN_0122f75c(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  int local_108;
  uint local_fc;
  undefined4 *local_d4;
  undefined4 *local_d0;
  uint local_cc;
  undefined4 *local_c8;
  undefined4 local_c4;
  int local_c0;
  uint uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  uint local_a8;
  undefined4 *local_a4;
  int local_a0;
  int local_98 [12];
  int *local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_25;
  
  uVar19 = *param_2;
  uVar6 = 0x15;
  if ((int)uVar19 < 0) {
    uVar6 = uVar19 ^ 0x80000000;
  }
  if (uVar6 != 0x14) {
    if (uVar6 != 0x15) {
      FUN_012223f8(param_1,param_2,&uStack_25,&DAT_01c24664);
      return;
    }
    local_b0 = (undefined4 *)param_2[1];
    local_a0 = 0;
    local_c0 = -0x7fffffeb;
    local_a4 = local_b0 + param_2[2] * 8;
    uVar6 = 4;
    puVar7 = (undefined4 *)((uint)local_98 | 4);
    puVar8 = (undefined4 *)((uint)&local_c0 | 4);
    puVar9 = (undefined4 *)((uint)&local_68 | 4);
    local_fc = 2;
    piVar16 = param_1;
    local_ac = local_b0;
    local_a8 = uVar19;
LAB_0122f804:
    puVar2 = local_a4;
    puVar13 = local_ac;
    iVar10 = local_a0;
    do {
      uVar15 = (undefined1)uVar6;
      iVar10 = iVar10 + 1;
      bVar20 = puVar13 == puVar2;
      if (!bVar20) {
        local_ac = puVar13 + 8;
        piVar16 = (int *)*puVar13;
        puVar13 = local_ac;
      }
      if (bVar20 || piVar16 == (int *)0x80000015) {
        if (uVar6 == 4) {
          uVar15 = 3;
        }
        uVar6 = 0;
        if (local_fc != 2) {
          uVar6 = local_fc;
        }
        *(undefined1 *)(param_1 + 3) = uVar15;
        param_1[1] = uVar6;
        param_1[2] = local_108;
        goto LAB_0122fb24;
      }
      uVar12 = puVar13[-6];
      uVar14 = puVar13[-5];
      *puVar9 = puVar13[-7];
      puVar9[1] = uVar12;
      puVar9[2] = uVar14;
      local_58 = puVar13[-4];
      local_54 = puVar13[-3];
      local_50 = puVar13[-2];
      local_4c = puVar13[-1];
      local_a0 = iVar10;
      local_68 = piVar16;
      if (local_c0 != -0x7fffffeb) {
        FUN_012222e0(&local_c0);
      }
      uVar17 = local_60;
      uVar3 = local_64;
      uVar18 = 0x15;
      if ((int)piVar16 < 0) {
        uVar18 = (uint)piVar16 ^ 0x80000000;
      }
      local_c0 = local_58;
      uStack_bc = local_54;
      iStack_b8 = local_50;
      iStack_b4 = local_4c;
      uVar12 = local_5c;
      switch(uVar18) {
      case 1:
        uVar17 = local_64 & 0xff;
        uVar12 = 0;
      case 4:
        FUN_012338a0(&local_58,&switchD_0122f8a4::switchdataD_0122f8a8,uVar17,uVar12);
        goto LAB_0122f970;
      default:
        FUN_012223f8(&local_58,&local_68,&uStack_25,&DAT_01c24704);
        goto LAB_0122f988;
      case 0xc:
        FUN_012321f4(&local_58,local_60,local_5c);
        goto LAB_0122f964;
      case 0xd:
        FUN_012321f4(&local_58,local_64,local_60);
        break;
      case 0xe:
        FUN_01225c88(&local_58,local_60,local_5c);
LAB_0122f964:
        FUN_019bb7e0(uVar3,uVar17);
LAB_0122f970:
        if ((uVar18 | 2) != 0xe) break;
        goto LAB_0122f988;
      case 0xf:
        FUN_01225c88(&local_58,local_64,local_60);
      }
      FUN_012222e0(&local_68);
LAB_0122f988:
      iVar4 = local_58;
      iVar1 = local_c0;
      uVar15 = (char)local_54;
      if (local_58 != 2) {
        FUN_01bed4e2(local_98,(int)&local_54 + 1,0x2b);
        FUN_01bed4e2((int)param_1 + 5,local_98,0x2b);
        *(undefined1 *)(param_1 + 1) = uVar15;
        *param_1 = iVar4;
        goto LAB_0122fcbc;
      }
      if ((local_54 & 1) != 0) goto LAB_0122fa20;
      if (uVar6 != 4) {
        uVar12 = 4;
        pcVar11 = &DAT_0056d358;
        goto LAB_0122fd2c;
      }
      local_c0 = -0x7fffffeb;
      if (iVar1 == -0x7fffffeb) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                     ,0x2c,&DAT_01cfa02c);
      }
      uVar12 = puVar8[1];
      piVar16 = (int *)puVar8[2];
      *puVar7 = *puVar8;
      puVar7[1] = uVar12;
      puVar7[2] = piVar16;
      local_98[0] = iVar1;
      FUN_0123db74(&local_58,local_98);
      iVar1 = local_58;
      uVar15 = (char)local_54;
      uVar6 = local_54 & 0xff;
      if (local_58 != 2) {
        FUN_01bed4e2((int)param_1 + 5,(int)&local_54 + 1,0x2b);
        *(undefined1 *)(param_1 + 1) = uVar15;
        *param_1 = iVar1;
        goto LAB_0122fcbc;
      }
    } while( true );
  }
  local_d4 = (undefined4 *)param_2[2];
  uVar12 = 0;
  local_cc = param_2[1];
  local_c8 = local_d4 + param_2[3] * 4;
  local_c4 = 0;
  local_d0 = local_d4;
  if (param_2[3] == 0) {
LAB_0122faac:
    FUN_0123c028(param_1,uVar12,&DAT_01c2490c,&DAT_01d064b8);
    if (*param_1 != 2) {
LAB_0122fc38:
      FUN_01264ff4(&local_d4);
      goto LAB_0122fc40;
    }
  }
  else {
    local_d0 = local_d4 + 4;
    piVar16 = (int *)*local_d4;
    if (piVar16 == (int *)0x80000015) goto LAB_0122faac;
    puVar7 = (undefined4 *)((uint)&local_68 | 4);
    uVar12 = local_d4[2];
    uVar14 = local_d4[3];
    *puVar7 = local_d4[1];
    puVar7[1] = uVar12;
    puVar7[2] = uVar14;
    local_c4 = 1;
    local_68 = piVar16;
    FUN_0123db74(&local_58);
    iVar10 = local_58;
    cVar5 = (char)local_54;
    if (local_58 != 2) {
      FUN_01bed4e2(local_98,(int)&local_54 + 1,0x2b);
      FUN_01bed4e2((int)param_1 + 5,local_98,0x2b);
      *(char *)(param_1 + 1) = cVar5;
      *param_1 = iVar10;
      goto LAB_0122fc38;
    }
    if ((char)local_54 == '\x04') {
      uVar12 = 0;
      goto LAB_0122faac;
    }
    FUN_01223428(&local_58,&local_d4);
    if (local_58 != 2) {
      param_1[3] = local_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      goto LAB_0122fc38;
    }
    if (local_54 == 2) {
      uVar12 = 1;
      goto LAB_0122faac;
    }
    *(char *)(param_1 + 3) = cVar5;
    param_1[1] = local_54;
    param_1[2] = local_50;
  }
  FUN_01222e2c(&local_58,&local_d4);
  if (local_58 == 2) {
    *param_1 = 2;
  }
  else {
LAB_0122fbd0:
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = local_3c;
    param_1[8] = iStack_38;
    param_1[9] = iStack_34;
    param_1[10] = iStack_30;
    param_1[0xb] = iStack_2c;
  }
LAB_0122fc40:
  if ((uVar19 < 0x80000000) || ((undefined1 *)(uVar19 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_012222e0(param_2);
  return;
LAB_0122fa20:
  if (local_fc != 2) {
    uVar12 = 0x12;
    pcVar11 = "cooldown_fan_speed";
LAB_0122fd2c:
    FUN_0123c090(param_1,pcVar11,uVar12);
    if (*param_1 != 2) goto LAB_0122fcbc;
LAB_0122fb24:
    FUN_01222c98(&local_58,&local_c0);
    if (local_58 != 2) goto LAB_0122fbd0;
    *param_1 = 2;
    goto LAB_0122fc40;
  }
  FUN_01222dcc(&local_58,&local_c0);
  local_fc = local_54;
  local_108 = local_50;
  if (local_58 != 2) goto LAB_0122fcc8;
  piVar16 = (int *)0x2;
  goto LAB_0122f804;
LAB_0122fcc8:
  param_1[3] = local_4c;
  param_1[4] = iStack_48;
  param_1[5] = iStack_44;
  param_1[6] = local_40;
  param_1[7] = local_3c;
  param_1[8] = iStack_38;
  param_1[9] = iStack_34;
  param_1[10] = iStack_30;
  param_1[0xb] = iStack_2c;
  *param_1 = local_58;
  param_1[1] = local_54;
  param_1[2] = local_50;
LAB_0122fcbc:
  FUN_01222c4c(&local_c0);
  goto LAB_0122fc40;
}

