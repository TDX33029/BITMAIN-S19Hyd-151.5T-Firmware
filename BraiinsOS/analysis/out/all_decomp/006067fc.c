// FUN_006067fc @ 006067fc size=4516 calls_out=4 calls_in=8
// strings: 

void FUN_006067fc(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char local_38;
  undefined2 local_37;
  undefined1 uStack_35;
  uint *puStack_34;
  uint *local_30;
  uint local_2c;
  
  uVar2 = *(ushort *)((int)param_4 + 10);
  uVar19 = param_3 >> 0x10;
  uVar7 = param_3 >> 8;
  puVar16 = (uint *)*param_2;
  uVar18 = param_2[1];
  uVar11 = uVar2;
LAB_00606828:
  uVar10 = uVar11;
  uVar15 = uVar18;
  puVar17 = puVar16;
  uVar18 = uVar15;
  if (0x2b < uVar10 - 1) goto LAB_00606998;
  uVar3 = (&switchD_00606844::switchdataD_00606848)[uVar10 - 1];
  puVar16 = puVar17;
  switch(uVar10) {
  case 1:
    FUN_00617928(&local_38,param_2,param_3);
    if (local_38 != 'O') goto LAB_00607e5c;
    uVar8 = 0;
    puStack_34 = local_30;
    goto LAB_00607e48;
  case 2:
    goto switchD_00606844_caseD_2;
  case 3:
    if (uVar15 < 2) break;
    puVar16 = (uint *)((int)puVar17 + 2);
    uVar18 = (uint)(ushort)*puVar17;
    uVar15 = uVar15 - 2;
    goto LAB_006072b8;
  case 4:
    if (uVar15 < 4) break;
    puVar16 = puVar17 + 1;
    uVar18 = *puVar17;
    uVar15 = uVar15 - 4;
    goto LAB_006072b8;
  case 5:
    if (uVar15 < 2) break;
    uVar19 = *puVar17;
    puVar16 = (uint *)(uint)(ushort)uVar19;
    uVar8 = 3;
    *param_2 = (ushort *)((int)puVar17 + 2);
    param_2[1] = uVar15 - 2;
    uVar7 = (uint)(ushort)((ushort)uVar19 >> 8);
    goto LAB_00607660;
  case 6:
    if ((param_3 & 0xff00) == 0x400) {
      switch(*(undefined2 *)(param_4 + 2)) {
      case 2:
      case 0x10:
      case 0x19:
      case 0x2a:
      case 0x2c:
      case 0x40:
      case 0x43:
      case 0x46:
      case 0x48:
      case 0x4a:
      case 0x4d:
      case 0x55:
      case 0x79:
        break;
      default:
        goto switchD_006070a8_caseD_3;
      case 0x38:
        if ((uVar19 & 0xfffffffe) != 2) goto switchD_006070a8_caseD_3;
      }
      if (uVar15 < 4) {
LAB_00607dec:
        param_1[4] = puVar17;
        *param_1 = 0x2e;
        param_1[1] = 0;
        param_1[3] = puVar17;
        param_1[5] = 0;
        *(undefined1 *)(param_1 + 2) = 0x13;
        return;
      }
      puStack_34 = (uint *)*puVar17;
      uVar8 = 10;
    }
    else {
switchD_006070a8_caseD_3:
      if (uVar15 < 4) goto LAB_00607dec;
      puStack_34 = (uint *)*puVar17;
      uVar8 = 4;
    }
    *param_2 = puVar17 + 1;
    param_2[1] = uVar15 - 4;
    uVar19 = (uint)puStack_34 >> 0x10;
    uVar7 = (uint)puStack_34 >> 8;
    goto LAB_0060766c;
  case 7:
    if ((param_3 & 0xff00) != 0x800) {
switchD_006073a4_caseD_3:
      FUN_00607e94(&local_38);
      if (local_38 != 'O') {
LAB_00607e5c:
        param_1[3] = puStack_34;
        *(uint *)((int)param_1 + 9) = CONCAT13(puStack_34._0_1_,CONCAT12(uStack_35,local_37));
        *param_1 = 0x2e;
        param_1[4] = local_30;
        param_1[5] = local_2c;
        param_1[1] = 0;
        *(char *)(param_1 + 2) = local_38;
        return;
      }
      uVar8 = 5;
      puStack_34 = local_30;
      goto LAB_00607e48;
    }
    switch(*(undefined2 *)(param_4 + 2)) {
    default:
      goto switchD_006073a4_caseD_3;
    case 0x38:
      if ((uVar19 & 0xfffffffe) != 2) goto switchD_006073a4_caseD_3;
    case 2:
    case 0x10:
    case 0x19:
    case 0x2a:
    case 0x2c:
    case 0x40:
    case 0x43:
    case 0x46:
    case 0x48:
    case 0x4a:
    case 0x4d:
    case 0x55:
    case 0x79:
      FUN_00618580(&local_38,param_2,8);
      if (local_38 != 'O') {
        *(undefined2 *)((int)param_1 + 9) = local_37;
        *param_1 = 0x2e;
        param_1[1] = 0;
        *(undefined1 *)((int)param_1 + 0xb) = uStack_35;
        param_1[3] = puStack_34;
        param_1[4] = local_30;
        param_1[5] = local_2c;
        *(char *)(param_1 + 2) = local_38;
        return;
      }
      uVar8 = 10;
      uVar19 = (uint)puStack_34 >> 0x10;
      uVar7 = (uint)puStack_34 >> 8;
    }
    goto LAB_0060766c;
  case 8:
    if (uVar15 == 0) goto LAB_00606e94;
    uVar18 = 0;
    while (*(byte *)((int)puVar17 + uVar18) != 0) {
      uVar18 = uVar18 + 1;
      if (uVar15 == uVar18) {
LAB_00606e94:
        *param_1 = 0x2e;
        param_1[1] = 0;
        param_1[4] = puVar17;
        param_1[5] = 0;
        *(undefined1 *)(param_1 + 2) = 0x13;
        return;
      }
    }
    uVar19 = (uint)puVar17 >> 0x10;
    *param_2 = (byte *)((int)puVar17 + uVar18 + 1);
    param_2[1] = uVar15 + ~uVar18;
    uVar7 = (uint)puVar17 >> 8;
    uVar8 = 0x1f;
    uVar15 = uVar18;
    goto LAB_00607668;
  case 9:
    uVar19 = 0;
    uVar18 = 0;
    uVar3 = 0;
    uVar7 = 0;
    goto LAB_00607050;
  case 10:
    if (uVar15 == 0) break;
    puVar16 = (uint *)((int)puVar17 + 1);
    uVar18 = (uint)(byte)*puVar17;
    uVar15 = uVar15 - 1;
LAB_006072b8:
    *param_2 = puVar16;
    param_2[1] = uVar15;
    puVar17 = puVar16;
    if (uVar18 <= uVar15) {
      uVar19 = (uint)puVar16 >> 0x10;
      uVar7 = (uint)puVar16 >> 8;
      *param_2 = (byte *)((int)puVar16 + uVar18);
      param_2[1] = uVar15 - uVar18;
      uVar8 = 1;
      goto LAB_00607664;
    }
    break;
  case 0xb:
    if (uVar15 == 0) break;
    param_2[1] = uVar15 - 1;
    puVar16 = (uint *)(uint)(byte)*puVar17;
    *param_2 = (byte *)((int)puVar17 + 1);
    uVar8 = 2;
    goto LAB_0060765c;
  case 0xc:
    if (uVar15 == 0) break;
    uVar19 = *puVar17;
    uVar8 = 9;
    *param_2 = (byte *)((int)puVar17 + 1);
    param_2[1] = uVar15 - 1;
    puVar16 = (uint *)(uint)((byte)uVar19 != 0);
    goto LAB_0060765c;
  case 0xd:
    uVar13 = 0;
    uVar12 = 0;
    uVar18 = 0;
    puVar17 = (uint *)0x0;
    goto LAB_00606e3c;
  case 0xe:
    if ((uVar7 & 0xff) == 8) {
      if (uVar15 < 8) goto LAB_00607a4c;
      puVar16 = (uint *)*puVar17;
      uVar19 = puVar17[1];
      *param_2 = puVar17 + 2;
      param_2[1] = uVar15 - 8;
      puVar17 = puVar16;
      if (uVar19 != 0) goto LAB_006076cc;
    }
    else {
      if (uVar15 < 4) goto LAB_00607a4c;
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      puVar17 = puVar16;
    }
    uVar19 = (uint)puVar17 >> 0x10;
    uVar7 = (uint)puVar17 >> 8;
    uVar8 = 0x1a;
    goto LAB_00607668;
  case 0xf:
    uVar3 = 0;
    uVar19 = 0;
    puVar17 = (uint *)0x0;
    uVar18 = 0;
    goto LAB_00607750;
  case 0x10:
    if (uVar19 == 2) {
      FUN_00618488(&local_38,param_2,param_3);
    }
    else {
      FUN_00618580(&local_38);
    }
    if (local_38 != 'O') {
      *(undefined1 *)((int)param_1 + 0xb) = uStack_35;
      *(undefined2 *)((int)param_1 + 9) = local_37;
      *param_1 = 0x2e;
      param_1[4] = local_30;
      param_1[1] = 0;
      param_1[3] = puStack_34;
      param_1[5] = local_2c;
      *(char *)(param_1 + 2) = local_38;
      return;
    }
    uVar8 = 0xe;
    uVar19 = (uint)puStack_34 >> 0x10;
    uVar7 = (uint)puStack_34 >> 8;
    goto LAB_0060766c;
  case 0x11:
    if (uVar15 == 0) break;
    param_2[1] = uVar15 - 1;
    puVar16 = (uint *)(uint)(byte)*puVar17;
    *param_2 = (byte *)((int)puVar17 + 1);
    uVar8 = 0xd;
    goto LAB_0060765c;
  case 0x12:
    if (uVar15 < 2) break;
    uVar19 = *puVar17;
    puVar16 = (uint *)(uint)(ushort)uVar19;
    uVar8 = 0xd;
    *param_2 = (ushort *)((int)puVar17 + 2);
    param_2[1] = uVar15 - 2;
    uVar7 = (uint)(ushort)((ushort)uVar19 >> 8);
    goto LAB_00607660;
  case 0x13:
    if (3 < uVar15) {
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      goto LAB_00607bc8;
    }
    break;
  case 0x14:
    if (uVar15 < 8) {
LAB_00606d70:
      uVar3 = 0;
      uVar5 = 0x13;
    }
    else {
      puVar16 = (uint *)*puVar17;
      uVar3 = puVar17[1];
      *param_2 = puVar17 + 2;
      param_2[1] = uVar15 - 8;
      if (uVar3 == 0) goto LAB_00607bc8;
LAB_006079e0:
      uVar5 = 0x38;
    }
    *param_1 = 0x2e;
    param_1[1] = 0;
    goto LAB_00607bf4;
  case 0x15:
    uVar12 = 0;
    uVar7 = 0;
    puVar16 = (uint *)0x0;
    uVar19 = 0;
    goto LAB_00606f40;
  case 0x16:
    if (uVar15 != 0) goto code_r0x00606904;
    puVar16 = puVar17;
    goto LAB_00607b70;
  case 0x17:
    if ((uVar7 & 0xff) == 8) {
      if (uVar15 < 8) goto LAB_00607a4c;
      puVar16 = (uint *)*puVar17;
      uVar19 = puVar17[1];
      *param_2 = puVar17 + 2;
      param_2[1] = uVar15 - 8;
      puVar17 = puVar16;
      if (uVar19 != 0) goto LAB_006076cc;
    }
    else {
      if (uVar15 < 4) goto LAB_00607a4c;
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      puVar17 = puVar16;
    }
    uVar19 = (uint)puVar17 >> 0x10;
    uVar7 = (uint)puVar17 >> 8;
    uVar8 = 10;
    goto LAB_00607668;
  case 0x18:
    uVar19 = 0;
    uVar18 = 0;
    uVar3 = 0;
    uVar7 = 0;
    goto LAB_00607320;
  case 0x19:
    uVar8 = 9;
    puVar16 = (uint *)&DAT_00000001;
    goto LAB_0060765c;
  case 0x1a:
    goto switchD_00606844_caseD_1a;
  case 0x1b:
    goto switchD_00606844_caseD_1b;
  case 0x1c:
    if (uVar15 < 4) break;
    puVar16 = (uint *)*puVar17;
    *param_2 = puVar17 + 1;
    param_2[1] = uVar15 - 4;
    goto LAB_006079cc;
  case 0x1d:
    goto switchD_00606844_caseD_1d;
  case 0x1e:
    if (0xf < uVar15) {
      uVar19 = (uint)puVar17 >> 0x10;
      uVar7 = (uint)puVar17 >> 8;
      *param_2 = puVar17 + 4;
      param_2[1] = uVar15 - 0x10;
      uVar8 = 1;
      uVar18 = 0x10;
      goto LAB_00607664;
    }
    break;
  case 0x1f:
    if ((uVar7 & 0xff) == 8) {
      if (uVar15 < 8) goto LAB_00607a4c;
      puVar16 = (uint *)*puVar17;
      uVar19 = puVar17[1];
      *param_2 = puVar17 + 2;
      param_2[1] = uVar15 - 8;
      puVar17 = puVar16;
      if (uVar19 != 0) goto LAB_006076cc;
    }
    else {
      if (uVar15 < 4) goto LAB_00607a4c;
      puVar16 = puVar17 + 1;
      puVar17 = (uint *)*puVar17;
      *param_2 = puVar16;
      param_2[1] = uVar15 - 4;
    }
    uVar19 = (uint)puVar17 >> 0x10;
    uVar7 = (uint)puVar17 >> 8;
    uVar8 = 0x1e;
    goto LAB_00607668;
  case 0x20:
    if (7 < uVar15) {
      puVar16 = (uint *)*puVar17;
      uVar18 = puVar17[1];
      *param_2 = puVar17 + 2;
      param_2[1] = uVar15 - 8;
      uVar19 = (uint)puVar16 >> 0x10;
      uVar8 = 0x19;
      uVar7 = (uint)puVar16 >> 8;
      puVar17 = puVar16;
      goto LAB_00607664;
    }
    break;
  case 0x21:
    if (uVar2 != 0x21) {
      *param_1 = 0x2e;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 0x49;
      return;
    }
    uVar8 = 6;
    puStack_34 = (uint *)*param_4;
    local_2c = param_4[1];
LAB_00607e48:
    uVar19 = (uint)puStack_34 >> 0x10;
    uVar7 = (uint)puStack_34 >> 8;
    uVar15 = local_2c;
    goto LAB_0060766c;
  case 0x22:
    uVar19 = 0;
    uVar3 = 0;
    puVar16 = (uint *)0x0;
    uVar7 = 0;
    goto LAB_00607858;
  case 0x23:
    uVar19 = 0;
    uVar3 = 0;
    puVar16 = (uint *)0x0;
    uVar7 = 0;
    goto LAB_00606cb8;
  case 0x24:
    if (uVar15 < 8) goto LAB_00606d70;
    puVar16 = (uint *)*puVar17;
    uVar3 = puVar17[1];
    *param_2 = puVar17 + 2;
    param_2[1] = uVar15 - 8;
    if (uVar3 != 0) goto LAB_006079e0;
LAB_006079cc:
    uVar19 = (uint)puVar16 >> 0x10;
    uVar7 = (uint)puVar16 >> 8;
    uVar8 = 0xf;
    puVar17 = puVar16;
    goto LAB_00607664;
  case 0x25:
    if (uVar15 == 0) break;
    param_2[1] = uVar15 - 1;
    puVar16 = (uint *)(uint)(byte)*puVar17;
    *param_2 = (byte *)((int)puVar17 + 1);
    uVar8 = 0x1d;
    goto LAB_0060765c;
  case 0x26:
    if (uVar15 < 2) break;
    uVar19 = *puVar17;
    puVar16 = (uint *)(uint)(ushort)uVar19;
    uVar8 = 0x1d;
    *param_2 = (ushort *)((int)puVar17 + 2);
    param_2[1] = uVar15 - 2;
    uVar7 = (uint)(ushort)((ushort)uVar19 >> 8);
    goto LAB_00607660;
  case 0x27:
    if (2 < uVar15) {
      uVar19 = (uint)*(byte *)((int)puVar17 + 2);
      uVar7 = *puVar17;
      *param_2 = (byte *)((int)puVar17 + 3);
      param_2[1] = uVar15 - 3;
      puVar16 = (uint *)(uint)(uint3)uVar7;
      goto LAB_00607948;
    }
    break;
  case 0x28:
    if (3 < uVar15) {
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      goto LAB_00607944;
    }
    break;
  case 0x29:
    if (uVar15 == 0) break;
    param_2[1] = uVar15 - 1;
    puVar16 = (uint *)(uint)(byte)*puVar17;
    *param_2 = (byte *)((int)puVar17 + 1);
    uVar8 = 0xc;
LAB_0060765c:
    uVar7 = 0;
LAB_00607660:
    uVar19 = 0;
    puVar17 = puVar16;
    goto LAB_00607664;
  case 0x2a:
    if (uVar15 < 2) break;
    uVar19 = *puVar17;
    puVar16 = (uint *)(uint)(ushort)uVar19;
    uVar8 = 0xc;
    *param_2 = (ushort *)((int)puVar17 + 2);
    param_2[1] = uVar15 - 2;
    uVar7 = (uint)(ushort)((ushort)uVar19 >> 8);
    goto LAB_00607660;
  case 0x2b:
    if (2 < uVar15) {
      uVar19 = (uint)*(byte *)((int)puVar17 + 2);
      uVar7 = *puVar17;
      *param_2 = (byte *)((int)puVar17 + 3);
      param_2[1] = uVar15 - 3;
      puVar16 = (uint *)(uint)(uint3)uVar7;
      goto LAB_0060792c;
    }
    break;
  case 0x2c:
    if (3 < uVar15) {
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      goto LAB_00607928;
    }
  }
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[3] = puVar17;
  param_1[4] = puVar17;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 0x13;
  return;
LAB_00606998:
  if (0x20 < uVar10 - 0x1f01) {
switchD_00606844_caseD_2:
    *param_1 = 0x2e;
    param_1[1] = 0;
    *(ushort *)((int)param_1 + 10) = uVar10;
    *(undefined1 *)(param_1 + 2) = 0xc;
    return;
  }
  uVar3 = (&switchD_006069b4::switchdataD_006069b8)[uVar10 - 0x1f01];
  switch(uVar10) {
  case 0x1f01:
switchD_00606844_caseD_1b:
    uVar19 = 0;
    uVar3 = 0;
    puVar16 = (uint *)0x0;
    uVar7 = 0;
    do {
      uVar9 = (undefined1)uVar19;
      if (uVar15 == 0) goto LAB_00607888;
      param_2[1] = uVar15 - 1;
      puVar14 = (uint *)((int)puVar17 + 1);
      uVar12 = *puVar17;
      uVar19 = (uint)(byte)uVar12;
      *param_2 = puVar14;
      if ((uVar3 == 0x3f) && (1 < uVar19)) goto LAB_00607880;
      uVar4 = uVar3 & 0x3f;
      uVar6 = uVar19 & 0x7f;
      uVar20 = uVar4 - 0x20;
      uVar13 = uVar6 << uVar4;
      if (-1 < (int)uVar20) {
        uVar13 = 0;
      }
      puVar16 = (uint *)(uVar13 | (uint)puVar16);
      uVar13 = uVar6 >> (0x20 - uVar4 & 0xff);
      uVar3 = uVar3 + 7;
      if (-1 < (int)uVar20) {
        uVar13 = uVar6 << (uVar20 & 0xff);
      }
      uVar7 = uVar13 | uVar7;
      puVar17 = puVar14;
      uVar15 = uVar15 - 1;
    } while (0x7fffffff < (uint)(int)(char)(byte)uVar12);
    if (uVar7 != 0) goto LAB_00607ccc;
LAB_00607928:
    uVar19 = (uint)puVar16 >> 0x10;
LAB_0060792c:
    uVar7 = (uint)puVar16 >> 8;
    uVar8 = 0xc;
    puVar17 = puVar16;
    break;
  case 0x1f02:
switchD_00606844_caseD_1a:
    uVar12 = 0;
    uVar7 = 0;
    puVar16 = (uint *)0x0;
    uVar19 = 0;
    do {
      uVar9 = (undefined1)uVar12;
      if (uVar15 == 0) goto LAB_00606f70;
      param_2[1] = uVar15 - 1;
      puVar14 = (uint *)((int)puVar17 + 1);
      uVar13 = *puVar17;
      uVar12 = (uint)(byte)uVar13;
      *param_2 = puVar14;
      if ((uVar7 == 0x3f) && (1 < uVar12)) goto LAB_00606f68;
      uVar4 = uVar7 & 0x3f;
      uVar6 = uVar12 & 0x7f;
      uVar20 = uVar4 - 0x20;
      uVar3 = uVar6 << uVar4;
      if (-1 < (int)uVar20) {
        uVar3 = 0;
      }
      puVar16 = (uint *)(uVar3 | (uint)puVar16);
      uVar3 = uVar6 >> (0x20 - uVar4 & 0xff);
      uVar7 = uVar7 + 7;
      if (-1 < (int)uVar20) {
        uVar3 = uVar6 << (uVar20 & 0xff);
      }
      uVar19 = uVar3 | uVar19;
      uVar3 = (uint)(char)(byte)uVar13;
      puVar17 = puVar14;
      uVar15 = uVar15 - 1;
    } while (0x7fffffff < uVar3);
    if (uVar19 != 0) goto LAB_00607bdc;
LAB_00607944:
    uVar19 = (uint)puVar16 >> 0x10;
LAB_00607948:
    uVar7 = (uint)puVar16 >> 8;
    uVar8 = 0x1d;
    puVar17 = puVar16;
    break;
  default:
    goto switchD_00606844_caseD_2;
  case 0x1f20:
    if ((uVar7 & 0xff) == 8) {
      if (7 < uVar15) {
        puVar16 = (uint *)*puVar17;
        uVar19 = puVar17[1];
        *param_2 = puVar17 + 2;
        param_2[1] = uVar15 - 8;
        puVar17 = puVar16;
        if (uVar19 != 0) goto LAB_006076cc;
LAB_00607970:
        uVar19 = (uint)puVar17 >> 0x10;
        uVar7 = (uint)puVar17 >> 8;
        uVar8 = 0xf;
        goto LAB_00607668;
      }
    }
    else if (3 < uVar15) {
      puVar16 = (uint *)*puVar17;
      *param_2 = puVar17 + 1;
      param_2[1] = uVar15 - 4;
      puVar17 = puVar16;
      goto LAB_00607970;
    }
    goto LAB_00607a4c;
  case 0x1f21:
switchD_00606844_caseD_1d:
    if ((uVar7 & 0xff) == 8) {
      if (7 < uVar15) {
        puVar16 = (uint *)*puVar17;
        uVar19 = puVar17[1];
        *param_2 = puVar17 + 2;
        param_2[1] = uVar15 - 8;
        puVar17 = puVar16;
        if (uVar19 != 0) {
LAB_006076cc:
          uVar9 = 0x38;
          goto LAB_00607a58;
        }
LAB_00606bc4:
        uVar19 = (uint)puVar17 >> 0x10;
        uVar7 = (uint)puVar17 >> 8;
        uVar8 = 0x1b;
        goto LAB_00607668;
      }
    }
    else if (3 < uVar15) {
      puVar16 = puVar17 + 1;
      puVar17 = (uint *)*puVar17;
      *param_2 = puVar16;
      param_2[1] = uVar15 - 4;
      goto LAB_00606bc4;
    }
LAB_00607a4c:
    uVar19 = 0;
    uVar9 = 0x13;
LAB_00607a58:
    *(undefined1 *)(param_1 + 2) = uVar9;
    param_1[3] = puVar17;
    param_1[4] = puVar17;
    *param_1 = 0x2e;
    param_1[1] = 0;
    param_1[5] = uVar19;
    return;
  }
  goto LAB_00607664;
  while( true ) {
    param_2[1] = uVar15 - 1;
    puVar14 = (uint *)((int)puVar17 + 1);
    uVar12 = *puVar17;
    uVar19 = (uint)(byte)uVar12;
    *param_2 = puVar14;
    if ((uVar3 == 0x3f) && (1 < uVar19)) goto LAB_00607880;
    uVar4 = uVar3 & 0x3f;
    uVar6 = uVar19 & 0x7f;
    uVar20 = uVar4 - 0x20;
    uVar13 = uVar6 << uVar4;
    if (-1 < (int)uVar20) {
      uVar13 = 0;
    }
    puVar16 = (uint *)(uVar13 | (uint)puVar16);
    uVar13 = uVar6 >> (0x20 - uVar4 & 0xff);
    uVar3 = uVar3 + 7;
    if (-1 < (int)uVar20) {
      uVar13 = uVar6 << (uVar20 & 0xff);
    }
    uVar7 = uVar13 | uVar7;
    puVar17 = puVar14;
    uVar15 = uVar15 - 1;
    if ((uint)(int)(char)(byte)uVar12 < 0x80000000) break;
LAB_00606cb8:
    uVar9 = (undefined1)uVar19;
    if (uVar15 == 0) goto LAB_00607888;
  }
  if (uVar7 != 0) goto LAB_00607ccc;
  uVar19 = (uint)puVar16 >> 0x10;
  uVar7 = (uint)puVar16 >> 8;
  uVar8 = 0x18;
  puVar17 = puVar16;
  goto LAB_00607664;
  while( true ) {
    param_2[1] = uVar15 - 1;
    puVar14 = (uint *)((int)puVar17 + 1);
    uVar12 = *puVar17;
    uVar19 = (uint)(byte)uVar12;
    *param_2 = puVar14;
    if ((uVar3 == 0x3f) && (1 < uVar19)) goto LAB_00607880;
    uVar4 = uVar3 & 0x3f;
    uVar6 = uVar19 & 0x7f;
    uVar20 = uVar4 - 0x20;
    uVar13 = uVar6 << uVar4;
    if (-1 < (int)uVar20) {
      uVar13 = 0;
    }
    puVar16 = (uint *)(uVar13 | (uint)puVar16);
    uVar13 = uVar6 >> (0x20 - uVar4 & 0xff);
    uVar3 = uVar3 + 7;
    if (-1 < (int)uVar20) {
      uVar13 = uVar6 << (uVar20 & 0xff);
    }
    uVar7 = uVar13 | uVar7;
    puVar17 = puVar14;
    uVar15 = uVar15 - 1;
    if ((uint)(int)(char)(byte)uVar12 < 0x80000000) break;
LAB_00607858:
    uVar9 = (undefined1)uVar19;
    if (uVar15 == 0) goto LAB_00607888;
  }
  if (uVar7 != 0) {
LAB_00607ccc:
    uVar5 = 0x38;
    puVar17 = puVar14;
    goto LAB_00607cd0;
  }
  uVar19 = (uint)puVar16 >> 0x10;
  uVar7 = (uint)puVar16 >> 8;
  uVar8 = 0x13;
  puVar17 = puVar16;
  goto LAB_00607664;
LAB_00607888:
  param_2 = (undefined4 *)0x0;
  uVar5 = 0x13;
  goto LAB_00607cd0;
  while( true ) {
    uVar15 = uVar15 - 1;
    param_2[1] = uVar15;
    puVar17 = (uint *)((int)puVar16 + 1);
    uVar12 = *puVar16;
    uVar19 = (uint)(byte)uVar12;
    *param_2 = puVar17;
    if ((uVar18 == 0x3f) && (1 < uVar19)) goto LAB_0060734c;
    uVar4 = uVar18 & 0x3f;
    uVar6 = uVar19 & 0x7f;
    uVar20 = uVar4 - 0x20;
    uVar18 = uVar18 + 7;
    uVar13 = uVar6 << uVar4;
    if (-1 < (int)uVar20) {
      uVar13 = 0;
    }
    uVar3 = uVar13 | uVar3;
    uVar13 = uVar6 >> (0x20 - uVar4 & 0xff);
    if (-1 < (int)uVar20) {
      uVar13 = uVar6 << (uVar20 & 0xff);
    }
    uVar7 = uVar13 | uVar7;
    puVar16 = puVar17;
    if ((uint)(int)(char)(byte)uVar12 < 0x80000000) break;
LAB_00607320:
    uVar9 = (undefined1)uVar19;
    if (uVar15 == 0) goto LAB_00607918;
  }
  if (uVar7 == 0) {
    if (uVar3 <= uVar15) {
      uVar19 = (uint)puVar17 >> 0x10;
      uVar7 = (uint)puVar17 >> 8;
      *param_2 = (byte *)((int)puVar17 + uVar3);
      param_2[1] = uVar15 - uVar3;
      uVar8 = 8;
      uVar15 = uVar3;
      goto LAB_00607668;
    }
    goto LAB_00607c58;
  }
  goto LAB_00607c60;
  while( true ) {
    param_2[1] = uVar15 - 1;
    puVar14 = (uint *)((int)puVar17 + 1);
    uVar13 = *puVar17;
    uVar12 = (uint)(byte)uVar13;
    *param_2 = puVar14;
    if ((uVar7 == 0x3f) && (1 < uVar12)) goto LAB_00606f68;
    uVar4 = uVar7 & 0x3f;
    uVar6 = uVar12 & 0x7f;
    uVar20 = uVar4 - 0x20;
    uVar3 = uVar6 << uVar4;
    if (-1 < (int)uVar20) {
      uVar3 = 0;
    }
    puVar16 = (uint *)(uVar3 | (uint)puVar16);
    uVar3 = uVar6 >> (0x20 - uVar4 & 0xff);
    uVar7 = uVar7 + 7;
    if (-1 < (int)uVar20) {
      uVar3 = uVar6 << (uVar20 & 0xff);
    }
    uVar19 = uVar3 | uVar19;
    uVar3 = (uint)(char)(byte)uVar13;
    puVar17 = puVar14;
    uVar15 = uVar15 - 1;
    if (uVar3 < 0x80000000) break;
LAB_00606f40:
    uVar9 = (undefined1)uVar12;
    if (uVar15 == 0) goto LAB_00606f70;
  }
  if (uVar19 != 0) {
LAB_00607bdc:
    uVar5 = 0x38;
    puVar17 = puVar14;
    goto LAB_00607be0;
  }
LAB_00607bc8:
  uVar19 = (uint)puVar16 >> 0x10;
  uVar7 = (uint)puVar16 >> 8;
  uVar8 = 0xd;
  puVar17 = puVar16;
  goto LAB_00607664;
LAB_00606f70:
  uVar3 = 0;
  uVar5 = 0x13;
  goto LAB_00607be0;
  while( true ) {
    param_2[1] = uVar15;
    puVar14 = (uint *)((int)puVar16 + 1);
    uVar7 = *puVar16;
    uVar3 = (uint)(byte)uVar7;
    *param_2 = puVar14;
    if ((uVar19 == 0x3f) && (1 < uVar3)) {
      uVar5 = 6;
      goto LAB_00607778;
    }
    uVar13 = uVar19 & 0x3f;
    uVar4 = uVar3 & 0x7f;
    uVar6 = uVar13 - 0x20;
    uVar12 = uVar4 << uVar13;
    if (-1 < (int)uVar6) {
      uVar12 = 0;
    }
    puVar17 = (uint *)(uVar12 | (uint)puVar17);
    uVar12 = uVar4 >> (0x20 - uVar13 & 0xff);
    uVar19 = uVar19 + 7;
    if (-1 < (int)uVar6) {
      uVar12 = uVar4 << (uVar6 & 0xff);
    }
    uVar18 = uVar12 | uVar18;
    puVar16 = puVar14;
    if (-1 < (char)(byte)uVar7) break;
LAB_00607750:
    uVar9 = (undefined1)uVar3;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0xffffffff) goto LAB_006078e4;
  }
  uVar19 = (uint)puVar17 >> 0x10;
  uVar7 = (uint)puVar17 >> 8;
  uVar8 = 7;
  goto LAB_00607664;
LAB_00607918:
  uVar5 = 0x13;
  goto LAB_00607c64;
LAB_0060734c:
  uVar5 = 6;
  puVar16 = puVar17;
  goto LAB_00607c64;
code_r0x00606904:
  uVar3 = *puVar17;
  puVar16 = (uint *)((int)puVar17 + 1);
  uVar18 = uVar15 - 1;
  *param_2 = puVar16;
  param_2[1] = uVar18;
  uVar11 = (byte)uVar3 & 0x7f;
  if ((uint)(int)(char)(byte)uVar3 < 0x80000000) goto LAB_00606828;
  if (uVar18 == 0) {
  }
  else {
    uVar18 = uVar15 - 2;
    param_2[1] = uVar18;
    bVar1 = *(byte *)((int)puVar17 + 1);
    puVar16 = (uint *)((int)puVar17 + 2);
    *param_2 = puVar16;
    uVar11 = uVar11 | (bVar1 & 0x7f) << 7;
    if ((uint)(int)(char)bVar1 < 0x80000000) goto LAB_00606828;
    if (uVar18 != 0) {
      param_2[1] = uVar15 - 3;
      bVar1 = *(byte *)((int)puVar17 + 2);
      puVar16 = (uint *)((int)puVar17 + 3);
      *param_2 = puVar16;
      if (bVar1 < 4) {
        uVar18 = uVar15 - 3;
        uVar11 = uVar11 | (ushort)bVar1 << 0xe;
        goto LAB_00606828;
      }
      uVar9 = 6;
      goto LAB_00607b74;
    }
  }
LAB_00607b70:
  uVar9 = 0x13;
LAB_00607b74:
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[3] = puVar16;
  param_1[4] = puVar16;
  param_1[5] = 0;
  *(ushort *)((int)param_1 + 10) = uVar10;
  *(undefined1 *)(param_1 + 2) = uVar9;
  return;
LAB_00607880:
  uVar5 = 6;
  puVar17 = puVar14;
LAB_00607cd0:
  param_1[4] = puVar17;
  *param_1 = 0x2e;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 9) = uVar9;
  *(undefined1 *)(param_1 + 2) = uVar5;
  param_1[3] = puVar17;
  param_1[5] = param_2;
  return;
LAB_00606f68:
  uVar5 = 6;
  puVar17 = puVar14;
LAB_00607be0:
  *param_1 = 0x2e;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 9) = uVar9;
LAB_00607bf4:
  param_1[4] = puVar17;
  *(undefined1 *)(param_1 + 2) = uVar5;
  param_1[3] = puVar17;
  param_1[5] = uVar3;
  return;
  while( true ) {
    uVar15 = uVar15 - 1;
    param_2[1] = uVar15;
    puVar17 = (uint *)((int)puVar16 + 1);
    uVar12 = *puVar16;
    uVar19 = (uint)(byte)uVar12;
    *param_2 = puVar17;
    if ((uVar18 == 0x3f) && (1 < uVar19)) goto LAB_0060734c;
    uVar4 = uVar18 & 0x3f;
    uVar6 = uVar19 & 0x7f;
    uVar20 = uVar4 - 0x20;
    uVar18 = uVar18 + 7;
    uVar13 = uVar6 << uVar4;
    if (-1 < (int)uVar20) {
      uVar13 = 0;
    }
    uVar3 = uVar13 | uVar3;
    uVar13 = uVar6 >> (0x20 - uVar4 & 0xff);
    if (-1 < (int)uVar20) {
      uVar13 = uVar6 << (uVar20 & 0xff);
    }
    uVar7 = uVar13 | uVar7;
    puVar16 = puVar17;
    if ((uint)(int)(char)(byte)uVar12 < 0x80000000) break;
LAB_00607050:
    uVar9 = (undefined1)uVar19;
    if (uVar15 == 0) goto LAB_00607918;
  }
  if (uVar7 == 0) {
    if (uVar3 <= uVar15) {
      uVar19 = (uint)puVar17 >> 0x10;
      uVar7 = (uint)puVar17 >> 8;
      *param_2 = (byte *)((int)puVar17 + uVar3);
      param_2[1] = uVar15 - uVar3;
      uVar8 = 1;
      uVar15 = uVar3;
      goto LAB_00607668;
    }
LAB_00607c58:
    uVar5 = 0x13;
    goto LAB_00607c68;
  }
LAB_00607c60:
  uVar5 = 0x38;
  puVar16 = puVar17;
LAB_00607c64:
  puVar17 = puVar16;
LAB_00607c68:
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[3] = puVar17;
  param_1[4] = puVar17;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 9) = uVar9;
  *(undefined1 *)(param_1 + 2) = uVar5;
  return;
  while( true ) {
    uVar3 = uVar12 & 0x3f;
    uVar4 = uVar13 & 0x7f;
    uVar6 = uVar3 - 0x20;
    uVar7 = uVar4 << uVar3;
    if (-1 < (int)uVar6) {
      uVar7 = 0;
    }
    puVar17 = (uint *)(uVar7 | (uint)puVar17);
    uVar7 = uVar4 >> (0x20 - uVar3 & 0xff);
    uVar12 = uVar12 + 7;
    if (-1 < (int)uVar6) {
      uVar7 = uVar4 << (uVar6 & 0xff);
    }
    uVar18 = uVar7 | uVar18;
    uVar3 = (uint)(char)(byte)uVar19;
    puVar16 = puVar14;
    if (-1 < (int)uVar3) break;
LAB_00606e3c:
    uVar9 = (undefined1)uVar13;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0xffffffff) {
LAB_006078e4:
      uVar3 = 0;
      uVar5 = 0x13;
LAB_006078ec:
      param_1[4] = puVar16;
      *param_1 = 0x2e;
      param_1[1] = 0;
      *(undefined1 *)((int)param_1 + 9) = uVar9;
      *(undefined1 *)(param_1 + 2) = uVar5;
      param_1[3] = puVar16;
      param_1[5] = uVar3;
      return;
    }
    puVar14 = (uint *)((int)puVar16 + 1);
    uVar19 = *puVar16;
    uVar13 = (uint)(byte)uVar19;
    *param_2 = puVar14;
    param_2[1] = uVar15;
    if ((uVar12 == 0x3f) && (uVar13 != 0x7f && uVar13 != 0)) {
      uVar5 = 7;
      uVar9 = 0;
LAB_00607778:
      puVar16 = puVar14;
      goto LAB_006078ec;
    }
  }
  uVar19 = (uint)puVar17 >> 0x10;
  uVar7 = (uint)puVar17 >> 8;
  uVar8 = 6;
  if ((int)uVar12 < 0x40) {
    uVar15 = uVar18;
    if (0x3f < uVar13) {
      uVar15 = 0xffffffff;
      uVar7 = (uVar12 & 0x3f) - 0x20;
      uVar19 = -1 << (uVar12 & 0x3f);
      if (-1 < (int)uVar7) {
        uVar19 = 0;
      }
      puVar17 = (uint *)((uint)puVar17 | uVar19);
      if (-1 < (int)uVar7) {
        uVar15 = -1 << (uVar7 & 0xff);
      }
      uVar19 = (uint)puVar17 >> 0x10;
      uVar7 = (uint)puVar17 >> 8;
      uVar15 = uVar18 | uVar15;
    }
    goto LAB_00607668;
  }
LAB_00607664:
  uVar15 = uVar18;
LAB_00607668:
  puStack_34 = puVar17;
LAB_0060766c:
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_4 + 2);
  *param_1 = uVar8;
  param_1[1] = 0;
  param_1[2] = (uint)puStack_34 & 0xff | (uVar7 & 0xff) << 8 | uVar19 << 0x10;
  param_1[3] = uVar15;
  return;
}

