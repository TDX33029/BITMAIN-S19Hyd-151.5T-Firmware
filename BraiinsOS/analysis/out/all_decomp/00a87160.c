// FUN_00a87160 @ 00a87160 size=1592 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00a87160(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int **ppiVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  int **unaff_r6;
  byte bVar14;
  int iVar15;
  int *unaff_r9;
  code *unaff_r10;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  int **local_88;
  int *local_84;
  int *local_80;
  uint uStack_7c;
  uint local_78;
  int *local_74;
  int local_70 [2];
  int local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  undefined1 local_58;
  int *local_54;
  int local_50;
  int *local_4c;
  int *local_44;
  int *local_40;
  int *local_3c;
  int **local_38;
  code *local_34;
  int **local_30;
  undefined1 *local_2c;
  
  DataMemoryBarrier(0xb);
  uVar3 = 0;
  if (DAT_018dae00 != 0) {
    local_38 = &local_44;
    local_44 = &DAT_018dadf0;
    uVar3 = FUN_015eedc4(&DAT_018dae00,1,&local_38,&DAT_0186dbd4,&DAT_018ac9b8);
  }
  uVar18 = thunk_FUN_016de0ee(uVar3,0x230);
  puVar1 = DAT_018dadf4;
  piVar2 = (int *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  piVar5 = DAT_018dadf4;
  if ((char)piVar2[1] == '\0') {
    do {
      bVar16 = (bool)hasExclusiveAccess(0x18d912c);
    } while (!bVar16);
    if (DAT_018d912c == 0) {
      DAT_018d912c = DAT_018d912c + 1;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0038c190,0x57,&DAT_0188a500);
    }
    iVar15 = DAT_018d912c + 1;
    *piVar2 = DAT_018d912c;
    DAT_018d912c = iVar15;
    *(undefined1 *)(piVar2 + 1) = 1;
    unaff_r6 = (int **)0x0;
  }
  piVar2 = (int *)*piVar2;
  DataMemoryBarrier(0xb);
  if (piVar2 == (int *)puVar1[0xbe]) {
    DataMemoryBarrier(0xb);
    puVar1[0xbe] = 1;
    local_2c = (undefined1 *)((uint)local_2c & 0xffffff00);
    local_38 = (int **)&DAT_00000001;
    local_34 = (code *)piVar2;
    local_30 = (int **)piVar5;
  }
  else {
    FUN_01265df8(&local_38);
  }
  local_88 = local_38;
  local_84 = (int *)local_34;
  local_80 = (int *)local_30;
  uStack_7c = (uint)local_2c;
  local_58 = 0;
  local_60 = (int *)0x0;
  local_70[0] = 0;
  local_78 = 0;
  local_54 = &DAT_018dadf0;
  ppiVar9 = local_30;
  if (((uint)local_38 & 1) == 0) {
    ppiVar9 = (int **)local_34;
  }
  piVar2 = *(int **)(*(int *)(DAT_018dadf0 + 0x10) + 0x58);
  local_68 = param_1;
  local_64 = param_2;
  local_5c = param_2;
  local_50 = param_1;
  local_4c = param_2;
  if (*piVar2 == 1) {
    iVar15 = 0;
    if ((int *)piVar2[1] <= param_2) {
      bVar14 = *(byte *)(piVar2 + 7);
      bVar16 = (bVar14 & 1) != 0;
      if (bVar16) {
        bVar14 = *(byte *)(piVar2 + 8);
      }
      if (((!bVar16 || (bVar14 & 2) == 0) || (piVar2[2] != 1)) || (param_2 <= (int *)piVar2[3]))
      goto LAB_00a872a4;
    }
  }
  else {
LAB_00a872a4:
    (**(code **)(*(int *)(DAT_018dadf0 + 0xc) + 0x24))
              (&local_38,
               *(int *)(DAT_018dadf0 + 8) +
               (*(int *)(*(int *)(DAT_018dadf0 + 0xc) + 8) - 1U & 0xfffffff8) + 8,ppiVar9);
    if (local_38 == (int **)&SUB_00000002) {
LAB_00a8774c:
      local_44 = (int *)local_34;
      local_34 = FUN_013c828c;
      local_38 = &local_44;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005735ed,&local_38,&DAT_018714e0);
    }
    if (((uint)local_38 & 1) == 0) {
LAB_00a87554:
      FUN_00a87814(&local_88);
      return 0;
    }
    local_3c = param_2;
    if (((local_30 <= local_34) && ((local_78 & 1) != 0)) && ((int **)local_74 == local_30)) {
      FUN_013c167c(&local_38,&local_78,local_34,local_30,DAT_018dadf0,&local_88);
      if (local_38 == (int **)&SUB_00000002) goto LAB_00a8774c;
      if (((uint)local_38 & 1) == 0) goto LAB_00a87554;
      param_2 = local_5c;
      local_3c = local_64;
    }
    while( true ) {
      unaff_r6 = local_30;
      unaff_r10 = local_34;
      unaff_r9 = local_4c;
      iVar15 = local_50;
      piVar5 = local_54;
      piVar2 = local_64;
      bVar17 = local_3c <= param_2;
      bVar16 = param_2 == local_3c;
      if (!bVar17 || bVar16) {
        bVar17 = (int *)((int)param_2 + 1) <= local_30;
        bVar16 = local_30 == (int **)((int)param_2 + 1);
      }
      local_44 = (int *)local_30;
      local_40 = param_2;
      if (bVar17 && !bVar16) {
        local_34 = FUN_005ffff4;
        local_38 = &local_44;
        local_2c = &LAB_00fac484;
        local_30 = &local_3c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0057a181,&local_38,&DAT_01893ee0);
      }
      local_78 = 1;
      iVar4 = *local_54;
      if (((uint)local_88 & 1) == 0) {
        piVar11 = local_84;
      }
      else {
        piVar11 = local_80;
      }
      piVar8 = *(int **)(*(int *)(iVar4 + 0x10) + 0x58);
      local_74 = (int *)local_30;
      local_60 = (int *)local_30;
      local_5c = param_2;
      if (((local_30 != (int **)0x0) && ((*(byte *)(piVar8 + 7) & 1) != 0)) ||
         ((param_2 < local_64 && ((*(byte *)(piVar8 + 8) & 2) != 0)))) break;
      if (*piVar8 == 1) {
        uVar10 = (int)param_2 - (int)local_30;
        if (param_2 < local_30) {
          uVar10 = 0;
        }
        if ((uVar10 < (uint)piVar8[1]) ||
           ((((local_70[0] - 1U < 2 || ((*(byte *)(piVar8 + 7) & 1) != 0)) &&
             ((*(byte *)(piVar8 + 8) & 2) != 0)) && ((piVar8[2] == 1 && ((uint)piVar8[3] < uVar10)))
            ))) break;
      }
      (**(code **)(*(int *)(iVar4 + 0xc) + 0x24))
                (&local_38,
                 *(int *)(iVar4 + 8) + (*(int *)(*(int *)(iVar4 + 0xc) + 8) - 1U & 0xfffffff8) + 8,
                 piVar11,local_70);
      if (local_38 == (int **)&SUB_00000002) goto LAB_00a8774c;
      if (((uint)local_38 & 1) == 0) break;
      if (((local_34 < local_30) || ((local_78 & 1) == 0)) || ((int **)local_74 != local_30)) {
        local_3c = piVar2;
      }
      else {
        FUN_013c167c(&local_38,&local_78,local_34,local_30,*piVar5,&local_88);
        if (local_38 == (int **)&SUB_00000002) goto LAB_00a8774c;
        if (((uint)local_38 & 1) == 0) break;
        param_2 = local_5c;
        local_3c = local_64;
      }
    }
  }
  FUN_00a87814(&local_88);
  if (iVar15 == 0) {
    return 0;
  }
  if (unaff_r6 < unaff_r10) goto LAB_00a87360;
  if (unaff_r10 != (code *)0x0) {
    if (unaff_r10 < unaff_r9) {
      if (*(char *)(iVar15 + (int)unaff_r10) < -0x40) goto LAB_00a87360;
    }
    else if (unaff_r10 != (code *)unaff_r9) goto LAB_00a87360;
  }
  if (unaff_r6 != (int **)0x0) {
    if (unaff_r6 < unaff_r9) {
      if (*(char *)(iVar15 + (int)unaff_r6) < -0x40) goto LAB_00a87360;
    }
    else if (unaff_r6 != (int **)unaff_r9) {
LAB_00a87360:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar15,unaff_r9,unaff_r10,unaff_r6,&DAT_01871d28);
    }
  }
  uVar10 = (int)unaff_r6 - (int)unaff_r10;
  if (uVar10 == 0) {
    return 0;
  }
  pbVar12 = (byte *)(iVar15 + (int)unaff_r10);
  if (uVar10 == 1) {
    bVar14 = *pbVar12;
    if (bVar14 == 0x2b) {
      return 0;
    }
    if (bVar14 == 0x2d) {
      return 0;
    }
  }
  else {
    bVar14 = *pbVar12;
  }
  if (bVar14 == 0x2b) {
    pbVar12 = pbVar12 + 1;
    uVar10 = uVar10 - 1;
  }
  if (uVar10 < 9) {
    uVar3 = 1;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      if (9 < *pbVar12 - 0x30) {
        return 0;
      }
      pbVar12 = pbVar12 + 1;
    }
  }
  else {
    uVar6 = 0;
    do {
      if (uVar10 == 0) {
        return 1;
      }
      uVar7 = (uint)((ulonglong)uVar6 * 10);
      if ((int)((ulonglong)uVar6 * 10 >> 0x20) != 0) {
        return 0;
      }
      uVar13 = *pbVar12 - 0x30;
      uVar3 = 0;
      uVar6 = uVar13 + uVar7;
      if (9 < uVar13) {
        return 0;
      }
      uVar10 = uVar10 - 1;
      pbVar12 = pbVar12 + 1;
    } while (!CARRY4(uVar13,uVar7));
  }
  return uVar3;
}

