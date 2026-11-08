// FUN_01993028 @ 01993028 size=1736 calls_out=3 calls_in=7
// strings: 

void FUN_01993028(undefined4 *param_1,uint *param_2)

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
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint6 uVar6;
  
  uVar1 = (ushort)param_2[4];
  if (0x2130 < uVar1) {
    if (uVar1 != 0x2131) {
      if (uVar1 == 0x2132) goto switchD_01993054_caseD_74;
      if (uVar1 != 0x2133) goto switchD_01993054_caseD_3;
      goto switchD_01993054_caseD_73;
    }
    switch(*param_2) {
    case 2:
      uVar5 = (uint)(byte)param_2[2];
      break;
    case 3:
      uVar5 = (uint)(ushort)param_2[2];
      break;
    case 4:
      uVar5 = param_2[2];
      break;
    case 5:
    case 7:
      uVar5 = param_2[2];
      uVar2 = param_2[3];
      goto LAB_01993a68;
    case 6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_01993054_caseD_3;
      uVar5 = param_2[2];
      goto LAB_01993a68;
    default:
      goto switchD_01993054_caseD_3;
    }
    uVar2 = 0;
LAB_01993a68:
    uVar4 = 0x2d;
    goto LAB_019938a8;
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
switchD_01993644_caseD_1:
      uVar2 = param_2[2];
      uVar5 = param_2[3];
      *param_1 = 8;
      param_1[1] = 0;
      param_1[2] = uVar2;
      param_1[3] = uVar5;
      return;
    }
    if (uVar2 != 10 || param_2[1] != 0) break;
    goto LAB_01993360;
  case 9:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x2b;
      uVar3 = extraout_r1_03;
LAB_01993970:
      *param_1 = uVar4;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar3;
      return;
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_01993644_caseD_1;
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
switchD_019935f0_caseD_3:
      uVar5 = (uint)(ushort)param_2[2];
      goto LAB_0199389c;
    case 4:
switchD_019935f0_caseD_4:
      uVar5 = param_2[2];
      goto LAB_0199389c;
    case 5:
    case 7:
switchD_019935f0_caseD_5:
      uVar5 = param_2[2];
      uVar2 = param_2[3];
      break;
    case 6:
switchD_019935f0_caseD_6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_01993054_caseD_3;
LAB_019938c8:
      uVar5 = param_2[2];
      break;
    default:
      goto switchD_01993054_caseD_3;
    }
    goto LAB_019938a0;
  case 0x10:
    if (*param_2 != 10 || param_2[1] != 0) break;
    uVar2 = param_2[2];
    uVar4 = 0x10;
    goto LAB_01993808;
  case 0x12:
    switch(*param_2) {
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x13:
    uVar6 = FUN_01995bb0(param_2);
    if ((uVar6 & 1) != 0) {
      *param_1 = 0x26;
      param_1[1] = 0;
      *(short *)(param_1 + 2) = (short)(uVar6 >> 0x20);
      return;
    }
    break;
  case 0x17:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x24;
      uVar3 = extraout_r1_05;
      goto LAB_01993970;
    }
    break;
  case 0x20:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x2a;
      uVar3 = extraout_r1_06;
      goto LAB_01993970;
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
    if (((*param_2 & 0x3f) == 1) || (*param_2 == 8)) goto switchD_01993644_caseD_1;
    break;
  case 0x2c:
  case 0x55:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x16;
      goto LAB_01993808;
    }
    break;
  case 0x2e:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_01993644_caseD_1;
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x32:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x23;
      uVar3 = extraout_r1_04;
      goto LAB_01993970;
    }
    break;
  case 0x33:
    switch(*param_2) {
    case 2:
      uVar5 = (uint)(byte)param_2[2];
      break;
    case 3:
      uVar5 = (uint)(ushort)param_2[2];
      break;
    case 4:
      uVar5 = param_2[2];
      break;
    case 5:
    case 7:
      uVar5 = param_2[2];
      uVar2 = param_2[3];
      goto LAB_01993a28;
    case 6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_01993054_caseD_3;
      uVar5 = param_2[2];
      goto LAB_01993a28;
    default:
      goto switchD_01993054_caseD_3;
    }
    uVar2 = 0;
LAB_01993a28:
    uVar4 = 0x27;
    goto LAB_019938a8;
  case 0x36:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x29;
      uVar3 = extraout_r1_00;
      goto LAB_01993970;
    }
    break;
  case 0x38:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_01993644_caseD_1;
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      uVar2 = param_2[3];
      if (-1 < (int)uVar2) goto LAB_019938c8;
    }
    if (*param_2 != 10 || param_2[1] != 0) break;
LAB_01993360:
    uVar2 = param_2[2];
    uVar4 = 0x11;
LAB_01993808:
    *param_1 = uVar4;
    param_1[1] = 0;
    param_1[2] = uVar2;
    return;
  case 0x39:
    switch(*param_2) {
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x3a:
    switch(*param_2) {
    case 2:
switchD_019936b4_caseD_2:
      uVar5 = (uint)(byte)param_2[2];
      uVar2 = 0;
      break;
    case 3:
switchD_019936b4_caseD_3:
      uVar5 = (uint)(ushort)param_2[2];
      uVar2 = 0;
      break;
    case 4:
switchD_019936b4_caseD_4:
      uVar5 = param_2[2];
      uVar2 = 0;
      break;
    case 5:
    case 7:
switchD_019936b4_caseD_5:
      uVar5 = param_2[2];
      uVar2 = param_2[3];
      break;
    case 6:
switchD_019936b4_caseD_6:
      uVar2 = param_2[3];
      if ((int)uVar2 < 0) goto switchD_01993054_caseD_3;
      uVar5 = param_2[2];
      break;
    default:
      goto switchD_01993054_caseD_3;
    }
    uVar4 = 0x2c;
    goto LAB_019938a8;
  case 0x3b:
    switch(*param_2) {
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x3e:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x20;
      uVar3 = extraout_r1_02;
      goto LAB_01993970;
    }
    break;
  case 0x42:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x28;
      uVar3 = extraout_r1;
      goto LAB_01993970;
    }
    break;
  case 0x43:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x14;
      goto LAB_01993808;
    }
    break;
  case 0x4c:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x25;
      uVar3 = extraout_r1_08;
      goto LAB_01993970;
    }
    break;
  case 0x51:
    switch(*param_2) {
    case 1:
    case 8:
      goto switchD_01993644_caseD_1;
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x57:
    switch(*param_2) {
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x58:
    switch(*param_2) {
    case 2:
      goto switchD_019936b4_caseD_2;
    case 3:
      goto switchD_019936b4_caseD_3;
    case 4:
      goto switchD_019936b4_caseD_4;
    case 5:
    case 7:
      goto switchD_019936b4_caseD_5;
    case 6:
      goto switchD_019936b4_caseD_6;
    default:
      break;
    }
  case 0x59:
    switch(*param_2) {
    case 2:
      goto switchD_019935f0_caseD_2;
    case 3:
      goto switchD_019935f0_caseD_3;
    case 4:
      goto switchD_019935f0_caseD_4;
    case 5:
    case 7:
      goto switchD_019935f0_caseD_5;
    case 6:
      goto switchD_019935f0_caseD_6;
    default:
      break;
    }
  case 0x5e:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x21;
      uVar3 = extraout_r1_07;
      goto LAB_01993970;
    }
    break;
  case 0x65:
    uVar2 = FUN_01995b24(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x22;
      uVar3 = extraout_r1_01;
      goto LAB_01993970;
    }
    break;
  case 0x72:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x1c;
      goto LAB_01993808;
    }
    break;
  case 0x73:
switchD_01993054_caseD_73:
    if (*param_2 != 10 || param_2[1] != 0) break;
    uVar2 = param_2[2];
    uVar4 = 0xb;
    goto LAB_01993808;
  case 0x74:
switchD_01993054_caseD_74:
    if (*param_2 != 10 || param_2[1] != 0) break;
    uVar2 = param_2[2];
    uVar4 = 0x17;
    goto LAB_01993808;
  case 0x79:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x15;
      goto LAB_01993808;
    }
    break;
  case 0x8c:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x12;
      goto LAB_01993808;
    }
  }
switchD_01993054_caseD_3:
  FUN_0198c580(param_1,param_2);
  return;
switchD_019935f0_caseD_2:
  uVar5 = (uint)(byte)param_2[2];
LAB_0199389c:
  uVar2 = 0;
LAB_019938a0:
  uVar4 = 7;
LAB_019938a8:
  param_1[2] = uVar5;
  *param_1 = uVar4;
  param_1[1] = 0;
  param_1[3] = uVar2;
  return;
}

