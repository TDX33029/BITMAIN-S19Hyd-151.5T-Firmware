// FUN_015cc328 @ 015cc328 size=1264 calls_out=1 calls_in=2
// strings: 

void FUN_015cc328(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *extraout_r2;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  ushort *unaff_r4;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 uVar16;
  int iVar17;
  uint *extraout_r12;
  uint *local_50;
  byte local_4c;
  uint *local_40;
  uint local_3c;
  byte local_38;
  byte local_37;
  ushort local_36;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    *param_1 = 2;
    return;
  }
  puVar7 = (uint *)*param_2;
  if (uVar12 < 4) {
    uVar9 = (uint)puVar7 & 0xffffff00;
    uVar10 = 0x13;
    local_40 = puVar7;
LAB_015cc3ec:
    uVar14 = 0;
    puVar4 = (uint *)((uint)local_40 & 0xff | uVar9);
    uVar12 = 0;
    puVar8 = local_40;
  }
  else {
    iVar17 = param_2[2];
    local_40 = puVar7 + 1;
    uVar10 = *puVar7;
    uVar13 = uVar12 - 4;
    uVar16 = 4;
    if (0xffffffef < uVar10) {
      uVar9 = 0;
      if (uVar10 == 0xffffffff) {
        if (uVar13 < 8) {
          uVar9 = (uint)local_40 & 0xffffff00;
          uVar10 = 0x13;
          goto LAB_015cc3ec;
        }
        if (*(byte *)((int)puVar7 + 0xb) == 0 && *(uint *)((int)puVar7 + 7) >> 8 == 0) {
          unaff_r4 = (ushort *)(uint)*(byte *)((int)puVar7 + 6);
          uVar16 = 8;
          uVar9 = *(uint *)((int)puVar7 + 7) << 0x18 | (uint)(uint3)*local_40;
          uVar13 = uVar12 - 0xc;
          local_40 = puVar7 + 3;
          if (uVar9 <= uVar13) goto LAB_015cc3a8;
          goto LAB_015cc3bc;
        }
        uVar10 = 0x38;
      }
      else {
        uVar10 = 0x10;
      }
      local_40 = (uint *)0x0;
      goto LAB_015cc3ec;
    }
    uVar9 = uVar10;
    if (uVar13 < uVar10) goto LAB_015cc3bc;
LAB_015cc3a8:
    puVar7 = (uint *)(uVar13 - uVar9);
    *param_2 = (byte *)((int)local_40 + uVar9);
    param_2[1] = puVar7;
    if (uVar9 < 2) goto LAB_015cc3bc;
    puVar8 = (uint *)((int)local_40 + 2);
    uVar13 = *local_40;
    puVar4 = (uint *)(uint)(ushort)uVar13;
    unaff_r4 = (ushort *)((int)puVar4 + -2);
    if (&SUB_00000002 < unaff_r4) {
      if (puVar4 != (uint *)&DAT_00000005) {
        uVar14 = 0;
        uVar10 = 0x11;
        goto LAB_015cc3c8;
      }
      if (uVar9 == 2) goto LAB_015cc5f8;
      puVar8 = (uint *)((int)local_40 + 3);
      puVar5 = puVar8;
      if (uVar9 == 3) goto LAB_015cc6cc;
      local_4c = *(byte *)((int)local_40 + 3);
      unaff_r4 = (ushort *)(uint)local_4c;
      local_3c = uVar9 - 4;
      uVar14 = (uint)*(byte *)((int)local_40 + 2);
      local_40 = local_40 + 1;
      puVar5 = local_40;
      if ((&DAT_00000008 < unaff_r4) ||
         (puVar5 = (uint *)&DAT_00000001, (1 << (int)unaff_r4 & 0x116U) == 0)) goto LAB_015cc6e0;
      puVar4 = (uint *)0x15cc534;
      FUN_015dd30c(&local_38,&local_40,uVar16);
      uVar10 = (uint)local_38;
      if (uVar10 != 0x52) {
LAB_015cc808:
        uVar12 = (uint)local_36;
        unaff_r4 = (ushort *)(uint)local_37;
        puVar4 = local_30;
        puVar8 = local_34;
        uVar14 = local_2c;
        goto LAB_015cc3c8;
      }
      puVar8 = (uint *)(uVar14 - 1);
      if (&DAT_00000005 < puVar8) {
        uVar10 = 0x42;
        puVar4 = extraout_r2;
        goto LAB_015cc3c8;
      }
      local_50 = local_34;
      uVar6 = 0;
      unaff_r4 = (ushort *)(&switchD_015cc56c::switchdataD_015cc570)[(int)puVar8];
      puVar11 = (uint *)&DAT_00000052;
      puVar5 = extraout_r12;
      switch(puVar8) {
      case (uint *)0x1:
        if (7 < local_3c) {
          bVar1 = *(byte *)((int)local_40 + 2);
          local_3c = local_3c - 8;
          uVar3 = (ushort)*local_40;
          uVar14 = *(uint *)((int)local_40 + 3);
          bVar2 = *(byte *)((int)local_40 + 7);
          local_40 = local_40 + 2;
          FUN_015dd30c(&local_38,&local_40,uVar16);
          uVar10 = (uint)local_38;
          if (uVar10 != 0x52) goto LAB_015cc808;
          uVar6 = 1;
LAB_015cc7e0:
          puVar4 = (uint *)(uVar14 >> 8 | (uint)bVar2 << 0x18);
          puVar11 = (uint *)((uint)CONCAT12(bVar1,uVar3) | uVar14 << 0x18);
          puVar5 = local_34;
          goto switchD_015cc56c_caseD_0;
        }
        break;
      case (uint *)0x2:
        uVar6 = 2;
        puVar5 = extraout_r12;
      case (uint *)0x0:
switchD_015cc56c_caseD_0:
        param_1[9] = uVar9;
        param_1[10] = local_50;
        *(ushort *)((int)param_1 + 0x22) = (ushort)uVar13;
        *(byte *)(param_1 + 8) = local_4c;
        *(undefined1 *)((int)param_1 + 0x21) = uVar16;
        *param_1 = 0;
        param_1[1] = iVar17;
        param_1[2] = uVar6;
        param_1[3] = puVar5;
        param_1[4] = puVar11;
        param_1[5] = puVar4;
        param_1[6] = local_40;
        param_1[7] = local_3c;
        param_2[2] = (uVar12 - (int)puVar7) + iVar17;
        return;
      case (uint *)0x3:
        if (7 < local_3c) {
          puVar5 = (uint *)(uint)*(byte *)((int)local_40 + 7);
          puVar4 = (uint *)(*(uint *)((int)local_40 + 3) >> 8 | (int)puVar5 << 0x18);
          puVar11 = (uint *)((uint)(uint3)*local_40 | *(uint *)((int)local_40 + 3) << 0x18);
          uVar6 = 3;
LAB_015cc780:
          local_3c = local_3c - 8;
          local_40 = local_40 + 2;
          goto switchD_015cc56c_caseD_0;
        }
        break;
      case (uint *)0x4:
        if (7 < local_3c) {
          puVar5 = (uint *)(uint)*(byte *)((int)local_40 + 7);
          puVar4 = (uint *)(*(uint *)((int)local_40 + 3) >> 8 | (int)puVar5 << 0x18);
          puVar11 = (uint *)((uint)(uint3)*local_40 | *(uint *)((int)local_40 + 3) << 0x18);
          uVar6 = 4;
          goto LAB_015cc780;
        }
        break;
      case (uint *)0x5:
        if (7 < local_3c) {
          bVar1 = *(byte *)((int)local_40 + 2);
          local_3c = local_3c - 8;
          uVar3 = (ushort)*local_40;
          uVar14 = *(uint *)((int)local_40 + 3);
          bVar2 = *(byte *)((int)local_40 + 7);
          local_40 = local_40 + 2;
          FUN_015dd30c(&local_38,&local_40,uVar16);
          uVar10 = (uint)local_38;
          if (uVar10 != 0x52) goto LAB_015cc808;
          uVar6 = 5;
          goto LAB_015cc7e0;
        }
      }
LAB_015cc3bc:
      uVar10 = 0x13;
      puVar4 = local_40;
      puVar8 = local_40;
      uVar14 = 0;
    }
    else {
      if (uVar10 < 0xfffffff0) {
        if (uVar9 - 2 < 4) goto LAB_015cc5f8;
        puVar11 = *(uint **)((int)local_40 + 2);
        puVar8 = (uint *)((int)local_40 + 6);
        iVar15 = uVar9 - 6;
      }
      else {
        if (uVar9 - 2 < 8) {
LAB_015cc5f8:
          uVar10 = 0x13;
          puVar4 = puVar8;
          uVar14 = 0;
          goto LAB_015cc3c8;
        }
        uVar14 = *(uint *)((int)local_40 + 5);
        if (*(byte *)((int)local_40 + 9) != 0 || uVar14 >> 8 != 0) {
          uVar10 = 0x38;
          puVar4 = local_40;
          goto LAB_015cc3c8;
        }
        puVar11 = (uint *)(uVar14 << 0x18 | (uint)*(uint3 *)puVar8);
        iVar15 = uVar9 - 10;
        puVar8 = (uint *)((int)local_40 + 10);
      }
      puVar5 = puVar8;
      if (iVar15 == 0) {
LAB_015cc6cc:
        uVar10 = 0x13;
        puVar8 = puVar5;
      }
      else {
        local_3c = iVar15 - 1;
        local_40 = (uint *)((int)puVar8 + 1);
        local_4c = (byte)*puVar8;
        unaff_r4 = (ushort *)(uint)local_4c;
        puVar5 = local_40;
        if ((unaff_r4 < &DAT_00000009) &&
           (puVar5 = (uint *)&DAT_00000001, (1 << (int)unaff_r4 & 0x116U) != 0)) {
          uVar6 = 0;
          puVar5 = puVar7;
          local_50 = puVar11;
          goto switchD_015cc56c_caseD_0;
        }
LAB_015cc6e0:
        uVar10 = 0x19;
      }
      puVar4 = puVar5;
      uVar14 = 0;
    }
LAB_015cc3c8:
    uVar12 = uVar12 << 0x10 | ((uint)unaff_r4 & 0xff) << 8;
  }
  *param_2 = 1;
  param_2[1] = 0;
  param_1[2] = uVar12 | uVar10;
  *param_1 = 3;
  param_1[3] = puVar8;
  param_1[4] = puVar4;
  param_1[5] = uVar14;
  return;
}

