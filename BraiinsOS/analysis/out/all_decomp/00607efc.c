// FUN_00607efc @ 00607efc size=1612 calls_out=0 calls_in=2
// strings: 

void FUN_00607efc(undefined1 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined1 uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort *local_50;
  ushort *local_4c;
  ushort *local_48;
  ushort *local_44;
  ushort *local_40;
  int local_3c;
  ushort local_38;
  
  if (param_5 != 0) {
    uVar3 = param_3 >> 8;
    if ((param_3 & 0xffff0000) == 0x20000) {
      uVar3 = param_3;
    }
    iVar18 = param_4 + param_5 * 0x10;
    puVar15 = (ushort *)0x0;
    puVar14 = (ushort *)*param_2;
    puVar6 = (ushort *)param_2[1];
LAB_00607f6c:
    uVar11 = *(ushort *)(param_4 + 10);
    uVar12 = (uint)uVar11;
    uVar8 = 1;
    switch(uVar12) {
    case 1:
switchD_00607f88_caseD_1:
      uVar8 = param_3;
      break;
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
switchD_00607f88_caseD_2:
      if (puVar15 != (ushort *)0x0) {
        if (puVar6 < puVar15) {
          *(ushort **)(param_1 + 8) = puVar14;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *param_1 = 0x13;
          return;
        }
        puVar6 = (ushort *)((int)puVar6 - (int)puVar15);
        puVar14 = (ushort *)((int)puVar14 + (int)puVar15);
        *param_2 = puVar14;
        param_2[1] = puVar6;
      }
      switch(uVar12) {
      case 3:
switchD_00608084_caseD_3:
        if (puVar6 < &SUB_00000002) {
          *(ushort **)(param_1 + 4) = puVar14;
          *(ushort **)(param_1 + 8) = puVar14;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(short *)(param_1 + 2) = (short)local_48;
          *param_1 = 0x13;
          return;
        }
        puVar4 = puVar14 + 1;
        puVar15 = (ushort *)(uint)*puVar14;
        puVar6 = puVar6 + -1;
        local_48 = puVar15;
        goto LAB_00608538;
      case 4:
switchD_00608084_caseD_4:
        if (puVar6 < &DAT_00000004) {
          *(ushort **)(param_1 + 4) = puVar14;
LAB_00608610:
          *(ushort **)(param_1 + 8) = puVar14;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *param_1 = 0x13;
          return;
        }
        puVar15 = *(ushort **)puVar14;
        puVar6 = puVar6 + -2;
        *param_2 = puVar14 + 2;
        param_2[1] = puVar6;
        puVar4 = puVar14 + 2;
        break;
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
switchD_00608084_caseD_5:
        *(ushort *)(param_1 + 2) = uVar11;
        *param_1 = 0xc;
        return;
      case 8:
switchD_00608084_caseD_8:
        if (puVar6 == (ushort *)0x0) {
LAB_00608600:
          *(ushort **)(param_1 + 4) = local_4c;
          goto LAB_00608610;
        }
        puVar4 = (ushort *)0x0;
        while (*(byte *)((int)puVar14 + (int)puVar4) != 0) {
          puVar4 = (ushort *)((int)puVar4 + 1);
          if (puVar6 == puVar4) goto LAB_00608600;
        }
        puVar6 = (ushort *)((int)puVar6 + ~(uint)puVar4);
        puVar15 = (ushort *)0x0;
        *param_2 = (byte *)((int)puVar14 + (int)puVar4) + 1;
        param_2[1] = puVar6;
        puVar4 = (ushort *)((byte *)((int)puVar14 + (int)puVar4) + 1);
        local_4c = puVar14;
        break;
      case 9:
      case 0x18:
switchD_00608084_caseD_9:
        puVar13 = (ushort *)0x0;
        puVar15 = (ushort *)0x0;
        uVar12 = 0;
        uVar8 = 0;
        do {
          uVar9 = uVar8;
          if (puVar6 == (ushort *)0x0) {
            param_4 = 0;
            uVar5 = 0x13;
            local_40 = puVar14;
            goto LAB_006085e4;
          }
          puVar4 = (ushort *)((int)puVar14 + 1);
          uVar11 = *puVar14;
          uVar8 = (uint)(byte)uVar11;
          puVar6 = (ushort *)((int)puVar6 + -1);
          param_2[1] = puVar6;
          *param_2 = puVar4;
          puVar14 = puVar4;
          if ((puVar13 == (ushort *)&DAT_0000003f) && (1 < uVar8)) {
            uVar5 = 6;
            param_4 = local_3c;
            goto LAB_006085e4;
          }
          uVar10 = (uint)puVar13 & 0x3f;
          uVar16 = uVar8 & 0x7f;
          uVar7 = uVar10 - 0x20;
          puVar13 = (ushort *)((int)puVar13 + 7);
          uVar17 = uVar16 << uVar10;
          if (-1 < (int)uVar7) {
            uVar17 = 0;
          }
          puVar15 = (ushort *)(uVar17 | (uint)puVar15);
          uVar17 = uVar16 >> (0x20 - uVar10 & 0xff);
          if (-1 < (int)uVar7) {
            uVar17 = uVar16 << (uVar7 & 0xff);
          }
          uVar12 = uVar17 | uVar12;
        } while (0x7fffffff < (uint)(int)(char)(byte)uVar11);
        if (uVar12 != 0) {
          uVar5 = 0x38;
          puVar14 = local_50;
          local_40 = puVar13;
LAB_006085e4:
          *(ushort **)(param_1 + 4) = puVar14;
          *(ushort **)(param_1 + 8) = local_40;
          param_1[1] = (char)uVar9;
          *param_1 = uVar5;
          *(int *)(param_1 + 0xc) = param_4;
          return;
        }
        local_3c = 0;
        local_50 = puVar15;
        local_40 = puVar15;
        break;
      case 10:
switchD_00608084_caseD_a:
        if (puVar6 == (ushort *)0x0) {
          *(ushort **)(param_1 + 4) = puVar14;
          *(ushort **)(param_1 + 8) = puVar14;
          *(undefined4 *)(param_1 + 0xc) = 0;
          param_1[1] = (char)local_44;
          *param_1 = 0x13;
          return;
        }
        puVar4 = (ushort *)((int)puVar14 + 1);
        puVar15 = (ushort *)(uint)(byte)*puVar14;
        puVar6 = (ushort *)((int)puVar6 + -1);
        local_44 = puVar15;
LAB_00608538:
        *param_2 = puVar4;
        param_2[1] = puVar6;
        break;
      case 0xd:
      case 0xf:
      case 0x15:
      case 0x1a:
      case 0x1b:
      case 0x22:
      case 0x23:
        goto switchD_00608084_caseD_d;
      case 0x16:
        if (puVar6 == (ushort *)0x0) {
          puVar15 = puVar14;
LAB_006086b0:
          uVar5 = 0x13;
LAB_006086f0:
          *(ushort **)(param_1 + 4) = puVar15;
          *(ushort **)(param_1 + 8) = puVar15;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(ushort *)(param_1 + 2) = local_38;
          *param_1 = uVar5;
          return;
        }
        puVar4 = (ushort *)((int)puVar6 + -1);
        puVar15 = (ushort *)((int)puVar14 + 1);
        uVar2 = *puVar14;
        uVar11 = (byte)uVar2 & 0x7f;
        *param_2 = puVar15;
        param_2[1] = puVar4;
        if (0x7fffffff < (uint)(int)(char)(byte)uVar2) {
          if (puVar4 == (ushort *)0x0) goto LAB_006086b0;
          bVar1 = *(byte *)((int)puVar14 + 1);
          puVar4 = puVar6 + -1;
          puVar15 = puVar14 + 1;
          *param_2 = puVar15;
          param_2[1] = puVar4;
          uVar11 = uVar11 | (bVar1 & 0x7f) << 7;
          if ((char)bVar1 < '\0') {
            if (puVar4 == (ushort *)0x0) goto LAB_006086b0;
            uVar2 = puVar14[1];
            puVar15 = (ushort *)((int)puVar14 + 3);
            param_2[1] = (ushort *)((int)puVar6 + -3);
            *param_2 = puVar15;
            if (3 < (byte)uVar2) {
              uVar5 = 6;
              goto LAB_006086f0;
            }
            uVar11 = uVar11 | (ushort)(byte)uVar2 << 0xe;
            puVar4 = (ushort *)((int)puVar6 + -3);
          }
        }
LAB_00608238:
        puVar6 = puVar4;
        puVar14 = puVar15;
        local_38 = uVar11;
        switch(uVar11) {
        case 1:
          puVar15 = (ushort *)0x0;
          break;
        case 3:
          goto switchD_00608084_caseD_3;
        case 4:
          goto switchD_00608084_caseD_4;
        case 5:
        case 0x12:
        case 0x26:
        case 0x2a:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_5;
        case 6:
        case 0x13:
        case 0x1c:
        case 0x28:
        case 0x2c:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_6;
        case 7:
        case 0x14:
        case 0x20:
        case 0x24:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_7;
        case 8:
          goto switchD_00608084_caseD_8;
        case 9:
        case 0x18:
          goto switchD_00608084_caseD_9;
        case 10:
          goto switchD_00608084_caseD_a;
        case 0xb:
        case 0xc:
        case 0x11:
        case 0x25:
        case 0x29:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_b;
        case 0xd:
        case 0xf:
        case 0x15:
        case 0x1a:
        case 0x1b:
        case 0x22:
        case 0x23:
switchD_0060825c_caseD_d:
          goto switchD_00608084_caseD_d;
        case 0xe:
        case 0x17:
        case 0x1d:
        case 0x1f:
switchD_0060825c_caseD_e:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_e;
        case 0x10:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_10;
        case 0x16:
          if (puVar6 != (ushort *)0x0) goto code_r0x00608318;
          puVar15 = puVar14;
          goto LAB_006086e8;
        case 0x19:
        case 0x21:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_19;
        case 0x1e:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_1e;
        case 0x27:
        case 0x2b:
          puVar15 = (ushort *)0x0;
          goto switchD_00607f88_caseD_27;
        default:
          uVar8 = uVar11 - 0x1f01;
          if (uVar8 < 2) goto switchD_0060825c_caseD_d;
          if (uVar11 - 0x1f20 < 2) goto switchD_0060825c_caseD_e;
        case 2:
          goto switchD_00608084_caseD_5;
        }
        goto switchD_00607f88_caseD_1;
      default:
        uVar8 = uVar12 - 0x1f01;
        if (1 < uVar8) goto switchD_00608084_caseD_5;
        goto switchD_00608084_caseD_d;
      }
      goto joined_r0x006084c4;
    case 5:
    case 0x12:
    case 0x26:
    case 0x2a:
switchD_00607f88_caseD_5:
      uVar8 = 2;
      break;
    case 6:
    case 0x13:
    case 0x1c:
    case 0x28:
    case 0x2c:
switchD_00607f88_caseD_6:
      uVar8 = 4;
      break;
    case 7:
    case 0x14:
    case 0x20:
    case 0x24:
switchD_00607f88_caseD_7:
      uVar8 = 8;
      break;
    case 0xb:
    case 0xc:
    case 0x11:
    case 0x25:
    case 0x29:
      break;
    case 0x10:
switchD_00607f88_caseD_10:
      uVar8 = uVar3;
      break;
    case 0x19:
    case 0x21:
switchD_00607f88_caseD_19:
      uVar8 = 0;
      break;
    case 0x1e:
switchD_00607f88_caseD_1e:
      uVar8 = 0x10;
      break;
    case 0x27:
    case 0x2b:
switchD_00607f88_caseD_27:
      uVar8 = 3;
      break;
    default:
      if (1 < uVar12 - 0x1f20) goto switchD_00607f88_caseD_2;
    case 0xe:
    case 0x17:
    case 0x1d:
    case 0x1f:
switchD_00607f88_caseD_e:
      uVar8 = param_3 >> 8;
    }
switchD_00607f88_caseD_b:
    puVar15 = (ushort *)((int)puVar15 + (uVar8 & 0xff));
    puVar4 = puVar14;
    goto joined_r0x006084c4;
  }
  goto LAB_006085b8;
code_r0x00608318:
  puVar4 = (ushort *)((int)puVar6 + -1);
  puVar15 = (ushort *)((int)puVar14 + 1);
  uVar2 = *puVar14;
  uVar11 = (byte)uVar2 & 0x7f;
  *param_2 = puVar15;
  param_2[1] = puVar4;
  if (0x7fffffff < (uint)(int)(char)(byte)uVar2) {
    if (puVar4 != (ushort *)0x0) {
      bVar1 = *(byte *)((int)puVar14 + 1);
      puVar4 = puVar6 + -1;
      puVar15 = puVar14 + 1;
      *param_2 = puVar15;
      param_2[1] = puVar4;
      uVar11 = uVar11 | (bVar1 & 0x7f) << 7;
      if ((uint)(int)(char)bVar1 < 0x80000000) goto LAB_00608238;
      if (puVar4 != (ushort *)0x0) {
        uVar2 = puVar14[1];
        puVar15 = (ushort *)((int)puVar14 + 3);
        *param_2 = puVar15;
        param_2[1] = (ushort *)((int)puVar6 + -3);
        if (3 < (byte)uVar2) {
          uVar5 = 6;
          local_38 = 0x16;
          goto LAB_006086f0;
        }
        uVar11 = uVar11 | (ushort)(byte)uVar2 << 0xe;
        puVar4 = (ushort *)((int)puVar6 + -3);
        goto LAB_00608238;
      }
    }
LAB_006086e8:
    uVar5 = 0x13;
    local_38 = 0x16;
    goto LAB_006086f0;
  }
  goto LAB_00608238;
switchD_00608084_caseD_d:
  do {
    if (puVar6 == (ushort *)0x0) {
      *(ushort **)(param_1 + 4) = puVar14;
      *(ushort **)(param_1 + 8) = puVar14;
      *(undefined4 *)(param_1 + 0xc) = 0;
      param_1[1] = (char)uVar8;
      *param_1 = 0x13;
      return;
    }
    puVar4 = (ushort *)((int)puVar14 + 1);
    uVar8 = (uint)(char)(byte)*puVar14;
    puVar6 = (ushort *)((int)puVar6 + -1);
    puVar15 = (ushort *)0x0;
    param_2[1] = puVar6;
    *param_2 = puVar4;
    puVar14 = puVar4;
  } while ((int)uVar8 < 0);
joined_r0x006084c4:
  puVar14 = puVar4;
  param_4 = param_4 + 0x10;
  if (param_4 == iVar18) goto LAB_00608554;
  goto LAB_00607f6c;
LAB_00608554:
  if (puVar15 != (ushort *)0x0) {
    if (puVar6 < puVar15) {
      *(ushort **)(param_1 + 8) = puVar14;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *param_1 = 0x13;
      return;
    }
    *param_2 = (byte *)((int)puVar14 + (int)puVar15);
    param_2[1] = (int)puVar6 - (int)puVar15;
  }
LAB_006085b8:
  *param_1 = 0x4f;
  return;
}

