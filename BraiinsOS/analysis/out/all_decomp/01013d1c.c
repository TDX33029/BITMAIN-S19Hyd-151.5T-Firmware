// FUN_01013d1c @ 01013d1c size=1608 calls_out=2 calls_in=2
// strings: 

void FUN_01013d1c(undefined4 *param_1,uint *param_2,int param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined **ppuVar6;
  undefined **in_r12;
  undefined **ppuVar7;
  undefined2 local_38;
  undefined1 local_36;
  undefined **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined2 local_23;
  undefined1 local_21;
  
  if (param_3 == 0) {
LAB_01013e98:
    *(undefined1 *)(param_1 + 8) = 8;
    *(undefined1 *)param_1 = 5;
    return;
  }
  ppuVar4 = (undefined **)0x0;
  ppuVar6 = (undefined **)0x1;
  ppuVar1 = (undefined **)0x0;
  ppuVar7 = &PTR_LAB_01882324;
  uVar5 = 2;
  switch(param_3) {
  case 1:
    goto switchD_01013d58_caseD_1;
  case 2:
    ppuVar1 = (undefined **)0x1010101;
    goto LAB_010140f4;
  case 3:
    ppuVar1 = (undefined **)0x2020202;
LAB_010140f4:
    uVar5 = 3;
    ppuVar4 = ppuVar1;
    ppuVar6 = ppuVar1;
    in_r12 = ppuVar1;
    ppuVar7 = ppuVar1;
    goto switchD_01013d58_caseD_1;
  case 4:
    uVar5 = 5;
    ppuVar1 = (undefined **)0x1;
    ppuVar6 = (undefined **)&DAT_00418645;
    goto switchD_01013d58_caseD_1;
  case 5:
    uVar5 = 5;
    ppuVar1 = (undefined **)0xb;
    ppuVar6 = (undefined **)&UNK_0038339f;
    goto switchD_01013d58_caseD_1;
  case 6:
    ppuVar1 = (undefined **)0x4;
    uVar5 = 4;
    ppuVar6 = (undefined **)&DAT_00567da8;
    goto switchD_01013d58_caseD_1;
  case 7:
    uVar5 = 4;
    ppuVar1 = (undefined **)0x5;
    ppuVar6 = (undefined **)&DAT_0041860c;
    goto switchD_01013d58_caseD_1;
  case 8:
    uVar5 = 7;
    ppuVar7 = (undefined **)0xc8;
    goto switchD_01013d58_caseD_1;
  case 9:
    uVar5 = 7;
    ppuVar7 = (undefined **)0xcc;
    goto switchD_01013d58_caseD_1;
  case 10:
    uVar5 = 7;
    ppuVar7 = (undefined **)0xce;
    goto switchD_01013d58_caseD_1;
  case 0xb:
    uVar5 = 7;
    ppuVar7 = (undefined **)0x130;
    goto switchD_01013d58_caseD_1;
  case 0xc:
    uVar5 = 7;
    ppuVar7 = (undefined **)0x190;
    goto switchD_01013d58_caseD_1;
  case 0xd:
    uVar5 = 7;
    ppuVar7 = (undefined **)0x194;
    goto switchD_01013d58_caseD_1;
  case 0xe:
    uVar5 = 7;
    ppuVar7 = (undefined **)0x1f4;
    goto switchD_01013d58_caseD_1;
  case 0xf:
    uVar5 = 0;
    unaff_r6 = 0;
    unaff_r7 = 0;
    unaff_r8 = 1;
    in_r12 = &PTR_LAB_01882324;
    ppuVar7 = (undefined **)0x0;
    goto switchD_01013d58_caseD_1;
  case 0x10:
    FUN_01014524(&local_34);
    local_38 = local_23;
    ppuVar1 = (undefined **)0x0;
    local_36 = local_21;
    ppuVar4 = (undefined **)0x0;
    unaff_r6 = local_28;
    unaff_r7 = local_2c;
    unaff_r8 = local_30;
    ppuVar6 = (undefined **)0x2;
    in_r12 = local_34;
    ppuVar7 = (undefined **)0x0;
    uVar5 = local_24;
    goto switchD_01013d58_caseD_1;
  case 0x11:
    ppuVar6 = (undefined **)0x3;
    break;
  case 0x12:
    ppuVar6 = (undefined **)0x4;
    break;
  case 0x13:
    ppuVar6 = (undefined **)0x0;
    break;
  case 0x14:
    ppuVar6 = (undefined **)0x8;
    break;
  case 0x15:
    ppuVar6 = (undefined **)0xd;
    break;
  case 0x16:
    ppuVar6 = (undefined **)0xe;
    break;
  case 0x17:
    ppuVar6 = (undefined **)0x10;
    break;
  case 0x18:
    ppuVar6 = (undefined **)0x11;
    break;
  case 0x19:
    ppuVar6 = (undefined **)0x15;
    break;
  case 0x1a:
    ppuVar6 = (undefined **)0x16;
    break;
  case 0x1b:
    ppuVar6 = (undefined **)0x17;
    break;
  case 0x1c:
    ppuVar6 = (undefined **)0x18;
    break;
  case 0x1d:
    ppuVar6 = (undefined **)0x19;
    break;
  case 0x1e:
    ppuVar6 = (undefined **)0x1a;
    break;
  case 0x1f:
    ppuVar6 = (undefined **)0x1d;
    break;
  case 0x20:
    ppuVar6 = (undefined **)0x1e;
    break;
  case 0x21:
    ppuVar6 = (undefined **)0x20;
    break;
  case 0x22:
    ppuVar6 = (undefined **)0x21;
    break;
  case 0x23:
    ppuVar6 = (undefined **)0x22;
    break;
  case 0x24:
    ppuVar6 = (undefined **)0x23;
    break;
  case 0x25:
    ppuVar6 = (undefined **)0x25;
    break;
  case 0x26:
    ppuVar6 = (undefined **)0x26;
    break;
  case 0x27:
    ppuVar6 = (undefined **)0x27;
    break;
  case 0x28:
    ppuVar6 = (undefined **)0x28;
    break;
  case 0x29:
    ppuVar6 = (undefined **)0x29;
    break;
  case 0x2a:
    ppuVar6 = (undefined **)0x2a;
    break;
  case 0x2b:
    ppuVar6 = (undefined **)0x2b;
    break;
  case 0x2c:
    ppuVar6 = (undefined **)0x2c;
    break;
  case 0x2d:
    ppuVar6 = (undefined **)0x2d;
    break;
  case 0x2e:
    ppuVar6 = (undefined **)0x2e;
    break;
  case 0x2f:
    ppuVar6 = (undefined **)0x2f;
    break;
  case 0x30:
    ppuVar6 = (undefined **)0x32;
    break;
  case 0x31:
    ppuVar6 = (undefined **)0x33;
    break;
  case 0x32:
    ppuVar6 = (undefined **)0x36;
    break;
  case 0x33:
    ppuVar6 = (undefined **)0x37;
    break;
  case 0x34:
    ppuVar6 = (undefined **)0x39;
    break;
  case 0x35:
    ppuVar6 = (undefined **)0x3a;
    break;
  case 0x36:
    ppuVar6 = (undefined **)0x40;
    break;
  case 0x37:
    ppuVar6 = (undefined **)0x41;
    break;
  case 0x38:
    ppuVar6 = (undefined **)0x42;
    break;
  case 0x39:
    ppuVar6 = (undefined **)0x45;
    break;
  case 0x3a:
    ppuVar6 = (undefined **)0x46;
    break;
  case 0x3b:
    ppuVar6 = (undefined **)0x49;
    break;
  case 0x3c:
    ppuVar6 = (undefined **)0x4a;
    break;
  case 0x3d:
    ppuVar6 = (undefined **)0x4c;
    break;
  default:
    if (param_3 - 0x3eU < param_2[3]) {
      uVar2 = param_2[2] + (param_3 - 0x3eU);
      uVar3 = uVar2 - *param_2;
      if (uVar2 < *param_2) {
        uVar3 = uVar2;
      }
      FUN_01013adc(param_1,param_2[1] + uVar3 * 0x24);
      return;
    }
    goto LAB_01013e98;
  }
  unaff_r8 = 1;
  unaff_r6 = 0;
  unaff_r7 = 0;
  in_r12 = &PTR_LAB_01882324;
  ppuVar7 = (undefined **)0x0;
  uVar5 = 0;
switchD_01013d58_caseD_1:
  *(undefined1 *)(param_1 + 8) = uVar5;
  *param_1 = ppuVar7;
  param_1[1] = ppuVar6;
  param_1[2] = ppuVar1;
  param_1[3] = ppuVar4;
  param_1[4] = in_r12;
  param_1[5] = unaff_r8;
  param_1[6] = unaff_r7;
  param_1[7] = unaff_r6;
  *(undefined2 *)((int)param_1 + 0x21) = local_38;
  *(undefined1 *)((int)param_1 + 0x23) = local_36;
  return;
}

