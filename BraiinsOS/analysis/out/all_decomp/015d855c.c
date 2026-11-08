// FUN_015d855c @ 015d855c size=1940 calls_out=3 calls_in=7
// strings: 

void FUN_015d855c(undefined4 *param_1,uint *param_2)

{
  ushort uVar1;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  undefined1 extraout_r1_01;
  undefined1 extraout_r1_02;
  undefined1 extraout_r1_03;
  undefined1 extraout_r1_04;
  undefined1 extraout_r1_05;
  undefined1 extraout_r1_06;
  undefined1 extraout_r1_07;
  undefined1 extraout_r1_08;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint6 uVar5;
  
  uVar1 = (ushort)param_2[4];
  if (0x2130 < uVar1) {
    if (uVar1 != 0x2131) {
      if (uVar1 == 0x2132) goto switchD_015d8588_caseD_74;
      if (uVar1 != 0x2133) goto switchD_015d8588_caseD_3;
      goto switchD_015d8588_caseD_73;
    }
    switch(*param_2) {
    case 2:
      uVar3 = (uint)(byte)param_2[2];
      break;
    case 3:
      uVar3 = (uint)(ushort)param_2[2];
      break;
    case 4:
      uVar3 = param_2[2];
      break;
    case 5:
    case 7:
      uVar3 = param_2[2];
      uVar2 = param_2[3];
      goto LAB_015d9068;
    case 6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_015d8588_caseD_3;
      uVar3 = param_2[2];
      goto LAB_015d9068;
    default:
      goto switchD_015d8588_caseD_3;
    }
    uVar2 = 0;
LAB_015d9068:
    uVar4 = 0x2d;
    goto LAB_015d8e9c;
  }
  switch(uVar1) {
  case 2:
  case 0x19:
  case 0x2a:
  case 0x40:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4d:
    uVar2 = *param_2;
    if ((uVar2 & 0x3f) == 1 || uVar2 == 8) {
switchD_015d8bfc_caseD_1:
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = 8;
      param_1[1] = 0;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      return;
    }
    if (uVar2 != 10 || param_2[1] != 0) break;
    goto LAB_015d88a0;
  case 9:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x2b;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_03;
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_015d8bfc_caseD_1;
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
switchD_015d8b9c_caseD_3:
      uVar3 = (uint)(ushort)param_2[2];
      goto LAB_015d8e90;
    case 4:
switchD_015d8b9c_caseD_4:
      uVar3 = param_2[2];
      goto LAB_015d8e90;
    case 5:
    case 7:
switchD_015d8b9c_caseD_5:
      uVar3 = param_2[2];
      uVar2 = param_2[3];
      break;
    case 6:
switchD_015d8b9c_caseD_6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_015d8588_caseD_3;
LAB_015d8ebc:
      uVar3 = param_2[2];
      break;
    default:
      goto switchD_015d8588_caseD_3;
    }
    goto LAB_015d8e94;
  case 0x10:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x10;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x12:
    switch(*param_2) {
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x13:
    uVar5 = FUN_015db210(param_2);
    if ((uVar5 & 1) != 0) {
      *param_1 = 0x26;
      param_1[1] = 0;
      *(short *)(param_1 + 2) = (short)(uVar5 >> 0x20);
      return;
    }
    break;
  case 0x17:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x24;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_05;
      return;
    }
    break;
  case 0x20:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x2a;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_06;
      return;
    }
    break;
  case 0x22:
  case 0x2f:
  case 0x37:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x71:
  case 0x7e:
  case 0x7f:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
    if (((*param_2 & 0x3f) == 1) || (*param_2 == 8)) goto switchD_015d8bfc_caseD_1;
    break;
  case 0x2c:
  case 0x55:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x16;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x2e:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_015d8bfc_caseD_1;
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x32:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x23;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_04;
      return;
    }
    break;
  case 0x33:
    switch(*param_2) {
    case 2:
      uVar3 = (uint)(byte)param_2[2];
      break;
    case 3:
      uVar3 = (uint)(ushort)param_2[2];
      break;
    case 4:
      uVar3 = param_2[2];
      break;
    case 5:
    case 7:
      uVar3 = param_2[2];
      uVar2 = param_2[3];
      goto LAB_015d9028;
    case 6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_015d8588_caseD_3;
      uVar3 = param_2[2];
      goto LAB_015d9028;
    default:
      goto switchD_015d8588_caseD_3;
    }
    uVar2 = 0;
LAB_015d9028:
    uVar4 = 0x27;
    goto LAB_015d8e9c;
  case 0x36:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x29;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_00;
      return;
    }
    break;
  case 0x38:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_015d8bfc_caseD_1;
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      uVar2 = param_2[3];
      if (-1 < (int)uVar2) goto LAB_015d8ebc;
    default:
      if (*param_2 == 10 && param_2[1] == 0) {
LAB_015d88a0:
        uVar2 = param_2[2];
        *param_1 = 0x11;
        param_1[1] = 0;
        param_1[2] = uVar2;
        return;
      }
    }
    break;
  case 0x39:
    switch(*param_2) {
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x3a:
    switch(*param_2) {
    case 2:
switchD_015d8c78_caseD_2:
      uVar3 = (uint)(byte)param_2[2];
      uVar2 = 0;
      break;
    case 3:
switchD_015d8c78_caseD_3:
      uVar3 = (uint)(ushort)param_2[2];
      uVar2 = 0;
      break;
    case 4:
switchD_015d8c78_caseD_4:
      uVar3 = param_2[2];
      uVar2 = 0;
      break;
    case 5:
    case 7:
switchD_015d8c78_caseD_5:
      uVar3 = param_2[2];
      uVar2 = param_2[3];
      break;
    case 6:
switchD_015d8c78_caseD_6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_015d8588_caseD_3;
      uVar3 = param_2[2];
      break;
    default:
      goto switchD_015d8588_caseD_3;
    }
    uVar4 = 0x2c;
    goto LAB_015d8e9c;
  case 0x3b:
    switch(*param_2) {
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x3e:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x20;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_02;
      return;
    }
    break;
  case 0x42:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x28;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1;
      return;
    }
    break;
  case 0x43:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x14;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x4c:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x25;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_08;
      return;
    }
    break;
  case 0x51:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_015d8bfc_caseD_1;
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x57:
    switch(*param_2) {
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x58:
    switch(*param_2) {
    case 2:
      goto switchD_015d8c78_caseD_2;
    case 3:
      goto switchD_015d8c78_caseD_3;
    case 4:
      goto switchD_015d8c78_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8c78_caseD_5;
    case 6:
      goto switchD_015d8c78_caseD_6;
    default:
      break;
    }
  case 0x59:
    switch(*param_2) {
    case 2:
      goto switchD_015d8b9c_caseD_2;
    case 3:
      goto switchD_015d8b9c_caseD_3;
    case 4:
      goto switchD_015d8b9c_caseD_4;
    case 5:
    case 7:
      goto switchD_015d8b9c_caseD_5;
    case 6:
      goto switchD_015d8b9c_caseD_6;
    default:
      break;
    }
  case 0x5e:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x21;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_07;
      return;
    }
    break;
  case 0x65:
    uVar2 = FUN_015db184(param_2);
    if ((uVar2 & 1) != 0) {
      *param_1 = 0x22;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = extraout_r1_01;
      return;
    }
    break;
  case 0x72:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x1c;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x73:
switchD_015d8588_caseD_73:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0xb;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x74:
switchD_015d8588_caseD_74:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x79:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x15;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
    break;
  case 0x8c:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      *param_1 = 0x12;
      param_1[1] = 0;
      param_1[2] = uVar2;
      return;
    }
  }
switchD_015d8588_caseD_3:
  FUN_015d186c(param_1,param_2);
  return;
switchD_015d8b9c_caseD_2:
  uVar3 = (uint)(byte)param_2[2];
LAB_015d8e90:
  uVar2 = 0;
LAB_015d8e94:
  uVar4 = 7;
LAB_015d8e9c:
  param_1[2] = uVar3;
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[3] = uVar2;
  return;
}

