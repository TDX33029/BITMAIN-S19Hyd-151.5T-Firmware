// FUN_016d513c @ 016d513c size=1640 calls_out=12 calls_in=2
// strings: 

void FUN_016d513c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *unaff_r9;
  uint unaff_r10;
  int *unaff_r11;
  bool bVar11;
  int local_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188 [4];
  int local_178;
  int iStack_174;
  int iStack_170;
  int local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [32];
  undefined4 local_128 [28];
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int aiStack_ac [5];
  int local_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  undefined4 local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  local_1ac = FUN_016d4a28(param_2);
  if (local_1ac != 0x5c) {
    FUN_016f4e14(&local_1ac,&DAT_0056e25c,&DAT_01d09db8);
switchD_016d55a0_default:
    if (unaff_r10 == 0x61) {
      iVar2 = unaff_r9[1];
      iVar6 = unaff_r9[2];
      iVar9 = unaff_r9[3];
      iVar8 = unaff_r9[4];
      iVar10 = unaff_r9[5];
      param_1[3] = *unaff_r9;
      param_1[4] = iVar2;
      param_1[5] = iVar6;
      param_1[6] = iVar9;
      param_1[7] = iVar8;
      param_1[8] = iVar10;
      *(undefined2 *)(param_1 + 9) = 6;
      iVar2 = 7;
      goto LAB_016d57f4;
    }
    if (unaff_r10 == 0x62) {
      local_80 = *unaff_r9;
      iStack_7c = unaff_r9[1];
      iStack_78 = unaff_r9[2];
      local_74 = unaff_r9[3];
      iStack_70 = unaff_r9[4];
      iStack_6c = unaff_r9[5];
      cVar5 = '\x04';
      if (*unaff_r11 != param_2[2]) {
        iVar2 = FUN_016d4a28(param_2);
        if (iVar2 == 0x7b) {
          FUN_016dc7bc(&local_68,param_2,&local_1a8);
          if (local_68 != 0x22) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_64 + 1,0x3b);
            *(char *)(param_1 + 1) = (char)local_64;
            *param_1 = local_68;
            return;
          }
          if ((char)local_64 != '\f') {
            local_74 = *unaff_r11;
            iStack_70 = unaff_r11[1];
            iStack_6c = unaff_r11[2];
            cVar5 = (char)local_64;
          }
        }
      }
      param_1[2] = local_80;
      param_1[3] = iStack_7c;
      param_1[4] = iStack_78;
      param_1[5] = local_74;
      param_1[6] = iStack_70;
      param_1[7] = iStack_6c;
      *(char *)(param_1 + 8) = cVar5;
      goto LAB_016d5794;
    }
    goto switchD_016d55a0_caseD_3d;
  }
  iVar6 = *param_2;
  unaff_r11 = (int *)(iVar6 + 0x50);
  local_1a8 = *unaff_r11;
  iStack_1a4 = *(int *)(iVar6 + 0x54);
  iStack_1a0 = *(int *)(iVar6 + 0x58);
  iVar2 = FUN_016d4fe8(param_2);
  if (iVar2 == 0) {
    local_154 = *unaff_r11;
    uStack_150 = *(undefined4 *)(iVar6 + 0x54);
    uStack_14c = *(undefined4 *)(iVar6 + 0x58);
    piVar3 = &local_160;
    local_160 = local_1a8;
    iStack_15c = iStack_1a4;
    iStack_158 = iStack_1a0;
    local_128[0] = 10;
LAB_016d52e8:
    iVar2 = param_2[1];
    iVar6 = param_2[2];
    goto LAB_016d5300;
  }
  unaff_r10 = FUN_016d4a28(param_2);
  if ((unaff_r10 & 0xfffffff8) == 0x30) {
    if (*(char *)(iVar6 + 0x65) == '\0') {
LAB_016d52b4:
      FUN_016d4f3c(&local_160,param_2);
      piVar3 = &local_178;
      local_16c = local_154;
      uStack_168 = uStack_150;
      uStack_164 = uStack_14c;
      local_178 = local_1a8;
      iStack_174 = iStack_1a4;
      iStack_170 = iStack_1a0;
      local_128[0] = 0x20;
      goto LAB_016d52e8;
    }
    FUN_016dcc30(&local_198,param_2);
    piVar3 = (int *)((uint)&local_198 | 4);
    *piVar3 = local_1a8;
    piVar3[1] = iStack_1a4;
    piVar3[2] = iStack_1a0;
    param_1[1] = -0x7ffffffe;
    piVar7 = local_188;
    param_1[2] = local_198;
    param_1[3] = iStack_194;
    param_1[4] = iStack_190;
    param_1[5] = iStack_18c;
    piVar3 = param_1 + 6;
LAB_016d5460:
    iVar2 = piVar7[1];
    iVar6 = piVar7[2];
    iVar9 = piVar7[3];
    *piVar3 = *piVar7;
    piVar3[1] = iVar2;
    piVar3[2] = iVar6;
    piVar3[3] = iVar9;
    goto LAB_016d5468;
  }
  if ((unaff_r10 & 0x1ffffe) == 0x38) {
    if (*(char *)(iVar6 + 0x65) != '\x01') goto LAB_016d52b4;
    goto switchD_016d5348_caseD_51;
  }
  if (0x6f < (int)unaff_r10) {
    switch(unaff_r10) {
    case 0x70:
      goto switchD_016d5348_caseD_50;
    default:
      goto switchD_016d5348_caseD_51;
    case 0x73:
    case 0x77:
      goto switchD_016d5348_caseD_53;
    case 0x75:
    case 0x78:
      goto switchD_016d5348_caseD_55;
    }
  }
  switch(unaff_r10) {
  case 0x50:
switchD_016d5348_caseD_50:
    FUN_016db9dc(&local_68,param_2);
    if (local_68 != 0x22) {
      param_1[1] = local_64;
      param_1[2] = iStack_60;
      param_1[3] = iStack_5c;
      param_1[4] = iStack_58;
      param_1[5] = local_54;
      param_1[6] = iStack_50;
      param_1[7] = iStack_4c;
      param_1[8] = iStack_48;
      param_1[9] = local_44;
      param_1[10] = local_40;
      param_1[0xb] = iStack_3c;
      param_1[0xc] = local_38;
      param_1[0xd] = iStack_34;
      param_1[0xe] = iStack_30;
      param_1[0xf] = local_2c;
LAB_016d5558:
      *param_1 = local_68;
      return;
    }
    param_1[1] = local_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = local_1a8;
    param_1[9] = iStack_1a4;
    param_1[10] = iStack_1a0;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = local_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
LAB_016d5468:
    *param_1 = 0x22;
    return;
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x56:
    goto switchD_016d5348_caseD_51;
  case 0x53:
  case 0x57:
switchD_016d5348_caseD_53:
    FUN_016dc6c8(&local_b8,param_2);
    local_b8 = local_1a8;
    iStack_b4 = iStack_1a4;
    iStack_b0 = iStack_1a0;
    param_1[1] = (int)&DAT_80000005;
    piVar7 = aiStack_ac;
    param_1[2] = local_1a8;
    param_1[3] = iStack_1a4;
    param_1[4] = iStack_1a0;
    piVar3 = param_1 + 5;
    goto LAB_016d5460;
  case 0x55:
switchD_016d5348_caseD_55:
    FUN_016db8c4(&local_68,param_2);
    if (local_68 == 0x22) {
      piVar3 = (int *)((uint)local_148 | 4);
      *piVar3 = local_1a8;
      piVar3[1] = iStack_1a4;
      piVar3[2] = iStack_1a0;
      param_1[1] = -0x7ffffffe;
      param_1[2] = local_64;
      param_1[3] = iStack_60;
      param_1[4] = iStack_5c;
      param_1[5] = iStack_58;
      param_1[6] = local_54;
      param_1[7] = iStack_50;
      param_1[8] = iStack_4c;
      param_1[9] = iStack_48;
      goto LAB_016d5468;
    }
    param_1[9] = local_44;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = local_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = local_2c;
    param_1[1] = local_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    goto LAB_016d5558;
  }
  if (unaff_r10 == 0x44 || unaff_r10 == 100) goto switchD_016d5348_caseD_53;
switchD_016d5348_caseD_51:
  FUN_016d4fe8(param_2);
  unaff_r9 = &local_98;
  local_8c = *unaff_r11;
  iStack_88 = *(int *)(iVar6 + 0x54);
  iStack_84 = *(int *)(iVar6 + 0x58);
  local_98 = local_1a8;
  iStack_94 = iStack_1a4;
  iStack_90 = iStack_1a0;
  if ((0x1c < unaff_r10 - 0x23) || ((1 << (unaff_r10 - 0x23 & 0xff) & 0x10000debU) == 0)) {
    uVar4 = unaff_r10 - 0x5b;
    bVar11 = 3 < uVar4;
    if (bVar11) {
      uVar4 = unaff_r10 - 0x7b;
    }
    if (bVar11 && 3 < uVar4) {
      iVar2 = FUN_016eafec(unaff_r10);
      if (iVar2 != 0) {
        param_1[3] = local_98;
        param_1[4] = iStack_94;
        param_1[5] = iStack_90;
        param_1[6] = local_8c;
        param_1[7] = iStack_88;
        param_1[8] = iStack_84;
        uVar1 = 2;
        goto LAB_016d5298;
      }
      if ((int)unaff_r10 < 0x66) {
        switch(unaff_r10) {
        case 0x3c:
          param_1[2] = local_98;
          param_1[3] = iStack_94;
          param_1[4] = iStack_90;
          param_1[5] = local_8c;
          param_1[6] = iStack_88;
          param_1[7] = iStack_84;
          uVar1 = 8;
          break;
        case 0x3d:
        case 0x3f:
        case 0x40:
          goto switchD_016d55a0_caseD_3d;
        case 0x3e:
          param_1[2] = local_98;
          param_1[3] = iStack_94;
          param_1[4] = iStack_90;
          param_1[5] = local_8c;
          param_1[6] = iStack_88;
          param_1[7] = iStack_84;
          uVar1 = 9;
          break;
        case 0x41:
          param_1[2] = local_98;
          param_1[3] = iStack_94;
          param_1[4] = iStack_90;
          param_1[5] = local_8c;
          param_1[6] = iStack_88;
          param_1[7] = iStack_84;
          uVar1 = 2;
          break;
        case 0x42:
          param_1[2] = local_98;
          param_1[3] = iStack_94;
          param_1[4] = iStack_90;
          param_1[5] = local_8c;
          param_1[6] = iStack_88;
          param_1[7] = iStack_84;
          uVar1 = 5;
          break;
        default:
          goto switchD_016d55a0_default;
        }
LAB_016d5790:
        *(undefined1 *)(param_1 + 8) = uVar1;
LAB_016d5794:
        *param_1 = 0x22;
        param_1[1] = -0x7ffffffd;
        return;
      }
      switch(unaff_r10) {
      case 0x72:
        param_1[3] = local_98;
        param_1[4] = iStack_94;
        param_1[5] = iStack_90;
        param_1[6] = local_8c;
        param_1[7] = iStack_88;
        param_1[8] = iStack_84;
        *(undefined2 *)(param_1 + 9) = 0x406;
        iVar2 = 0xd;
        break;
      case 0x74:
        param_1[3] = local_98;
        param_1[4] = iStack_94;
        param_1[5] = iStack_90;
        param_1[6] = local_8c;
        param_1[7] = iStack_88;
        param_1[8] = iStack_84;
        *(undefined2 *)(param_1 + 9) = 0x206;
        iVar2 = 9;
        break;
      case 0x76:
        param_1[3] = local_98;
        param_1[4] = iStack_94;
        param_1[5] = iStack_90;
        param_1[6] = local_8c;
        param_1[7] = iStack_88;
        param_1[8] = iStack_84;
        *(undefined2 *)(param_1 + 9) = 0x506;
        iVar2 = 0xb;
        break;
      case 0x7a:
        param_1[2] = local_98;
        param_1[3] = iStack_94;
        param_1[4] = iStack_90;
        param_1[5] = local_8c;
        param_1[6] = iStack_88;
        param_1[7] = iStack_84;
        uVar1 = 3;
        goto LAB_016d5790;
      default:
        if (unaff_r10 == 0x66) {
          param_1[3] = local_98;
          param_1[4] = iStack_94;
          param_1[5] = iStack_90;
          param_1[6] = local_8c;
          param_1[7] = iStack_88;
          param_1[8] = iStack_84;
          *(undefined2 *)(param_1 + 9) = 0x106;
          iVar2 = 0xc;
          break;
        }
        if (unaff_r10 == 0x6e) {
          param_1[3] = local_98;
          param_1[4] = iStack_94;
          param_1[5] = iStack_90;
          param_1[6] = local_8c;
          param_1[7] = iStack_88;
          param_1[8] = iStack_84;
          *(undefined2 *)(param_1 + 9) = 0x306;
          iVar2 = 10;
          break;
        }
      case 0x73:
      case 0x75:
      case 0x77:
      case 0x78:
      case 0x79:
switchD_016d55a0_caseD_3d:
        iVar2 = param_2[1];
        iVar6 = param_2[2];
        local_128[0] = 0xb;
        piVar3 = &local_98;
LAB_016d5300:
        FUN_016d4540(&local_68,iVar2,iVar6,piVar3,local_128);
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        param_1[4] = iStack_58;
        param_1[5] = local_54;
        param_1[6] = iStack_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = local_44;
        param_1[10] = local_40;
        param_1[0xb] = iStack_3c;
        param_1[0xc] = local_38;
        param_1[0xd] = iStack_34;
        param_1[0xe] = iStack_30;
        param_1[0xf] = local_2c;
        return;
      }
LAB_016d57f4:
      *param_1 = 0x22;
      param_1[1] = -0x7ffffffe;
      param_1[2] = iVar2;
      return;
    }
  }
  param_1[3] = local_1a8;
  param_1[4] = iStack_1a4;
  param_1[5] = iStack_1a0;
  param_1[6] = local_8c;
  param_1[7] = iStack_88;
  param_1[8] = iStack_84;
  uVar1 = 1;
LAB_016d5298:
  *(undefined1 *)(param_1 + 9) = uVar1;
  param_1[1] = -0x7ffffffe;
  *param_1 = 0x22;
  param_1[2] = unaff_r10;
  return;
}

