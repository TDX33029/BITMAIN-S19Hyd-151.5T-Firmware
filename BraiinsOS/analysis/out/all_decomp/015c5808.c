// FUN_015c5808 @ 015c5808 size=1904 calls_out=4 calls_in=3
// strings: 

void FUN_015c5808(int *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
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
  
  if (param_3 < 0x34) goto LAB_015c584c;
  uVar3 = *param_2;
  bVar19 = uVar3 == 0x464c457f;
  if (bVar19) {
    uVar3 = (uint)(byte)param_2[1];
  }
  if ((((!bVar19 || uVar3 != 1) || (1 < *(byte *)((int)param_2 + 5) - 1)) ||
      (*(char *)((int)param_2 + 6) != '\x01')) || (*(byte *)((int)param_2 + 5) == 2))
  goto LAB_015c584c;
  uVar3 = param_2[8];
  if (uVar3 != 0) {
    local_40 = (uint)(ushort)param_2[0xc];
    if (local_40 == 0) {
      if ((*(short *)((int)param_2 + 0x2e) != 0x28) || (param_3 < uVar3 || param_3 - uVar3 < 0x28))
      goto LAB_015c584c;
      local_40 = *(uint *)((int)param_2 + uVar3 + 0x14);
      if (local_40 == 0) goto LAB_015c594c;
    }
    else if (*(short *)((int)param_2 + 0x2e) != 0x28) goto LAB_015c584c;
    if (((int)((ulonglong)local_40 * 0x28 >> 0x20) != 0) ||
       (param_3 < uVar3 || param_3 - uVar3 < (uint)((ulonglong)local_40 * 0x28))) {
LAB_015c584c:
      param_1[0x10] = -0x80000000;
      return;
    }
    uVar8 = (uint)*(ushort *)((int)param_2 + 0x32);
    local_3c = (int)param_2 + uVar3;
    if (uVar8 == 0xffff) {
      uVar8 = *(uint *)(local_3c + 0x18);
    }
    if ((uVar8 == 0) || (local_40 <= uVar8)) goto LAB_015c584c;
    iVar4 = local_3c + uVar8 * 0x28;
    iVar9 = 0;
    if (*(int *)(iVar4 + 4) == 8) {
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      local_54 = (uint *)0x0;
    }
    else {
      local_4c = *(uint *)(iVar4 + 0x10);
      local_44 = *(uint *)(iVar4 + 0x14) + local_4c;
      local_48 = (uint)CARRY4(*(uint *)(iVar4 + 0x14),local_4c);
      local_54 = param_2;
    }
    iVar4 = local_40 * 0x28;
    iVar5 = iVar4;
    iVar14 = local_3c;
    do {
      if (*(int *)(iVar14 + 4) == 2) {
        uVar3 = *(uint *)(iVar14 + 0x14);
        if (uVar3 == 0) {
          puVar16 = (uint *)&DAT_00000001;
        }
        else {
          if (((uVar3 & 0xf) != 0) ||
             (uVar8 = *(uint *)(iVar14 + 0x10), param_3 < uVar8 || param_3 - uVar8 < uVar3))
          goto LAB_015c584c;
          puVar16 = (uint *)((int)param_2 + uVar8);
        }
        uVar8 = *(uint *)(iVar14 + 0x18);
        iVar5 = 0;
        if (uVar8 == 0) {
          local_58 = (uint *)0x0;
          local_60 = 0;
          local_68 = 0;
          local_5c = 0;
        }
        else {
          if ((local_40 <= uVar8) || (iVar14 = local_3c + uVar8 * 0x28, *(int *)(iVar14 + 4) != 3))
          goto LAB_015c584c;
          local_5c = *(uint *)(iVar14 + 0x10);
          local_60 = *(uint *)(iVar14 + 0x14) + local_5c;
          local_68 = (uint)CARRY4(*(uint *)(iVar14 + 0x14),local_5c);
          local_58 = param_2;
        }
        uVar8 = uVar3 >> 4;
        goto LAB_015c5d1c;
      }
      iVar14 = iVar14 + 0x28;
      iVar9 = iVar9 + 1;
      iVar5 = iVar5 + -0x28;
    } while (iVar5 != 0);
    goto LAB_015c5bf8;
  }
LAB_015c594c:
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_54 = (uint *)0x0;
  local_40 = 0;
  local_3c = 1;
  goto LAB_015c5970;
  while (iVar9 = iVar9 + 0x28, iVar4 != iVar9) {
LAB_015c5e0c:
    iVar6 = local_3c + iVar9;
    iVar5 = *(int *)(iVar6 + 4);
    bVar19 = iVar5 == 0x12;
    if (bVar19) {
      iVar5 = *(int *)(iVar6 + 0x18);
    }
    if (((bVar19 && iVar5 == iVar14) && (uVar3 = *(uint *)(iVar6 + 0x14), uVar3 != 0)) &&
       (((uVar3 & 3) != 0 ||
        (param_3 < *(uint *)(iVar6 + 0x10) || param_3 - *(uint *)(iVar6 + 0x10) < uVar3))))
    goto LAB_015c584c;
  }
  goto LAB_015c598c;
  while (iVar5 = iVar5 + 0x28, iVar4 != iVar5) {
LAB_015c5d1c:
    iVar6 = local_3c + iVar5;
    iVar14 = *(int *)(iVar6 + 4);
    bVar19 = iVar14 == 0x12;
    if (bVar19) {
      iVar14 = *(int *)(iVar6 + 0x18);
    }
    if (((bVar19 && iVar14 == iVar9) && (uVar15 = *(uint *)(iVar6 + 0x14), uVar15 != 0)) &&
       (((uVar15 & 3) != 0 ||
        ((param_3 < *(uint *)(iVar6 + 0x10) || (param_3 - *(uint *)(iVar6 + 0x10) < uVar15))))))
    goto LAB_015c584c;
  }
  if (0xf < uVar3) goto LAB_015c598c;
LAB_015c5bf8:
  iVar14 = 0;
  iVar9 = iVar4;
  iVar5 = local_3c;
  do {
    if (*(int *)(iVar5 + 4) == 0xb) {
      uVar8 = *(uint *)(iVar5 + 0x14);
      if (uVar8 == 0) {
        puVar16 = (uint *)&DAT_00000001;
      }
      else {
        if (((uVar8 & 0xf) != 0) ||
           (uVar3 = *(uint *)(iVar5 + 0x10), param_3 < uVar3 || param_3 - uVar3 < uVar8))
        goto LAB_015c584c;
        puVar16 = (uint *)((int)param_2 + uVar3);
      }
      uVar3 = *(uint *)(iVar5 + 0x18);
      iVar9 = 0;
      if (uVar3 == 0) {
        local_58 = (uint *)0x0;
        local_60 = 0;
        local_68 = 0;
        local_5c = 0;
      }
      else {
        if ((local_40 <= uVar3) || (iVar5 = local_3c + uVar3 * 0x28, *(int *)(iVar5 + 4) != 3))
        goto LAB_015c584c;
        local_5c = *(uint *)(iVar5 + 0x10);
        local_60 = *(uint *)(iVar5 + 0x14) + local_5c;
        local_68 = (uint)CARRY4(*(uint *)(iVar5 + 0x14),local_5c);
        local_58 = param_2;
      }
      uVar8 = uVar8 >> 4;
      goto LAB_015c5e0c;
    }
    iVar5 = iVar5 + 0x28;
    iVar14 = iVar14 + 1;
    iVar9 = iVar9 + -0x28;
  } while (iVar9 != 0);
LAB_015c5970:
  uVar8 = 0;
  local_58 = (uint *)0x0;
  local_5c = 0;
  local_60 = 0;
  local_68 = 0;
  puVar16 = (uint *)&DAT_00000001;
LAB_015c598c:
  iVar4 = uVar8 << 4;
  puVar12 = puVar16;
  do {
    puVar2 = puVar12;
    if (iVar4 == 0) {
      local_6c = (uint *)&DAT_00000008;
      uVar15 = 0;
      uVar3 = 0;
      goto LAB_015c5b3c;
    }
    iVar4 = iVar4 + -0x10;
    puVar12 = puVar2 + 4;
  } while ((((byte)puVar2[3] & 0xf) - 3 < 0xfffffffe) || (*(short *)((int)puVar2 + 0xe) == 0));
  uVar3 = puVar2[2];
  uVar17 = *puVar2;
  uVar15 = puVar2[1];
  puVar2 = (uint *)thunk_FUN_016d4a50(0x60);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(8,0x60);
  }
  *puVar2 = uVar15;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[2] = uVar3;
  puVar2[4] = uVar17;
  local_30 = 1;
  local_38 = 4;
  uVar15 = 1;
  local_34 = puVar2;
  while( true ) {
    puVar11 = puVar12;
    uVar3 = local_38;
    if (puVar11 == puVar16 + uVar8 * 4) break;
    puVar12 = puVar11 + 4;
    if (0xfffffffd < ((byte)puVar11[3] & 0xf) - 3) {
      if (*(short *)((int)puVar11 + 0xe) != 0) {
        uVar3 = *puVar11;
        uVar17 = puVar11[1];
        uVar10 = puVar11[2];
        if (uVar15 == local_38) {
          FUN_015bf41c(&local_38,uVar15,1,8,0x18);
          puVar2 = local_34;
        }
        local_30 = uVar15 + 1;
        puVar11 = puVar2 + uVar15 * 6;
        *puVar11 = uVar17;
        puVar11[1] = 0;
        puVar11[3] = 0;
        puVar11[2] = uVar10;
        puVar11[4] = uVar3;
        uVar15 = local_30;
      }
    }
  }
  local_6c = local_34;
  if (1 < uVar15) {
    if (uVar15 < 0x15) {
      iVar4 = 0;
      puVar16 = local_34;
      puVar12 = local_34 + 6;
      do {
        uVar8 = *puVar12;
        uVar17 = puVar12[1];
        if (uVar17 <= puVar16[1] && (uint)(*puVar16 <= uVar8) <= uVar17 - puVar16[1]) {
          uVar18 = puVar16[8];
          uVar13 = puVar16[9];
          uVar10 = puVar16[10];
          uVar7 = puVar16[0xb];
          iVar9 = iVar4;
          puVar16 = puVar12;
          do {
            puVar2 = puVar16 + -6;
            *puVar16 = *puVar2;
            puVar16[1] = puVar16[-5];
            puVar16[2] = puVar16[-4];
            puVar16[3] = puVar16[-3];
            puVar16[4] = puVar16[-2];
            puVar16[5] = puVar16[-1];
            if (iVar9 == 0) {
              puVar2 = local_34;
              break;
            }
            iVar9 = iVar9 + 0x18;
            puVar11 = puVar16 + -0xb;
            puVar1 = puVar16 + -0xc;
            puVar16 = puVar2;
          } while (uVar17 <= *puVar11 && (uint)(*puVar1 <= uVar8) <= uVar17 - *puVar11);
          *puVar2 = uVar8;
          puVar2[1] = uVar17;
          puVar2[2] = uVar18;
          puVar2[3] = uVar13;
          puVar2[4] = uVar10;
          puVar2[5] = uVar7;
        }
        puVar2 = puVar12 + 6;
        iVar4 = iVar4 + -0x18;
        puVar16 = puVar12;
        puVar12 = puVar2;
      } while (puVar2 != local_34 + uVar15 * 6);
    }
    else {
      FUN_015e5a60(local_34,uVar15);
    }
  }
LAB_015c5b3c:
  param_1[2] = local_3c;
  param_1[3] = local_40;
  param_1[4] = (int)local_54;
  param_1[5] = param_3;
  param_1[0x10] = uVar3;
  param_1[0x11] = (int)local_6c;
  param_1[0xc] = local_5c;
  param_1[0xd] = 0;
  param_1[0xe] = local_60;
  param_1[10] = (int)local_58;
  param_1[0xf] = local_68;
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  param_1[0xb] = param_3;
  param_1[6] = local_4c;
  param_1[7] = 0;
  param_1[8] = local_44;
  param_1[9] = local_48;
  param_1[0x12] = uVar15;
  return;
}

