// FUN_01980be4 @ 01980be4 size=1896 calls_out=4 calls_in=3
// strings: 

void FUN_01980be4(int *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  uint *local_6c;
  uint local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint *local_54;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *local_34;
  uint local_30;
  
  uVar16 = 0x80000000;
  iVar2 = 0x40;
  if (param_3 < 0x34) goto LAB_01980c28;
  uVar4 = *param_2;
  bVar20 = uVar4 == 0x464c457f;
  if (bVar20) {
    uVar4 = (uint)(byte)param_2[1];
  }
  if ((((!bVar20 || uVar4 != 1) || (1 < *(byte *)((int)param_2 + 5) - 1)) ||
      (*(char *)((int)param_2 + 6) != '\x01')) || (*(byte *)((int)param_2 + 5) == 2))
  goto LAB_01980c28;
  uVar4 = param_2[8];
  if (uVar4 != 0) {
    local_40 = (uint)(ushort)param_2[0xc];
    if (local_40 == 0) {
      if ((*(short *)((int)param_2 + 0x2e) != 0x28) || (param_3 < uVar4 || param_3 - uVar4 < 0x28))
      goto LAB_01980c28;
      local_40 = *(uint *)((int)param_2 + uVar4 + 0x14);
      if (local_40 == 0) goto LAB_01980d28;
    }
    else if (*(short *)((int)param_2 + 0x2e) != 0x28) goto LAB_01980c28;
    if (((int)((ulonglong)local_40 * 0x28 >> 0x20) != 0) ||
       (param_3 < uVar4 || param_3 - uVar4 < (uint)((ulonglong)local_40 * 0x28))) goto LAB_01980c28;
    uVar9 = (uint)*(ushort *)((int)param_2 + 0x32);
    local_3c = (int)param_2 + uVar4;
    if (uVar9 == 0xffff) {
      uVar9 = *(uint *)(local_3c + 0x18);
    }
    if ((uVar9 == 0) || (local_40 <= uVar9)) goto LAB_01980c28;
    iVar5 = local_3c + uVar9 * 0x28;
    iVar10 = 0;
    if (*(int *)(iVar5 + 4) == 8) {
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_54 = (uint *)0x0;
    }
    else {
      local_4c = *(uint *)(iVar5 + 0x10);
      local_44 = *(uint *)(iVar5 + 0x14) + local_4c;
      local_48 = (uint)CARRY4(*(uint *)(iVar5 + 0x14),local_4c);
      local_54 = param_2;
    }
    iVar5 = local_40 * 0x28;
    iVar6 = iVar5;
    iVar15 = local_3c;
    do {
      if (*(int *)(iVar15 + 4) == 2) {
        uVar4 = *(uint *)(iVar15 + 0x14);
        if (uVar4 == 0) {
          puVar17 = (uint *)&DAT_00000001;
        }
        else {
          if (((uVar4 & 0xf) != 0) ||
             (uVar9 = *(uint *)(iVar15 + 0x10), param_3 < uVar9 || param_3 - uVar9 < uVar4))
          goto LAB_01980c28;
          puVar17 = (uint *)((int)param_2 + uVar9);
        }
        uVar9 = *(uint *)(iVar15 + 0x18);
        iVar6 = 0;
        if (uVar9 == 0) {
          local_58 = (uint *)0x0;
          local_60 = 0;
          local_68 = 0;
          local_5c = 0;
        }
        else {
          if ((local_40 <= uVar9) || (iVar15 = local_3c + uVar9 * 0x28, *(int *)(iVar15 + 4) != 3))
          goto LAB_01980c28;
          local_5c = *(uint *)(iVar15 + 0x10);
          local_60 = *(uint *)(iVar15 + 0x14) + local_5c;
          local_68 = (uint)CARRY4(*(uint *)(iVar15 + 0x14),local_5c);
          local_58 = param_2;
        }
        uVar9 = uVar4 >> 4;
        goto LAB_019810f0;
      }
      iVar15 = iVar15 + 0x28;
      iVar10 = iVar10 + 1;
      iVar6 = iVar6 + -0x28;
    } while (iVar6 != 0);
    goto LAB_01980fcc;
  }
LAB_01980d28:
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_54 = (uint *)0x0;
  local_40 = 0;
  local_3c = 1;
LAB_01980d4c:
  uVar9 = 0;
  local_58 = (uint *)0x0;
  local_5c = 0;
  local_60 = 0;
  local_68 = 0;
  puVar17 = (uint *)&DAT_00000001;
  goto LAB_01980d68;
  while (iVar6 = iVar6 + 0x28, iVar5 != iVar6) {
LAB_019810f0:
    iVar7 = local_3c + iVar6;
    iVar15 = *(int *)(iVar7 + 4);
    bVar20 = iVar15 == 0x12;
    if (bVar20) {
      iVar15 = *(int *)(iVar7 + 0x18);
    }
    if (((bVar20 && iVar15 == iVar10) && (uVar18 = *(uint *)(iVar7 + 0x14), uVar18 != 0)) &&
       (((uVar18 & 3) != 0 ||
        ((param_3 < *(uint *)(iVar7 + 0x10) || (param_3 - *(uint *)(iVar7 + 0x10) < uVar18))))))
    goto LAB_01980c28;
  }
  if (uVar4 < 0x10) {
LAB_01980fcc:
    iVar15 = 0;
    iVar10 = iVar5;
    iVar6 = local_3c;
    do {
      if (*(int *)(iVar6 + 4) == 0xb) {
        uVar9 = *(uint *)(iVar6 + 0x14);
        if (uVar9 == 0) {
          puVar17 = (uint *)&DAT_00000001;
        }
        else {
          if (((uVar9 & 0xf) != 0) ||
             (uVar4 = *(uint *)(iVar6 + 0x10), param_3 < uVar4 || param_3 - uVar4 < uVar9))
          goto LAB_01980c28;
          puVar17 = (uint *)((int)param_2 + uVar4);
        }
        uVar4 = *(uint *)(iVar6 + 0x18);
        iVar10 = 0;
        if (uVar4 == 0) {
          local_58 = (uint *)0x0;
          local_60 = 0;
          local_68 = 0;
          local_5c = 0;
        }
        else {
          if ((local_40 <= uVar4) || (iVar6 = local_3c + uVar4 * 0x28, *(int *)(iVar6 + 4) != 3))
          goto LAB_01980c28;
          local_5c = *(uint *)(iVar6 + 0x10);
          local_60 = *(uint *)(iVar6 + 0x14) + local_5c;
          local_68 = (uint)CARRY4(*(uint *)(iVar6 + 0x14),local_5c);
          local_58 = param_2;
        }
        uVar9 = uVar9 >> 4;
        goto LAB_019811e0;
      }
      iVar6 = iVar6 + 0x28;
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + -0x28;
    } while (iVar10 != 0);
    goto LAB_01980d4c;
  }
  goto LAB_01980d68;
  while (iVar10 = iVar10 + 0x28, iVar5 != iVar10) {
LAB_019811e0:
    iVar7 = local_3c + iVar10;
    iVar6 = *(int *)(iVar7 + 4);
    bVar20 = iVar6 == 0x12;
    if (bVar20) {
      iVar6 = *(int *)(iVar7 + 0x18);
    }
    if (((bVar20 && iVar6 == iVar15) && (uVar4 = *(uint *)(iVar7 + 0x14), uVar4 != 0)) &&
       (((uVar4 & 3) != 0 ||
        (param_3 < *(uint *)(iVar7 + 0x10) || param_3 - *(uint *)(iVar7 + 0x10) < uVar4))))
    goto LAB_01980c28;
  }
LAB_01980d68:
  iVar2 = uVar9 << 4;
  puVar13 = puVar17;
  do {
    puVar3 = puVar13;
    if (iVar2 == 0) {
      local_6c = (uint *)&DAT_00000008;
      uVar16 = 0;
      uVar4 = 0;
      goto LAB_01980f18;
    }
    iVar2 = iVar2 + -0x10;
    puVar13 = puVar3 + 4;
  } while ((((byte)puVar3[3] & 0xf) - 3 < 0xfffffffe) || (*(short *)((int)puVar3 + 0xe) == 0));
  uVar16 = puVar3[2];
  uVar18 = *puVar3;
  uVar4 = puVar3[1];
  puVar3 = (uint *)thunk_FUN_01be5118(0x60);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x60);
  }
  *puVar3 = uVar4;
  puVar3[1] = 0;
  puVar3[3] = 0;
  puVar3[2] = uVar16;
  puVar3[4] = uVar18;
  local_30 = 1;
  local_38 = 4;
  uVar16 = 1;
  local_34 = puVar3;
  while( true ) {
    puVar12 = puVar13;
    uVar4 = local_38;
    if (puVar12 == puVar17 + uVar9 * 4) break;
    puVar13 = puVar12 + 4;
    if (0xfffffffd < ((byte)puVar12[3] & 0xf) - 3) {
      if (*(short *)((int)puVar12 + 0xe) != 0) {
        uVar4 = *puVar12;
        uVar18 = puVar12[1];
        uVar11 = puVar12[2];
        if (uVar16 == local_38) {
          FUN_0197ac30(&local_38,uVar16,1,8,0x18);
          puVar3 = local_34;
        }
        local_30 = uVar16 + 1;
        puVar12 = puVar3 + uVar16 * 6;
        *puVar12 = uVar18;
        puVar12[1] = 0;
        puVar12[3] = 0;
        puVar12[2] = uVar11;
        puVar12[4] = uVar4;
        uVar16 = local_30;
      }
    }
  }
  local_6c = local_34;
  if (1 < uVar16) {
    if (uVar16 < 0x15) {
      iVar2 = 0;
      puVar17 = local_34;
      puVar13 = local_34 + 6;
      do {
        uVar9 = *puVar13;
        uVar18 = puVar13[1];
        if (uVar18 <= puVar17[1] && (uint)(*puVar17 <= uVar9) <= uVar18 - puVar17[1]) {
          uVar19 = puVar17[8];
          uVar14 = puVar17[9];
          uVar11 = puVar17[10];
          uVar8 = puVar17[0xb];
          iVar5 = iVar2;
          puVar17 = puVar13;
          do {
            puVar3 = puVar17 + -6;
            *puVar17 = *puVar3;
            puVar17[1] = puVar17[-5];
            puVar17[2] = puVar17[-4];
            puVar17[3] = puVar17[-3];
            puVar17[4] = puVar17[-2];
            puVar17[5] = puVar17[-1];
            if (iVar5 == 0) {
              puVar3 = local_34;
              break;
            }
            iVar5 = iVar5 + 0x18;
            puVar12 = puVar17 + -0xb;
            puVar1 = puVar17 + -0xc;
            puVar17 = puVar3;
          } while (uVar18 <= *puVar12 && (uint)(*puVar1 <= uVar9) <= uVar18 - *puVar12);
          *puVar3 = uVar9;
          puVar3[1] = uVar18;
          puVar3[2] = uVar19;
          puVar3[3] = uVar14;
          puVar3[4] = uVar11;
          puVar3[5] = uVar8;
        }
        puVar3 = puVar13 + 6;
        iVar2 = iVar2 + -0x18;
        puVar17 = puVar13;
        puVar13 = puVar3;
      } while (puVar3 != local_34 + uVar16 * 6);
    }
    else {
      FUN_0199f9e8(local_34,uVar16);
    }
  }
LAB_01980f18:
  param_1[2] = local_3c;
  param_1[3] = local_40;
  param_1[4] = (int)local_54;
  param_1[5] = param_3;
  param_1[0x10] = uVar4;
  param_1[0x11] = (int)local_6c;
  param_1[0xc] = local_5c;
  param_1[0xd] = 0;
  param_1[0xe] = local_60;
  param_1[10] = (int)local_58;
  param_1[0xf] = local_68;
  iVar2 = 0x48;
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  param_1[0xb] = param_3;
  param_1[6] = local_4c;
  param_1[7] = 0;
  param_1[8] = local_44;
  param_1[9] = local_48;
LAB_01980c28:
  *(uint *)((int)param_1 + iVar2) = uVar16;
  return;
}

