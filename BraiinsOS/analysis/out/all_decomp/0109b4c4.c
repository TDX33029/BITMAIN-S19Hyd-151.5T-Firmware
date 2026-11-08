// FUN_0109b4c4 @ 0109b4c4 size=1316 calls_out=5 calls_in=1
// strings: 

void FUN_0109b4c4(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  short local_178 [3];
  undefined4 local_172;
  undefined4 local_16e;
  undefined4 local_16a;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  ushort local_c8;
  undefined2 uStack_c6;
  short local_c4;
  undefined2 uStack_c2;
  int local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_90;
  undefined4 local_8c;
  short local_84;
  int local_80;
  uint local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  short local_60;
  int local_5c;
  int local_58;
  
  iVar1 = *param_2;
  uVar11 = param_2[2];
  uVar5 = param_2[1];
  if ((uint)param_2[1] < uVar11) {
    uVar5 = uVar11;
  }
switchD_0109b584_default:
  if (uVar11 == uVar5) {
    param_2[2] = uVar11 + 1;
LAB_0109b9e8:
    *param_1 = 2;
    return;
  }
  uVar12 = uVar11 + 1;
  param_2[2] = uVar12;
  FUN_010913fc(local_178,uVar11 * 0xe8 + iVar1 + 0x50);
  if (local_178[0] == 0x1b) goto LAB_0109b9e8;
  FUN_016dd1aa(&local_c8,local_178,0x9c);
  iVar6 = local_c0;
  sVar4 = 0x10;
  if (1 < local_c8) {
    sVar4 = local_c8 - 2;
  }
  uVar11 = uVar12;
  switch(sVar4) {
  case 0:
    goto switchD_0109b584_caseD_0;
  case 1:
    local_d8 = local_172;
    uStack_d4 = local_16e;
    uStack_d0 = local_16a;
    uVar3 = 1;
    goto LAB_0109ba20;
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x11:
    goto switchD_0109b584_caseD_2;
  case 3:
    if ((-0x7ffffffe < local_5c) && (local_5c != 0)) {
      thunk_FUN_016d3fb4(local_58);
    }
    if (CONCAT22(uStack_c2,local_c4) != 0) {
      thunk_FUN_016d3fb4(local_c0);
    }
    iVar6 = local_ac;
    uVar12 = local_ac + 0x80000001U & local_ac >> 0x1f;
    if (uVar12 == 0) {
      uVar12 = local_a0 & 0xffff;
      if (uVar12 != 2) {
        iVar9 = 0;
        if (uVar12 != 0) {
          iVar9 = local_9c;
        }
        if (uVar12 != 0 && iVar9 != 0) {
          thunk_FUN_016d3fb4(local_98);
        }
        bVar13 = (local_7c & 0xffff) != 0;
        iVar9 = 0;
        if (bVar13) {
          iVar9 = local_78;
        }
        if (bVar13 && iVar9 != 0) {
          thunk_FUN_016d3fb4(local_74);
        }
      }
      uVar12 = local_a8;
      puVar2 = (undefined4 *)(local_a8 + 0x10);
      for (uVar7 = local_a4; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (puVar2[-4] != 0) {
          thunk_FUN_016d3fb4(puVar2[-3]);
        }
        if (puVar2[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar2);
        }
        puVar2 = puVar2 + 6;
      }
      if (iVar6 != 0) goto LAB_0109b984;
    }
    else if (uVar12 == 1) {
      if (local_98 != 0) {
        uVar12 = local_94;
LAB_0109b984:
        thunk_FUN_016d3fb4(uVar12);
      }
    }
    else if (local_a8 != 0) {
      uVar12 = local_a4;
      goto LAB_0109b984;
    }
    if (local_b8 == 0) goto switchD_0109b584_default;
    iVar6 = local_b4;
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x12:
  case 0x14:
  case 0x16:
    goto switchD_0109b584_caseD_4;
  case 6:
    FUN_0108aea4(&local_b8);
    if ((CONCAT22(uStack_c2,local_c4) & 0x7fffffff) != 0) goto LAB_0109b9d8;
    goto switchD_0109b584_default;
  case 7:
    if (local_c0 != 0) {
      thunk_FUN_016d3fb4(CONCAT22(uStack_c2,local_c4));
    }
    if (local_b8 == 0) goto switchD_0109b584_default;
    iVar6 = local_bc;
    break;
  case 8:
    bVar13 = (local_b8 & 0xffff) != 0;
    iVar6 = 0;
    if (bVar13) {
      iVar6 = local_b4;
    }
    if (bVar13 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_b0);
    }
    bVar13 = (local_94 & 0xffff) != 0;
    iVar6 = 0;
    if (bVar13) {
      iVar6 = local_90;
    }
    iVar9 = local_c0;
    iVar10 = local_bc;
    if (bVar13 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_8c);
      iVar9 = local_c0;
      iVar10 = local_bc;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_01054830(iVar9);
      iVar9 = iVar9 + 0x14;
    }
    goto switchD_0109b584_caseD_4;
  case 10:
    if (local_7c != 0) {
      thunk_FUN_016d3fb4(local_80);
    }
    if (local_74 != 0) {
      thunk_FUN_016d3fb4(local_78);
    }
    if (local_6c != 0) {
      thunk_FUN_016d3fb4(local_70);
    }
switchD_0109b584_caseD_2:
    iVar6 = 0;
    if (local_c4 != 0) {
      iVar6 = local_c0;
    }
    if (local_c4 != 0 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_bc);
    }
    bVar13 = (local_a0 & 0xffff) == 0;
    iVar6 = 0;
    if (!bVar13) {
      iVar6 = local_9c;
    }
    if (bVar13 || iVar6 == 0) goto switchD_0109b584_default;
    iVar6 = local_98;
    break;
  case 0xe:
    if (local_bc != 0) {
      piVar8 = (int *)(local_c0 + 8);
      iVar9 = local_bc;
      do {
        bVar13 = (char)piVar8[-1] != '\0';
        iVar10 = 0;
        if (bVar13) {
          iVar10 = *piVar8;
        }
        if (bVar13 && iVar10 != 0) {
          thunk_FUN_016d3fb4(piVar8[1]);
        }
        piVar8 = piVar8 + 6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (CONCAT22(uStack_c2,local_c4) == 0) goto switchD_0109b584_default;
    break;
  case 0x10:
    iVar6 = 0;
    if (local_c8 != 0) {
      iVar6 = CONCAT22(uStack_c2,local_c4);
    }
    if (local_c8 != 0 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_c0);
    }
    bVar13 = (local_a4 & 0xffff) != 0;
    uVar12 = 0;
    if (bVar13) {
      uVar12 = local_a0;
    }
    if (bVar13 && uVar12 != 0) {
      thunk_FUN_016d3fb4(local_9c);
    }
    iVar6 = 0;
    if (local_84 != 0) {
      iVar6 = local_80;
    }
    if (local_84 != 0 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_7c);
    }
    iVar6 = 0;
    if (local_60 != 0) {
      iVar6 = local_5c;
    }
    if (local_60 == 0 || iVar6 == 0) goto switchD_0109b584_default;
    iVar6 = local_58;
    break;
  case 0x13:
    bVar13 = (local_b8 & 0xffff) != 0;
    iVar6 = 0;
    if (bVar13) {
      iVar6 = local_b4;
    }
    if (bVar13 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_b0);
    }
    bVar13 = (local_94 & 0xffff) != 0;
    iVar6 = 0;
    if (bVar13) {
      iVar6 = local_90;
    }
    iVar9 = local_c0;
    iVar10 = local_bc;
    if (bVar13 && iVar6 != 0) {
      thunk_FUN_016d3fb4(local_8c);
      iVar9 = local_c0;
      iVar10 = local_bc;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_01054830(iVar9);
      iVar9 = iVar9 + 0x14;
    }
switchD_0109b584_caseD_4:
    if (CONCAT22(uStack_c2,local_c4) == 0) goto switchD_0109b584_default;
LAB_0109b9d8:
    iVar6 = local_c0;
    break;
  case 0x15:
    if (local_c0 == 0) goto switchD_0109b584_default;
    iVar9 = CONCAT22(uStack_c2,local_c4);
    iVar10 = 0;
    do {
      puVar2 = (undefined4 *)(iVar9 + iVar10 * 8);
      if (puVar2[1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      iVar10 = iVar10 + 1;
    } while (iVar6 != iVar10);
    iVar6 = iVar9;
    break;
  default:
    goto switchD_0109b584_default;
  }
  thunk_FUN_016d3fb4(iVar6);
  goto switchD_0109b584_default;
switchD_0109b584_caseD_0:
  uVar3 = 0;
LAB_0109ba20:
  *(uint *)(param_1 + 1) = CONCAT22(local_c4,uStack_c6);
  *param_1 = uVar3;
  *(undefined4 *)(param_1 + 5) = local_d8;
  *(undefined4 *)(param_1 + 9) = uStack_d4;
  *(undefined4 *)(param_1 + 0xd) = uStack_d0;
  return;
}

