// FUN_0107227c @ 0107227c size=2764 calls_out=15 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0107227c(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int *piVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint local_ec;
  uint local_98;
  int *local_70;
  undefined1 local_6c;
  int **local_68;
  undefined1 *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  
  uVar19 = param_1[2];
  piVar32 = (int *)(uVar19 + 8);
  do {
    if (*piVar32 != 0) {
      ClearExclusiveLocal();
      iVar10 = param_1[2];
      piVar32 = (int *)(iVar10 + 8);
      goto LAB_01072328;
    }
    bVar9 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar9);
  *piVar32 = 1;
  DataMemoryBarrier(0xb);
  local_ec = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(uVar19 + 0xc);
  }
  else {
    local_ec = FUN_015bf3f8();
    local_ec = local_ec ^ 1;
    cVar1 = *(char *)(uVar19 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64 = &LAB_010956e8;
    local_68 = &local_70;
    local_6c = (undefined1)local_ec;
    local_70 = piVar32;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_68,&DAT_01883b90);
  }
  piVar29 = (int *)(param_1[3] & 0xfffffffc);
  if (piVar29 == (int *)0x0) {
    uVar12 = param_1[1];
    if (param_7 == '\0') {
      uVar12 = uVar12 << 1;
    }
    else if (param_7 != '\x02') {
      uVar12 = uVar12 >> 1;
    }
    FUN_01071b28(&local_68,param_1[4] + 1,uVar12);
    puVar3 = (uint *)thunk_FUN_016d4a50(0x18);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    puVar16 = param_1 + 3;
    *puVar3 = (uint)local_68;
    puVar3[1] = (uint)local_64;
    puVar3[2] = local_60;
    puVar3[3] = local_5c;
    puVar3[4] = local_58;
    puVar3[5] = local_54;
    if (*puVar16 == 0) {
      DataMemoryBarrier(0xb);
      bVar2 = false;
      bVar9 = (bool)hasExclusiveAccess(puVar16);
      if (bVar9) {
        *puVar16 = (uint)puVar3;
        DataMemoryBarrier(0xb);
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    if (!bVar2) {
LAB_0107244c:
      piVar29 = (int *)(*puVar16 & 0xfffffffc);
      if (piVar29 == (int *)0x0) goto code_r0x01072458;
      puVar23 = (undefined4 *)((uint)puVar3 & 0xfffffffc);
      if (puVar23[1] != 0) {
        thunk_FUN_016d3fb4(*puVar23);
      }
      piVar24 = (int *)puVar23[2];
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar24;
        bVar9 = (bool)hasExclusiveAccess(piVar24);
      } while (!bVar9);
      *piVar24 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(puVar23[2]);
      }
      thunk_FUN_016d3fb4(puVar23);
      goto LAB_010724ec;
    }
LAB_010724e8:
    piVar29 = (int *)((uint)puVar3 & 0xfffffffc);
LAB_010724ec:
    iVar10 = param_1[1];
    uVar12 = local_60;
  }
  else {
    iVar10 = param_1[1];
    uVar12 = uVar19;
  }
  if (iVar10 != 0) {
    puVar16 = (uint *)*param_1;
    uVar4 = *param_2;
    puVar3 = puVar16;
LAB_010725ec:
    puVar5 = puVar3 + 1;
    bVar9 = false;
LAB_0107260c:
    uVar13 = *puVar3;
    if ((uVar13 & 1) == 0) {
      piVar24 = (int *)(uVar13 & 0xfffffff8);
      uVar17 = uVar13 | 4;
      if (bVar9) {
        if (piVar24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00384d88,0x2c,&DAT_01883b70);
        }
        if ((uint)piVar29[1] <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar12,piVar29[1],&DAT_01883b80);
        }
        puVar6 = (uint *)(*piVar29 + uVar12 * 4);
        uVar11 = local_98;
        while ((uVar11 & 4) != 0) {
          if (*puVar6 == uVar11) {
            DataMemoryBarrier(0xb);
            bVar9 = (bool)hasExclusiveAccess(puVar6);
            if (bVar9) {
              *puVar6 = uVar17;
              uVar11 = uVar12;
              goto LAB_01072688;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          uVar11 = *puVar6;
        }
        goto LAB_0107268c;
      }
      if (piVar24 != (int *)0x0) {
        local_40 = param_5;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_3c = param_6;
        local_68 = (int **)(param_3 ^ 0x70736575);
        local_64 = (undefined1 *)(param_4 ^ 0x736f6d65);
        local_60 = param_3 ^ 0x6e657261;
        local_5c = param_4 ^ 0x6c796765;
        local_58 = param_5 ^ 0x6e646f6d;
        local_54 = param_6 ^ 0x646f7261;
        local_50 = param_5 ^ 0x79746573;
        local_4c = param_6 ^ 0x74656462;
        local_48 = param_3;
        local_44 = param_4;
        FUN_0108a644(*piVar24,&local_68);
        uVar14 = local_54 + (int)local_64 + (uint)CARRY4(local_58,(uint)local_68);
        uVar25 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar14;
        uVar15 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + (int)local_68;
        uVar33 = local_34 | local_30 << 0x18;
        uVar21 = uVar33 ^ local_4c;
        uVar11 = local_38 ^ local_50;
        uVar27 = uVar11 + local_60;
        uVar18 = uVar21 + local_5c + (uint)CARRY4(uVar11,local_60);
        uVar30 = uVar18 + uVar25 + (uint)CARRY4(uVar27,uVar15);
        uVar18 = (uVar21 << 0x10 | uVar11 >> 0x10) ^ uVar18;
        uVar11 = (uVar11 << 0x10 | uVar21 >> 0x10) ^ uVar27;
        uVar35 = uVar30 ^ (uVar25 << 0x11 | uVar15 >> 0xf);
        uVar26 = uVar27 + uVar15 ^ (uVar15 << 0x11 | uVar25 >> 0xf);
        uVar21 = uVar18 + local_58 + (int)local_68 + (uint)CARRY4(uVar11,uVar14);
        uVar25 = uVar11 + uVar14 ^ local_38;
        uVar36 = uVar25 + uVar26;
        uVar28 = (uVar21 ^ uVar33) + uVar35 + (uint)CARRY4(uVar25,uVar26);
        uVar25 = uVar28 ^ (uVar35 << 0xd | uVar26 >> 0x13);
        uVar35 = uVar36 ^ (uVar26 << 0xd | uVar35 >> 0x13);
        uVar21 = (uVar18 << 0x15 | uVar11 >> 0xb) ^ uVar21;
        uVar30 = uVar30 ^ 0xff;
        uVar11 = (uVar11 << 0x15 | uVar18 >> 0xb) ^ uVar11 + uVar14;
        uVar33 = uVar11 + uVar30;
        uVar18 = uVar21 + uVar27 + uVar15 + (uint)CARRY4(uVar11,uVar30);
        uVar34 = uVar25 + uVar18 + (uint)CARRY4(uVar35,uVar33);
        uVar14 = uVar34 ^ (uVar25 << 0x11 | uVar35 >> 0xf);
        uVar25 = uVar35 + uVar33 ^ (uVar35 << 0x11 | uVar25 >> 0xf);
        uVar18 = (uVar21 << 0x10 | uVar11 >> 0x10) ^ uVar18;
        uVar21 = (uVar11 << 0x10 | uVar21 >> 0x10) ^ uVar33;
        uVar30 = uVar21 + uVar28;
        uVar26 = uVar18 + uVar36 + (uint)CARRY4(uVar21,uVar28);
        uVar28 = uVar14 + uVar26 + (uint)CARRY4(uVar25,uVar30);
        uVar11 = (uVar14 << 0xd | uVar25 >> 0x13) ^ uVar28;
        uVar15 = (uVar25 << 0xd | uVar14 >> 0x13) ^ uVar25 + uVar30;
        uVar26 = (uVar18 << 0x15 | uVar21 >> 0xb) ^ uVar26;
        uVar21 = (uVar21 << 0x15 | uVar18 >> 0xb) ^ uVar30;
        uVar27 = uVar21 + uVar34;
        uVar18 = uVar26 + uVar35 + uVar33 + (uint)CARRY4(uVar21,uVar34);
        uVar35 = uVar11 + uVar18 + (uint)CARRY4(uVar15,uVar27);
        uVar14 = (uVar11 << 0x11 | uVar15 >> 0xf) ^ uVar35;
        uVar18 = (uVar26 << 0x10 | uVar21 >> 0x10) ^ uVar18;
        uVar21 = (uVar21 << 0x10 | uVar26 >> 0x10) ^ uVar27;
        uVar26 = uVar21 + uVar28;
        uVar30 = uVar18 + uVar25 + uVar30 + (uint)CARRY4(uVar21,uVar28);
        uVar25 = (uVar21 << 0x15 | uVar18 >> 0xb) ^ uVar26;
        uVar33 = (uVar18 << 0x15 | uVar21 >> 0xb) ^ uVar30;
        uVar18 = uVar25 + uVar35;
        uVar11 = (uVar15 << 0x11 | uVar11 >> 0xf) ^ uVar15 + uVar27;
        uVar15 = uVar33 + uVar15 + uVar27 + (uint)CARRY4(uVar25,uVar35);
        uVar21 = (uVar11 << 0xd | uVar14 >> 0x13) ^ uVar11 + uVar26;
        uVar11 = (uVar14 << 0xd | uVar11 >> 0x13) ^ uVar14 + uVar30 + (uint)CARRY4(uVar11,uVar26);
        uVar14 = piVar29[1] - 1;
        uVar11 = uVar14 & (((uVar18 ^ uVar33 >> 0x10) << 0x15 |
                           ((uVar33 << 0x10 | uVar25 >> 0x10) ^ uVar15) >> 0xb) ^
                           (uVar21 << 0x11 | uVar11 >> 0xf) ^
                           uVar11 + uVar15 + (uint)CARRY4(uVar21,uVar18) ^ uVar21 + uVar18);
        if (piVar29[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,0,&DAT_01883b60);
        }
        iVar20 = *piVar29;
        bVar9 = true;
        uVar21 = 0;
        iVar7 = uVar11 + 1;
        puVar6 = (uint *)(iVar20 + uVar11 * 4);
LAB_01072998:
        if (bVar9) {
LAB_010729c0:
          uVar15 = *(uint *)(iVar20 + uVar11 * 4);
          if ((uVar15 & 1) != 0) goto LAB_01072b00;
          if ((int *)(uVar15 & 0xfffffff8) == (int *)0x0) {
            if (((uVar13 & 2) != 0) && (uVar15 < 8)) goto LAB_01072b00;
LAB_01072aac:
            if (*puVar6 != uVar15) {
              ClearExclusiveLocal();
              bVar9 = true;
              goto LAB_01072998;
            }
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(puVar6);
            if (bVar2) {
              *puVar6 = uVar17;
            }
            bVar9 = true;
            if (bVar2) goto code_r0x01072ad0;
            goto LAB_01072998;
          }
          if (uVar15 == uVar17) goto LAB_01072b00;
          iVar22 = *(int *)(uVar15 & 0xfffffff8);
          iVar31 = *piVar24;
          if (iVar22 != iVar31) {
            iVar8 = FUN_0103cf5c(iVar22 + 8,iVar31 + 8);
            bVar9 = false;
            if (((((iVar8 == 0) || (*(short *)(iVar22 + 0x50) != *(short *)(iVar31 + 0x50))) ||
                 ((*(short *)(iVar22 + 0x50) == 0x24 &&
                  (*(short *)(iVar22 + 0x52) != *(short *)(iVar31 + 0x52))))) ||
                ((uint)*(ushort *)(iVar22 + 0x4c) != (uint)*(ushort *)(iVar31 + 0x4c))) ||
               ((*(ushort *)(iVar22 + 0x4c) - 5 < 2 &&
                (*(short *)(iVar22 + 0x4e) != *(short *)(iVar31 + 0x4e))))) goto LAB_01072998;
          }
          if (((uVar15 & 4) != 0) && ((uVar13 & 2) != 2 || 7 < uVar15)) goto LAB_01072aac;
        }
        else if (uVar21 < uVar14) {
          uVar11 = iVar7 + uVar21;
          uVar21 = uVar21 + 1;
          uVar11 = uVar11 & uVar14;
          puVar6 = (uint *)(iVar20 + uVar11 * 4);
          goto LAB_010729c0;
        }
LAB_01072b00:
        bVar9 = false;
        goto LAB_01072b1c;
      }
      bVar9 = false;
      goto LAB_01072b1c;
    }
    goto LAB_010725d8;
  }
LAB_01072b7c:
  FUN_00fbbe08(param_2);
  if (((local_ec == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar10 = FUN_015bf3f8(), iVar10 == 0)) {
    *(undefined1 *)(uVar19 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar32;
    bVar9 = (bool)hasExclusiveAccess(piVar32);
  } while (!bVar9);
  *piVar32 = 0;
  goto LAB_01072cd8;
code_r0x01072458:
  if (*puVar16 == 0) {
    DataMemoryBarrier(0xb);
    bVar9 = false;
    bVar2 = (bool)hasExclusiveAccess(puVar16);
    if (bVar2) {
      *puVar16 = (uint)puVar3;
      DataMemoryBarrier(0xb);
      bVar9 = true;
    }
  }
  else {
    bVar9 = false;
    ClearExclusiveLocal();
  }
  if (bVar9) goto LAB_010724e8;
  goto LAB_0107244c;
code_r0x01072ad0:
  local_98 = uVar17;
LAB_01072688:
  DataMemoryBarrier(0xb);
  uVar12 = uVar11;
LAB_0107268c:
  bVar9 = true;
LAB_01072b1c:
  if (*puVar3 != uVar13) {
    ClearExclusiveLocal();
    goto LAB_0107260c;
  }
  DataMemoryBarrier(0xb);
  bVar2 = (bool)hasExclusiveAccess(puVar3);
  if (bVar2) goto code_r0x01072b38;
  goto LAB_0107260c;
code_r0x01072b38:
  *puVar3 = 1;
  DataMemoryBarrier(0xb);
  if ((piVar24 != (int *)0x0 && (uVar13 & 2) == 2) && !bVar9) {
    FUN_0109ba68(uVar4);
  }
LAB_010725d8:
  puVar3 = puVar5;
  if (puVar5 == puVar16 + iVar10) goto LAB_01072b7c;
  goto LAB_010725ec;
  while (bVar9 = (bool)hasExclusiveAccess(piVar32), !bVar9) {
LAB_01072328:
    if (*piVar32 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar32);
      goto LAB_01072344;
    }
  }
  *piVar32 = 1;
  DataMemoryBarrier(0xb);
LAB_01072344:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(iVar10 + 0xc) == '\0') {
LAB_01072cac:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(iVar10 + 0xc) = 1;
      }
      goto LAB_01072cbc;
    }
LAB_0107236c:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(iVar10 + 0xc) = 1;
    }
LAB_0107237c:
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar32;
      bVar9 = (bool)hasExclusiveAccess(piVar32);
    } while (!bVar9);
    *piVar32 = 0;
  }
  else {
    uVar19 = FUN_015bf3f8();
    if (*(char *)(iVar10 + 0xc) != '\0') {
      if ((uVar19 ^ 1) == 0) goto LAB_0107236c;
      goto LAB_0107237c;
    }
    if ((uVar19 ^ 1) == 0) goto LAB_01072cac;
LAB_01072cbc:
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar32;
      bVar9 = (bool)hasExclusiveAccess(piVar32);
    } while (!bVar9);
    *piVar32 = 0;
  }
  piVar29 = (int *)0x0;
LAB_01072cd8:
  if (iVar10 == 2) {
    FUN_016d6968(0xf0,piVar32,0x81,1);
    return piVar29;
  }
  return piVar29;
}

