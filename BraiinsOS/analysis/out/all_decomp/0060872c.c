// FUN_0060872c @ 0060872c size=2064 calls_out=2 calls_in=7
// strings: 

void FUN_0060872c(undefined4 *param_1,uint *param_2)

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
  uint6 uVar4;
  
  uVar1 = (ushort)param_2[4];
  if (uVar1 < 0x2131) {
    switch(uVar1) {
    case 2:
    case 0x19:
    case 0x2a:
    case 0x40:
    case 0x46:
    case 0x48:
    case 0x4a:
    case 0x4d:
      uVar3 = *param_2;
      if ((uVar3 & 0x3f) == 1 || uVar3 == 8) {
switchD_00608dcc_caseD_1:
        uVar3 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = uVar3;
        *param_1 = 8;
        param_1[1] = 0;
        return;
      }
      if (uVar3 != 10 || param_2[1] != 0) break;
      goto LAB_00608b38;
    case 9:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_03;
        *param_1 = 0x2b;
        param_1[1] = 0;
        return;
      }
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      switch(*param_2) {
      case 1:
      case 8:
        goto switchD_00608dcc_caseD_1;
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
switchD_00608d80_caseD_3:
        uVar2 = (uint)(ushort)param_2[2];
        uVar3 = 0;
        goto LAB_006092a4;
      case 4:
switchD_00608d80_caseD_4:
        uVar2 = param_2[2];
        uVar3 = 0;
        goto LAB_006092a4;
      case 5:
      case 7:
switchD_00608d80_caseD_5:
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        goto LAB_006092a4;
      case 6:
switchD_00608d80_caseD_6:
        uVar3 = param_2[3];
        if ((int)uVar3 < 0) break;
LAB_00609014:
        uVar2 = param_2[2];
        goto LAB_006092a4;
      default:
        break;
      }
    case 0x10:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x10;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x12:
      switch(*param_2) {
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x13:
      uVar4 = FUN_00609628(param_2);
      if ((uVar4 & 1) != 0) {
        *(short *)(param_1 + 2) = (short)(uVar4 >> 0x20);
        *param_1 = 0x26;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x17:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_05;
        *param_1 = 0x24;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x20:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_06;
        *param_1 = 0x2a;
        param_1[1] = 0;
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
      if ((*param_2 & 0x3f) == 1 || *param_2 == 8) goto switchD_00608dcc_caseD_1;
      break;
    case 0x2c:
    case 0x55:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x16;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x2e:
      switch(*param_2) {
      case 1:
      case 8:
        goto switchD_00608dcc_caseD_1;
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x32:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_04;
        *param_1 = 0x23;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x33:
      switch(*param_2) {
      case 2:
        uVar2 = (uint)(byte)param_2[2];
        break;
      case 3:
        uVar2 = (uint)(ushort)param_2[2];
        break;
      case 4:
        uVar2 = param_2[2];
        break;
      case 5:
      case 7:
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        goto LAB_00609540;
      case 6:
        uVar3 = param_2[3];
        if (-1 < (int)uVar3) {
          uVar2 = param_2[2];
          goto LAB_00609540;
        }
      default:
        goto switchD_00608754_caseD_3;
      }
      uVar3 = 0;
LAB_00609540:
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      *param_1 = 0x27;
      param_1[1] = 0;
      return;
    case 0x36:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_00;
        *param_1 = 0x29;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x38:
      switch(*param_2) {
      case 1:
      case 8:
        goto switchD_00608dcc_caseD_1;
      case 2:
switchD_00608d80_caseD_2:
        uVar2 = (uint)(byte)param_2[2];
        uVar3 = 0;
LAB_006092a4:
        param_1[2] = uVar2;
        param_1[3] = uVar3;
        *param_1 = 7;
        param_1[1] = 0;
        return;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        uVar3 = param_2[3];
        if (-1 < (int)uVar3) goto LAB_00609014;
      default:
        if (*param_2 == 10 && param_2[1] == 0) {
LAB_00608b38:
          param_1[2] = param_2[2];
          *param_1 = 0x11;
          param_1[1] = 0;
          return;
        }
      }
      break;
    case 0x39:
      switch(*param_2) {
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x3a:
      switch(*param_2) {
      case 2:
switchD_00608e38_caseD_2:
        uVar2 = (uint)(byte)param_2[2];
        uVar3 = 0;
        break;
      case 3:
switchD_00608e38_caseD_3:
        uVar2 = (uint)(ushort)param_2[2];
        uVar3 = 0;
        break;
      case 4:
switchD_00608e38_caseD_4:
        uVar2 = param_2[2];
        uVar3 = 0;
        break;
      case 5:
      case 7:
switchD_00608e38_caseD_5:
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        break;
      case 6:
switchD_00608e38_caseD_6:
        uVar3 = param_2[3];
        if ((int)uVar3 < 0) goto switchD_00608754_caseD_3;
        uVar2 = param_2[2];
        break;
      default:
        goto switchD_00608754_caseD_3;
      }
      param_1[2] = uVar2;
      param_1[3] = uVar3;
      *param_1 = 0x2c;
      param_1[1] = 0;
      return;
    case 0x3b:
      switch(*param_2) {
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x3e:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_02;
        *param_1 = 0x20;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x42:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1;
        *param_1 = 0x28;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x43:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x14;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x4c:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_08;
        *param_1 = 0x25;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x51:
      switch(*param_2) {
      case 1:
      case 8:
        goto switchD_00608dcc_caseD_1;
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x57:
      switch(*param_2) {
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x58:
      switch(*param_2) {
      case 2:
        goto switchD_00608e38_caseD_2;
      case 3:
        goto switchD_00608e38_caseD_3;
      case 4:
        goto switchD_00608e38_caseD_4;
      case 5:
      case 7:
        goto switchD_00608e38_caseD_5;
      case 6:
        goto switchD_00608e38_caseD_6;
      default:
        break;
      }
    case 0x59:
      switch(*param_2) {
      case 2:
        goto switchD_00608d80_caseD_2;
      case 3:
        goto switchD_00608d80_caseD_3;
      case 4:
        goto switchD_00608d80_caseD_4;
      case 5:
      case 7:
        goto switchD_00608d80_caseD_5;
      case 6:
        goto switchD_00608d80_caseD_6;
      default:
        break;
      }
    case 0x5e:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_07;
        *param_1 = 0x21;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x65:
      uVar3 = FUN_0060959c(param_2);
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 2) = extraout_r1_01;
        *param_1 = 0x22;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x72:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x1c;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x73:
      goto switchD_00608754_caseD_73;
    case 0x74:
switchD_00608754_caseD_74:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x17;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x79:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x15;
        param_1[1] = 0;
        return;
      }
      break;
    case 0x8c:
      if (*param_2 == 10 && param_2[1] == 0) {
        param_1[2] = param_2[2];
        *param_1 = 0x12;
        param_1[1] = 0;
        return;
      }
    }
switchD_00608754_caseD_3:
                    /* WARNING: Could not recover jumptable at 0x006089a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_006089ac + *(int *)(&DAT_006089ac + *param_2 * 4)))(param_1,param_2,param_2 + 2)
    ;
    return;
  }
  if (uVar1 != 0x2131) {
    if (uVar1 == 0x2132) goto switchD_00608754_caseD_74;
    if (uVar1 != 0x2133) goto switchD_00608754_caseD_3;
switchD_00608754_caseD_73:
    if (*param_2 == 10 && param_2[1] == 0) {
      param_1[2] = param_2[2];
      *param_1 = 0xb;
      param_1[1] = 0;
      return;
    }
    goto switchD_00608754_caseD_3;
  }
  switch(*param_2) {
  case 2:
    uVar2 = (uint)(byte)param_2[2];
    break;
  case 3:
    uVar2 = (uint)(ushort)param_2[2];
    break;
  case 4:
    uVar2 = param_2[2];
    break;
  case 5:
  case 7:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    goto LAB_00609584;
  case 6:
    uVar3 = param_2[3];
    if ((int)uVar3 < 0) goto switchD_00608754_caseD_3;
    uVar2 = param_2[2];
    goto LAB_00609584;
  default:
    goto switchD_00608754_caseD_3;
  }
  uVar3 = 0;
LAB_00609584:
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *param_1 = 0x2d;
  param_1[1] = 0;
  return;
}

