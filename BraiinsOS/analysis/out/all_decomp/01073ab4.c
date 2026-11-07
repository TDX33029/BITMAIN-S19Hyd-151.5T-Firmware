// FUN_01073ab4 @ 01073ab4 size=3920 calls_out=14 calls_in=2
// strings: 

int * FUN_01073ab4(undefined4 *param_1,int *param_2,uint param_3,uint param_4,uint param_5,
                  uint param_6,char param_7)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  int iVar34;
  int *piVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint local_8b0;
  uint local_870;
  uint local_85c;
  uint local_858;
  uint local_848;
  uint local_844;
  uint local_83c;
  int *local_838;
  undefined1 local_834;
  undefined1 auStack_830 [1032];
  int **local_428 [257];
  
  iVar24 = param_1[2];
  piVar35 = (int *)(iVar24 + 8);
  do {
    if (*piVar35 != 0) {
      ClearExclusiveLocal();
      iVar24 = param_1[2];
      piVar35 = (int *)(iVar24 + 8);
      goto LAB_01073b58;
    }
    bVar23 = (bool)hasExclusiveAccess(piVar35);
  } while (!bVar23);
  *piVar35 = 1;
  DataMemoryBarrier(0xb);
  local_8b0 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar24 + 0xc);
  }
  else {
    local_8b0 = FUN_015bf3f8();
    local_8b0 = local_8b0 ^ 1;
    cVar1 = *(char *)(iVar24 + 0xc);
  }
  if (cVar1 != '\0') {
    local_428[1] = (int **)&LAB_010956e8;
    local_428[0] = &local_838;
    local_834 = (undefined1)local_8b0;
    local_838 = piVar35;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,local_428,&DAT_01883b90);
  }
  piVar32 = (int *)(param_1[3] & 0xfffffffc);
  if (piVar32 == (int *)0x0) {
    uVar6 = param_1[1];
    if (param_7 == '\0') {
      uVar6 = uVar6 << 1;
    }
    else if (param_7 != '\x02') {
      uVar6 = uVar6 >> 1;
    }
    FUN_01071b28(local_428,param_1[4] + 1,uVar6);
    puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x18);
    if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    puVar12 = param_1 + 3;
    *puVar16 = local_428[0];
    puVar16[1] = local_428[1];
    puVar16[2] = local_428[2];
    puVar16[3] = local_428[3];
    puVar16[4] = local_428[4];
    puVar16[5] = local_428[5];
    if (*puVar12 == 0) {
      DataMemoryBarrier(0xb);
      bVar23 = (bool)hasExclusiveAccess(puVar12);
      if (bVar23) {
        *puVar12 = (uint)puVar16;
      }
      bVar4 = false;
      if (bVar23) {
        DataMemoryBarrier(0xb);
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    if (!bVar4) {
LAB_01073c98:
      piVar32 = (int *)(*puVar12 & 0xfffffffc);
      if (piVar32 == (int *)0x0) goto code_r0x01073ca4;
      puVar16 = (undefined4 *)((uint)puVar16 & 0xfffffffc);
      if (puVar16[1] != 0) {
        thunk_FUN_016d3fb4(*puVar16);
      }
      piVar5 = (int *)puVar16[2];
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar5;
        bVar23 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar23);
      *piVar5 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(puVar16[2]);
      }
      thunk_FUN_016d3fb4(puVar16);
      goto LAB_01073d58;
    }
LAB_01073d54:
    piVar32 = (int *)((uint)puVar16 & 0xfffffffc);
LAB_01073d58:
    iVar13 = param_1[1];
  }
  else {
    iVar13 = param_1[1];
  }
  if (iVar13 != 0) {
    puVar28 = (uint *)*param_1;
    uVar6 = param_5 ^ 0x79746573;
    uVar7 = param_5 ^ 0x6e646f6d;
    iVar14 = *param_2;
    iVar15 = iVar14 + 8;
    puVar12 = puVar28;
LAB_01073e5c:
    puVar8 = puVar12 + 1;
    bVar23 = false;
LAB_01073e78:
    uVar38 = *puVar12;
    if ((uVar38 & 1) == 0) {
      uVar29 = uVar38 | 4;
      uVar39 = uVar38 & 0xfffffff8;
      if (bVar23) {
        if (uVar39 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00384d88,0x2c,&DAT_01883b70);
        }
        if ((uint)piVar32[1] <= param_5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(param_5,piVar32[1],&DAT_01883b80);
        }
        puVar9 = (uint *)(*piVar32 + param_5 * 4);
        uVar20 = local_870;
        while (uVar19 = param_5, (uVar20 & 4) != 0) {
          if (*puVar9 == uVar20) {
            DataMemoryBarrier(0xb);
            bVar23 = (bool)hasExclusiveAccess(puVar9);
            if (bVar23) {
              *puVar9 = uVar29;
              goto LAB_01073ee8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          uVar20 = *puVar9;
        }
        goto LAB_01073eec;
      }
      if (uVar39 != 0) {
        uVar10 = *(uint *)(uVar39 + 0x28);
        uVar33 = 0;
        uVar25 = uVar10 & 7;
        uVar21 = uVar10 & 0xfffffff8;
        iVar17 = *(int *)(uVar39 + 0x24);
        uVar20 = 0;
        uVar19 = param_6 ^ 0x646f7261;
        local_83c = param_3 ^ 0x6e657261;
        uVar30 = param_4 ^ 0x736f6d65;
        uVar31 = uVar7;
        uVar18 = param_3 ^ 0x70736575;
        local_85c = uVar6;
        local_858 = param_6 ^ 0x74656462;
        local_844 = param_4 ^ 0x6c796765;
        if (uVar21 != 0) {
          do {
            uVar22 = uVar18 + uVar31;
            uVar26 = uVar30 + uVar19 + (uint)CARRY4(uVar18,uVar31);
            uVar20 = uVar26 ^ (uVar19 << 0xd | uVar31 >> 0x13);
            uVar30 = uVar22 ^ (uVar31 << 0xd | uVar19 >> 0x13);
            puVar9 = (uint *)(iVar17 + uVar33);
            uVar18 = *puVar9;
            uVar33 = uVar33 + 8;
            uVar36 = puVar9[1];
            local_85c = uVar18 ^ local_85c;
            local_858 = uVar36 ^ local_858;
            uVar37 = local_85c + local_83c;
            uVar40 = local_858 + local_844 + (uint)CARRY4(local_85c,local_83c);
            local_844 = uVar37 + uVar30;
            local_83c = uVar40 + uVar20 + (uint)CARRY4(uVar37,uVar30);
            uVar19 = local_83c ^ (uVar20 << 0x11 | uVar30 >> 0xf);
            uVar40 = uVar40 ^ (local_858 << 0x10 | local_85c >> 0x10);
            uVar37 = uVar37 ^ (local_85c << 0x10 | local_858 >> 0x10);
            uVar31 = local_844 ^ (uVar30 << 0x11 | uVar20 >> 0xf);
            uVar30 = uVar40 + uVar22 + (uint)CARRY4(uVar37,uVar26);
            local_85c = (uVar37 << 0x15 | uVar40 >> 0xb) ^ uVar37 + uVar26;
            local_858 = (uVar40 << 0x15 | uVar37 >> 0xb) ^ uVar30;
            uVar30 = uVar30 ^ uVar36;
            uVar18 = uVar37 + uVar26 ^ uVar18;
          } while (uVar33 < uVar21);
          uVar20 = uVar21;
        }
        uVar21 = 0;
        if (uVar25 < 4) {
          uVar33 = 0;
          uVar40 = 0;
        }
        else {
          uVar40 = *(uint *)(iVar17 + uVar20);
          uVar33 = 4;
        }
        if ((uVar33 | 1) < uVar25) {
          uVar22 = uVar33 * 8 - 0x20;
          uVar3 = *(ushort *)(iVar17 + uVar20 + uVar33);
          uVar21 = (uint)uVar3 << (uVar33 << 3);
          if (-1 < (int)uVar22) {
            uVar21 = 0;
          }
          uVar40 = uVar21 | uVar40;
          iVar34 = uVar33 * -8;
          uVar33 = uVar33 | 2;
          uVar21 = (uint)(uVar3 >> (iVar34 + 0x20U & 0xff));
          if (-1 < (int)uVar22) {
            uVar21 = (uint)uVar3 << (uVar22 & 0xff);
          }
        }
        if (uVar33 < uVar25) {
          bVar2 = *(byte *)(iVar17 + uVar33 + uVar20);
          uVar22 = uVar33 * 8 - 0x20;
          uVar20 = (uint)bVar2 << (uVar33 << 3);
          if (-1 < (int)uVar22) {
            uVar20 = 0;
          }
          uVar40 = uVar20 | uVar40;
          uVar20 = (uint)(bVar2 >> (uVar33 * -8 + 0x20 & 0xff));
          if (-1 < (int)uVar22) {
            uVar20 = (uint)bVar2 << (uVar22 & 0xff);
          }
          uVar21 = uVar20 | uVar21;
        }
        else if (uVar25 == 0) {
          uVar20 = 0;
          local_848 = 0xff;
          goto LAB_010742a8;
        }
        uVar33 = uVar25 * 8 - 0x20;
        uVar20 = 0xff >> (uVar25 * -8 + 0x20 & 0xff);
        if (-1 < (int)uVar33) {
          uVar20 = 0xff << (uVar33 & 0xff);
        }
        uVar20 = uVar20 | uVar21;
        local_848 = 0xff << (uVar25 << 3);
        if (-1 < (int)uVar33) {
          local_848 = 0;
        }
        local_848 = local_848 | uVar40;
        if (uVar25 == 7) {
          uVar22 = uVar19 + uVar30 + (uint)CARRY4(uVar31,uVar18);
          uVar33 = (uVar19 << 0xd | uVar31 >> 0x13) ^ uVar22;
          uVar40 = (uVar31 << 0xd | uVar19 >> 0x13) ^ uVar31 + uVar18;
          local_858 = uVar20 ^ local_858;
          local_85c = local_848 ^ local_85c;
          uVar21 = local_85c + local_83c;
          uVar25 = local_858 + local_844 + (uint)CARRY4(local_85c,local_83c);
          local_844 = uVar21 + uVar40;
          local_83c = uVar25 + uVar33 + (uint)CARRY4(uVar21,uVar40);
          uVar19 = local_83c ^ (uVar33 << 0x11 | uVar40 >> 0xf);
          uVar25 = uVar25 ^ (local_858 << 0x10 | local_85c >> 0x10);
          uVar21 = uVar21 ^ (local_85c << 0x10 | local_858 >> 0x10);
          uVar30 = uVar25 + uVar31 + uVar18 + (uint)CARRY4(uVar21,uVar22);
          local_858 = (uVar25 << 0x15 | uVar21 >> 0xb) ^ uVar30;
          uVar31 = local_844 ^ (uVar40 << 0x11 | uVar33 >> 0xf);
          uVar30 = uVar30 ^ uVar20;
          local_85c = (uVar21 << 0x15 | uVar25 >> 0xb) ^ uVar21 + uVar22;
          uVar18 = uVar21 + uVar22 ^ local_848;
          uVar20 = 0;
          local_848 = 0;
        }
LAB_010742a8:
        uVar40 = uVar19 + uVar30 + (uint)CARRY4(uVar31,uVar18);
        uVar21 = (uVar19 << 0xd | uVar31 >> 0x13) ^ uVar40;
        uVar20 = uVar20 | (uVar10 + 1) * 0x1000000;
        uVar22 = (uVar31 << 0xd | uVar19 >> 0x13) ^ uVar31 + uVar18;
        local_85c = local_848 ^ local_85c;
        local_858 = uVar20 ^ local_858;
        uVar30 = local_85c + local_83c;
        uVar25 = local_858 + local_844 + (uint)CARRY4(local_85c,local_83c);
        uVar10 = uVar25 + uVar21 + (uint)CARRY4(uVar30,uVar22);
        uVar33 = uVar10 ^ (uVar21 << 0x11 | uVar22 >> 0xf);
        uVar19 = (local_85c << 0x10 | local_858 >> 0x10) ^ uVar30;
        uVar25 = (local_858 << 0x10 | local_85c >> 0x10) ^ uVar25;
        uVar21 = uVar30 + uVar22 ^ (uVar22 << 0x11 | uVar21 >> 0xf);
        uVar31 = uVar25 + uVar31 + uVar18 + (uint)CARRY4(uVar19,uVar40);
        local_848 = uVar19 + uVar40 ^ local_848;
        uVar36 = local_848 + uVar21;
        uVar37 = (uVar31 ^ uVar20) + uVar33 + (uint)CARRY4(local_848,uVar21);
        uVar18 = uVar37 ^ (uVar33 << 0xd | uVar21 >> 0x13);
        uVar31 = (uVar25 << 0x15 | uVar19 >> 0xb) ^ uVar31;
        uVar10 = uVar10 ^ 0xff;
        uVar20 = (uVar19 << 0x15 | uVar25 >> 0xb) ^ uVar19 + uVar40;
        uVar40 = uVar36 ^ (uVar21 << 0xd | uVar33 >> 0x13);
        uVar21 = uVar20 + uVar10;
        uVar33 = uVar31 + uVar30 + uVar22 + (uint)CARRY4(uVar20,uVar10);
        uVar26 = uVar18 + uVar33 + (uint)CARRY4(uVar40,uVar21);
        uVar30 = uVar26 ^ (uVar18 << 0x11 | uVar40 >> 0xf);
        uVar18 = uVar40 + uVar21 ^ (uVar40 << 0x11 | uVar18 >> 0xf);
        uVar33 = (uVar31 << 0x10 | uVar20 >> 0x10) ^ uVar33;
        uVar19 = (uVar20 << 0x10 | uVar31 >> 0x10) ^ uVar21;
        uVar25 = uVar19 + uVar37;
        uVar10 = uVar33 + uVar36 + (uint)CARRY4(uVar19,uVar37);
        uVar22 = uVar30 + uVar10 + (uint)CARRY4(uVar18,uVar25);
        uVar20 = (uVar30 << 0xd | uVar18 >> 0x13) ^ uVar22;
        uVar31 = (uVar18 << 0xd | uVar30 >> 0x13) ^ uVar18 + uVar25;
        uVar10 = (uVar33 << 0x15 | uVar19 >> 0xb) ^ uVar10;
        uVar19 = (uVar19 << 0x15 | uVar33 >> 0xb) ^ uVar25;
        uVar33 = uVar19 + uVar26;
        uVar40 = uVar10 + uVar40 + uVar21 + (uint)CARRY4(uVar19,uVar26);
        uVar37 = uVar20 + uVar40 + (uint)CARRY4(uVar31,uVar33);
        uVar30 = (uVar20 << 0x11 | uVar31 >> 0xf) ^ uVar37;
        uVar40 = (uVar10 << 0x10 | uVar19 >> 0x10) ^ uVar40;
        uVar19 = (uVar19 << 0x10 | uVar10 >> 0x10) ^ uVar33;
        uVar21 = uVar19 + uVar22;
        uVar22 = uVar40 + uVar18 + uVar25 + (uint)CARRY4(uVar19,uVar22);
        uVar10 = (uVar19 << 0x15 | uVar40 >> 0xb) ^ uVar21;
        uVar25 = (uVar40 << 0x15 | uVar19 >> 0xb) ^ uVar22;
        uVar18 = uVar10 + uVar37;
        uVar20 = (uVar31 << 0x11 | uVar20 >> 0xf) ^ uVar31 + uVar33;
        uVar31 = uVar25 + uVar31 + uVar33 + (uint)CARRY4(uVar10,uVar37);
        uVar19 = (uVar20 << 0xd | uVar30 >> 0x13) ^ uVar20 + uVar21;
        uVar20 = (uVar30 << 0xd | uVar20 >> 0x13) ^ uVar30 + uVar22 + (uint)CARRY4(uVar20,uVar21);
        uVar30 = piVar32[1] - 1;
        uVar19 = uVar30 & (((uVar18 ^ uVar25 >> 0x10) << 0x15 |
                           ((uVar25 << 0x10 | uVar10 >> 0x10) ^ uVar31) >> 0xb) ^
                           (uVar19 << 0x11 | uVar20 >> 0xf) ^
                           uVar20 + uVar31 + (uint)CARRY4(uVar19,uVar18) ^ uVar19 + uVar18);
        if (piVar32[1] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar19,0,&DAT_01883b60);
        }
        iVar34 = *piVar32;
        bVar23 = true;
        uVar20 = 0;
        puVar9 = (uint *)(iVar34 + uVar19 * 4);
        iVar17 = uVar19 + 1;
LAB_010744fc:
        if (bVar23) {
LAB_01074520:
          uVar31 = *(uint *)(iVar34 + uVar19 * 4);
          if ((uVar31 & 1) != 0) goto LAB_01074610;
          uVar18 = uVar31 & 0xfffffff8;
          if (uVar18 == 0) {
            if (((uVar38 & 2) != 0) && (uVar31 < 8)) goto LAB_01074610;
LAB_010745c0:
            if (*puVar9 != uVar31) {
              ClearExclusiveLocal();
              bVar23 = true;
              goto LAB_010744fc;
            }
            DataMemoryBarrier(0xb);
            bVar23 = true;
            bVar4 = (bool)hasExclusiveAccess(puVar9);
            if (bVar4) goto code_r0x010745d8;
            goto LAB_010744fc;
          }
          if (uVar31 != uVar29) {
            bVar23 = false;
            if ((*(int *)(uVar18 + 0x28) == *(int *)(uVar39 + 0x28)) &&
               (iVar11 = thunk_FUN_016dd50a(*(undefined4 *)(uVar18 + 0x24),
                                            *(undefined4 *)(uVar39 + 0x24)), iVar11 == 0)) {
              if (((uVar31 & 4) != 0) && ((uVar38 & 2) != 2 || 7 < uVar31)) goto LAB_010745c0;
              goto LAB_01074610;
            }
            goto LAB_010744fc;
          }
        }
        else if (uVar20 < uVar30) {
          uVar19 = iVar17 + uVar20;
          uVar20 = uVar20 + 1;
          uVar19 = uVar19 & uVar30;
          puVar9 = (uint *)(iVar34 + uVar19 * 4);
          goto LAB_01074520;
        }
LAB_01074610:
        bVar23 = false;
        uVar29 = *puVar12;
        goto joined_r0x01074634;
      }
      bVar23 = false;
      uVar29 = *puVar12;
      goto joined_r0x01074634;
    }
    goto LAB_01073e48;
  }
LAB_01074814:
  FUN_00fbbe08(param_2);
  if (((local_8b0 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(iVar24 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar24 = *piVar35;
    bVar23 = (bool)hasExclusiveAccess(piVar35);
  } while (!bVar23);
  *piVar35 = 0;
  goto LAB_01074990;
code_r0x01073ca4:
  if (*puVar12 == 0) {
    DataMemoryBarrier(0xb);
    bVar23 = false;
    bVar4 = (bool)hasExclusiveAccess(puVar12);
    if (bVar4) {
      *puVar12 = (uint)puVar16;
      DataMemoryBarrier(0xb);
      bVar23 = true;
    }
  }
  else {
    bVar23 = false;
    ClearExclusiveLocal();
  }
  if (bVar23) goto LAB_01073d54;
  goto LAB_01073c98;
code_r0x010745d8:
  *puVar9 = uVar29;
  local_870 = uVar29;
LAB_01073ee8:
  DataMemoryBarrier(0xb);
LAB_01073eec:
  bVar23 = true;
  uVar29 = *puVar12;
  param_5 = uVar19;
joined_r0x01074634:
  if (uVar29 != uVar38) {
    ClearExclusiveLocal();
    goto LAB_01073e78;
  }
  DataMemoryBarrier(0xb);
  bVar4 = (bool)hasExclusiveAccess(puVar12);
  if (bVar4) goto code_r0x01074640;
  goto LAB_01073e78;
code_r0x01074640:
  *puVar12 = 1;
  DataMemoryBarrier(0xb);
  if ((uVar39 != 0 && (uVar38 & 2) == 2) && !bVar23) {
    if (iVar14 == 0) {
      DataMemoryBarrier(0xb);
      if (*(int *)(uVar39 + 0x20) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(uVar39 + 0x24));
      }
      thunk_FUN_016d3fb4(uVar39);
    }
    else {
      uVar29 = *(uint *)(iVar14 + 0x408);
      if (0x3f < uVar29) {
LAB_010746a0:
        iVar34 = *(int *)(iVar14 + 4);
        iVar17 = 0;
        do {
          local_428[iVar17 * 4] = (int **)&DAT_01040efc;
          iVar11 = iVar17 + 1;
          local_428[iVar17 * 4 + 1] = (int **)0x0;
          local_428[iVar17 * 4 + 2] = (int **)0x0;
          local_428[iVar17 * 4 + 3] = (int **)0x0;
          iVar17 = iVar11;
        } while (iVar11 != 0x40);
        FUN_016dd1aa(auStack_830,iVar15,0x404);
        FUN_016dd1aa(iVar15,local_428,0x400);
        *(undefined4 *)(iVar14 + 0x408) = 0;
        DataMemoryBarrier(0xb);
        uVar27 = *(undefined4 *)(iVar34 + 0x60);
        uVar29 = thunk_FUN_016d4a50(0x40c);
        if (uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x40c);
        }
        FUN_016dd1aa(uVar29,auStack_830,0x404);
        *(undefined4 *)(uVar29 + 0x408) = 0;
        puVar12 = (uint *)(iVar34 + 0x40);
        *(undefined4 *)(uVar29 + 0x404) = uVar27;
LAB_01074754:
        do {
          uVar39 = *puVar12;
          DataMemoryBarrier(0xb);
          uVar20 = *(uint *)((uVar39 & 0xfffffffc) + 0x408);
          DataMemoryBarrier(0xb);
          if (uVar20 < 4) {
            puVar9 = (uint *)((uVar39 & 0xfffffffc) + 0x408);
            if (*puVar9 == 0) {
              DataMemoryBarrier(0xb);
              do {
                bVar23 = (bool)hasExclusiveAccess(puVar9);
                if (bVar23) {
                  *puVar9 = uVar29;
                  if (*puVar12 != uVar39) goto LAB_0107468c;
                  DataMemoryBarrier(0xb);
                  goto LAB_010747cc;
                }
              } while (*puVar9 == 0);
            }
          }
          else if (*puVar12 == uVar39) {
            DataMemoryBarrier(0xb);
            do {
              bVar23 = (bool)hasExclusiveAccess(puVar12);
              if (bVar23) {
                *puVar12 = uVar20;
                goto LAB_01074754;
              }
            } while (*puVar12 == uVar39);
          }
          ClearExclusiveLocal();
        } while( true );
      }
LAB_01073e24:
      *(int *)(iVar14 + 0x408) = *(int *)(iVar14 + 0x408) + 1;
      puVar16 = (undefined4 *)(iVar15 + uVar29 * 0x10);
      *puVar16 = FUN_0109c010;
      puVar16[1] = uVar38;
    }
  }
LAB_01073e48:
  puVar12 = puVar8;
  if (puVar8 == puVar28 + iVar13) goto LAB_01074814;
  goto LAB_01073e5c;
  while (*puVar12 == uVar39) {
LAB_010747cc:
    bVar23 = (bool)hasExclusiveAccess(puVar12);
    if (bVar23) {
      *puVar12 = uVar29;
      goto LAB_01074690;
    }
  }
LAB_0107468c:
  ClearExclusiveLocal();
LAB_01074690:
  uVar29 = *(uint *)(iVar14 + 0x408);
  if (uVar29 < 0x40) goto LAB_01073e24;
  goto LAB_010746a0;
  while (bVar23 = (bool)hasExclusiveAccess(piVar35), !bVar23) {
LAB_01073b58:
    if (*piVar35 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar35);
      goto LAB_01073b74;
    }
  }
  *piVar35 = 1;
  DataMemoryBarrier(0xb);
LAB_01073b74:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(iVar24 + 0xc) != '\0') {
LAB_01073b9c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
        *(undefined1 *)(iVar24 + 0xc) = 1;
      }
      goto LAB_01073bac;
    }
LAB_01074964:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(iVar24 + 0xc) = 1;
    }
LAB_01074974:
    DataMemoryBarrier(0xb);
    do {
      iVar24 = *piVar35;
      bVar23 = (bool)hasExclusiveAccess(piVar35);
    } while (!bVar23);
    *piVar35 = 0;
  }
  else {
    uVar6 = FUN_015bf3f8();
    if (*(char *)(iVar24 + 0xc) == '\0') {
      if ((uVar6 ^ 1) == 0) goto LAB_01074964;
      goto LAB_01074974;
    }
    if ((uVar6 ^ 1) == 0) goto LAB_01073b9c;
LAB_01073bac:
    DataMemoryBarrier(0xb);
    do {
      iVar24 = *piVar35;
      bVar23 = (bool)hasExclusiveAccess(piVar35);
    } while (!bVar23);
    *piVar35 = 0;
  }
  piVar32 = (int *)0x0;
LAB_01074990:
  if (iVar24 == 2) {
    FUN_016d6968(0xf0,piVar35,0x81,1);
    return piVar32;
  }
  return piVar32;
}

