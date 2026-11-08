// FUN_00716a3c @ 00716a3c size=3340 calls_out=10 calls_in=8
// strings: 

void FUN_00716a3c(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint3 uVar2;
  ushort uVar3;
  uint3 *puVar4;
  uint3 *extraout_r1;
  uint3 *extraout_r1_00;
  int iVar5;
  uint3 *extraout_r1_01;
  uint3 *extraout_r1_02;
  uint3 *extraout_r1_03;
  uint uVar6;
  uint3 *puVar7;
  uint3 *extraout_r2;
  uint3 *extraout_r2_00;
  undefined4 *puVar8;
  ushort *puVar9;
  byte *pbVar10;
  uint3 *extraout_r2_01;
  uint3 *extraout_r2_02;
  uint3 *extraout_r2_03;
  uint uVar11;
  undefined1 uVar12;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  uint3 *local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3c;
  undefined1 local_3a;
  char local_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  uint3 *puStack_30;
  uint3 *puStack_2c;
  
  uVar6 = param_3 >> 8;
  uVar1 = *(ushort *)((int)param_4 + 10);
  piVar15 = (int *)((uint)&local_38 | 7);
  puVar4 = (uint3 *)(param_3 >> 0x10);
  uVar3 = uVar1;
LAB_00716a70:
  if (0x1f00 < uVar3) goto LAB_00716b6c;
  switch(uVar3) {
  case 1:
    FUN_007195f0(&local_38,param_2,param_3);
    if (local_38 != 'O') goto LAB_00717444;
    uVar13 = 0;
    uVar11 = (uint)puStack_30 >> 8;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    goto LAB_007176e8;
  default:
    goto switchD_00716a8c_caseD_2;
  case 3:
    puVar4 = (uint3 *)*param_2;
    if (1 < (uint)param_2[1]) {
      local_60 = (uint3 *)((int)puVar4 + 2);
      puStack_2c = (uint3 *)(uint)(ushort)*puVar4;
      puVar7 = (uint3 *)(param_2[1] - 2);
LAB_00717098:
      *param_2 = local_60;
      param_2[1] = puVar7;
      puVar4 = local_60;
      if (puStack_2c <= puVar7) {
LAB_0071758c:
        *param_2 = (byte *)((int)local_60 + (int)puStack_2c);
        param_2[1] = (int)puVar7 - (int)puStack_2c;
        goto LAB_0071759c;
      }
    }
    goto LAB_007170a4;
  case 4:
    puStack_2c = (uint3 *)*param_2;
    if ((uint)param_2[1] < 4) {
      local_56 = 0;
      local_58 = 0;
      local_60 = puStack_2c;
    }
    else {
      local_60 = puStack_2c + 1;
      puStack_2c = *(uint3 **)puStack_2c;
      puVar7 = (uint3 *)(param_2[1] - 4);
      *param_2 = local_60;
      param_2[1] = puVar7;
      if (puStack_2c <= puVar7) goto LAB_0071758c;
    }
    *(undefined1 *)((int)param_1 + 0xb) = local_56;
    *(undefined2 *)((int)param_1 + 9) = local_58;
    *param_1 = 0x2e;
    param_1[1] = 0;
    goto LAB_00717578;
  case 5:
    puVar9 = (ushort *)*param_2;
    if (1 < (uint)param_2[1]) {
      puStack_30 = (uint3 *)(uint)*puVar9;
      *param_2 = puVar9 + 1;
      param_2[1] = param_2[1] - 2;
      uVar13 = 3;
LAB_007171b0:
      uVar6 = 0;
      uVar11 = (uint)puStack_30 >> 8;
      puStack_2c = puVar4;
      goto LAB_007176e8;
    }
    break;
  case 6:
    if (((uVar6 & 0xff) == 4) &&
       (iVar5 = FUN_007178bc(*(undefined2 *)(param_4 + 2),puVar4), iVar5 != 0)) {
      uVar6 = 4;
      goto LAB_0071723c;
    }
    FUN_00717948(&local_38,param_2);
    if (local_38 != 'O') goto LAB_00717644;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    uVar13 = 4;
    goto LAB_00717634;
  case 7:
    if (((uVar6 & 0xff) == 8) &&
       (iVar5 = FUN_007178bc(*(undefined2 *)(param_4 + 2),puVar4), iVar5 != 0)) {
      uVar6 = 8;
      goto LAB_0071723c;
    }
    FUN_007179a4(&local_38,param_2);
    if (local_38 != 'O') goto LAB_00717444;
    uVar13 = 5;
    puVar7 = puStack_30;
    puVar4 = puStack_2c;
    goto LAB_00717634;
  case 8:
    puStack_30 = (uint3 *)*param_2;
    puVar4 = (uint3 *)param_2[1];
    if (puVar4 == (uint3 *)0x0) goto LAB_00716e10;
    puStack_2c = (uint3 *)0x0;
    goto LAB_00716df8;
  case 9:
    FUN_007177f8(&local_38,param_2);
    if (local_38 != 'O') goto LAB_00717644;
    local_60 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    puStack_2c = puStack_30;
LAB_0071759c:
    puStack_30 = local_60;
    uVar11 = (uint)puStack_30 >> 8;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    uVar13 = 1;
    goto LAB_007176e8;
  case 10:
    puVar4 = (uint3 *)*param_2;
    if (param_2[1] != 0) {
      local_60 = (uint3 *)((int)puVar4 + 1);
      puStack_2c = (uint3 *)(uint)(byte)*puVar4;
      puVar7 = (uint3 *)(param_2[1] + -1);
      goto LAB_00717098;
    }
LAB_007170a4:
    *param_1 = 0x2e;
    param_1[1] = 0;
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = 0;
    goto LAB_00717584;
  case 0xb:
    puVar9 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      pbVar10 = (byte *)((int)puVar9 + 1);
      puStack_30 = (uint3 *)(uint)(byte)*puVar9;
      uVar13 = 2;
LAB_007171d4:
      *param_2 = pbVar10;
      goto LAB_007171dc;
    }
    break;
  case 0xc:
    puVar9 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      uVar1 = *puVar9;
      *param_2 = (byte *)((int)puVar9 + 1);
      param_2[1] = param_2[1] + -1;
      puStack_30 = (uint3 *)(uint)((byte)uVar1 != 0);
      uVar13 = 9;
      goto LAB_007171dc;
    }
    break;
  case 0xd:
    FUN_00719ad0(&local_38,param_2);
    if (local_38 == 'O') goto LAB_007172b0;
    goto LAB_00717444;
  case 0xe:
    FUN_007194a0(&local_38,param_2,uVar6);
    if (local_38 != 'O') goto LAB_00717644;
    uVar13 = 0x1a;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    goto LAB_00717634;
  case 0xf:
    FUN_00719bb8(&local_38,param_2);
    if (local_38 == 'O') {
      uVar13 = 7;
      puVar7 = puStack_30;
      puVar4 = puStack_2c;
      goto LAB_00717634;
    }
LAB_00717444:
    param_1[3] = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    *(uint *)((int)param_1 + 9) =
         CONCAT13(local_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
    param_1[4] = puStack_30;
    param_1[5] = puStack_2c;
    *param_1 = 0x2e;
    goto LAB_0071746c;
  case 0x10:
    if (puVar4 == (uint3 *)0x2) {
      FUN_00719d5c(&local_38,param_2,param_3);
    }
    else {
      FUN_007194a0(&local_38,param_2,uVar6);
    }
    if (local_38 != 'O') goto LAB_00717644;
    uVar13 = 0xe;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    goto LAB_00717634;
  case 0x11:
    puVar9 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      pbVar10 = (byte *)((int)puVar9 + 1);
      puStack_30 = (uint3 *)(uint)(byte)*puVar9;
      uVar13 = 0xd;
      goto LAB_007171d4;
    }
    break;
  case 0x12:
    puVar9 = (ushort *)*param_2;
    if (1 < (uint)param_2[1]) {
      puStack_30 = (uint3 *)(uint)*puVar9;
      *param_2 = puVar9 + 1;
      param_2[1] = param_2[1] - 2;
      uVar13 = 0xd;
      goto LAB_007171b0;
    }
    break;
  case 0x13:
    local_60 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_00717330;
    puStack_30 = *(uint3 **)local_60;
    *param_2 = local_60 + 1;
    param_2[1] = param_2[1] - 4;
LAB_007175fc:
    uVar11 = (uint)puStack_30 >> 8;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    uVar13 = 0xd;
    puStack_2c = puVar4;
    goto LAB_007176e8;
  case 0x14:
    puVar8 = (undefined4 *)*param_2;
    if ((uint)param_2[1] < 8) {
      *(char *)((int)piVar15 + 3) = (char)((uint)puVar8 >> 0x18);
      *(short *)((int)piVar15 + 1) = (short)((uint)puVar8 >> 8);
      puStack_30 = (uint3 *)piVar15[1];
      iVar5 = *piVar15;
      local_52 = 0;
      local_54 = 0;
      uVar12 = 0x13;
    }
    else {
      puStack_30 = (uint3 *)*puVar8;
      iVar5 = puVar8[1];
      puVar8 = puVar8 + 2;
      *param_2 = puVar8;
      param_2[1] = param_2[1] - 8;
      if (iVar5 == 0) goto LAB_007175fc;
      uVar12 = 0x38;
    }
    local_4a = local_52;
    local_4c = local_54;
    goto LAB_007177d0;
  case 0x15:
    FUN_00719bb8(&local_38,param_2);
    if (local_38 == 'O') {
      if (puStack_2c == (uint3 *)0x0) goto LAB_007175fc;
      local_38 = '8';
      puStack_2c = extraout_r1_02;
      puStack_30 = extraout_r2_02;
      uVar13 = extraout_r3_02;
    }
    else {
      uVar13 = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
      local_50 = CONCAT11(uStack_36,uStack_37);
      local_4e = uStack_35;
    }
    local_46 = local_4e;
    local_48 = local_50;
    goto LAB_0071779c;
  case 0x16:
    FUN_00719c74(&local_38,param_2);
    if (local_38 == 'O') goto code_r0x00716b60;
    puVar8 = (undefined4 *)((uint)&local_38 | 4);
    uVar13 = puVar8[1];
    uVar14 = puVar8[2];
    param_1[3] = *puVar8;
    param_1[4] = uVar13;
    param_1[5] = uVar14;
    *param_1 = 0x2e;
    param_1[1] = 0;
    *(ushort *)((int)param_1 + 10) = CONCAT11(uStack_35,uStack_36);
    *(undefined1 *)((int)param_1 + 9) = uStack_37;
    goto LAB_0071767c;
  case 0x17:
LAB_0071723c:
    FUN_007194a0(&local_38,param_2,uVar6);
    if (local_38 != 'O') goto LAB_00717644;
    uVar13 = 10;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    goto LAB_00717634;
  case 0x18:
    FUN_007177f8(&local_38,param_2);
    if (local_38 != 'O') goto LAB_00717644;
    uVar13 = 8;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    puVar4 = puStack_30;
    goto LAB_00717634;
  case 0x19:
    uVar13 = 9;
    puStack_30 = (uint3 *)&DAT_00000001;
LAB_007171dc:
    uVar11 = 0;
    uVar6 = 0;
    puStack_2c = puVar4;
    goto LAB_007176e8;
  case 0x1a:
    goto switchD_00716a8c_caseD_1a;
  case 0x1b:
    goto switchD_00716a8c_caseD_1b;
  case 0x1c:
    local_60 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_00717330;
    puStack_30 = *(uint3 **)local_60;
    *param_2 = local_60 + 1;
    param_2[1] = param_2[1] - 4;
    goto LAB_007174b8;
  case 0x1d:
    goto switchD_00716a8c_caseD_1d;
  case 0x1e:
    puStack_30 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 0x10) goto LAB_00716f68;
    *param_2 = puStack_30 + 4;
    uVar11 = (uint)puStack_30 >> 8;
    param_2[1] = param_2[1] - 0x10;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    uVar13 = 1;
    puStack_2c = (uint3 *)&DAT_00000010;
    goto LAB_007176e8;
  case 0x1f:
    FUN_007194a0(&local_38,param_2,uVar6);
    if (local_38 != 'O') goto LAB_00717644;
    uVar13 = 0x1e;
    puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    goto LAB_00717634;
  case 0x20:
    puVar8 = (undefined4 *)*param_2;
    if ((uint)param_2[1] < 8) {
      *(char *)((int)piVar15 + 3) = (char)((uint)puVar8 >> 0x18);
      *(short *)((int)piVar15 + 1) = (short)((uint)puVar8 >> 8);
      iVar5 = piVar15[1];
      param_1[4] = *piVar15;
      *(int *)((int)param_1 + 9) = (int)puVar8 << 0x18;
      param_1[3] = puVar8;
      param_1[5] = iVar5;
      *param_1 = 0x2e;
      param_1[1] = 0;
      goto LAB_00717584;
    }
    puStack_30 = (uint3 *)*puVar8;
    puStack_2c = (uint3 *)puVar8[1];
    *param_2 = puVar8 + 2;
    param_2[1] = param_2[1] - 8;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    uVar11 = (uint)puStack_30 >> 8;
    uVar13 = 0x19;
    goto LAB_007176e8;
  case 0x21:
    if (uVar1 != 0x21) {
      *param_1 = 0x2e;
      param_1[1] = 0;
      local_38 = 'I';
      goto LAB_0071767c;
    }
    puStack_30 = (uint3 *)*param_4;
    puStack_2c = (uint3 *)param_4[1];
LAB_007172b0:
    uVar11 = (uint)puStack_30 >> 8;
    uVar6 = (uint)puStack_30 & 0xffff0000;
    uVar13 = 6;
    goto LAB_007176e8;
  case 0x22:
    FUN_00719bb8(&local_38,param_2);
    if (local_38 == 'O') {
      if (puStack_2c == (uint3 *)0x0) {
        uVar13 = 0x13;
        puVar7 = puStack_30;
        goto LAB_00717634;
      }
      local_38 = '8';
      puStack_2c = extraout_r1_01;
      puStack_30 = extraout_r2_01;
      uVar13 = extraout_r3_01;
    }
    else {
      uVar13 = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
      local_40 = CONCAT11(uStack_36,uStack_37);
      local_3e = uStack_35;
    }
    local_46 = local_3e;
    local_48 = local_40;
    goto LAB_0071779c;
  case 0x23:
    FUN_00719bb8(&local_38,param_2);
    if (local_38 == 'O') {
      if (puStack_2c == (uint3 *)0x0) {
        uVar13 = 0x18;
        puVar7 = puStack_30;
        goto LAB_00717634;
      }
      local_38 = '8';
      puStack_2c = extraout_r1_03;
      puStack_30 = extraout_r2_03;
      uVar13 = extraout_r3_03;
    }
    else {
      uVar13 = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
      local_3c = CONCAT11(uStack_36,uStack_37);
      local_3a = uStack_35;
    }
    local_46 = local_3a;
    local_48 = local_3c;
    goto LAB_0071779c;
  case 0x24:
    puVar8 = (undefined4 *)*param_2;
    if (7 < (uint)param_2[1]) {
      puStack_30 = (uint3 *)*puVar8;
      iVar5 = puVar8[1];
      puVar8 = puVar8 + 2;
      *param_2 = puVar8;
      param_2[1] = param_2[1] - 8;
      if (iVar5 != 0) {
        uVar12 = 0x38;
        goto LAB_007177d0;
      }
      goto LAB_007174b8;
    }
    *(char *)((int)piVar15 + 3) = (char)((uint)puVar8 >> 0x18);
    *(short *)((int)piVar15 + 1) = (short)((uint)puVar8 >> 8);
    puStack_30 = (uint3 *)piVar15[1];
    iVar5 = *piVar15;
    local_4a = 0;
    local_4c = 0;
    uVar12 = 0x13;
LAB_007177d0:
    *(undefined2 *)((int)param_1 + 9) = local_4c;
    param_1[4] = iVar5;
    *param_1 = 0x2e;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar12;
    *(undefined1 *)((int)param_1 + 0xb) = local_4a;
    param_1[3] = puVar8;
    param_1[5] = puStack_30;
    return;
  case 0x25:
    puVar9 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      pbVar10 = (byte *)((int)puVar9 + 1);
      puStack_30 = (uint3 *)(uint)(byte)*puVar9;
      uVar13 = 0x1d;
      goto LAB_007171d4;
    }
    break;
  case 0x26:
    puVar9 = (ushort *)*param_2;
    if (1 < (uint)param_2[1]) {
      puStack_30 = (uint3 *)(uint)*puVar9;
      *param_2 = puVar9 + 1;
      param_2[1] = param_2[1] - 2;
      uVar13 = 0x1d;
      goto LAB_007171b0;
    }
    break;
  case 0x27:
    puStack_30 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 3) goto LAB_00716f68;
    uVar2 = *puStack_30;
    *param_2 = (byte *)((int)puStack_30 + 3);
    param_2[1] = param_2[1] - 3;
    puStack_30 = (uint3 *)(uint)uVar2;
    uVar6 = (uint)puStack_30 & 0xff0000;
    goto LAB_00716f20;
  case 0x28:
    local_60 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_00717330;
    puStack_30 = *(uint3 **)local_60;
    *param_2 = local_60 + 1;
    param_2[1] = param_2[1] - 4;
    goto LAB_00716f18;
  case 0x29:
    puVar9 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      pbVar10 = (byte *)((int)puVar9 + 1);
      puStack_30 = (uint3 *)(uint)(byte)*puVar9;
      uVar13 = 0xc;
      goto LAB_007171d4;
    }
    break;
  case 0x2a:
    puVar9 = (ushort *)*param_2;
    if (1 < (uint)param_2[1]) {
      puStack_30 = (uint3 *)(uint)*puVar9;
      *param_2 = puVar9 + 1;
      param_2[1] = param_2[1] - 2;
      uVar13 = 0xc;
      goto LAB_007171b0;
    }
    break;
  case 0x2b:
    puStack_30 = (uint3 *)*param_2;
    if ((uint)param_2[1] < 3) {
LAB_00716f68:
      *param_1 = 0x2e;
      param_1[1] = 0;
      param_1[3] = puStack_30;
      param_1[4] = puStack_30;
      goto LAB_007171fc;
    }
    uVar2 = *puStack_30;
    *param_2 = (byte *)((int)puStack_30 + 3);
    param_2[1] = param_2[1] - 3;
    puStack_30 = (uint3 *)(uint)uVar2;
    uVar6 = (uint)puStack_30 & 0xff0000;
    goto LAB_007176dc;
  case 0x2c:
    local_60 = (uint3 *)*param_2;
    if (3 < (uint)param_2[1]) {
      puStack_30 = *(uint3 **)local_60;
      *param_2 = local_60 + 1;
      param_2[1] = param_2[1] - 4;
      goto LAB_007176d4;
    }
LAB_00717330:
    *(undefined2 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    *param_1 = 0x2e;
    param_1[1] = 0;
LAB_00717578:
    param_1[3] = local_60;
    param_1[4] = local_60;
    param_1[5] = 0;
    goto LAB_00717584;
  }
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[3] = puVar9;
  param_1[4] = puVar9;
LAB_007171fc:
  param_1[5] = 0;
  goto LAB_00717584;
code_r0x00716b60:
  uVar3 = CONCAT11(uStack_35,uStack_36);
  goto LAB_00716a70;
  while (puStack_2c = (uint3 *)((int)puStack_2c + 1), puVar4 != puStack_2c) {
LAB_00716df8:
    if (*(byte *)((int)puStack_30 + (int)puStack_2c) == 0) {
      *param_2 = (byte *)((int)puStack_30 + (int)puStack_2c) + 1;
      param_2[1] = (byte *)((int)puVar4 + ~(uint)puStack_2c);
      uVar6 = (uint)puStack_30 & 0xffff0000;
      uVar11 = (uint)puStack_30 >> 8;
      uVar13 = 0x1f;
      goto LAB_007176e8;
    }
  }
LAB_00716e10:
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[4] = puStack_30;
  param_1[5] = 0;
LAB_00717584:
  local_38 = '\x13';
  goto LAB_0071767c;
LAB_00716b6c:
  if (uVar3 < 0x1f20) {
    if (uVar3 == 0x1f01) {
switchD_00716a8c_caseD_1b:
      FUN_00719bb8(&local_38,param_2);
      if (local_38 == 'O') {
        if (puStack_2c == (uint3 *)0x0) {
LAB_007176d4:
          uVar6 = (uint)puStack_30 & 0xffff0000;
LAB_007176dc:
          uVar11 = (uint)puStack_30 >> 8;
          uVar13 = 0xc;
          puStack_2c = puVar4;
          goto LAB_007176e8;
        }
        local_38 = '8';
        puStack_2c = extraout_r1_00;
        puStack_30 = extraout_r2_00;
        uVar13 = extraout_r3_00;
      }
      else {
        uVar13 = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
        local_44 = CONCAT11(uStack_36,uStack_37);
        local_42 = uStack_35;
      }
      local_46 = local_42;
      local_48 = local_44;
LAB_0071779c:
      *param_1 = 0x2e;
      param_1[1] = 0;
      *(char *)(param_1 + 2) = local_38;
      *(undefined2 *)((int)param_1 + 9) = local_48;
      *(undefined1 *)((int)param_1 + 0xb) = local_46;
      param_1[3] = uVar13;
      param_1[4] = puStack_30;
      param_1[5] = puStack_2c;
      return;
    }
    if (uVar3 == 0x1f02) {
switchD_00716a8c_caseD_1a:
      FUN_00719bb8(&local_38,param_2);
      if (local_38 == 'O') {
        if (puStack_2c == (uint3 *)0x0) {
LAB_00716f18:
          uVar6 = (uint)puStack_30 & 0xffff0000;
LAB_00716f20:
          uVar11 = (uint)puStack_30 >> 8;
          uVar13 = 0x1d;
          puStack_2c = puVar4;
          goto LAB_007176e8;
        }
        local_38 = '8';
        puStack_2c = extraout_r1;
        puStack_30 = extraout_r2;
        uVar13 = extraout_r3;
      }
      else {
        uVar13 = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
        local_48 = CONCAT11(uStack_36,uStack_37);
        local_46 = uStack_35;
      }
      goto LAB_0071779c;
    }
switchD_00716a8c_caseD_2:
    *param_1 = 0x2e;
    *(ushort *)((int)param_1 + 10) = uVar3;
    local_38 = '\f';
LAB_0071746c:
    param_1[1] = 0;
  }
  else {
    if (uVar3 == 0x1f20) {
      FUN_007194a0(&local_38,param_2,uVar6);
      if (local_38 == 'O') {
        puStack_30 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
LAB_007174b8:
        uVar11 = (uint)puStack_30 >> 8;
        uVar6 = (uint)puStack_30 & 0xffff0000;
        uVar13 = 0xf;
        puStack_2c = puVar4;
LAB_007176e8:
        *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_4 + 2);
        *param_1 = uVar13;
        param_1[1] = 0;
        param_1[2] = (uint)puStack_30 & 0xff | (uVar11 & 0xff) << 8 | uVar6;
        param_1[3] = puStack_2c;
        return;
      }
    }
    else {
      if (uVar3 != 0x1f21) goto switchD_00716a8c_caseD_2;
switchD_00716a8c_caseD_1d:
      FUN_007194a0(&local_38,param_2,uVar6);
      if (local_38 == 'O') {
        uVar13 = 0x1b;
        puVar7 = (uint3 *)CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
LAB_00717634:
        uVar11 = (uint)puVar7 >> 8;
        uVar6 = (uint)puVar7 & 0xffff0000;
        puStack_30 = puVar7;
        puStack_2c = puVar4;
        goto LAB_007176e8;
      }
    }
LAB_00717644:
    *(undefined1 *)((int)param_1 + 0xb) = uStack_35;
    *(ushort *)((int)param_1 + 9) = CONCAT11(uStack_36,uStack_37);
    *param_1 = 0x2e;
    param_1[1] = 0;
    param_1[3] = CONCAT13(uStack_31,CONCAT12(uStack_32,CONCAT11(uStack_33,local_34)));
    param_1[4] = puStack_30;
    param_1[5] = puStack_2c;
  }
LAB_0071767c:
  *(char *)(param_1 + 2) = local_38;
  return;
}

