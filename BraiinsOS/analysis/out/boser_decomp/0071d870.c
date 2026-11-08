// FUN_0071d870 @ 0071d870 size=1588 calls_out=3 calls_in=2
// strings: 

void FUN_0071d870(undefined4 *param_1,int *param_2,uint param_3,short param_4)

{
  ushort uVar1;
  uint3 uVar2;
  uint3 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  uint *extraout_r1_03;
  uint *extraout_r1_04;
  ushort *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *extraout_r3;
  undefined4 uVar10;
  uint *puVar11;
  uint *extraout_r3_00;
  uint uVar12;
  uint *unaff_r8;
  undefined4 uVar13;
  undefined2 local_30;
  undefined1 local_2e;
  undefined2 local_2c;
  undefined1 local_2a;
  char local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  uint *local_20;
  uint *local_1c;
  
  param_3 = param_3 >> 8;
  puVar6 = &switchD_0071d8a0::switchdataD_0071d8a4;
  switch(param_4) {
  case 3:
    local_20 = (uint *)*param_2;
    if (1 < (uint)param_2[1]) {
      puVar5 = (uint *)((int)local_20 + 2);
      puVar6 = (uint *)(uint)(ushort)*local_20;
      puVar11 = (uint *)(param_2[1] - 2);
LAB_0071de24:
      *param_2 = (int)puVar5;
      param_2[1] = (int)puVar11;
LAB_0071de28:
      local_20 = puVar5;
      if (puVar6 <= puVar11) {
        uVar13 = 1;
        *param_2 = (int)((int)puVar5 + (int)puVar6);
        param_2[1] = (int)puVar11 - (int)puVar6;
LAB_0071ded8:
        uVar12 = (uint)local_20 >> 8;
        uVar9 = (uint)local_20 & 0xffff0000;
        goto LAB_0071dedc;
      }
    }
    goto LAB_0071de30;
  case 4:
    local_20 = (uint *)*param_2;
    if (3 < (uint)param_2[1]) {
      puVar5 = local_20 + 1;
      puVar6 = (uint *)*local_20;
      puVar11 = (uint *)(param_2[1] - 4);
      goto LAB_0071de24;
    }
    *(undefined2 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[3] = local_20;
    goto LAB_0071de38;
  case 5:
    puVar7 = (ushort *)*param_2;
    uVar9 = param_2[1];
    if (uVar9 < 2) goto LAB_0071dd0c;
    uVar1 = *puVar7;
    uVar13 = 3;
LAB_0071dc30:
    local_20 = (uint *)(uint)uVar1;
    *param_2 = (int)(puVar7 + 1);
    param_2[1] = uVar9 - 2;
    uVar12 = (uint)(uVar1 >> 8);
    uVar9 = 0;
    goto LAB_0071dedc;
  case 6:
    puVar7 = (ushort *)*param_2;
    if (3 < (uint)param_2[1]) {
      local_20 = *(uint **)puVar7;
      uVar13 = 4;
      *param_2 = (int)(puVar7 + 2);
      param_2[1] = param_2[1] - 4;
      break;
    }
LAB_0071dca8:
    *(undefined2 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    param_1[3] = puVar7;
    goto LAB_0071dd14;
  case 7:
    puVar8 = (undefined4 *)*param_2;
    if (7 < (uint)param_2[1]) {
      local_20 = (uint *)*puVar8;
      puVar6 = (uint *)puVar8[1];
      *param_2 = (int)(puVar8 + 2);
      param_2[1] = param_2[1] - 8;
      uVar12 = (uint)local_20 >> 8;
      uVar9 = (uint)local_20 & 0xffff0000;
      uVar13 = 5;
      goto LAB_0071dedc;
    }
    puVar4 = (undefined4 *)((uint)&local_28 | 7);
    uStack_22 = (undefined1)((uint)puVar8 >> 0x18);
    *(undefined1 *)((int)puVar4 + 3) = uStack_22;
    *(short *)((int)puVar4 + 1) = (short)((uint)puVar8 >> 8);
    uVar10 = puVar4[1];
    uVar13 = *puVar4;
    *(int *)((int)param_1 + 9) = (int)puVar8 << 0x18;
    param_1[4] = uVar13;
    param_1[3] = puVar8;
    param_1[5] = uVar10;
    goto LAB_0071de40;
  case 8:
    local_20 = (uint *)*param_2;
    puVar5 = (uint *)param_2[1];
    if (puVar5 != (uint *)0x0) {
      puVar6 = (uint *)0x0;
      do {
        if (*(byte *)((int)local_20 + (int)puVar6) == 0) {
          uVar13 = 0x1f;
          *param_2 = (int)((byte *)((int)local_20 + (int)puVar6) + 1);
          param_2[1] = (int)((int)puVar5 + ~(uint)puVar6);
          goto LAB_0071ded8;
        }
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (puVar5 != puVar6);
    }
    param_1[4] = local_20;
    param_1[5] = 0;
    goto LAB_0071de40;
  case 9:
    FUN_00719bb8(&local_28,param_2);
    if (local_28 == 'O') {
      if (local_1c == (uint *)0x0) {
        puVar5 = (uint *)*param_2;
        puVar11 = (uint *)param_2[1];
        puVar6 = local_20;
        goto LAB_0071de28;
      }
      local_28 = '8';
      puVar6 = extraout_r1_02;
      local_1c = extraout_r3_00;
    }
    else {
      puVar6 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
      local_30 = CONCAT11(uStack_26,uStack_27);
      local_2e = uStack_25;
      unaff_r8 = local_20;
    }
    local_2a = local_2e;
    local_2c = local_30;
    goto LAB_0071df10;
  case 10:
    local_20 = (uint *)*param_2;
    if (param_2[1] != 0) {
      puVar5 = (uint *)((int)local_20 + 1);
      puVar6 = (uint *)(uint)(byte)*local_20;
      puVar11 = (uint *)(param_2[1] + -1);
      goto LAB_0071de24;
    }
    goto LAB_0071de30;
  case 0xb:
    puVar7 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      local_20 = (uint *)(uint)(byte)*puVar7;
      uVar13 = 2;
      *param_2 = (int)((int)puVar7 + 1);
LAB_0071dd00:
      uVar9 = 0;
      uVar12 = 0;
      goto LAB_0071dedc;
    }
    goto LAB_0071dd0c;
  case 0xc:
    puVar7 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      uVar1 = *puVar7;
      uVar13 = 9;
      *param_2 = (int)((int)puVar7 + 1);
      param_2[1] = param_2[1] + -1;
      local_20 = (uint *)(uint)((byte)uVar1 != 0);
      goto LAB_0071dd00;
    }
    goto LAB_0071dd0c;
  case 0xd:
    FUN_00719ad0(&local_28,param_2);
    if (local_28 == 'O') {
      uVar13 = 6;
      puVar6 = local_1c;
      break;
    }
LAB_0071dacc:
    param_1[3] = CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
    *(uint *)((int)param_1 + 9) =
         CONCAT13(local_24,CONCAT12(uStack_25,CONCAT11(uStack_26,uStack_27)));
    param_1[4] = local_20;
    param_1[5] = local_1c;
    goto LAB_0071dd9c;
  case 0xe:
    FUN_007194a0(&local_28,param_2,param_3);
    if (local_28 != 'O') {
LAB_0071dd78:
      *(undefined1 *)((int)param_1 + 0xb) = uStack_25;
      *(ushort *)((int)param_1 + 9) = CONCAT11(uStack_26,uStack_27);
      param_1[4] = local_20;
      param_1[5] = local_1c;
      param_1[3] = CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
      goto LAB_0071dd9c;
    }
    local_20 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
    uVar13 = 0x1a;
    puVar6 = extraout_r1_01;
    break;
  case 0xf:
    FUN_00719bb8(&local_28,param_2);
    if (local_28 != 'O') goto LAB_0071dacc;
    uVar13 = 7;
    puVar6 = local_1c;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_0071d8a0_caseD_10;
  case 0x17:
    FUN_007194a0(&local_28,param_2,param_3);
    if (local_28 != 'O') goto LAB_0071dd78;
    local_20 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
    uVar13 = 10;
    puVar6 = extraout_r1_04;
    break;
  case 0x1a:
switchD_0071d8a0_caseD_1a:
    FUN_00719bb8(&local_28,param_2);
    if (local_28 == 'O') {
      if (local_1c == (uint *)0x0) {
        puVar6 = extraout_r1_00;
        goto LAB_0071da04;
      }
      local_28 = '8';
      puVar6 = extraout_r1_00;
      local_1c = extraout_r3;
    }
    else {
      puVar6 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
      local_2c = CONCAT11(uStack_26,uStack_27);
      local_2a = uStack_25;
      unaff_r8 = local_20;
    }
LAB_0071df10:
    *(undefined2 *)((int)param_1 + 9) = local_2c;
    param_1[4] = unaff_r8;
    *(char *)(param_1 + 2) = local_28;
    *(undefined1 *)((int)param_1 + 0xb) = local_2a;
    param_1[3] = puVar6;
    param_1[5] = local_1c;
    goto LAB_0071df2c;
  case 0x1d:
switchD_0071d8a0_caseD_1d:
    FUN_007194a0(&local_28,param_2,param_3);
    if (local_28 != 'O') goto LAB_0071dd78;
    local_20 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
    uVar13 = 0x1b;
    puVar6 = extraout_r1;
    break;
  case 0x1e:
    local_20 = (uint *)*param_2;
    if (0xf < (uint)param_2[1]) {
      *param_2 = (int)(local_20 + 4);
      param_2[1] = param_2[1] - 0x10;
      uVar9 = (uint)local_20 & 0xffff0000;
      uVar12 = (uint)local_20 >> 8;
      uVar13 = 1;
      puVar6 = (uint *)&DAT_00000010;
      goto LAB_0071dedc;
    }
LAB_0071de30:
    param_1[3] = local_20;
LAB_0071de38:
    param_1[4] = local_20;
    goto LAB_0071de3c;
  case 0x1f:
    FUN_007194a0(&local_28,param_2,param_3);
    if (local_28 != 'O') goto LAB_0071dd78;
    local_20 = (uint *)CONCAT13(uStack_21,CONCAT12(uStack_22,CONCAT11(uStack_23,local_24)));
    uVar13 = 0x1e;
    puVar6 = extraout_r1_03;
    break;
  case 0x25:
    puVar7 = (ushort *)*param_2;
    if (param_2[1] != 0) {
      param_2[1] = param_2[1] + -1;
      local_20 = (uint *)(uint)(byte)*puVar7;
      *param_2 = (int)((int)puVar7 + 1);
      uVar13 = 0x1d;
      goto LAB_0071dd00;
    }
    goto LAB_0071dd0c;
  case 0x26:
    puVar7 = (ushort *)*param_2;
    uVar9 = param_2[1];
    if (1 < uVar9) {
      uVar1 = *puVar7;
      uVar13 = 0x1d;
      goto LAB_0071dc30;
    }
LAB_0071dd0c:
    param_1[3] = puVar7;
LAB_0071dd14:
    param_1[4] = puVar7;
LAB_0071de3c:
    param_1[5] = 0;
LAB_0071de40:
    *(undefined1 *)(param_1 + 2) = 0x13;
LAB_0071df2c:
    uVar13 = 1;
    goto LAB_0071df30;
  case 0x27:
    puVar3 = (uint3 *)*param_2;
    if (2 < (uint)param_2[1]) {
      puVar6 = (uint *)(param_2[1] - 3);
      uVar2 = *puVar3;
      *param_2 = (int)puVar3 + 3;
      param_2[1] = (int)puVar6;
      local_20 = (uint *)(uint)uVar2;
      uVar9 = (uint)local_20 & 0xff0000;
      goto LAB_0071dde0;
    }
    param_1[3] = puVar3;
    param_1[4] = puVar3;
    param_1[5] = 0;
    goto LAB_0071de40;
  case 0x28:
    puVar7 = (ushort *)*param_2;
    if ((uint)param_2[1] < 4) goto LAB_0071dca8;
    local_20 = *(uint **)puVar7;
    *param_2 = (int)(puVar7 + 2);
    param_2[1] = param_2[1] - 4;
LAB_0071da04:
    uVar9 = (uint)local_20 & 0xffff0000;
LAB_0071dde0:
    uVar12 = (uint)local_20 >> 8;
    uVar13 = 0x1d;
    goto LAB_0071dedc;
  default:
    if (param_4 == 0x1f02) goto switchD_0071d8a0_caseD_1a;
    if (param_4 == 0x1f21) goto switchD_0071d8a0_caseD_1d;
    goto switchD_0071d8a0_caseD_10;
  }
  uVar12 = (uint)local_20 >> 8;
  uVar9 = (uint)local_20 & 0xffff0000;
LAB_0071dedc:
  param_1[2] = uVar13;
  param_1[4] = uVar9 | (uint)local_20 & 0xff | (uVar12 & 0xff) << 8;
  param_1[5] = puVar6;
  uVar13 = 0;
  param_1[3] = 0;
LAB_0071df30:
  *param_1 = uVar13;
  param_1[1] = 0;
  return;
switchD_0071d8a0_caseD_10:
  local_28 = '\f';
  *(short *)((int)param_1 + 10) = param_4;
LAB_0071dd9c:
  *(char *)(param_1 + 2) = local_28;
  goto LAB_0071df2c;
}

