// FUN_015db29c @ 015db29c size=1980 calls_out=0 calls_in=2
// strings: 

void FUN_015db29c(undefined1 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  ushort *puVar6;
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
  
  if (param_5 == 0) goto LAB_015dba70;
  iVar4 = param_4 + param_5 * 0x10;
  uVar14 = param_3 >> 8;
  if ((param_3 & 0xffff0000) == 0x20000) {
    uVar14 = param_3;
  }
  puVar8 = (ushort *)*param_2;
  puVar17 = (ushort *)param_2[1];
  puVar13 = (ushort *)0x0;
LAB_015db308:
  uVar10 = *(ushort *)(param_4 + 10);
  uVar11 = (uint)uVar10;
  uVar12 = 1;
  puVar5 = &switchD_015db324::switchdataD_015db328;
  switch(uVar11) {
  case 1:
switchD_015db324_caseD_1:
    uVar12 = param_3;
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
switchD_015db324_caseD_2:
    if (puVar13 != (ushort *)0x0) {
      if (puVar17 < puVar13) {
        *(ushort **)(param_1 + 8) = puVar8;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *param_1 = 0x13;
        return;
      }
      puVar17 = (ushort *)((int)puVar17 - (int)puVar13);
      puVar8 = (ushort *)((int)puVar8 + (int)puVar13);
      *param_2 = puVar8;
      param_2[1] = puVar17;
    }
    bVar3 = 0x28;
    switch(uVar11) {
    case 3:
switchD_015db424_caseD_3:
      if (puVar17 < &SUB_00000002) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(ushort **)(param_1 + 4) = puVar8;
        *(ushort **)(param_1 + 8) = puVar8;
        *(short *)(param_1 + 2) = (short)local_58;
        *param_1 = 0x13;
        return;
      }
      puVar17 = puVar17 + -1;
      puVar9 = puVar8 + 1;
      puVar13 = (ushort *)(uint)*puVar8;
      local_58 = puVar13;
      goto LAB_015db9e0;
    case 4:
switchD_015db424_caseD_4:
      if (puVar17 < &DAT_00000004) {
        *(ushort **)(param_1 + 4) = puVar8;
LAB_015dbaf0:
        *(ushort **)(param_1 + 8) = puVar8;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *param_1 = 0x13;
        return;
      }
      puVar17 = puVar17 + -2;
      puVar9 = puVar8 + 2;
      puVar13 = *(ushort **)puVar8;
      goto LAB_015db9e0;
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
      goto switchD_015db424_caseD_5;
    case 8:
switchD_015db424_caseD_8:
      if (puVar17 == (ushort *)0x0) {
LAB_015dbae4:
        *(ushort **)(param_1 + 4) = local_48;
        goto LAB_015dbaf0;
      }
      puVar19 = (ushort *)0x0;
      while (*(byte *)((int)puVar8 + (int)puVar19) != 0) {
        puVar19 = (ushort *)((int)puVar19 + 1);
        if (puVar17 == puVar19) goto LAB_015dbae4;
      }
      *param_2 = (byte *)((int)puVar8 + (int)puVar19) + 1;
      param_2[1] = (ushort *)((int)puVar17 + ~(uint)puVar19);
      puVar13 = (ushort *)0x0;
      puVar17 = (ushort *)((int)puVar17 + ~(uint)puVar19);
      puVar9 = (ushort *)((byte *)((int)puVar8 + (int)puVar19) + 1);
      local_48 = puVar8;
      break;
    case 9:
    case 0x18:
joined_r0x015db8b8:
      if (puVar17 == (ushort *)0x0) {
        bVar3 = 0;
LAB_015dbac0:
        local_50 = (ushort *)0x0;
        uVar2 = 0x13;
        local_4c = puVar8;
LAB_015dbac8:
        param_1[1] = bVar3;
        *param_1 = uVar2;
        *(ushort **)(param_1 + 4) = local_4c;
        *(ushort **)(param_1 + 8) = local_4c;
        *(ushort **)(param_1 + 0xc) = local_50;
        return;
      }
      uVar12 = 0;
      uVar11 = 0;
      puVar13 = (ushort *)0x0;
      puVar19 = puVar8;
      puVar6 = puVar17;
      while( true ) {
        puVar6 = (ushort *)((int)puVar6 + -1);
        puVar9 = (ushort *)((int)puVar19 + 1);
        bVar3 = (byte)*puVar19;
        if ((uVar11 == 0x3f) && (1 < bVar3)) {
          uVar2 = 6;
          *param_2 = puVar9;
          param_2[1] = puVar6;
          goto LAB_015dba9c;
        }
        uVar16 = uVar11 & 0x3f;
        uVar15 = bVar3 & 0x7f;
        uVar18 = uVar15 << uVar16;
        uVar7 = uVar15 >> (0x20 - uVar16 & 0xff);
        if (-1 < (int)(uVar16 - 0x20)) {
          uVar18 = 0;
          uVar7 = uVar15 << (uVar16 - 0x20 & 0xff);
        }
        uVar12 = uVar7 | uVar12;
        puVar13 = (ushort *)(uVar18 | (uint)puVar13);
        if ((uint)(int)(char)bVar3 < 0x80000000) break;
        uVar11 = uVar11 + 7;
        puVar19 = puVar9;
        if (puVar6 == (ushort *)0x0) {
          puVar8 = (ushort *)((int)puVar8 + (int)puVar17);
          *param_2 = puVar8;
          param_2[1] = 0;
          goto LAB_015dbac0;
        }
      }
      *param_2 = puVar9;
      param_2[1] = puVar6;
      if (uVar12 != 0) {
        uVar2 = 0x38;
        local_50 = puVar6;
LAB_015dba9c:
        bVar3 = 0;
        goto LAB_015dbac8;
      }
      local_50 = (ushort *)0x0;
      local_4c = puVar13;
      puVar17 = puVar6;
      break;
    case 10:
switchD_015db424_caseD_a:
      if (puVar17 == (ushort *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(ushort **)(param_1 + 4) = puVar8;
        *(ushort **)(param_1 + 8) = puVar8;
        param_1[1] = (char)local_54;
        *param_1 = 0x13;
        return;
      }
      puVar17 = (ushort *)((int)puVar17 + -1);
      puVar9 = (ushort *)((int)puVar8 + 1);
      puVar13 = (ushort *)(uint)(byte)*puVar8;
      local_54 = puVar13;
LAB_015db9e0:
      *param_2 = puVar9;
      param_2[1] = puVar17;
      break;
    case 0xd:
    case 0xf:
    case 0x15:
    case 0x1a:
    case 0x1b:
    case 0x22:
    case 0x23:
      goto switchD_015db424_caseD_d;
    case 0x16:
      puVar13 = puVar8;
      if (puVar17 == (ushort *)0x0) {
LAB_015dbbdc:
        puVar8 = puVar13;
LAB_015dbbe0:
        uVar2 = 0x13;
LAB_015dbbe8:
        *(ushort **)(param_1 + 4) = puVar8;
        *(ushort **)(param_1 + 8) = puVar8;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(ushort *)(param_1 + 2) = local_44;
        *param_1 = uVar2;
        return;
      }
      puVar13 = (ushort *)((int)puVar8 + 1);
      uVar1 = *puVar8;
      puVar19 = (ushort *)((int)puVar17 + -1);
      *param_2 = puVar13;
      uVar10 = (byte)uVar1 & 0x7f;
      param_2[1] = puVar19;
      if ((char)(byte)uVar1 < '\0') {
        if (puVar19 == (ushort *)0x0) goto LAB_015dbbdc;
        bVar3 = *(byte *)((int)puVar8 + 1);
        puVar13 = puVar8 + 1;
        puVar19 = puVar17 + -1;
        *param_2 = puVar13;
        uVar10 = uVar10 | (bVar3 & 0x7f) << 7;
        param_2[1] = puVar19;
        if ((char)bVar3 < '\0') {
          if (puVar19 == (ushort *)0x0) {
LAB_015dbc1c:
            puVar8 = puVar13;
            uVar2 = 0x13;
            goto LAB_015dbbe8;
          }
          uVar1 = puVar8[1];
          param_2[1] = (ushort *)((int)puVar17 + -3);
          *param_2 = (ushort *)((int)puVar8 + 3);
          if (3 < (byte)uVar1) {
            uVar2 = 6;
            goto LAB_015dbbe8;
          }
          uVar10 = uVar10 | (ushort)(byte)uVar1 << 0xe;
          puVar19 = (ushort *)((int)puVar17 + -3);
          puVar13 = (ushort *)((int)puVar8 + 3);
        }
      }
LAB_015db690:
      puVar8 = puVar13;
      puVar17 = puVar19;
      local_44 = uVar10;
      if (uVar10 - 1 < 0x2c) {
        uVar11 = (&switchD_015db6b4::switchdataD_015db6b8)[uVar10 - 1];
        switch(uVar10) {
        case 1:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_1;
        case 2:
          goto switchD_015db6b4_caseD_2;
        case 3:
          goto switchD_015db424_caseD_3;
        case 4:
          goto switchD_015db424_caseD_4;
        case 5:
        case 0x12:
        case 0x26:
        case 0x2a:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_5;
        case 6:
        case 0x13:
        case 0x1c:
        case 0x28:
        case 0x2c:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_6;
        case 7:
        case 0x14:
        case 0x20:
        case 0x24:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_7;
        case 8:
          goto switchD_015db424_caseD_8;
        case 9:
        case 0x18:
          goto joined_r0x015db8b8;
        case 10:
          goto switchD_015db424_caseD_a;
        case 0xb:
        case 0xc:
        case 0x11:
        case 0x25:
        case 0x29:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_b;
        default:
          goto switchD_015db6b4_caseD_d;
        case 0xe:
        case 0x17:
        case 0x1d:
        case 0x1f:
          goto switchD_015db6b4_caseD_e;
        case 0x10:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_10;
        case 0x16:
          goto switchD_015db6b4_caseD_16;
        case 0x19:
        case 0x21:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_19;
        case 0x1e:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_1e;
        case 0x27:
        case 0x2b:
          puVar13 = (ushort *)0x0;
          goto switchD_015db324_caseD_27;
        }
      }
      uVar11 = (uint)uVar10;
      if (1 < uVar11 - 0x1f01) {
        if (1 < uVar11 - 0x1f20) {
switchD_015db6b4_caseD_2:
switchD_015db424_caseD_5:
          *(ushort *)(param_1 + 2) = uVar10;
          *param_1 = 0xc;
          return;
        }
switchD_015db6b4_caseD_e:
        puVar13 = (ushort *)0x0;
        goto switchD_015db324_caseD_e;
      }
switchD_015db6b4_caseD_d:
      bVar3 = (byte)uVar11;
      goto joined_r0x015db868;
    default:
      bVar3 = (byte)puVar5;
      if (1 < uVar11 - 0x1f01) goto switchD_015db424_caseD_5;
      goto switchD_015db424_caseD_d;
    }
    goto joined_r0x015db610;
  case 5:
  case 0x12:
  case 0x26:
  case 0x2a:
switchD_015db324_caseD_5:
    uVar12 = 2;
    break;
  case 6:
  case 0x13:
  case 0x1c:
  case 0x28:
  case 0x2c:
switchD_015db324_caseD_6:
    uVar12 = 4;
    break;
  case 7:
  case 0x14:
  case 0x20:
  case 0x24:
switchD_015db324_caseD_7:
    uVar12 = 8;
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
    goto switchD_015db324_caseD_e;
  case 0x10:
switchD_015db324_caseD_10:
    uVar12 = uVar14;
    break;
  case 0x19:
  case 0x21:
switchD_015db324_caseD_19:
    uVar12 = 0;
    break;
  case 0x1e:
switchD_015db324_caseD_1e:
    uVar12 = 0x10;
    break;
  case 0x27:
  case 0x2b:
switchD_015db324_caseD_27:
    uVar12 = 3;
    break;
  default:
    puVar5 = (uint *)(uVar11 - 0x1f20);
    if ((uint *)0x1 < puVar5) goto switchD_015db324_caseD_2;
    goto switchD_015db324_caseD_e;
  }
  goto switchD_015db324_caseD_b;
switchD_015db6b4_caseD_16:
  if (puVar17 == (ushort *)0x0) {
    local_44 = 0x16;
    goto LAB_015dbbe0;
  }
  puVar19 = (ushort *)((int)puVar17 + -1);
  puVar13 = (ushort *)((int)puVar8 + 1);
  uVar1 = *puVar8;
  *param_2 = puVar13;
  uVar10 = (byte)uVar1 & 0x7f;
  param_2[1] = puVar19;
  if (0x7fffffff < (uint)(int)(char)(byte)uVar1) {
    if (puVar19 == (ushort *)0x0) {
      local_44 = 0x16;
      goto LAB_015dbbdc;
    }
    bVar3 = *(byte *)((int)puVar8 + 1);
    puVar13 = puVar8 + 1;
    puVar19 = puVar17 + -1;
    *param_2 = puVar13;
    param_2[1] = puVar19;
    uVar10 = uVar10 | (bVar3 & 0x7f) << 7;
    if (0x7fffffff < (uint)(int)(char)bVar3) {
      if (puVar19 == (ushort *)0x0) {
        local_44 = 0x16;
        goto LAB_015dbc1c;
      }
      uVar1 = puVar8[1];
      *param_2 = (ushort *)((int)puVar8 + 3);
      param_2[1] = (ushort *)((int)puVar17 + -3);
      if (3 < (byte)uVar1) {
        uVar2 = 6;
        local_44 = 0x16;
        goto LAB_015dbbe8;
      }
      uVar10 = uVar10 | (ushort)(byte)uVar1 << 0xe;
      puVar19 = (ushort *)((int)puVar17 + -3);
      puVar13 = (ushort *)((int)puVar8 + 3);
    }
  }
  goto LAB_015db690;
switchD_015db324_caseD_e:
  uVar12 = param_3 >> 8;
switchD_015db324_caseD_b:
  puVar13 = (ushort *)((int)puVar13 + (uVar12 & 0xff));
  puVar9 = puVar8;
joined_r0x015db610:
  puVar8 = puVar9;
  param_4 = param_4 + 0x10;
  if (param_4 == iVar4) goto LAB_015db9f8;
  goto LAB_015db308;
switchD_015db424_caseD_d:
joined_r0x015db868:
  puVar13 = puVar8;
  puVar19 = puVar17;
  if (puVar17 == (ushort *)0x0) {
LAB_015dba38:
    *(ushort **)(param_1 + 4) = puVar8;
    *(ushort **)(param_1 + 8) = puVar8;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1[1] = bVar3;
    *param_1 = 0x13;
    return;
  }
  while( true ) {
    puVar19 = (ushort *)((int)puVar19 + -1);
    puVar9 = (ushort *)((int)puVar13 + 1);
    bVar3 = (byte)*puVar13;
    if ((uint)(int)(char)bVar3 < 0x80000000) break;
    puVar13 = puVar9;
    if (puVar19 == (ushort *)0x0) {
      puVar8 = (ushort *)((int)puVar8 + (int)puVar17);
      *param_2 = puVar8;
      param_2[1] = 0;
      goto LAB_015dba38;
    }
  }
  *param_2 = puVar9;
  param_2[1] = puVar19;
  puVar13 = (ushort *)0x0;
  puVar17 = puVar19;
  goto joined_r0x015db610;
LAB_015db9f8:
  if (puVar13 != (ushort *)0x0) {
    if (puVar17 < puVar13) {
      *(ushort **)(param_1 + 8) = puVar8;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *param_1 = 0x13;
      return;
    }
    *param_2 = (byte *)((int)puVar8 + (int)puVar13);
    param_2[1] = (int)puVar17 - (int)puVar13;
  }
LAB_015dba70:
  *param_1 = 0x52;
  return;
}

