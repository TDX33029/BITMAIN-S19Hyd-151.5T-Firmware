// FUN_00ce85a8 @ 00ce85a8 size=2220 calls_out=24 calls_in=3
// strings: 

void FUN_00ce85a8(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 **ppuVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  ulonglong uVar18;
  uint local_3c4;
  uint local_3c0;
  undefined1 auStack_3b8 [136];
  uint local_330;
  uint local_32c;
  uint *local_328;
  undefined1 auStack_324 [132];
  uint *local_2a0;
  undefined1 auStack_298 [132];
  int local_214;
  uint *local_210;
  uint *local_20c;
  int *local_208;
  undefined1 *local_204;
  int *local_200;
  undefined1 *local_1fc;
  undefined1 auStack_180 [132];
  undefined4 *local_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint *local_d8;
  int *local_d4;
  undefined4 **local_d0;
  code *local_cc;
  uint *local_c8;
  int *local_c4;
  undefined4 **local_c0;
  int *local_bc;
  uint local_b8;
  undefined1 auStack_a8 [132];
  
  puVar15 = (uint *)*param_2;
  if (puVar15 == (uint *)0x0) goto LAB_00ce8bdc;
  if ((*puVar15 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00409033,0x36,&DAT_018a5c6c);
  }
  puVar14 = puVar15 + 0x28;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)puVar15[0x26]) {
  case '\0':
    *(undefined2 *)((int)puVar15 + 0x9b) = 0;
    puVar15[0x25] = puVar15[0x22];
    puVar15[0x23] = puVar15[0x20];
    puVar15[0x24] = puVar15[0x21];
    puVar15[0x10] = puVar15[2];
    puVar15[0x11] = puVar15[3];
    puVar15[0x12] = puVar15[4];
    puVar15[0x13] = puVar15[5];
    puVar15[0x14] = puVar15[6];
    puVar15[0x15] = puVar15[7];
    puVar15[0x16] = puVar15[8];
    puVar15[0x17] = puVar15[9];
    puVar15[0x18] = puVar15[10];
    *(undefined2 *)((int)puVar15 + 0x99) = 0x101;
    puVar15[0x1a] = puVar15[0xc];
    puVar15[0x1d] = puVar15[0xf];
    puVar15[0x1c] = puVar15[0xe];
    iVar7 = *(int *)(puVar15[0x20] + 0x2e8);
    puVar15[0x19] = puVar15[0xb];
    puVar15[0x1b] = puVar15[0xd];
    if (iVar7 == 0) {
      puVar14 = (uint *)FUN_00c70f88(&DAT_0035202a,0x24);
      local_3c4 = 3;
      cVar2 = *(char *)((int)puVar15 + 0x99);
    }
    else {
      FUN_00c71120(&local_210);
      puVar4 = local_20c;
      if (local_210 != (uint *)&SUB_00000002) {
        puVar15[0x1e] = (uint)local_210;
        puVar15[0x1f] = (uint)local_20c;
        iVar7 = *(int *)(puVar15[0x23] + 0x2ec);
        *(undefined1 *)(puVar15 + 0x3a) = 0;
        puVar15[0x28] = iVar7 + 8;
        puVar15[0x29] = (uint)local_20c;
        goto switchD_00ce85e8_caseD_3;
      }
LAB_00ce89cc:
      local_3c4 = 3;
      cVar2 = *(char *)((int)puVar15 + 0x99);
      puVar14 = puVar4;
    }
    goto joined_r0x00ce8904;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01871d58);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01871d58);
  case '\x03':
switchD_00ce85e8_caseD_3:
    uVar18 = FUN_00bbd104(puVar14,param_3);
    puVar4 = (uint *)(uVar18 >> 0x20);
    uVar6 = 3;
    if ((uVar18 & 1) == 0) {
      if ((char)puVar15[0x3a] == '\x03') {
        FUN_00bbd058(puVar15 + 0x2d);
      }
      if (puVar4 != (uint *)0x0) goto LAB_00ce89cc;
      iVar7 = *(int *)(puVar15[0x23] + 0x2ec);
      *(undefined1 *)(puVar15 + 0x35) = 0;
      puVar15[0x28] = iVar7 + 8;
      goto switchD_00ce85e8_caseD_4;
    }
    break;
  case '\x04':
switchD_00ce85e8_caseD_4:
    uVar18 = FUN_00bbd420(puVar14,param_3);
    iVar7 = (int)(uVar18 >> 0x20);
    if ((uVar18 & 1) == 0) {
      local_214 = iVar7;
      if ((char)puVar15[0x35] == '\x03') {
        FUN_00b216bc(puVar15 + 0x29);
      }
      iVar8 = *(int *)(puVar15[0x24] + 8);
      if (iVar7 != iVar8) {
        local_1fc = &LAB_00fac484;
        local_204 = &LAB_00fac484;
        local_200 = &local_e8;
        local_20c = (uint *)&LAB_00fac484;
        local_210 = puVar15 + 0x25;
        local_208 = &local_214;
        local_e8 = iVar8;
        FUN_00600d2c(&local_c8,&DAT_0057b9e5,&local_210);
        local_d8 = local_c8;
        local_d4 = local_c4;
        local_d0 = local_c0;
        puVar4 = (uint *)FUN_00c6b484(&local_d8);
        goto LAB_00ce89cc;
      }
      puVar15[0x28] = puVar15[0x1e];
      puVar15[0x29] = puVar15[0x1f];
      *(undefined2 *)((int)puVar15 + 0x99) = 0;
      puVar15[0x2a] = puVar15[0x10];
      puVar15[0x2b] = puVar15[0x11];
      puVar15[0x2c] = puVar15[0x12];
      puVar15[0x2d] = puVar15[0x13];
      puVar15[0x2e] = puVar15[0x14];
      puVar15[0x2f] = puVar15[0x15];
      puVar15[0x30] = puVar15[0x16];
      puVar15[0x31] = puVar15[0x17];
      puVar15[0x4b] = puVar15[0x24];
      puVar15[0x35] = puVar15[0x1b];
      puVar15[0x32] = puVar15[0x18];
      puVar15[0x33] = puVar15[0x19];
      puVar15[0x34] = puVar15[0x1a];
      puVar15[0x36] = puVar15[0x1c];
      *(undefined1 *)(puVar15 + 0x50) = 0;
      puVar15[0x4a] = puVar15[0x23];
      puVar15[0x4c] = puVar15[0x25];
      puVar15[0x37] = puVar15[0x1d];
      goto switchD_00ce85e8_caseD_5;
    }
    uVar6 = 4;
    break;
  case '\x05':
switchD_00ce85e8_caseD_5:
    FUN_00bbd8b0(&local_210,puVar14,param_3);
    piVar12 = local_208;
    puVar3 = local_20c;
    puVar4 = local_210;
    if (local_210 == (uint *)&DAT_00000004 && local_20c == (uint *)0x0) {
      uVar6 = 5;
      break;
    }
    FUN_016dd1aa(auStack_180,&local_204,0x84);
    FUN_00bbd5d4(puVar14);
    if (puVar4 == (uint *)0x3 && puVar3 == (uint *)0x0) {
      local_20c = (uint *)&LAB_00fac484;
      local_210 = puVar15 + 0x25;
      FUN_00600d2c(&local_d8,&DAT_0058b4bf,&local_210);
      local_3c4 = 3;
      local_210 = (uint *)0x3;
      local_c8 = local_d8;
      local_c4 = local_d4;
      local_c0 = local_d0;
      local_bc = piVar12;
      puVar14 = (uint *)FUN_00c7abf0(&local_c8,&local_210);
    }
    else {
      *(undefined1 *)(puVar15 + 0x27) = 1;
      puVar15[0x2a] = (uint)piVar12;
      *puVar14 = (uint)puVar4;
      puVar15[0x29] = (uint)puVar3;
      FUN_016dd1aa(puVar15 + 0x2b,auStack_180,0x84);
      if (puVar4 != (uint *)&SUB_00000002 || puVar3 != (uint *)0x0) {
        *(undefined2 *)((int)puVar15 + 0x9b) = 1;
        FUN_016dd1aa(puVar15 + 0x4c,puVar14,0x90);
        if (puVar15[100] != 0) {
          iVar7 = *(int *)(puVar15[0x23] + 0x2ec);
          *(undefined1 *)((int)puVar15 + 0x201) = 0;
          puVar15[0x7f] = iVar7 + 8;
          goto switchD_00ce85e8_caseD_6;
        }
        local_3c4 = puVar15[0x4c];
        puVar4 = (uint *)0x0;
        local_3c0 = puVar15[0x4d];
        puVar14 = (uint *)puVar15[0x4e];
        *(undefined1 *)((int)puVar15 + 0x9b) = 0;
        FUN_016dd1aa(&local_210,auStack_180,0x84);
        goto LAB_00ce8cb0;
      }
      local_3c4 = 2;
    }
    *(undefined1 *)(puVar15 + 0x27) = 0;
    cVar2 = *(char *)((int)puVar15 + 0x99);
joined_r0x00ce8904:
    if (cVar2 != '\0') {
      puVar4 = puVar15 + 0x1c;
      FUN_016af0b0(puVar4);
      piVar12 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar12;
        bVar16 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar16);
      *piVar12 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar4);
      }
    }
    local_3c0 = 0;
    puVar4 = (uint *)0x0;
    *(undefined1 *)((int)puVar15 + 0x99) = 0;
    if (((*(char *)((int)puVar15 + 0x9a) != '\0') && (-0x7ffffffe < (int)puVar15[0x18])) &&
       (puVar15[0x18] != 0)) {
      thunk_FUN_016d3fb4(puVar15[0x19]);
    }
    *(undefined1 *)((int)puVar15 + 0x9a) = 0;
    FUN_016dd1aa(auStack_298,auStack_a8,0x84);
    *(undefined1 *)(puVar15 + 0x26) = 1;
LAB_00ce8a74:
    FUN_016dd1aa(auStack_324,auStack_298,0x84);
    local_32c = local_3c0;
    local_330 = local_3c4;
    local_328 = puVar14;
    local_2a0 = puVar4;
    if ((*puVar15 & 1) != 0) {
      *puVar15 = 1;
      puVar15[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
    }
    FUN_00ce90bc(puVar15 + 2);
    *puVar15 = 1;
    puVar15[1] = 0;
    if (local_3c4 == 3 && local_3c0 == 0) {
      local_3c4 = 2;
      local_3c0 = 0;
      puVar4 = puVar14;
      puVar14 = puVar15;
    }
    else {
      FUN_016dd1aa(auStack_3b8,auStack_324,0x84);
    }
    local_330 = local_3c4;
    local_32c = local_3c0;
    local_328 = puVar14;
    FUN_016dd1aa(auStack_324,auStack_3b8,0x84);
    piVar12 = (int *)*param_2;
    local_2a0 = puVar4;
    if (piVar12 != (int *)0x0) {
      if (*piVar12 == 0 && piVar12[1] == 0) {
        FUN_00ce90bc(piVar12 + 2);
      }
      thunk_FUN_016d3fb4(piVar12);
    }
    *param_2 = 0;
    *param_1 = local_3c4;
    param_1[1] = local_3c0;
    param_1[2] = (uint)puVar14;
    FUN_016dd1aa(param_1 + 3,auStack_3b8,0x84);
    param_1[0x24] = (uint)puVar4;
    return;
  case '\x06':
switchD_00ce85e8_caseD_6:
    uVar18 = FUN_00bcb51c(puVar15 + 0x70,param_3);
    puVar13 = (undefined4 *)(uVar18 >> 0x20);
    if ((uVar18 & 1) == 0) {
      FUN_00bcb384(puVar15 + 0x70);
      if (puVar13 == (undefined4 *)0x0) {
        piVar12 = (int *)puVar15[100];
        uVar5 = 0;
        bVar17 = (int *)0x3ffffffe < piVar12;
        bVar16 = piVar12 == (int *)0x3fffffff;
        uVar1 = (int)piVar12 * 4;
        if (piVar12 < (int *)0x40000000) {
          bVar17 = 0x7ffffffb < uVar1;
          bVar16 = uVar1 == 0x7ffffffc;
        }
        if (bVar17 && !bVar16) {
LAB_00ce8d1c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar5,uVar1);
        }
        uVar11 = puVar15[0x25];
        puVar13 = (undefined4 *)puVar15[99];
        if (uVar1 == 0) {
          local_c0 = (undefined4 **)&DAT_00000004;
          local_c4 = (int *)0x0;
        }
        else {
          local_c0 = (undefined4 **)thunk_FUN_016d4a50(uVar1);
          local_c4 = piVar12;
          if (local_c0 == (undefined4 **)0x0) {
            uVar5 = 4;
            goto LAB_00ce8d1c;
          }
        }
        local_bc = (int *)0x0;
        if (piVar12 != (int *)0x0) {
          ppuVar9 = local_c0;
          piVar10 = piVar12;
          do {
            piVar10 = (int *)((int)piVar10 + -1);
            *ppuVar9 = (undefined4 *)*puVar13;
            ppuVar9 = ppuVar9 + 1;
            puVar13 = puVar13 + 1;
          } while (piVar10 != (int *)0x0);
          local_bc = piVar12;
        }
        local_c8 = (uint *)&DAT_0000000b;
        local_b8 = uVar11;
        puVar4 = (uint *)FUN_00c79b64(&local_c8);
        puVar14 = (uint *)puVar15[0x4e];
        local_3c4 = puVar15[0x4c];
        local_3c0 = puVar15[0x4d];
        *(undefined1 *)((int)puVar15 + 0x9b) = 0;
        FUN_016dd1aa(&local_210,puVar15 + 0x4f,0x84);
      }
      else {
        local_d4 = (int *)&LAB_00fac484;
        local_d8 = puVar15 + 0x25;
        local_cc = FUN_00604528;
        local_d0 = &local_fc;
        local_fc = puVar13;
        FUN_00600d2c(&local_e8,&DAT_005934ac,&local_d8);
        local_f8 = local_e8;
        uStack_f4 = uStack_e4;
        uStack_f0 = uStack_e0;
        local_c4 = (int *)FUN_00c6b484(&local_f8);
        local_c8 = (uint *)&DAT_0000000a;
        puVar4 = (uint *)FUN_00c79b64(&local_c8);
        local_3c0 = puVar15[0x4d];
        local_3c4 = puVar15[0x4c];
        *(undefined1 *)((int)puVar15 + 0x9b) = 0;
        puVar14 = (uint *)puVar15[0x4e];
        FUN_016dd1aa(&local_210,puVar15 + 0x4f,0x84);
        (**(code **)*local_fc)();
      }
LAB_00ce8cb0:
      FUN_016dd1aa(auStack_a8,&local_210,0x84);
      *(undefined2 *)((int)puVar15 + 0x9b) = 0;
      *(undefined2 *)((int)puVar15 + 0x99) = 0;
      FUN_016dd1aa(auStack_298,auStack_a8,0x84);
      *(undefined1 *)(puVar15 + 0x26) = 1;
      if (local_3c4 == 4 && local_3c0 == 0) goto LAB_00ce8bdc;
      goto LAB_00ce8a74;
    }
    uVar6 = 6;
  }
  *(undefined1 *)(puVar15 + 0x26) = uVar6;
LAB_00ce8bdc:
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

