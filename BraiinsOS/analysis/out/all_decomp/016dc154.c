// FUN_016dc154 @ 016dc154 size=2196 calls_out=8 calls_in=1
// strings: 0123456789ABCDEF | (null) | (null) | (null)

/* WARNING: Removing unreachable block (ram,0x016dc7e8) */
/* WARNING: Type propagation algorithm not settling */

byte ****** FUN_016dc154(uint *param_1,char *param_2,undefined4 *param_3,int param_4,int *param_5)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte bVar17;
  byte *******pppppppbVar18;
  uint uVar19;
  uint *puVar20;
  bool bVar21;
  byte ******local_84;
  byte *******local_80;
  int local_78;
  uint *local_74;
  uint *local_6c;
  undefined *local_64;
  undefined1 auStack_5c [4];
  byte *******local_58;
  uint uStack_54;
  byte *******local_50;
  undefined4 local_4c;
  undefined1 local_31;
  undefined4 uStack_30;
  
  pppppppbVar18 = (byte *******)0x0;
  local_78 = 0;
  local_84 = (byte ******)0x0;
LAB_016dc1ca:
  bVar17 = *param_2;
  local_84 = (byte ******)((int)local_84 + (int)pppppppbVar18);
  if (bVar17 == 0) {
    if (param_1 == (uint *)0x0) {
      if (local_78 != 0) {
        piVar13 = param_5;
        while( true ) {
          piVar13 = piVar13 + 1;
          if (*piVar13 == 0) break;
          local_78 = local_78 + 1;
          param_4 = FUN_016db47e(param_4 + 8,*piVar13,param_3);
          if (local_78 == 10) {
            return (byte ******)0x1;
          }
        }
        piVar13 = param_5 + local_78;
        do {
          if (param_5 + 10 == piVar13) {
            return (byte ******)0x1;
          }
          iVar7 = *piVar13;
          piVar13 = piVar13 + 1;
        } while (iVar7 == 0);
LAB_016dc922:
        puVar10 = (undefined4 *)FUN_016d2bc8();
        *puVar10 = 0x16;
        return (byte ******)0xffffffff;
      }
LAB_016dc4ea:
      local_84 = (byte ******)0x0;
    }
    return local_84;
  }
  pppppppbVar16 = (byte *******)param_2;
  while (bVar17 != 0 && bVar17 != 0x25) {
    pppppppbVar16 = (byte *******)((int)pppppppbVar16 + 1);
    bVar17 = *(byte *)pppppppbVar16;
  }
  pppppppbVar18 = pppppppbVar16;
  while ((bVar17 == 0x25 && (*(byte *)((int)pppppppbVar16 + 1) == 0x25))) {
    pppppppbVar16 = (byte *******)((int)pppppppbVar16 + 2);
    bVar17 = *(byte *)pppppppbVar16;
    pppppppbVar18 = (byte *******)((int)pppppppbVar18 + 1);
  }
  pppppppbVar18 = (byte *******)((int)pppppppbVar18 - (int)param_2);
  iVar7 = 0x7fffffff - (int)local_84;
  if (iVar7 < (int)pppppppbVar18) goto LAB_016dc854;
  if ((param_1 != (uint *)0x0) && (-1 < (int)(*param_1 << 0x1a))) {
    FUN_016db1c8(param_2,pppppppbVar18,param_1);
  }
  if (pppppppbVar18 != (byte *******)0x0) goto LAB_016dc1c8;
  uVar4 = (uint)*(byte *)((int)pppppppbVar16 + 1);
  uVar8 = uVar4 - 0x30;
  if ((uVar8 < 10) && (*(byte *)((int)pppppppbVar16 + 2) == 0x24)) {
    uVar4 = (uint)*(byte *)((int)pppppppbVar16 + 3);
    pppppppbVar15 = (byte *******)((int)pppppppbVar16 + 3);
    local_78 = 1;
  }
  else {
    pppppppbVar15 = (byte *******)((int)pppppppbVar16 + 1);
    uVar8 = 0xffffffff;
  }
  uVar19 = 0;
  while ((uVar9 = uVar4 - 0x20, uVar9 < 0x20 && ((int)((0x12889U >> (uVar9 & 0xff)) << 0x1f) < 0)))
  {
    pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
    uVar4 = (uint)*(byte *)pppppppbVar15;
    uVar19 = uVar19 | 1 << (uVar9 & 0xff);
  }
  if (uVar4 == 0x2a) {
    uVar4 = (uint)*(byte *)((int)pppppppbVar15 + 1);
    puVar20 = param_1;
    if ((uVar4 - 0x30 < 10) && (*(byte *)((int)pppppppbVar15 + 2) == 0x24)) {
      pppppppbVar16 = (byte *******)((int)pppppppbVar15 + 3);
      if (param_1 != (uint *)0x0) {
        puVar20 = *(uint **)(param_4 + (uVar4 + 0x1fffffd0) * 8);
        local_78 = 1;
        goto LAB_016dc25e;
      }
      param_5[uVar4 + 0x3fffffd0] = 10;
      uVar4 = (uint)*(byte *)((int)pppppppbVar15 + 3);
      local_78 = 1;
      pppppppbVar15 = pppppppbVar16;
    }
    else {
      if (local_78 != 0) goto LAB_016dc922;
      pppppppbVar16 = (byte *******)((int)pppppppbVar15 + 1);
      pppppppbVar15 = pppppppbVar16;
      if (param_1 != (uint *)0x0) {
        puVar10 = (undefined4 *)*param_3;
        *param_3 = puVar10 + 1;
        puVar20 = (uint *)*puVar10;
LAB_016dc25e:
        uVar4 = (uint)*(byte *)pppppppbVar16;
        pppppppbVar15 = pppppppbVar16;
        if ((int)puVar20 < 0) {
          uVar19 = uVar19 | 0x2000;
          puVar20 = (uint *)-(int)puVar20;
        }
      }
    }
  }
  else {
    puVar20 = (uint *)0x0;
    while( true ) {
      uVar9 = uVar4 - 0x30;
      if (9 < uVar9) break;
      puVar11 = (uint *)0xffffffff;
      if ((puVar20 < (uint *)0xccccccd) && ((int)uVar9 <= (int)puVar20 * -10 + 0x7fffffff)) {
        puVar11 = (uint *)(uVar9 + (int)puVar20 * 10);
      }
      pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
      uVar4 = (uint)*(byte *)pppppppbVar15;
      puVar20 = puVar11;
    }
    if ((int)puVar20 < 0) goto LAB_016dc854;
  }
  if (uVar4 == 0x2e) {
    uVar4 = (uint)*(byte *)((int)pppppppbVar15 + 1);
    if (uVar4 == 0x2a) {
      uVar4 = (uint)*(byte *)((int)pppppppbVar15 + 2);
      local_80 = (byte *******)param_1;
      if ((uVar4 - 0x30 < 10) && (*(byte *)((int)pppppppbVar15 + 3) == 0x24)) {
        if (param_1 == (uint *)0x0) {
          param_5[uVar4 + 0x3fffffd0] = 10;
          local_6c = (uint *)0x1;
        }
        else {
          local_80 = *(byte ********)(param_4 + (uVar4 + 0x1fffffd0) * 8);
          local_6c = (uint *)(~(uint)local_80 >> 0x1f);
        }
        uVar4 = (uint)*(byte *)(pppppppbVar15 + 1);
        pppppppbVar15 = pppppppbVar15 + 1;
      }
      else {
        if (local_78 != 0) goto LAB_016dc922;
        if (param_1 == (uint *)0x0) {
          local_6c = (uint *)0x1;
        }
        else {
          puVar10 = (undefined4 *)*param_3;
          *param_3 = puVar10 + 1;
          local_80 = (byte *******)*puVar10;
          uVar4 = (uint)*(byte *)((int)pppppppbVar15 + 2);
          local_6c = (uint *)(~(uint)local_80 >> 0x1f);
        }
        pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 2);
      }
    }
    else {
      pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
      local_80 = (byte *******)0x0;
      while( true ) {
        puVar11 = (uint *)(uVar4 - 0x30);
        if (&DAT_00000009 < puVar11) break;
        iVar5 = (int)local_80 * -10 + 0x7fffffff;
        if (local_80 < (uint *)0xccccccd) {
          puVar12 = puVar11;
          if ((int)puVar11 <= iVar5) {
            puVar12 = (uint *)((int)puVar11 + (int)local_80 * 10);
          }
          local_80 = (byte *******)0xffffffff;
          if ((int)puVar11 <= iVar5) {
            local_80 = (byte *******)puVar12;
          }
        }
        else {
          local_80 = (byte *******)0xffffffff;
        }
        pppppppbVar15 = (byte *******)((int)pppppppbVar15 + 1);
        uVar4 = (uint)*(byte *)pppppppbVar15;
      }
      local_6c = (uint *)0x1;
    }
  }
  else {
    local_6c = (uint *)0x0;
    local_80 = (byte *******)0xffffffff;
  }
  uVar9 = 0;
  while( true ) {
    pppppppbVar16 = (byte *******)((int)pppppppbVar15 + 1);
    if (0x39 < uVar4 - 0x41) goto LAB_016dc922;
    uVar3 = (uint)(byte)(&DAT_00427d77)[uVar9 * 0x3a + uVar4];
    if (7 < uVar3 - 1) break;
    uVar4 = (uint)*(byte *)pppppppbVar16;
    uVar9 = uVar3;
    pppppppbVar15 = pppppppbVar16;
  }
  if (uVar3 == 0) goto LAB_016dc922;
  if (uVar3 == 0x1b) {
    if (uVar8 != 0xffffffff) goto LAB_016dc922;
    if (param_1 == (uint *)0x0) goto LAB_016dc1c8;
  }
  else if (uVar8 == 0xffffffff) {
    if (param_1 == (uint *)0x0) goto LAB_016dc4ea;
    FUN_016db47e(&local_58,uVar3,param_3);
  }
  else {
    if (param_1 == (uint *)0x0) {
      param_5[uVar8] = uVar3;
      goto LAB_016dc1c8;
    }
    puVar10 = (undefined4 *)(param_4 + uVar8 * 8);
    local_58 = (byte *******)*puVar10;
    uStack_54 = puVar10[1];
  }
  if ((*param_1 & 0x20) != 0) {
    return (byte ******)0xffffffff;
  }
  uVar4 = (uint)*(byte *)pppppppbVar15;
  if ((uVar9 != 0) && ((uVar4 & 0xf) == 3)) {
    uVar4 = uVar4 & 0xffffffdf;
  }
  if ((int)(uVar19 << 0x12) < 0) {
    uVar19 = uVar19 & 0xfffeffff;
  }
  local_74 = (uint *)0x0;
  switch(uVar4) {
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
    if (((uint)local_6c & (uint)local_80 >> 0x1f) != 0) goto LAB_016dc854;
    pppppppbVar18 = (byte *******)FUN_016db5a0(local_58,param_1,puVar20,local_80,uVar19,uVar4);
    if ((int)pppppppbVar18 < 0) goto LAB_016dc854;
    goto switchD_016dc4fe_caseD_5;
  default:
    puVar11 = (uint *)((int)&uStack_30 - (int)param_2);
    local_64 = &DAT_0059e0b4;
    if ((int)local_80 < (int)puVar11) {
      local_80 = (byte *******)puVar11;
    }
    local_74 = (uint *)0x0;
    local_6c = (uint *)local_80;
    break;
  case 0x43:
    if (uStack_54 == 0 && local_58 == (byte *******)0x0) goto LAB_016dca08;
    local_50 = local_58;
    local_80 = (byte *******)0xffffffff;
    local_58 = (byte *******)&local_50;
    local_4c = 0;
    goto LAB_016dca32;
  case 0x53:
LAB_016dca32:
    pppppppbVar14 = local_58 + -1;
    pppppppbVar18 = (byte *******)0x0;
    pppppppbVar15 = pppppppbVar14;
    while ((pppppppbVar18 < local_80 &&
           (pppppppbVar15 = pppppppbVar15 + 1, *pppppppbVar15 != (byte ******)0x0))) {
      uVar4 = FUN_016d6df8(auStack_5c);
      if ((int)uVar4 < 0) {
        return (byte ******)0xffffffff;
      }
      if ((uint)((int)local_80 - (int)pppppppbVar18) < uVar4) break;
      pppppppbVar18 = (byte *******)((int)pppppppbVar18 + uVar4);
    }
    if ((int)pppppppbVar18 < 0) goto LAB_016dc854;
    if ((uVar19 & 0x12000) == 0 && (int)pppppppbVar18 < (int)puVar20) {
      FUN_016db540(param_1,0x20,puVar20,pppppppbVar18);
    }
    local_80 = pppppppbVar14;
    while ((local_74 < pppppppbVar18 && (local_80 = local_80 + 1, *local_80 != (byte ******)0x0))) {
      iVar5 = FUN_016d6df8(auStack_5c);
      local_74 = (uint *)((int)local_74 + iVar5);
      if (pppppppbVar18 < local_74) break;
      if (-1 < (int)(*param_1 << 0x1a)) {
        FUN_016db1c8(auStack_5c,iVar5,param_1);
      }
    }
    if (((uVar19 ^ 0x2000) & 0x12000) == 0 && (int)pppppppbVar18 < (int)puVar20) {
      FUN_016db540(param_1,0x20,puVar20,pppppppbVar18);
    }
    if ((int)pppppppbVar18 < (int)puVar20) {
      pppppppbVar18 = (byte *******)puVar20;
    }
switchD_016dc4fe_caseD_5:
    if ((int)pppppppbVar18 <= iVar7) {
      param_2 = (char *)pppppppbVar16;
      goto LAB_016dc1ca;
    }
    goto LAB_016dc854;
  case 0x58:
  case 0x78:
    bVar17 = (byte)uVar4 & 0x20;
    goto LAB_016dc548;
  case 99:
LAB_016dca08:
    uVar19 = uVar19 & 0xfffeffff;
    local_31 = (char)local_58;
    puVar11 = (uint *)&DAT_00000001;
    local_64 = &DAT_0059e0b4;
    param_2 = &local_31;
    local_80 = (byte *******)&DAT_00000001;
    local_74 = (uint *)0x0;
    local_6c = (uint *)&DAT_00000001;
    break;
  case 100:
  case 0x69:
    if ((int)uStack_54 < 0) {
      bVar21 = local_58 != (byte *******)0x0;
      local_58 = (byte *******)-(int)local_58;
      uStack_54 = -uStack_54 - (uint)bVar21;
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)&DAT_00000001;
    }
    else if ((int)(uVar19 << 0x14) < 0) {
      local_64 = &DAT_0059e0b5;
      local_74 = (uint *)&DAT_00000001;
    }
    else if ((uVar19 & 1) == 0) {
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    else {
      local_64 = &DAT_0059e0b6;
      local_74 = (uint *)&DAT_00000001;
    }
    goto LAB_016dc9f0;
  case 0x6d:
    puVar10 = (undefined4 *)FUN_016d2bc8();
    param_2 = (char *)FUN_016d2bfc(*puVar10);
    goto LAB_016dc7c6;
  case 0x6e:
    switch(uVar9) {
    case 0:
    case 1:
    case 6:
      *local_58 = local_84;
      break;
    case 2:
    case 7:
      *local_58 = local_84;
      local_58[1] = (byte ******)((int)local_84 >> 0x1f);
      break;
    case 3:
      *(short *)local_58 = (short)local_84;
      break;
    case 4:
      *(byte *)local_58 = (byte)local_84;
      break;
    default:
      goto switchD_016dc4fe_caseD_5;
    }
    goto LAB_016dc1c8;
  case 0x6f:
    param_2 = (char *)&uStack_30;
    uVar4 = uStack_54;
    pppppppbVar18 = local_58;
    while( true ) {
      bVar17 = (byte)pppppppbVar18;
      bVar21 = pppppppbVar18 == (byte *******)0x0;
      bVar2 = uVar4 == 0;
      pppppppbVar18 = (byte *******)((uint)pppppppbVar18 >> 3 | uVar4 << 0x1d);
      uVar4 = uVar4 >> 3;
      if (bVar21 && bVar2) break;
      param_2 = (char *)((int)param_2 + -1);
      *param_2 = (bVar17 & 7) + 0x30;
    }
    if ((uVar19 & 8) == 0) {
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    else if ((int)&uStack_30 + -(int)param_2 < (int)local_80) {
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    else {
      local_80 = (byte *******)((int)&uStack_30 + -(int)param_2 + 1);
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    goto LAB_016dc6a8;
  case 0x70:
    uVar19 = uVar19 | 8;
    bVar17 = 0x20;
    uVar4 = 0x78;
    if (local_80 < &DAT_00000008) {
      local_80 = (byte *******)&DAT_00000008;
    }
LAB_016dc548:
    param_2 = (char *)&uStack_30;
    uVar8 = uStack_54;
    pppppppbVar18 = local_58;
    while( true ) {
      uVar9 = (uint)pppppppbVar18 & 0xf;
      if (pppppppbVar18 == (byte *******)0x0 && uVar8 == 0) break;
      pppppppbVar18 = (byte *******)((uint)pppppppbVar18 >> 4 | uVar8 << 0x1c);
      uVar8 = uVar8 >> 4;
      param_2 = (char *)((int)param_2 + -1);
      *param_2 = "0123456789ABCDEF"[uVar9] | bVar17;
    }
    if (local_58 == (byte *******)0x0 && uStack_54 == 0) {
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    else if ((uVar19 & 8) == 0) {
      local_64 = &DAT_0059e0b4;
      local_74 = (uint *)0x0;
    }
    else {
      local_64 = &DAT_0059e0b4 + (uVar4 >> 4);
      local_74 = (uint *)&SUB_00000002;
    }
LAB_016dc6a8:
    if (((uint)local_6c & (uint)local_80 >> 0x1f) != 0) goto LAB_016dc854;
    if (local_6c != (uint *)0x0) {
      uVar19 = uVar19 & 0xfffeffff;
    }
    uVar4 = (uint)(local_58 == (byte *******)0x0 && uStack_54 == 0);
    if (local_80 == (byte *******)0x0) {
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      puVar11 = (uint *)((int)&uStack_30 - (int)param_2);
      local_6c = (uint *)(uVar4 + (int)puVar11);
      if ((int)local_80 < (int)puVar11) {
        local_80 = (byte *******)puVar11;
      }
      if ((int)local_6c < (int)local_80) {
        local_6c = (uint *)local_80;
      }
      if (0x7fffffff - (int)local_74 < (int)local_6c) goto LAB_016dc854;
      local_80 = (byte *******)((int)local_74 + (int)local_6c);
    }
    else {
      puVar11 = (uint *)0x0;
      param_2 = (char *)&uStack_30;
      local_6c = (uint *)0x0;
      local_80 = (byte *******)local_74;
    }
    break;
  case 0x73:
    param_2 = (char *)local_58;
    if (local_58 == (byte *******)0x0) {
      param_2 = "(null)";
    }
LAB_016dc7c6:
    if ((int)local_80 < 0) {
      puVar11 = (uint *)FUN_016dd92c(param_2,0x7fffffff);
      if (*(byte *)((int)param_2 + (int)puVar11) != 0) goto LAB_016dc854;
    }
    else {
      puVar11 = (uint *)FUN_016dd92c(param_2,local_80);
    }
    uVar19 = uVar19 & 0xfffeffff;
    local_64 = &DAT_0059e0b4;
    local_74 = (uint *)0x0;
    local_80 = (byte *******)puVar11;
    local_6c = puVar11;
    break;
  case 0x75:
    local_64 = &DAT_0059e0b4;
    local_74 = (uint *)0x0;
LAB_016dc9f0:
    param_2 = (char *)&uStack_30;
    pppppppbVar18 = local_58;
    for (uVar4 = uStack_54; uVar4 != 0; uVar4 = uVar4 >> 1) {
      pbVar6 = (byte *)((int)pppppppbVar18 + CARRY4((uint)pppppppbVar18,uVar4) + uVar4);
      pppppppbVar15 =
           (byte *******)
           (pbVar6 + -(((uint)(ZEXT48(pbVar6) * 0xcccccccd >> 0x20) & 0xfffffffc) + (uint)pbVar6 / 5
                      ));
      lVar1 = (ulonglong)(uint)((int)pppppppbVar18 - (int)pppppppbVar15) * 0xcccccccd;
      uVar4 = (uVar4 - (pppppppbVar18 < pppppppbVar15)) * -0x33333333 +
              ((int)pppppppbVar18 - (int)pppppppbVar15) * -0x33333334 +
              (int)((ulonglong)lVar1 >> 0x20);
      pppppppbVar18 = (byte *******)((uint)lVar1 >> 1 | uVar4 * -0x80000000);
      param_2 = (char *)((int)param_2 + -1);
      *param_2 = ((byte)lVar1 & 1) * '\x05' + (char)pppppppbVar15 + 0x30;
    }
    for (; pppppppbVar18 != (byte *******)0x0;
        pppppppbVar18 = (byte *******)((uint)pppppppbVar18 / 10)) {
      param_2 = (char *)((int)param_2 + -1);
      *param_2 = (char)pppppppbVar18 + (char)(byte *******)((uint)pppppppbVar18 / 10) * -10 + 0x30;
    }
    goto LAB_016dc6a8;
  }
  pppppppbVar18 = local_80;
  if ((int)local_80 < (int)puVar20) {
    pppppppbVar18 = (byte *******)puVar20;
  }
  if ((int)pppppppbVar18 <= iVar7) {
    bVar21 = (int)local_80 < (int)pppppppbVar18;
    if ((uVar19 & 0x12000) == 0 && bVar21) {
      FUN_016db540(param_1,0x20,pppppppbVar18,local_80);
    }
    if (-1 < (int)(*param_1 << 0x1a)) {
      FUN_016db1c8(local_64,local_74,param_1);
    }
    if (((uVar19 ^ 0x10000) & 0x12000) == 0 && bVar21) {
      FUN_016db540(param_1,0x30,pppppppbVar18,local_80);
    }
    if ((int)puVar11 < (int)local_6c) {
      FUN_016db540(param_1,0x30,local_6c,puVar11);
    }
    if (-1 < (int)(*param_1 << 0x1a)) {
      FUN_016db1c8(param_2,puVar11,param_1);
    }
    if (((uVar19 ^ 0x2000) & 0x12000) == 0 && bVar21) {
      FUN_016db540(param_1,0x20,pppppppbVar18,local_80);
    }
LAB_016dc1c8:
    param_2 = (char *)pppppppbVar16;
    goto LAB_016dc1ca;
  }
LAB_016dc854:
  puVar10 = (undefined4 *)FUN_016d2bc8();
  *puVar10 = 0x4b;
  return (byte ******)0xffffffff;
}

