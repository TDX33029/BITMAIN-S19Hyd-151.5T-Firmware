// FUN_00717a10 @ 00717a10 size=952 calls_out=2 calls_in=2
// strings: 

void FUN_00717a10(char *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  byte *pbVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint extraout_r2;
  int extraout_r3;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint local_54;
  uint local_50;
  uint *local_4c;
  uint local_48;
  undefined2 local_3c;
  char local_3a;
  char local_38;
  char cStack_37;
  undefined1 uStack_36;
  char cStack_35;
  undefined2 local_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  uint local_30;
  int local_2c;
  
  if (param_5 != 0) {
    iVar11 = param_4 + param_5 * 0x10;
    uVar15 = param_3 >> 8;
    if ((param_3 & 0xffff0000) == 0x20000) {
      uVar15 = param_3;
    }
    uVar14 = 0;
LAB_00717a64:
    uVar6 = *(ushort *)(param_4 + 10);
    param_4 = param_4 + 0x10;
LAB_00717a6c:
    puVar8 = (uint *)(uint)uVar6;
    switch(uVar6) {
    case 1:
      uVar5 = param_3;
LAB_00717ce8:
      uVar14 = uVar14 + (uVar5 & 0xff);
      break;
    case 5:
    case 0x12:
    case 0x26:
    case 0x2a:
      uVar5 = 2;
      goto LAB_00717ce8;
    case 6:
    case 0x13:
    case 0x1c:
    case 0x28:
    case 0x2c:
      uVar5 = 4;
      goto LAB_00717ce8;
    case 7:
    case 0x14:
    case 0x20:
    case 0x24:
      uVar5 = 8;
      goto LAB_00717ce8;
    case 0xb:
    case 0xc:
    case 0x11:
    case 0x25:
    case 0x29:
      uVar5 = 1;
      goto LAB_00717ce8;
    case 0xe:
    case 0x17:
    case 0x1d:
    case 0x1f:
switchD_00717a84_caseD_e:
      uVar5 = param_3 >> 8;
      goto LAB_00717ce8;
    case 0x10:
      uVar5 = uVar15;
      goto LAB_00717ce8;
    case 0x19:
    case 0x21:
      uVar5 = 0;
      goto LAB_00717ce8;
    case 0x1e:
      uVar5 = 0x10;
      goto LAB_00717ce8;
    case 0x27:
    case 0x2b:
      uVar5 = 3;
      goto LAB_00717ce8;
    default:
      if (puVar8 + -0x7c8 < (uint *)0x2) goto switchD_00717a84_caseD_e;
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xf:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x22:
    case 0x23:
      if (uVar14 != 0) {
        if ((uint)param_2[1] < uVar14) {
          *(int *)(param_1 + 8) = *param_2;
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          goto LAB_00717dac;
        }
        *param_2 = *param_2 + uVar14;
        param_2[1] = param_2[1] - uVar14;
      }
      puVar9 = &switchD_00717b80::switchdataD_00717b84;
      switch(uVar6) {
      case 3:
        puVar4 = (ushort *)*param_2;
        if ((uint)param_2[1] < 2) {
          *(ushort **)(param_1 + 4) = puVar4;
          *(ushort **)(param_1 + 8) = puVar4;
          param_1[0xc] = '\0';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          *(short *)(param_1 + 2) = (short)local_54;
          goto LAB_00717dac;
        }
        iVar7 = param_2[1] - 2;
        puVar3 = puVar4 + 1;
        uVar14 = (uint)*puVar4;
        local_54 = uVar14;
        goto LAB_00717d90;
      case 4:
        puVar9 = (uint *)*param_2;
        if (3 < (uint)param_2[1]) {
          uVar14 = *puVar9;
          *param_2 = (int)(puVar9 + 1);
          param_2[1] = param_2[1] - 4;
          break;
        }
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        puVar8 = puVar9;
        goto LAB_00717e38;
      case 8:
        puVar8 = (uint *)*param_2;
        uVar14 = param_2[1];
        if (uVar14 == 0) goto LAB_00717e30;
        uVar5 = 0;
        goto LAB_00717d5c;
      case 9:
      case 0x18:
        goto switchD_00717b80_caseD_9;
      case 10:
        pbVar2 = (byte *)*param_2;
        if (param_2[1] != 0) {
          iVar7 = param_2[1] + -1;
          puVar3 = (ushort *)(pbVar2 + 1);
          uVar14 = (uint)*pbVar2;
          local_50 = uVar14;
          goto LAB_00717d90;
        }
        *(byte **)(param_1 + 4) = pbVar2;
        *(byte **)(param_1 + 8) = pbVar2;
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[1] = (char)local_50;
        goto LAB_00717dac;
      case 0xd:
      case 0xf:
      case 0x15:
      case 0x1a:
      case 0x1b:
      case 0x22:
      case 0x23:
switchD_00717b80_caseD_d:
        iVar7 = param_2[1];
        pcVar1 = (char *)*param_2;
        goto LAB_00717c7c;
      case 0x16:
        FUN_00719c74(&local_38,param_2);
        if (local_38 == 'O') goto code_r0x00717c20;
        puVar10 = (undefined4 *)((uint)&local_38 | 4);
        uVar12 = puVar10[1];
        uVar13 = puVar10[2];
        *(undefined4 *)(param_1 + 4) = *puVar10;
        *(undefined4 *)(param_1 + 8) = uVar12;
        *(undefined4 *)(param_1 + 0xc) = uVar13;
        *(ushort *)(param_1 + 2) = CONCAT11(cStack_35,uStack_36);
        param_1[1] = cStack_37;
        goto LAB_00717e24;
      default:
        puVar9 = puVar8;
        if ((int)puVar8 - 0x1f01U < 2) goto switchD_00717b80_caseD_d;
      case 5:
      case 6:
      case 7:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x17:
      case 0x19:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
        *(ushort *)(param_1 + 2) = uVar6;
        local_38 = '\f';
        goto LAB_00717e24;
      }
    }
    goto LAB_00717cec;
  }
LAB_00717e20:
  local_38 = 'O';
LAB_00717e24:
  *param_1 = local_38;
  return;
code_r0x00717c20:
  uVar6 = CONCAT11(cStack_35,uStack_36);
  uVar14 = 0;
  goto LAB_00717a6c;
  while( true ) {
    puVar9 = (uint *)(int)*pcVar1;
    *param_2 = (int)(pcVar1 + 1);
    param_2[1] = iVar7;
    pcVar1 = pcVar1 + 1;
    if (-1 < (int)puVar9) break;
LAB_00717c7c:
    iVar7 = iVar7 + -1;
    if (iVar7 == -1) {
      *(char **)(param_1 + 4) = pcVar1;
      *(char **)(param_1 + 8) = pcVar1;
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[1] = (char)puVar9;
      goto LAB_00717dac;
    }
  }
  uVar14 = 0;
LAB_00717cec:
  if (param_4 == iVar11) goto LAB_00717db4;
  goto LAB_00717a64;
LAB_00717d5c:
  if (*(char *)((int)puVar8 + uVar5) == '\0') goto LAB_00717d78;
  uVar5 = uVar5 + 1;
  if (uVar14 == uVar5) goto LAB_00717e30;
  goto LAB_00717d5c;
LAB_00717d78:
  iVar7 = uVar14 + ~uVar5;
  puVar3 = (ushort *)((int)puVar8 + uVar5 + 1);
  uVar14 = 0;
  local_4c = puVar8;
LAB_00717d90:
  *param_2 = (int)puVar3;
  param_2[1] = iVar7;
  goto LAB_00717cec;
LAB_00717e30:
  puVar9 = local_4c;
LAB_00717e38:
  *(uint **)(param_1 + 4) = puVar9;
  *(uint **)(param_1 + 8) = puVar8;
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  goto LAB_00717dac;
LAB_00717db4:
  if (uVar14 != 0) {
    if ((uint)param_2[1] < uVar14) {
      *(int *)(param_1 + 8) = *param_2;
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
LAB_00717dac:
      local_38 = '\x13';
      goto LAB_00717e24;
    }
    *param_2 = *param_2 + uVar14;
    param_2[1] = param_2[1] - uVar14;
  }
  goto LAB_00717e20;
switchD_00717b80_caseD_9:
  FUN_00719bb8(&local_38,param_2);
  if (local_38 == 'O') {
    if (local_2c == 0) {
      local_48 = local_30;
      uVar14 = local_30;
      goto LAB_00717cec;
    }
    local_38 = '8';
    local_30 = extraout_r2;
    local_2c = extraout_r3;
  }
  else {
    local_48 = CONCAT13(uStack_31,CONCAT12(uStack_32,local_34));
    local_3c = CONCAT11(uStack_36,cStack_37);
    local_3a = cStack_35;
  }
  *param_1 = local_38;
  *(undefined2 *)(param_1 + 1) = local_3c;
  param_1[3] = local_3a;
  *(uint *)(param_1 + 4) = local_48;
  *(uint *)(param_1 + 8) = local_30;
  *(int *)(param_1 + 0xc) = local_2c;
  return;
}

