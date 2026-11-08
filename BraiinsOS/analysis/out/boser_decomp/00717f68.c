// FUN_00717f68 @ 00717f68 size=1124 calls_out=3 calls_in=7
// strings: 

void FUN_00717f68(undefined4 *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
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
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint6 uVar6;
  uint local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (ushort)param_2[4];
  if (0x2130 < uVar1) {
    if (uVar1 == 0x2131) {
      FUN_00718a68(local_20,param_2);
      if ((local_20[0] & 1) != 0) {
        uVar4 = 0x2d;
        goto LAB_00718228;
      }
      goto switchD_00717f9c_caseD_a;
    }
    if (uVar1 == 0x2132) goto switchD_00717f9c_caseD_74;
    if (uVar1 != 0x2133) goto switchD_00717f9c_caseD_a;
switchD_00717f9c_caseD_73:
    if (*param_2 != 10 || param_2[1] != 0) goto switchD_00717f9c_caseD_a;
    uVar2 = param_2[2];
    uVar4 = 0xb;
    goto LAB_00718544;
  }
  switch(uVar1) {
  case 9:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x2b;
      uVar3 = extraout_r1_01;
LAB_00718588:
      *param_1 = uVar4;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar3;
      return;
    }
    break;
  case 10:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x34:
  case 0x35:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x41:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x49:
  case 0x4b:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x2e:
  case 0x51:
    FUN_00718a68(local_20,param_2);
    if ((local_20[0] & 1) == 0) {
      if (((*param_2 & 0x3f) == 8) || (*param_2 == 1)) goto LAB_00718308;
      break;
    }
    goto LAB_00718218;
  case 0x10:
    if (*param_2 != 10 || param_2[1] != 0) break;
    uVar2 = param_2[2];
    uVar4 = 0x10;
    goto LAB_00718544;
  case 0x12:
  case 0x39:
  case 0x3b:
  case 0x57:
  case 0x59:
    FUN_00718a68(local_20,param_2);
    if ((local_20[0] & 1) == 0) break;
LAB_00718218:
    uVar4 = 7;
LAB_00718228:
    param_1[2] = local_18;
    *param_1 = uVar4;
    param_1[1] = 0;
    param_1[3] = local_14;
    return;
  case 0x13:
    uVar6 = FUN_00718b00(param_2);
    if ((uVar6 & 1) != 0) {
      *param_1 = 0x26;
      param_1[1] = 0;
      *(short *)(param_1 + 2) = (short)(uVar6 >> 0x20);
      return;
    }
    break;
  case 0x17:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x24;
      uVar3 = extraout_r1_00;
      goto LAB_00718588;
    }
    break;
  case 0x19:
  case 0x2a:
  case 0x40:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4d:
    goto switchD_00717f9c_caseD_19;
  case 0x20:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x2a;
      uVar3 = extraout_r1_02;
      goto LAB_00718588;
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
    if (((*param_2 & 0x3f) != 1) && (*param_2 != 8)) break;
    goto LAB_00718308;
  case 0x2c:
  case 0x55:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x16;
      goto LAB_00718544;
    }
    break;
  case 0x32:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x23;
      uVar3 = extraout_r1_06;
      goto LAB_00718588;
    }
    break;
  case 0x33:
    FUN_00718a68(local_20,param_2);
    if ((local_20[0] & 1) == 0) break;
    uVar4 = 0x27;
    goto LAB_00718228;
  case 0x36:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x29;
      uVar3 = extraout_r1_07;
      goto LAB_00718588;
    }
    break;
  case 0x38:
    FUN_00718a68(local_20,param_2);
    if ((local_20[0] & 1) != 0) goto LAB_00718218;
    uVar2 = *param_2;
    if (((uVar2 & 0x3f) == 8) || (uVar2 == 1)) goto LAB_00718308;
    goto LAB_00718508;
  case 0x3a:
  case 0x58:
    FUN_00718a68(local_20,param_2);
    if ((local_20[0] & 1) != 0) {
      uVar4 = 0x2c;
      goto LAB_00718228;
    }
    break;
  case 0x3e:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x20;
      uVar3 = extraout_r1;
      goto LAB_00718588;
    }
    break;
  case 0x42:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x28;
      uVar3 = extraout_r1_04;
      goto LAB_00718588;
    }
    break;
  case 0x43:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x14;
      goto LAB_00718544;
    }
    break;
  case 0x4c:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x25;
      uVar3 = extraout_r1_08;
      goto LAB_00718588;
    }
    break;
  case 0x5e:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x21;
      uVar3 = extraout_r1_05;
      goto LAB_00718588;
    }
    break;
  case 0x65:
    uVar2 = FUN_00718a2c(param_2);
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x22;
      uVar3 = extraout_r1_03;
      goto LAB_00718588;
    }
    break;
  case 0x72:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x1c;
      goto LAB_00718544;
    }
    break;
  case 0x73:
    goto switchD_00717f9c_caseD_73;
  case 0x74:
switchD_00717f9c_caseD_74:
    if (*param_2 != 10 || param_2[1] != 0) break;
    uVar2 = param_2[2];
    uVar4 = 0x17;
    goto LAB_00718544;
  case 0x79:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x15;
      goto LAB_00718544;
    }
    break;
  case 0x8c:
    if (*param_2 == 10 && param_2[1] == 0) {
      uVar2 = param_2[2];
      uVar4 = 0x12;
      goto LAB_00718544;
    }
    break;
  default:
    if (uVar1 != 2) break;
    goto switchD_00717f9c_caseD_19;
  }
switchD_00717f9c_caseD_a:
                    /* WARNING: Could not recover jumptable at 0x007185d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_007185d4 + *(int *)(&DAT_007185d4 + *param_2 * 4)))(param_2 + 2);
  return;
switchD_00717f9c_caseD_19:
  uVar2 = *param_2;
  if ((uVar2 & 0x3f) == 1 || uVar2 == 8) {
LAB_00718308:
    uVar2 = param_2[2];
    uVar5 = param_2[3];
    param_1[1] = 0;
    *param_1 = 8;
    param_1[2] = uVar2;
    param_1[3] = uVar5;
    return;
  }
LAB_00718508:
  if (uVar2 == 10 && param_2[1] == 0) {
    uVar2 = param_2[2];
    uVar4 = 0x11;
LAB_00718544:
    *param_1 = uVar4;
    param_1[1] = 0;
    param_1[2] = uVar2;
    return;
  }
  goto switchD_00717f9c_caseD_a;
}

