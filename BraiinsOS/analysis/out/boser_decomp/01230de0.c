// FUN_01230de0 @ 01230de0 size=1660 calls_out=15 calls_in=1
// strings: min_fan_rpm | speed

void FUN_01230de0(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  int local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
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
  undefined1 auStack_98 [48];
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
  
  uVar7 = *param_2;
  uVar5 = 0x15;
  if ((int)uVar7 < 0) {
    uVar5 = uVar7 ^ 0x80000000;
  }
  if (uVar5 != 0x14) {
    if (uVar5 != 0x15) {
      FUN_012223f8(param_1,param_2,&uStack_25,&DAT_01c24694);
      return;
    }
    local_a0 = 0;
    local_c0 = -0x7fffffeb;
    local_b0 = (undefined4 *)param_2[1];
    puVar6 = (undefined4 *)((uint)&local_68 | 4);
    local_a4 = local_b0 + param_2[2] * 8;
    local_e8 = 2;
    local_f0 = 2;
    local_ec = 2;
    local_ac = local_b0;
    local_a8 = uVar7;
LAB_01230e70:
    puVar1 = local_ac;
    bVar14 = local_ac == local_a4;
    piVar9 = param_1;
    if (!bVar14) {
      piVar9 = (int *)*local_ac;
      local_ac = local_ac + 8;
    }
    if (bVar14 || piVar9 == (int *)0x80000015) goto switchD_01231028_caseD_3;
    local_a0 = local_a0 + 1;
    uVar8 = puVar1[2];
    uVar10 = puVar1[3];
    *puVar6 = puVar1[1];
    puVar6[1] = uVar8;
    puVar6[2] = uVar10;
    local_58 = puVar1[4];
    local_54 = puVar1[5];
    local_50 = puVar1[6];
    local_4c = puVar1[7];
    local_68 = piVar9;
    if (local_c0 != -0x7fffffeb) {
      FUN_012222e0(&local_c0);
    }
    uVar13 = local_60;
    uVar5 = local_64;
    uVar12 = 0x15;
    if ((int)piVar9 < 0) {
      uVar12 = (uint)piVar9 ^ 0x80000000;
    }
    local_c0 = local_58;
    uStack_bc = local_54;
    iStack_b8 = local_50;
    iStack_b4 = local_4c;
    uVar8 = local_5c;
    switch(uVar12) {
    case 1:
      uVar13 = local_64 & 0xff;
      uVar8 = 0;
    case 4:
      FUN_012267a8(&local_58,&switchD_01230f08::switchdataD_01230f0c,uVar13,uVar8);
      goto LAB_01230fe8;
    default:
      FUN_012223f8(&local_58,&local_68,&uStack_25,&DAT_01c246d4);
      goto LAB_0123100c;
    case 0xc:
      FUN_012323c8(&local_58,local_60,local_5c);
      goto LAB_01230fd8;
    case 0xd:
      FUN_012323c8(&local_58,local_64,local_60);
      break;
    case 0xe:
      FUN_012261d8(&local_58,local_60,local_5c);
LAB_01230fd8:
      FUN_019bb7e0(uVar5,uVar13);
LAB_01230fe8:
      if ((uVar12 | 2) != 0xe) break;
      goto LAB_0123100c;
    case 0xf:
      FUN_012261d8(&local_58,local_64,local_60);
    }
    FUN_012222e0(&local_68);
LAB_0123100c:
    iVar2 = local_58;
    pcVar11 = "speed";
    uVar3 = (undefined1)local_54;
    if (local_58 != 2) {
      FUN_01bed4e2(auStack_98,(int)&local_54 + 1,0x2b);
      FUN_01bed4e2((int)param_1 + 5,auStack_98,0x2b);
      *param_1 = iVar2;
      *(undefined1 *)(param_1 + 1) = uVar3;
      goto LAB_01231400;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_54 & 0xff) {
    case 0:
      if (local_ec == 2) {
        FUN_01222dcc(&local_58,&local_c0);
        local_ec = local_54;
        local_f8 = local_50;
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
          goto LAB_012313bc;
        }
        goto LAB_01230e70;
      }
      uVar8 = 5;
      break;
    case 1:
      if (local_f0 != 2) {
        uVar8 = 8;
        pcVar11 = &DAT_00570be0;
        break;
      }
      FUN_01222dcc(&local_58,&local_c0);
      local_f0 = local_54;
      local_f4 = local_50;
      if (local_58 != 2) goto LAB_01231360;
      goto LAB_01230e70;
    case 2:
      if (local_e8 == 2) {
        FUN_01222dcc(&local_58,&local_c0);
        local_e8 = local_54;
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
          goto LAB_01231400;
        }
        local_fc = local_50;
        goto LAB_01230e70;
      }
      uVar8 = 0xb;
      pcVar11 = "min_fan_rpm";
      break;
    case 3:
switchD_01231028_caseD_3:
      uVar5 = 0;
      if (local_e8 != 2) {
        uVar5 = local_e8;
      }
      uVar13 = 0;
      if (local_f0 != 2) {
        uVar13 = local_f0;
      }
      uVar12 = 0;
      if (local_ec != 2) {
        uVar12 = local_ec;
      }
      param_1[1] = uVar12;
      param_1[3] = uVar13;
      param_1[5] = uVar5;
      param_1[2] = local_f8;
      param_1[4] = local_f4;
      param_1[6] = local_fc;
      goto LAB_01231244;
    }
    FUN_0123c090(param_1,pcVar11,uVar8);
    if (*param_1 != 2) goto LAB_01231400;
LAB_01231244:
    FUN_01222c98(&local_58,&local_c0);
    goto LAB_01231254;
  }
  local_cc = param_2[1];
  local_d4 = param_2[2];
  local_c8 = local_d4 + param_2[3] * 0x10;
  local_c4 = 0;
  local_d0 = local_d4;
  FUN_01223428(&local_58,&local_d4);
  iVar2 = local_50;
  uVar5 = local_54;
  if (local_58 == 2) {
    if (local_54 != 2) {
      FUN_01223428(&local_58,&local_d4);
      iVar4 = local_50;
      uVar13 = local_54;
      if (local_58 != 2) {
        param_1[3] = local_4c;
        param_1[4] = iStack_48;
        param_1[5] = iStack_44;
        param_1[6] = local_40;
        goto LAB_012312bc;
      }
      if (local_54 == 2) {
        uVar8 = 1;
        goto LAB_01231480;
      }
      FUN_01223428(&local_58,&local_d4);
      if (local_58 == 2) {
        if (local_54 == 2) {
          uVar8 = 2;
          goto LAB_01231480;
        }
        param_1[1] = uVar5;
        param_1[2] = iVar2;
        param_1[3] = uVar13;
        param_1[4] = iVar4;
        param_1[5] = local_54;
        param_1[6] = local_50;
        goto LAB_012311e4;
      }
      param_1[3] = local_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      goto LAB_012312c4;
    }
    uVar8 = 0;
LAB_01231480:
    FUN_0123c028(param_1,uVar8,&DAT_01c2491c,&DAT_01d064b8);
    if (*param_1 == 2) {
LAB_012311e4:
      FUN_01222e2c(&local_58,&local_d4);
LAB_01231254:
      if (local_58 == 2) {
        *param_1 = 2;
      }
      else {
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
      goto LAB_012312dc;
    }
  }
  else {
    param_1[3] = local_4c;
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
LAB_012312bc:
    param_1[7] = local_3c;
    param_1[8] = iStack_38;
    param_1[9] = iStack_34;
    param_1[10] = iStack_30;
    param_1[0xb] = iStack_2c;
LAB_012312c4:
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
  }
  FUN_01264ff4(&local_d4);
LAB_012312dc:
  if ((uVar7 < 0x80000000) || ((undefined1 *)(uVar7 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_012222e0(param_2);
  return;
LAB_01231360:
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
LAB_012313bc:
  param_1[2] = local_50;
LAB_01231400:
  FUN_01222c4c(&local_c0);
  goto LAB_012312dc;
}

