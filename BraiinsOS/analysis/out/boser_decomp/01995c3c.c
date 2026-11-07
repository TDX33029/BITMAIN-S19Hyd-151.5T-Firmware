// FUN_01995c3c @ 01995c3c size=1872 calls_out=0 calls_in=2
// strings: 

void FUN_01995c3c(undefined1 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  ushort *puVar19;
  ushort *local_58;
  ushort *local_54;
  ushort *local_50;
  ushort *local_4c;
  ushort *local_48;
  ushort local_44;
  
  if (param_5 != 0) {
    iVar5 = param_4 + param_5 * 0x10;
    uVar14 = param_3 >> 8;
    if ((param_3 & 0xffff0000) == 0x20000) {
      uVar14 = param_3;
    }
    puVar9 = (ushort *)*param_2;
    puVar13 = (ushort *)0x0;
    puVar17 = (ushort *)param_2[1];
LAB_01995c80:
    uVar10 = *(ushort *)(param_4 + 10);
    uVar11 = (uint)uVar10;
    uVar12 = 1;
    puVar6 = &switchD_01995c9c::switchdataD_01995ca0;
    puVar19 = puVar17;
    switch(uVar11) {
    case 1:
switchD_01995c9c_caseD_1:
      uVar12 = param_3;
      puVar19 = puVar17;
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
switchD_01995c9c_caseD_2:
      if (puVar13 != (ushort *)0x0) {
        if (puVar17 < puVar13) {
          *(ushort **)(param_1 + 8) = puVar9;
          *(undefined4 *)(param_1 + 0xc) = 0;
          goto LAB_019963b0;
        }
        puVar17 = (ushort *)((int)puVar17 - (int)puVar13);
        puVar9 = (ushort *)((int)puVar9 + (int)puVar13);
        *param_2 = puVar9;
        param_2[1] = puVar17;
      }
      puVar13 = puVar9;
      puVar8 = puVar9;
      bVar4 = 0xb8;
      switch(uVar11) {
      case 3:
switchD_01995db4_caseD_3:
        if (puVar17 < (ushort *)0x2) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(ushort **)(param_1 + 4) = puVar13;
          *(ushort **)(param_1 + 8) = puVar13;
          *(short *)(param_1 + 2) = (short)local_58;
LAB_01996458:
          uVar3 = 0x13;
          goto LAB_0199645c;
        }
        puVar19 = puVar17 + -1;
        puVar9 = puVar13 + 1;
        puVar13 = (ushort *)(uint)*puVar13;
        local_58 = puVar13;
        goto LAB_01996350;
      case 4:
switchD_01995db4_caseD_4:
        if (puVar17 < &SUB_00000004) {
          *(ushort **)(param_1 + 4) = puVar8;
LAB_01996450:
          *(ushort **)(param_1 + 8) = puVar8;
          *(undefined4 *)(param_1 + 0xc) = 0;
          goto LAB_01996458;
        }
        puVar19 = puVar17 + -2;
        puVar9 = puVar8 + 2;
        puVar13 = *(ushort **)puVar8;
        goto LAB_01996350;
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
        goto switchD_01995db4_caseD_5;
      case 8:
switchD_01995db4_caseD_8:
        if (puVar17 == (ushort *)0x0) {
LAB_01996444:
          *(ushort **)(param_1 + 4) = local_48;
          goto LAB_01996450;
        }
        puVar9 = (ushort *)0x0;
        while (*(byte *)((int)puVar8 + (int)puVar9) != 0) {
          puVar9 = (ushort *)((int)puVar9 + 1);
          if (puVar17 == puVar9) goto LAB_01996444;
        }
        puVar19 = (ushort *)((int)puVar17 + ~(uint)puVar9);
        puVar9 = (ushort *)((byte *)((int)puVar8 + (int)puVar9) + 1);
        *param_2 = puVar9;
        param_2[1] = puVar19;
        puVar13 = (ushort *)0x0;
        local_48 = puVar8;
        break;
      case 9:
      case 0x18:
switchD_01995db4_caseD_9:
        if (puVar17 == (ushort *)0x0) {
          bVar4 = 0;
LAB_01996420:
          local_50 = (ushort *)0x0;
          uVar3 = 0x13;
          local_4c = puVar8;
LAB_01996428:
          param_1[1] = bVar4;
          *param_1 = uVar3;
          *(ushort **)(param_1 + 4) = local_4c;
          *(ushort **)(param_1 + 8) = local_4c;
          *(ushort **)(param_1 + 0xc) = local_50;
          return;
        }
        uVar12 = 0;
        uVar11 = 0;
        puVar13 = (ushort *)0x0;
        puVar1 = puVar8;
        puVar19 = puVar17;
        while( true ) {
          puVar19 = (ushort *)((int)puVar19 + -1);
          puVar9 = (ushort *)((int)puVar1 + 1);
          bVar4 = (byte)*puVar1;
          if ((uVar11 == 0x3f) && (1 < bVar4)) {
            uVar3 = 6;
            *param_2 = puVar9;
            param_2[1] = puVar19;
            goto LAB_019963fc;
          }
          uVar16 = uVar11 & 0x3f;
          uVar15 = bVar4 & 0x7f;
          uVar18 = uVar15 << uVar16;
          uVar7 = uVar15 >> (0x20 - uVar16 & 0xff);
          if (-1 < (int)(uVar16 - 0x20)) {
            uVar18 = 0;
            uVar7 = uVar15 << (uVar16 - 0x20 & 0xff);
          }
          uVar12 = uVar7 | uVar12;
          puVar13 = (ushort *)(uVar18 | (uint)puVar13);
          if ((uint)(int)(char)bVar4 < 0x80000000) break;
          uVar11 = uVar11 + 7;
          puVar1 = puVar9;
          if (puVar19 == (ushort *)0x0) {
            puVar8 = (ushort *)((int)puVar8 + (int)puVar17);
            *param_2 = puVar8;
            param_2[1] = 0;
            goto LAB_01996420;
          }
        }
        *param_2 = puVar9;
        param_2[1] = puVar19;
        if (uVar12 != 0) {
          uVar3 = 0x38;
          local_50 = puVar19;
LAB_019963fc:
          bVar4 = 0;
          goto LAB_01996428;
        }
        local_50 = (ushort *)0x0;
        local_4c = puVar13;
        break;
      case 10:
switchD_01995db4_caseD_a:
        if (puVar17 == (ushort *)0x0) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(ushort **)(param_1 + 4) = puVar13;
          *(ushort **)(param_1 + 8) = puVar13;
          param_1[1] = (char)local_54;
          goto LAB_01996458;
        }
        puVar19 = (ushort *)((int)puVar17 + -1);
        puVar9 = (ushort *)((int)puVar13 + 1);
        puVar13 = (ushort *)(uint)(byte)*puVar13;
        local_54 = puVar13;
LAB_01996350:
        *param_2 = puVar9;
        param_2[1] = puVar19;
        break;
      case 0xd:
      case 0xf:
      case 0x15:
      case 0x1a:
      case 0x1b:
      case 0x22:
      case 0x23:
switchD_01995db4_caseD_d:
        puVar13 = puVar9;
joined_r0x019961e0:
        puVar8 = puVar13;
        puVar19 = puVar17;
        if (puVar17 == (ushort *)0x0) {
LAB_01996398:
          *(ushort **)(param_1 + 4) = puVar13;
          *(ushort **)(param_1 + 8) = puVar13;
          *(undefined4 *)(param_1 + 0xc) = 0;
          param_1[1] = bVar4;
LAB_019963b0:
          *param_1 = 0x13;
          return;
        }
        while( true ) {
          puVar19 = (ushort *)((int)puVar19 + -1);
          puVar9 = (ushort *)((int)puVar8 + 1);
          bVar4 = (byte)*puVar8;
          if ((uint)(int)(char)bVar4 < 0x80000000) break;
          puVar8 = puVar9;
          if (puVar19 == (ushort *)0x0) {
            puVar13 = (ushort *)((int)puVar13 + (int)puVar17);
            *param_2 = puVar13;
            param_2[1] = 0;
            goto LAB_01996398;
          }
        }
        *param_2 = puVar9;
        param_2[1] = puVar19;
        puVar13 = (ushort *)0x0;
        break;
      case 0x16:
        puVar13 = puVar9;
        if (puVar17 == (ushort *)0x0) {
LAB_01996510:
          puVar9 = puVar13;
LAB_01996514:
          uVar3 = 0x13;
LAB_0199651c:
          *(ushort **)(param_1 + 4) = puVar9;
          *(ushort **)(param_1 + 8) = puVar9;
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(ushort *)(param_1 + 2) = local_44;
          *param_1 = uVar3;
          return;
        }
        puVar13 = (ushort *)((int)puVar9 + 1);
        uVar2 = *puVar9;
        puVar19 = (ushort *)((int)puVar17 + -1);
        *param_2 = puVar13;
        uVar10 = (byte)uVar2 & 0x7f;
        param_2[1] = puVar19;
        if ((char)(byte)uVar2 < '\0') {
          if (puVar19 == (ushort *)0x0) goto LAB_01996510;
          bVar4 = *(byte *)((int)puVar9 + 1);
          puVar13 = puVar9 + 1;
          puVar19 = puVar17 + -1;
          *param_2 = puVar13;
          uVar10 = uVar10 | (bVar4 & 0x7f) << 7;
          param_2[1] = puVar19;
          if ((char)bVar4 < '\0') {
            if (puVar19 == (ushort *)0x0) {
LAB_01996550:
              puVar9 = puVar13;
              uVar3 = 0x13;
              goto LAB_0199651c;
            }
            uVar2 = puVar9[1];
            param_2[1] = (ushort *)((int)puVar17 + -3);
            *param_2 = (ushort *)((int)puVar9 + 3);
            if (3 < (byte)uVar2) {
              uVar3 = 6;
              goto LAB_0199651c;
            }
            uVar10 = uVar10 | (ushort)(byte)uVar2 << 0xe;
            puVar19 = (ushort *)((int)puVar17 + -3);
            puVar13 = (ushort *)((int)puVar9 + 3);
          }
        }
LAB_01996008:
        puVar9 = puVar13;
        puVar17 = puVar19;
        local_44 = uVar10;
        if (uVar10 - 1 < 0x2c) {
          uVar11 = (&switchD_0199602c::switchdataD_01996030)[uVar10 - 1];
          puVar8 = puVar9;
          switch(uVar10) {
          case 1:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_1;
          case 2:
            goto switchD_0199602c_caseD_2;
          case 3:
            puVar13 = puVar9;
            goto switchD_01995db4_caseD_3;
          case 4:
            goto switchD_01995db4_caseD_4;
          case 5:
          case 0x12:
          case 0x26:
          case 0x2a:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_5;
          case 6:
          case 0x13:
          case 0x1c:
          case 0x28:
          case 0x2c:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_6;
          case 7:
          case 0x14:
          case 0x20:
          case 0x24:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_7;
          case 8:
            goto switchD_01995db4_caseD_8;
          case 9:
          case 0x18:
            goto switchD_01995db4_caseD_9;
          case 10:
            puVar13 = puVar9;
            goto switchD_01995db4_caseD_a;
          case 0xb:
          case 0xc:
          case 0x11:
          case 0x25:
          case 0x29:
            puVar13 = (ushort *)0x0;
            puVar19 = puVar17;
            goto switchD_01995c9c_caseD_b;
          default:
            goto switchD_0199602c_caseD_d;
          case 0xe:
          case 0x17:
          case 0x1d:
          case 0x1f:
            goto switchD_0199602c_caseD_e;
          case 0x10:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_10;
          case 0x16:
            goto switchD_0199602c_caseD_16;
          case 0x19:
          case 0x21:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_19;
          case 0x1e:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_1e;
          case 0x27:
          case 0x2b:
            puVar13 = (ushort *)0x0;
            goto switchD_01995c9c_caseD_27;
          }
        }
        uVar11 = (uint)uVar10;
        if (uVar11 - 0x1f01 < 2) {
switchD_0199602c_caseD_d:
          bVar4 = (byte)uVar11;
          puVar13 = puVar9;
          goto joined_r0x019961e0;
        }
        if (uVar11 - 0x1f20 < 2) {
switchD_0199602c_caseD_e:
          puVar13 = (ushort *)0x0;
          goto switchD_01995c9c_caseD_e;
        }
switchD_0199602c_caseD_2:
        goto switchD_01995db4_caseD_5;
      default:
        bVar4 = (byte)puVar6;
        if (uVar11 - 0x1f01 < 2) goto switchD_01995db4_caseD_d;
switchD_01995db4_caseD_5:
        uVar3 = 0xc;
        *(ushort *)(param_1 + 2) = uVar10;
LAB_0199645c:
        *param_1 = uVar3;
        return;
      }
      goto LAB_01996300;
    case 5:
    case 0x12:
    case 0x26:
    case 0x2a:
switchD_01995c9c_caseD_5:
      uVar12 = 2;
      puVar19 = puVar17;
      break;
    case 6:
    case 0x13:
    case 0x1c:
    case 0x28:
    case 0x2c:
switchD_01995c9c_caseD_6:
      uVar12 = 4;
      puVar19 = puVar17;
      break;
    case 7:
    case 0x14:
    case 0x20:
    case 0x24:
switchD_01995c9c_caseD_7:
      uVar12 = 8;
      puVar19 = puVar17;
      break;
    case 0xb:
    case 0xc:
    case 0x11:
    case 0x25:
    case 0x29:
      break;
    case 0xe:
    case 0x17:
    case 0x1d:
    case 0x1f:
      goto switchD_01995c9c_caseD_e;
    case 0x10:
switchD_01995c9c_caseD_10:
      uVar12 = uVar14;
      puVar19 = puVar17;
      break;
    case 0x19:
    case 0x21:
switchD_01995c9c_caseD_19:
      uVar12 = 0;
      puVar19 = puVar17;
      break;
    case 0x1e:
switchD_01995c9c_caseD_1e:
      uVar12 = 0x10;
      puVar19 = puVar17;
      break;
    case 0x27:
    case 0x2b:
switchD_01995c9c_caseD_27:
      uVar12 = 3;
      puVar19 = puVar17;
      break;
    default:
      puVar6 = (uint *)(uVar11 - 0x1f20);
      if ((uint *)0x1 < puVar6) goto switchD_01995c9c_caseD_2;
      goto switchD_01995c9c_caseD_e;
    }
    goto switchD_01995c9c_caseD_b;
  }
  goto LAB_019963d0;
switchD_0199602c_caseD_16:
  if (puVar17 == (ushort *)0x0) {
    local_44 = 0x16;
    goto LAB_01996514;
  }
  puVar19 = (ushort *)((int)puVar17 + -1);
  puVar13 = (ushort *)((int)puVar9 + 1);
  uVar2 = *puVar9;
  *param_2 = puVar13;
  uVar10 = (byte)uVar2 & 0x7f;
  param_2[1] = puVar19;
  if (0x7fffffff < (uint)(int)(char)(byte)uVar2) {
    if (puVar19 == (ushort *)0x0) {
      local_44 = 0x16;
      goto LAB_01996510;
    }
    bVar4 = *(byte *)((int)puVar9 + 1);
    puVar13 = puVar9 + 1;
    puVar19 = puVar17 + -1;
    *param_2 = puVar13;
    param_2[1] = puVar19;
    uVar10 = uVar10 | (bVar4 & 0x7f) << 7;
    if (0x7fffffff < (uint)(int)(char)bVar4) {
      if (puVar19 == (ushort *)0x0) {
        local_44 = 0x16;
        goto LAB_01996550;
      }
      uVar2 = puVar9[1];
      *param_2 = (ushort *)((int)puVar9 + 3);
      param_2[1] = (ushort *)((int)puVar17 + -3);
      if (3 < (byte)uVar2) {
        uVar3 = 6;
        local_44 = 0x16;
        goto LAB_0199651c;
      }
      uVar10 = uVar10 | (ushort)(byte)uVar2 << 0xe;
      puVar19 = (ushort *)((int)puVar17 + -3);
      puVar13 = (ushort *)((int)puVar9 + 3);
    }
  }
  goto LAB_01996008;
switchD_01995c9c_caseD_e:
  uVar12 = param_3 >> 8;
  puVar19 = puVar17;
switchD_01995c9c_caseD_b:
  puVar13 = (ushort *)((int)puVar13 + (uVar12 & 0xff));
LAB_01996300:
  param_4 = param_4 + 0x10;
  puVar17 = puVar19;
  if (param_4 == iVar5) goto LAB_01996360;
  goto LAB_01995c80;
LAB_01996360:
  if (puVar13 != (ushort *)0x0) {
    if (puVar19 < puVar13) {
      *(ushort **)(param_1 + 8) = puVar9;
      *(undefined4 *)(param_1 + 0xc) = 0;
      uVar3 = 0x13;
      goto LAB_019963d4;
    }
    *param_2 = (byte *)((int)puVar9 + (int)puVar13);
    param_2[1] = (int)puVar19 - (int)puVar13;
  }
LAB_019963d0:
  uVar3 = 0x52;
LAB_019963d4:
  *param_1 = uVar3;
  return;
}

