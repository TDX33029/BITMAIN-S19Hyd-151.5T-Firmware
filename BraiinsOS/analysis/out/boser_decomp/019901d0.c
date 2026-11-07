// FUN_019901d0 @ 019901d0 size=5192 calls_out=3 calls_in=8
// strings: 

void FUN_019901d0(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  char local_38;
  undefined2 local_37;
  undefined1 uStack_35;
  uint *puStack_34;
  uint *local_30;
  uint local_2c;
  
  uVar12 = (uint)*(ushort *)((int)param_4 + 10);
  uVar18 = param_3 >> 8;
  uVar19 = param_3 >> 0x10;
  puVar15 = (uint *)*param_2;
  uVar13 = param_2[1];
  uVar9 = uVar12;
LAB_01990204:
  uVar11 = uVar13;
  puVar16 = puVar15;
  uVar1 = (undefined2)uVar9;
  uVar10 = uVar11;
  uVar13 = uVar11;
  switch(uVar9 & 0xffff) {
  case 1:
    goto switchD_01990220_caseD_1;
  case 2:
    goto switchD_01990220_caseD_2;
  case 3:
    if (1 < uVar11) {
      puVar15 = (uint *)((int)puVar16 + 2);
      uVar10 = (uint)(ushort)*puVar16;
      uVar11 = uVar11 - 2;
LAB_01990d70:
      *param_2 = puVar15;
      param_2[1] = uVar11;
      puVar16 = puVar15;
      if (uVar10 <= uVar11) {
        iVar5 = uVar11 - uVar10;
        puVar14 = (uint *)((int)puVar15 + uVar10);
        goto LAB_019913f4;
      }
    }
    break;
  case 4:
    if (3 < uVar11) {
      puVar15 = puVar16 + 1;
      uVar10 = *puVar16;
      uVar11 = uVar11 - 4;
      goto LAB_01990d70;
    }
    break;
  case 5:
    if (1 < uVar11) {
      puVar15 = (uint *)(uint)(ushort)*puVar16;
      uVar8 = 3;
LAB_01991604:
      uVar19 = (uint)puVar15 >> 8;
      *param_2 = (ushort *)((int)puVar16 + 2);
      param_2[1] = uVar11 - 2;
      goto LAB_01991610;
    }
    break;
  case 6:
    if ((param_3 & 0xff00) != 0x400) goto switchD_01990b5c_caseD_3;
    switch(*(undefined2 *)(param_4 + 2)) {
    case 2:
    case 0x10:
    case 0x19:
    case 0x2a:
    case 0x2c:
    case 0x40:
    case 0x43:
    case 0x46:
    case 0x48:
    case 0x4a:
    case 0x4d:
    case 0x55:
    case 0x79:
switchD_01990b5c_caseD_2:
      if (3 < uVar11) {
        puStack_34 = (uint *)*puVar16;
        uVar8 = 10;
        goto LAB_01991a88;
      }
      goto LAB_01991a50;
    case 0x38:
      if ((uVar19 & 0xfffffffe) == 2) goto switchD_01990b5c_caseD_2;
    }
switchD_01990b5c_caseD_3:
    if (uVar11 < 4) goto LAB_01991a50;
    puStack_34 = (uint *)*puVar16;
    uVar8 = 4;
LAB_01991a88:
    uVar18 = (uint)puStack_34 >> 0x10;
    uVar19 = (uint)puStack_34 >> 8;
    *param_2 = puVar16 + 1;
    param_2[1] = uVar11 - 4;
    goto LAB_0199161c;
  case 7:
    if ((param_3 & 0xff00) != 0x800) goto switchD_01990e70_caseD_3;
    switch(*(undefined2 *)(param_4 + 2)) {
    case 2:
    case 0x10:
    case 0x19:
    case 0x2a:
    case 0x2c:
    case 0x40:
    case 0x43:
    case 0x46:
    case 0x48:
    case 0x4a:
    case 0x4d:
    case 0x55:
    case 0x79:
switchD_01990e70_caseD_2:
      FUN_01997cd4(&local_38,param_2,8);
      if (local_38 != 'R') {
        *(undefined2 *)((int)param_1 + 9) = local_37;
        *param_1 = 0x2e;
        param_1[1] = 0;
        *(undefined1 *)((int)param_1 + 0xb) = uStack_35;
        param_1[3] = puStack_34;
        param_1[4] = local_30;
        param_1[5] = local_2c;
        goto LAB_01991b20;
      }
      uVar8 = 10;
      local_30 = puStack_34;
      break;
    case 0x38:
      if ((uVar19 & 0xfffffffe) == 2) goto switchD_01990e70_caseD_2;
    default:
switchD_01990e70_caseD_3:
      FUN_01997d7c(&local_38,param_2);
      if (local_38 != 'R') {
        param_1[3] = puStack_34;
        *(uint *)((int)param_1 + 9) = CONCAT13(puStack_34._0_1_,CONCAT12(uStack_35,local_37));
        *param_1 = 0x2e;
        param_1[4] = local_30;
        param_1[5] = local_2c;
        param_1[1] = 0;
LAB_01991b20:
        *(char *)(param_1 + 2) = local_38;
        return;
      }
      uVar8 = 5;
      uVar11 = local_2c;
    }
    uVar19 = (uint)local_30 >> 8;
    uVar18 = (uint)local_30 >> 0x10;
    puStack_34 = local_30;
    goto LAB_0199161c;
  case 8:
    if (uVar11 == 0) goto LAB_01991a50;
    uVar13 = 0;
    goto LAB_01990928;
  case 9:
    if (uVar11 == 0) goto LAB_01991410;
    uVar9 = 0;
    uVar19 = 0;
    uVar18 = 0;
    puVar15 = puVar16;
    goto LAB_01990ad4;
  case 10:
    if (uVar11 != 0) {
      puVar15 = (uint *)((int)puVar16 + 1);
      uVar10 = (uint)(byte)*puVar16;
      uVar11 = uVar11 - 1;
      goto LAB_01990d70;
    }
    break;
  case 0xb:
    if (uVar11 != 0) {
      uVar8 = 2;
LAB_01991158:
      param_2[1] = uVar11 - 1;
      puVar15 = (uint *)(uint)(byte)*puVar16;
      *param_2 = (byte *)((int)puVar16 + 1);
      goto LAB_01991164;
    }
    break;
  case 0xc:
    if (uVar11 != 0) {
      uVar8 = 9;
      puVar15 = (uint *)(uint)((byte)*puVar16 != 0);
      *param_2 = (byte *)((int)puVar16 + 1);
      param_2[1] = uVar11 - 1;
      goto LAB_01991164;
    }
    break;
  case 0xd:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar10 = 0;
    uVar13 = 0;
    puVar14 = puVar16;
    uVar19 = uVar11;
    goto LAB_019908b4;
  case 0xe:
    if ((uVar18 & 0xff) == 8) {
      if (uVar11 < 8) goto LAB_01991550;
      bVar17 = *(byte *)((int)puVar16 + 7);
      uVar18 = *(uint *)((int)puVar16 + 3);
      *param_2 = puVar16 + 2;
      param_2[1] = uVar11 - 8;
      if (bVar17 == 0 && uVar18 >> 8 == 0) {
        puVar15 = (uint *)(uVar18 << 0x18 | (uint)(uint3)*puVar16);
        goto LAB_0199151c;
      }
LAB_01991408:
      uVar2 = 0x38;
      goto LAB_0199155c;
    }
    if (uVar11 < 4) goto LAB_01991550;
    puVar15 = (uint *)*puVar16;
    *param_2 = puVar16 + 1;
    param_2[1] = uVar11 - 4;
LAB_0199151c:
    uVar18 = (uint)puVar15 >> 0x10;
    uVar19 = (uint)puVar15 >> 8;
    uVar8 = 0x1a;
    puVar16 = puVar15;
    goto LAB_01991618;
  case 0xf:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar10 = 0;
    uVar18 = 0;
    puVar14 = puVar16;
    goto LAB_01991208;
  case 0x10:
    if (uVar19 == 2) {
      FUN_01997dfc(&local_38,param_2);
    }
    else {
      FUN_01997cd4(&local_38,param_2,uVar18);
    }
    if (local_38 != 'R') {
      *(undefined1 *)((int)param_1 + 0xb) = uStack_35;
      *(undefined2 *)((int)param_1 + 9) = local_37;
      *param_1 = 0x2e;
      param_1[4] = local_30;
      param_1[1] = 0;
      param_1[3] = puStack_34;
      param_1[5] = local_2c;
      goto LAB_01991a6c;
    }
    uVar8 = 0xe;
    uVar18 = (uint)puStack_34 >> 0x10;
    uVar19 = (uint)puStack_34 >> 8;
    goto LAB_0199161c;
  case 0x11:
    if (uVar11 != 0) {
      uVar8 = 0xd;
      goto LAB_01991158;
    }
    break;
  case 0x12:
    if (1 < uVar11) {
      puVar15 = (uint *)(uint)(ushort)*puVar16;
      uVar8 = 0xd;
      goto LAB_01991604;
    }
    break;
  case 0x13:
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      puVar14 = puVar15;
      goto LAB_019907f0;
    }
    break;
  case 0x14:
    if (uVar11 < 8) {
LAB_01990824:
      uVar18 = 0;
      uVar2 = 0x13;
      goto LAB_019914d4;
    }
    bVar17 = *(byte *)((int)puVar16 + 7);
    uVar18 = *(uint *)((int)puVar16 + 3);
    *param_2 = puVar16 + 2;
    param_2[1] = uVar11 - 8;
    if (bVar17 != 0 || uVar18 >> 8 != 0) goto LAB_019914d0;
    puVar15 = (uint *)(uint)(uint3)*puVar16;
    puVar14 = (uint *)(uVar18 << 0x18 | (uint)puVar15);
    goto LAB_019907f0;
  case 0x15:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar19 = 0;
    uVar18 = 0;
    puVar14 = puVar16;
    goto LAB_019909a4;
  case 0x16:
    if (uVar11 == 0) {
      uVar2 = 0x13;
      goto LAB_01991958;
    }
    uVar10 = *puVar16;
    puVar15 = (uint *)((int)puVar16 + 1);
    uVar13 = uVar11 - 1;
    uVar9 = (byte)uVar10 & 0x7f;
    *param_2 = puVar15;
    param_2[1] = uVar13;
    if (0x7fffffff < (uint)(int)(char)(byte)uVar10) {
      if (uVar13 == 0) {
        uVar2 = 0x13;
        puVar16 = puVar15;
      }
      else {
        uVar13 = uVar11 - 2;
        puVar15 = (uint *)((int)puVar16 + 2);
        param_2[1] = uVar13;
        bVar17 = *(byte *)((int)puVar16 + 1);
        *param_2 = puVar15;
        uVar9 = uVar9 | (bVar17 & 0x7f) << 7;
        if ((uint)(int)(char)bVar17 < 0x80000000) goto LAB_01990204;
        if (uVar13 == 0) {
          uVar2 = 0x13;
          puVar16 = puVar15;
        }
        else {
          param_2[1] = uVar11 - 3;
          bVar17 = *(byte *)((int)puVar16 + 2);
          *param_2 = (uint *)((int)puVar16 + 3);
          if (bVar17 < 4) {
            uVar9 = uVar9 | (uint)bVar17 << 0xe;
            puVar15 = (uint *)((int)puVar16 + 3);
            uVar13 = uVar11 - 3;
            goto LAB_01990204;
          }
          uVar2 = 6;
        }
      }
LAB_01991958:
      *param_1 = 0x2e;
      param_1[1] = 0;
      param_1[3] = puVar16;
      param_1[4] = puVar16;
      param_1[5] = 0;
      *(undefined2 *)((int)param_1 + 10) = uVar1;
      *(undefined1 *)(param_1 + 2) = uVar2;
      return;
    }
    goto LAB_01990204;
  case 0x17:
    if ((uVar18 & 0xff) == 8) {
      if (uVar11 < 8) goto LAB_01991550;
      bVar17 = *(byte *)((int)puVar16 + 7);
      uVar18 = *(uint *)((int)puVar16 + 3);
      *param_2 = puVar16 + 2;
      param_2[1] = uVar11 - 8;
      if (bVar17 != 0 || uVar18 >> 8 != 0) goto LAB_01991408;
      puVar15 = (uint *)(uVar18 << 0x18 | (uint)(uint3)*puVar16);
LAB_01991470:
      uVar18 = (uint)puVar15 >> 0x10;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 10;
      puVar16 = puVar15;
      goto LAB_01991618;
    }
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      goto LAB_01991470;
    }
    goto LAB_01991550;
  case 0x18:
    if (uVar11 == 0) {
LAB_01991410:
      bVar17 = 0;
      puVar14 = puVar16;
      goto LAB_01991414;
    }
    uVar9 = 0;
    uVar19 = 0;
    uVar18 = 0;
    puVar15 = puVar16;
    goto LAB_01990db8;
  case 0x19:
    uVar8 = 9;
    puVar15 = (uint *)&DAT_00000001;
LAB_01991164:
    uVar19 = 0;
LAB_01991610:
    uVar18 = 0;
    goto LAB_01991614;
  case 0x1a:
switchD_01990220_caseD_1a:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar9 = 0;
    uVar18 = 0;
    puVar14 = puVar16;
    goto LAB_01990514;
  case 0x1b:
switchD_01990220_caseD_1b:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar9 = 0;
    uVar18 = 0;
    puVar14 = puVar16;
    goto LAB_01990438;
  case 0x1c:
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      puVar16 = puVar15;
LAB_019914c4:
      uVar19 = (uint)puVar16 >> 8;
      uVar18 = (uint)puVar16 >> 0x10;
      uVar8 = 0xf;
      goto LAB_01991614;
    }
    break;
  case 0x1d:
switchD_01990220_caseD_1d:
    if ((uVar18 & 0xff) == 8) {
      if (uVar11 < 8) goto LAB_01991550;
      bVar17 = *(byte *)((int)puVar16 + 7);
      uVar18 = *(uint *)((int)puVar16 + 3);
      *param_2 = puVar16 + 2;
      param_2[1] = uVar11 - 8;
      if (bVar17 != 0 || uVar18 >> 8 != 0) goto LAB_01991408;
      puVar15 = (uint *)(uVar18 << 0x18 | (uint)(uint3)*puVar16);
LAB_019905e8:
      uVar18 = (uint)puVar15 >> 0x10;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 0x1b;
      puVar16 = puVar15;
      goto LAB_01991618;
    }
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      goto LAB_019905e8;
    }
    goto LAB_01991550;
  case 0x1e:
    if (0xf < uVar11) {
      iVar5 = uVar11 - 0x10;
      puVar14 = puVar16 + 4;
      uVar10 = 0x10;
      puVar15 = puVar16;
LAB_019913f4:
      uVar19 = (uint)puVar15 >> 8;
      uVar18 = (uint)puVar15 >> 0x10;
      *param_2 = puVar14;
      param_2[1] = iVar5;
      uVar8 = 1;
      goto LAB_01991614;
    }
    break;
  case 0x1f:
    if ((uVar18 & 0xff) == 8) {
      if (7 < uVar11) {
        bVar17 = *(byte *)((int)puVar16 + 7);
        uVar18 = *(uint *)((int)puVar16 + 3);
        *param_2 = puVar16 + 2;
        param_2[1] = uVar11 - 8;
        if (bVar17 != 0 || uVar18 >> 8 != 0) goto LAB_01991408;
        puVar15 = (uint *)(uVar18 << 0x18 | (uint)(uint3)*puVar16);
        goto LAB_0199177c;
      }
    }
    else if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
LAB_0199177c:
      uVar18 = (uint)puVar15 >> 0x10;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 0x1e;
      puVar16 = puVar15;
      goto LAB_01991618;
    }
LAB_01991550:
    uVar18 = 0;
    uVar2 = 0x13;
LAB_0199155c:
    *(undefined1 *)(param_1 + 2) = uVar2;
    param_1[3] = puVar16;
    param_1[4] = puVar16;
    *param_1 = 0x2e;
    param_1[1] = 0;
    param_1[5] = uVar18;
    return;
  case 0x20:
    if (7 < uVar11) {
      bVar17 = *(byte *)((int)puVar16 + 7);
      uVar19 = *(uint *)((int)puVar16 + 3);
      param_2[1] = uVar11 - 8;
      uVar18 = *puVar16;
      uVar10 = (uint)bVar17 << 0x18 | uVar19 >> 8;
      *param_2 = puVar16 + 2;
      puVar15 = (uint *)(uint)(uint3)uVar18;
      uVar19 = (uint)puVar15 | uVar19 << 0x18;
      uVar18 = uVar19 >> 0x10;
      uVar19 = uVar19 >> 8;
      uVar8 = 0x19;
      goto LAB_01991614;
    }
    break;
  case 0x21:
    if (uVar12 != 0x21) {
      *param_1 = 0x2e;
      param_1[1] = 0;
      uVar2 = 0x49;
      goto LAB_01991304;
    }
    uVar8 = 6;
    puStack_34 = (uint *)*param_4;
    uVar11 = param_4[1];
    uVar18 = (uint)puStack_34 >> 0x10;
    uVar19 = (uint)puStack_34 >> 8;
    goto LAB_0199161c;
  case 0x22:
    if (uVar11 == 0) goto LAB_019913a4;
    puVar15 = (uint *)0x0;
    uVar19 = 0;
    uVar18 = 0;
    puVar14 = puVar16;
    goto LAB_01991338;
  case 0x23:
    if (uVar11 != 0) {
      puVar15 = (uint *)0x0;
      uVar19 = 0;
      uVar18 = 0;
      puVar14 = puVar16;
      goto LAB_019906f4;
    }
LAB_019913a4:
    bVar17 = 0;
    uVar2 = 0x13;
    goto LAB_019918a0;
  case 0x24:
    if (uVar11 < 8) goto LAB_01990824;
    bVar17 = *(byte *)((int)puVar16 + 7);
    uVar18 = *(uint *)((int)puVar16 + 3);
    *param_2 = puVar16 + 2;
    param_2[1] = uVar11 - 8;
    if (bVar17 == 0 && uVar18 >> 8 == 0) {
      puVar15 = (uint *)(uint)(uint3)*puVar16;
      puVar16 = (uint *)(uVar18 << 0x18 | (uint)puVar15);
      goto LAB_019914c4;
    }
LAB_019914d0:
    uVar2 = 0x38;
LAB_019914d4:
    param_1[4] = puVar16;
    *param_1 = 0x2e;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar2;
    param_1[3] = puVar16;
    param_1[5] = uVar18;
    return;
  case 0x25:
    if (uVar11 != 0) {
      uVar8 = 0x1d;
      goto LAB_01991158;
    }
    break;
  case 0x26:
    if (1 < uVar11) {
      puVar15 = (uint *)(uint)(ushort)*puVar16;
      uVar8 = 0x1d;
      goto LAB_01991604;
    }
    break;
  case 0x27:
    if (2 < uVar11) {
      uVar18 = (uint)*(byte *)((int)puVar16 + 2);
      uVar19 = *puVar16;
      *param_2 = (byte *)((int)puVar16 + 3);
      puVar15 = (uint *)(uint)(uint3)uVar19;
      param_2[1] = uVar11 - 3;
      goto LAB_019916b4;
    }
    break;
  case 0x28:
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      uVar19 = uVar11;
      goto LAB_019916b0;
    }
    break;
  case 0x29:
    if (uVar11 != 0) {
      uVar8 = 0xc;
      goto LAB_01991158;
    }
    break;
  case 0x2a:
    if (1 < uVar11) {
      puVar15 = (uint *)(uint)(ushort)*puVar16;
      uVar8 = 0xc;
      goto LAB_01991604;
    }
    break;
  case 0x2b:
    if (2 < uVar11) {
      uVar18 = (uint)*(byte *)((int)puVar16 + 2);
      uVar19 = *puVar16;
      *param_2 = (byte *)((int)puVar16 + 3);
      puVar15 = (uint *)(uint)(uint3)uVar19;
      param_2[1] = uVar11 - 3;
      goto LAB_01991694;
    }
    break;
  case 0x2c:
    if (3 < uVar11) {
      puVar15 = (uint *)*puVar16;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      uVar19 = uVar11;
      goto LAB_01991690;
    }
    break;
  default:
    switch(uVar9 & 0xffff) {
    case 0x1f01:
      goto switchD_01990220_caseD_1b;
    case 0x1f02:
      goto switchD_01990220_caseD_1a;
    default:
switchD_01990220_caseD_2:
      *param_1 = 0x2e;
      param_1[1] = 0;
      uVar2 = 0xc;
      *(undefined2 *)((int)param_1 + 10) = uVar1;
      goto LAB_01991304;
    case 0x1f20:
      goto switchD_01990388_caseD_1f20;
    case 0x1f21:
      goto switchD_01990220_caseD_1d;
    }
  }
  *param_1 = 0x2e;
  param_1[1] = 0;
  uVar2 = 0x13;
  param_1[3] = puVar16;
  param_1[4] = puVar16;
  param_1[5] = 0;
LAB_01991304:
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
switchD_01990388_caseD_1f20:
  if ((uVar18 & 0xff) == 8) {
    if (uVar11 < 8) goto LAB_01991550;
    bVar17 = *(byte *)((int)puVar16 + 7);
    uVar18 = *(uint *)((int)puVar16 + 3);
    *param_2 = puVar16 + 2;
    param_2[1] = uVar11 - 8;
    if (bVar17 != 0 || uVar18 >> 8 != 0) goto LAB_01991408;
    puVar16 = (uint *)(uVar18 << 0x18 | (uint)(uint3)*puVar16);
LAB_0199143c:
    uVar18 = (uint)puVar16 >> 0x10;
    uVar19 = (uint)puVar16 >> 8;
    uVar8 = 0xf;
    goto LAB_01991618;
  }
  if (3 < uVar11) {
    puVar15 = puVar16 + 1;
    puVar16 = (uint *)*puVar16;
    *param_2 = puVar15;
    param_2[1] = uVar11 - 4;
    goto LAB_0199143c;
  }
  goto LAB_01991550;
  while( true ) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) break;
LAB_019906f4:
    uVar13 = uVar13 - 1;
    puVar6 = (uint *)((int)puVar14 + 1);
    bVar17 = (byte)*puVar14;
    if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
    uVar12 = uVar18 & 0x3f;
    uVar4 = bVar17 & 0x7f;
    uVar10 = uVar12 - 0x20;
    uVar9 = uVar4 << uVar12;
    if (-1 < (int)uVar10) {
      uVar9 = 0;
    }
    puVar15 = (uint *)(uVar9 | (uint)puVar15);
    uVar9 = uVar4 >> (0x20 - uVar12 & 0xff);
    if (-1 < (int)uVar10) {
      uVar9 = uVar4 << (uVar10 & 0xff);
    }
    uVar19 = uVar9 | uVar19;
    if ((uint)(int)(char)bVar17 < 0x80000000) {
      *param_2 = puVar6;
      param_2[1] = uVar13;
      if (uVar19 != 0) goto LAB_01991898;
      uVar18 = (uint)puVar15 >> 0x10;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 0x18;
      goto LAB_01991614;
    }
  }
  goto LAB_01991394;
  while( true ) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) break;
LAB_01991338:
    uVar13 = uVar13 - 1;
    puVar6 = (uint *)((int)puVar14 + 1);
    bVar17 = (byte)*puVar14;
    if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
    uVar12 = uVar18 & 0x3f;
    uVar4 = bVar17 & 0x7f;
    uVar10 = uVar12 - 0x20;
    uVar9 = uVar4 << uVar12;
    if (-1 < (int)uVar10) {
      uVar9 = 0;
    }
    puVar15 = (uint *)(uVar9 | (uint)puVar15);
    uVar9 = uVar4 >> (0x20 - uVar12 & 0xff);
    if (-1 < (int)uVar10) {
      uVar9 = uVar4 << (uVar10 & 0xff);
    }
    uVar19 = uVar9 | uVar19;
    if ((uint)(int)(char)bVar17 < 0x80000000) {
      *param_2 = puVar6;
      param_2[1] = uVar13;
      if (uVar19 != 0) goto LAB_01991898;
      uVar18 = (uint)puVar15 >> 0x10;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 0x13;
      goto LAB_01991614;
    }
  }
  goto LAB_01991394;
LAB_01990438:
  uVar13 = uVar13 - 1;
  puVar6 = (uint *)((int)puVar14 + 1);
  bVar17 = (byte)*puVar14;
  if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
  uVar10 = uVar18 & 0x3f;
  uVar4 = bVar17 & 0x7f;
  uVar19 = uVar10 - 0x20;
  uVar12 = uVar4 << uVar10;
  if (-1 < (int)uVar19) {
    uVar12 = 0;
  }
  puVar15 = (uint *)(uVar12 | (uint)puVar15);
  uVar12 = uVar4 >> (0x20 - uVar10 & 0xff);
  if (-1 < (int)uVar19) {
    uVar12 = uVar4 << (uVar19 & 0xff);
  }
  uVar9 = uVar12 | uVar9;
  if (0x7fffffff < (uint)(int)(char)bVar17) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) goto LAB_01991394;
    goto LAB_01990438;
  }
  *param_2 = puVar6;
  param_2[1] = uVar13;
  if (uVar9 != 0) goto LAB_01991898;
LAB_01991690:
  uVar18 = (uint)puVar15 >> 0x10;
  uVar11 = uVar19;
LAB_01991694:
  uVar19 = (uint)puVar15 >> 8;
  uVar8 = 0xc;
  uVar10 = uVar11;
  goto LAB_01991614;
LAB_019909a4:
  uVar13 = uVar13 - 1;
  puVar6 = (uint *)((int)puVar14 + 1);
  bVar17 = (byte)*puVar14;
  if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
  uVar12 = uVar18 & 0x3f;
  uVar4 = bVar17 & 0x7f;
  uVar10 = uVar12 - 0x20;
  uVar9 = uVar4 << uVar12;
  if (-1 < (int)uVar10) {
    uVar9 = 0;
  }
  puVar15 = (uint *)(uVar9 | (uint)puVar15);
  uVar9 = uVar4 >> (0x20 - uVar12 & 0xff);
  if (-1 < (int)uVar10) {
    uVar9 = uVar4 << (uVar10 & 0xff);
  }
  uVar19 = uVar9 | uVar19;
  if (0x7fffffff < (uint)(int)(char)bVar17) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) goto LAB_01991394;
    goto LAB_019909a4;
  }
  *param_2 = puVar6;
  param_2[1] = uVar13;
  puVar14 = puVar15;
  if (uVar19 == 0) goto LAB_019907f0;
LAB_01991898:
  uVar2 = 0x38;
LAB_0199189c:
  puVar16 = (uint *)((int)puVar16 + uVar11);
  bVar17 = 0;
  goto LAB_019918a0;
LAB_019907f0:
  uVar19 = (uint)puVar14 >> 8;
  uVar18 = (uint)puVar14 >> 0x10;
  uVar8 = 0xd;
  goto LAB_01991614;
  while( true ) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) break;
LAB_01991208:
    uVar13 = uVar13 - 1;
    puVar6 = (uint *)((int)puVar14 + 1);
    bVar17 = (byte)*puVar14;
    if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
    uVar9 = uVar18 & 0x3f;
    uVar12 = bVar17 & 0x7f;
    uVar4 = uVar9 - 0x20;
    uVar19 = uVar12 << uVar9;
    if (-1 < (int)uVar4) {
      uVar19 = 0;
    }
    puVar15 = (uint *)(uVar19 | (uint)puVar15);
    uVar19 = uVar12 >> (0x20 - uVar9 & 0xff);
    if (-1 < (int)uVar4) {
      uVar19 = uVar12 << (uVar4 & 0xff);
    }
    uVar10 = uVar19 | uVar10;
    if ((uint)(int)(char)bVar17 < 0x80000000) {
      uVar18 = (uint)puVar15 >> 0x10;
      *param_2 = puVar6;
      param_2[1] = uVar13;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 7;
      goto LAB_01991614;
    }
  }
  goto LAB_01991394;
LAB_019913b4:
  uVar2 = 6;
  *param_2 = puVar6;
  param_2[1] = uVar13;
  goto LAB_0199189c;
LAB_01990ad4:
  uVar13 = uVar13 - 1;
  puVar14 = (uint *)((int)puVar15 + 1);
  bVar17 = (byte)*puVar15;
  if ((uVar18 == 0x3f) && (1 < bVar17)) {
LAB_01991648:
    *param_2 = puVar14;
    uVar2 = 6;
    param_2[1] = uVar13;
    bVar17 = 0;
  }
  else {
    uVar10 = uVar18 & 0x3f;
    uVar4 = bVar17 & 0x7f;
    uVar7 = uVar10 - 0x20;
    uVar12 = uVar4 << uVar10;
    if (-1 < (int)uVar7) {
      uVar12 = 0;
    }
    uVar9 = uVar12 | uVar9;
    uVar12 = uVar4 >> (0x20 - uVar10 & 0xff);
    if (-1 < (int)uVar7) {
      uVar12 = uVar4 << (uVar7 & 0xff);
    }
    uVar19 = uVar12 | uVar19;
    if (0x7fffffff < (uint)(int)(char)bVar17) goto code_r0x01990b1c;
    *param_2 = puVar14;
    param_2[1] = uVar13;
    if (uVar19 == 0) {
      if (uVar9 <= uVar13) {
        iVar5 = uVar13 - uVar9;
        pbVar3 = (byte *)((int)puVar14 + uVar9);
        uVar8 = 1;
LAB_01991a20:
        uVar18 = (uint)puVar14 >> 0x10;
        *param_2 = pbVar3;
        param_2[1] = iVar5;
        uVar19 = (uint)puVar14 >> 8;
        uVar11 = uVar9;
        puVar16 = puVar14;
        goto LAB_01991618;
      }
LAB_01991840:
      bVar17 = 0;
      uVar2 = 0x13;
    }
    else {
LAB_0199184c:
      uVar2 = 0x38;
      bVar17 = 0;
    }
  }
  goto LAB_0199165c;
code_r0x01990b1c:
  uVar18 = uVar18 + 7;
  puVar15 = puVar14;
  if (uVar13 == 0) goto LAB_01990e14;
  goto LAB_01990ad4;
LAB_01990928:
  if (*(byte *)((int)puVar16 + uVar13) == 0) {
    uVar18 = (uint)puVar16 >> 0x10;
    *param_2 = (byte *)((int)puVar16 + uVar13 + 1);
    param_2[1] = uVar11 + ~uVar13;
    uVar19 = (uint)puVar16 >> 8;
    uVar8 = 0x1f;
    uVar11 = uVar13;
    goto LAB_01991618;
  }
  uVar13 = uVar13 + 1;
  if (uVar11 == uVar13) {
LAB_01991a50:
    *param_1 = 0x2e;
    param_1[1] = 0;
    local_38 = '\x13';
    param_1[4] = puVar16;
    param_1[3] = puVar16;
    param_1[5] = 0;
LAB_01991a6c:
    *(char *)(param_1 + 2) = local_38;
    return;
  }
  goto LAB_01990928;
switchD_01990220_caseD_1:
  uVar2 = 0x19;
  switch(param_3 & 0xff) {
  case 1:
    if (uVar11 != 0) {
      uVar19 = 0;
      param_2[1] = uVar11 - 1;
      puStack_34 = (uint *)(uint)(byte)*puVar16;
      *param_2 = (byte *)((int)puVar16 + 1);
LAB_01991920:
      uVar18 = 0;
LAB_01991924:
      uVar11 = 0;
      uVar8 = 0;
      goto LAB_0199161c;
    }
    break;
  case 2:
    if (1 < uVar11) {
      puStack_34 = (uint *)(uint)(ushort)*puVar16;
      uVar19 = (uint)(ushort)((ushort)*puVar16 >> 8);
      *param_2 = (ushort *)((int)puVar16 + 2);
      param_2[1] = uVar11 - 2;
      goto LAB_01991920;
    }
    break;
  default:
    goto switchD_01990a64_caseD_3;
  case 4:
    if (3 < uVar11) {
      puStack_34 = (uint *)*puVar16;
      uVar18 = (uint)puStack_34 >> 0x10;
      uVar19 = (uint)puStack_34 >> 8;
      *param_2 = puVar16 + 1;
      param_2[1] = uVar11 - 4;
      goto LAB_01991924;
    }
    break;
  case 8:
    if (uVar11 < 8) break;
    bVar17 = *(byte *)((int)puVar16 + 7);
    uVar19 = *(uint *)((int)puVar16 + 3);
    param_2[1] = uVar11 - 8;
    uVar18 = *puVar16;
    uVar11 = (uint)bVar17 << 0x18 | uVar19 >> 8;
    *param_2 = puVar16 + 2;
    puVar16 = (uint *)(uint)(uint3)uVar18;
    uVar19 = (uint)puVar16 | uVar19 << 0x18;
    uVar18 = uVar19 >> 0x10;
    uVar19 = uVar19 >> 8;
    uVar8 = 0;
    goto LAB_01991618;
  }
  uVar12 = 0;
  uVar2 = 0x13;
switchD_01990a64_caseD_3:
  *param_1 = 0x2e;
  param_1[1] = 0;
  *(char *)((int)param_1 + 9) = (char)param_3;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = puVar16;
  param_1[4] = puVar16;
  param_1[5] = uVar12;
  return;
  while( true ) {
    uVar18 = uVar18 + 7;
    puVar15 = puVar14;
    if (uVar13 == 0) break;
LAB_01990db8:
    uVar13 = uVar13 - 1;
    puVar14 = (uint *)((int)puVar15 + 1);
    bVar17 = (byte)*puVar15;
    if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_01991648;
    uVar10 = uVar18 & 0x3f;
    uVar4 = bVar17 & 0x7f;
    uVar7 = uVar10 - 0x20;
    uVar12 = uVar4 << uVar10;
    if (-1 < (int)uVar7) {
      uVar12 = 0;
    }
    uVar9 = uVar12 | uVar9;
    uVar12 = uVar4 >> (0x20 - uVar10 & 0xff);
    if (-1 < (int)uVar7) {
      uVar12 = uVar4 << (uVar7 & 0xff);
    }
    uVar19 = uVar12 | uVar19;
    if ((uint)(int)(char)bVar17 < 0x80000000) {
      *param_2 = puVar14;
      param_2[1] = uVar13;
      if (uVar19 != 0) goto LAB_0199184c;
      if (uVar13 < uVar9) goto LAB_01991840;
      iVar5 = uVar13 - uVar9;
      pbVar3 = (byte *)((int)puVar14 + uVar9);
      uVar8 = 8;
      goto LAB_01991a20;
    }
  }
LAB_01990e14:
  *param_2 = (uint *)((int)puVar16 + uVar11);
  param_2[1] = 0;
  puVar14 = (uint *)((int)puVar16 + uVar11);
LAB_01991414:
  uVar2 = 0x13;
LAB_0199165c:
  *param_1 = 0x2e;
  param_1[1] = 0;
  param_1[3] = puVar14;
  param_1[4] = puVar14;
  param_1[5] = 0;
  *(byte *)((int)param_1 + 9) = bVar17;
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
LAB_01990514:
  uVar13 = uVar13 - 1;
  puVar6 = (uint *)((int)puVar14 + 1);
  bVar17 = (byte)*puVar14;
  if ((uVar18 == 0x3f) && (1 < bVar17)) goto LAB_019913b4;
  uVar10 = uVar18 & 0x3f;
  uVar4 = bVar17 & 0x7f;
  uVar19 = uVar10 - 0x20;
  uVar12 = uVar4 << uVar10;
  if (-1 < (int)uVar19) {
    uVar12 = 0;
  }
  puVar15 = (uint *)(uVar12 | (uint)puVar15);
  uVar12 = uVar4 >> (0x20 - uVar10 & 0xff);
  if (-1 < (int)uVar19) {
    uVar12 = uVar4 << (uVar19 & 0xff);
  }
  uVar9 = uVar12 | uVar9;
  if (0x7fffffff < (uint)(int)(char)bVar17) {
    uVar18 = uVar18 + 7;
    puVar14 = puVar6;
    if (uVar13 == 0) goto LAB_01991394;
    goto LAB_01990514;
  }
  *param_2 = puVar6;
  param_2[1] = uVar13;
  if (uVar9 != 0) goto LAB_01991898;
LAB_019916b0:
  uVar18 = (uint)puVar15 >> 0x10;
  uVar11 = uVar19;
LAB_019916b4:
  uVar19 = (uint)puVar15 >> 8;
  uVar8 = 0x1d;
  uVar10 = uVar11;
LAB_01991614:
  uVar11 = uVar10;
  puVar16 = puVar15;
LAB_01991618:
  puStack_34 = puVar16;
LAB_0199161c:
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_4 + 2);
  *param_1 = uVar8;
  param_1[1] = 0;
  param_1[2] = (uint)puStack_34 & 0xff | (uVar19 & 0xff) << 8 | uVar18 << 0x10;
  param_1[3] = uVar11;
  return;
  while (puVar14 = puVar6, uVar19 != 0) {
LAB_019908b4:
    uVar19 = uVar19 - 1;
    puVar6 = (uint *)((int)puVar14 + 1);
    bVar17 = (byte)*puVar14;
    uVar9 = (uint)bVar17;
    if ((uVar13 == 0x3f) && (uVar9 != 0x7f && uVar9 != 0)) {
      *param_2 = puVar6;
      param_2[1] = uVar19;
      uVar2 = 7;
      goto LAB_0199189c;
    }
    uVar12 = uVar13 & 0x3f;
    uVar4 = uVar9 & 0x7f;
    uVar7 = uVar12 - 0x20;
    uVar13 = uVar13 + 7;
    uVar18 = uVar4 << uVar12;
    if (-1 < (int)uVar7) {
      uVar18 = 0;
    }
    puVar15 = (uint *)(uVar18 | (uint)puVar15);
    uVar18 = uVar4 >> (0x20 - uVar12 & 0xff);
    if (-1 < (int)uVar7) {
      uVar18 = uVar4 << (uVar7 & 0xff);
    }
    uVar10 = uVar18 | uVar10;
    if ((uint)(int)(char)bVar17 < 0x80000000) {
      uVar18 = (uint)puVar15 >> 0x10;
      *param_2 = puVar6;
      param_2[1] = uVar19;
      uVar19 = (uint)puVar15 >> 8;
      uVar8 = 6;
      if (0x3f < (int)uVar13) goto LAB_01991614;
      uVar11 = uVar10;
      puVar16 = puVar15;
      if (0x3f < uVar9) {
        uVar9 = 0xffffffff;
        uVar19 = (uVar13 & 0x3f) - 0x20;
        uVar18 = -1 << (uVar13 & 0x3f);
        if (-1 < (int)uVar19) {
          uVar18 = 0;
        }
        puVar16 = (uint *)((uint)puVar15 | uVar18);
        if (-1 < (int)uVar19) {
          uVar9 = -1 << (uVar19 & 0xff);
        }
        uVar18 = (uint)puVar16 >> 0x10;
        uVar19 = (uint)puVar16 >> 8;
        uVar11 = uVar10 | uVar9;
      }
      goto LAB_01991618;
    }
  }
LAB_01991394:
  puVar16 = (uint *)((int)puVar16 + uVar11);
  uVar2 = 0x13;
  *param_2 = puVar16;
  param_2[1] = 0;
LAB_019918a0:
  *param_1 = 0x2e;
  *(byte *)((int)param_1 + 9) = bVar17;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = puVar16;
  param_1[4] = puVar16;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}

