// FUN_00e49d3c @ 00e49d3c size=3232 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e49d3c(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint *puVar32;
  int *piVar33;
  int unaff_r9;
  undefined *puVar34;
  int iVar35;
  int *piVar36;
  int iVar37;
  int extraout_r12;
  int iVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  uint local_1a8;
  int *local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  uint local_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int *local_30;
  
  piVar36 = (int *)(param_2 + 8);
  do {
    if (*piVar36 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar36);
      goto LAB_00e49d74;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar36);
  } while (!bVar3);
  *piVar36 = 1;
  DataMemoryBarrier(0xb);
LAB_00e49d74:
  local_1a8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_2 + 0xc);
  }
  else {
    local_1a8 = FUN_015bf3f8();
    local_1a8 = local_1a8 ^ 1;
    cVar2 = *(char *)(param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    uVar6 = (uint)local_9c >> 8;
    local_9c = CONCAT31((int3)uVar6,(char)local_1a8);
    local_a0 = piVar36;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_a0,&DAT_0187a7c0,&DAT_01886a4c);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar38 = *(int *)(param_2 + 0x2c);
    if (iVar38 != 0) {
      iVar22 = *param_3;
      iVar12 = param_3[1];
      iVar17 = param_3[2];
      iVar23 = param_3[3];
      iVar28 = param_3[4];
      iVar27 = param_3[5];
      iVar13 = param_3[6];
      iVar18 = param_3[7];
      iVar24 = param_3[8];
      iVar29 = param_3[9];
      iVar10 = param_3[10];
      iVar37 = param_3[0xb];
      iVar8 = param_3[0xc];
      iVar14 = param_3[0xd];
      iVar19 = param_3[0xe];
      iVar25 = param_3[0xf];
      iVar30 = param_3[0x10];
      iVar9 = param_3[0x11];
      iVar15 = param_3[0x12];
      iVar20 = param_3[0x13];
      iVar26 = param_3[0x14];
      iVar31 = param_3[0x15];
      while (iVar38 != 0) {
        *(int *)(param_2 + 0x2c) = iVar38 + -1;
        uVar5 = *(int *)(param_2 + 0x28) + 1;
        puVar11 = (undefined4 *)(*(int *)(param_2 + 0x24) + *(int *)(param_2 + 0x28) * 8);
        piVar21 = (int *)*puVar11;
        uVar6 = uVar5 - *(uint *)(param_2 + 0x20);
        if (uVar5 < *(uint *)(param_2 + 0x20)) {
          uVar6 = uVar5;
        }
        iVar38 = puVar11[1];
        *(uint *)(param_2 + 0x28) = uVar6;
        if (iVar22 == 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a84);
        }
        uVar5 = *(uint *)(iVar38 + 8);
        uVar6 = uVar5;
        if (uVar5 < 9) {
          uVar6 = 8;
        }
        iVar35 = (int)piVar21 + (uVar6 - 1 & 0xfffffff8) + 8;
        uVar39 = FUN_00e47b10(iVar35);
        piVar33 = (int *)uVar39;
        if (((uint)(uVar39 >> 0x20) & 0xff) != 2) {
          if (((1 < piVar33[2] - 3U) && (iVar7 = piVar33[0xd], iVar7 != 0)) &&
             (uVar6 = iVar7 * 0x11 & 0xfffffffc, uVar6 + iVar7 != -0x19)) {
            thunk_FUN_016d3fb4((piVar33[0xc] - uVar6) + -0x14);
          }
          piVar33[2] = iVar22;
          piVar33[3] = iVar12;
          piVar33[4] = iVar17;
          piVar33[5] = iVar23;
          piVar33[6] = iVar28;
          piVar33[7] = iVar27;
          piVar33[8] = iVar13;
          piVar33[9] = iVar18;
          piVar33[10] = iVar24;
          piVar33[0xb] = iVar29;
          piVar33[0xc] = iVar10;
          piVar33[0xd] = iVar37;
          piVar33[0xe] = iVar8;
          piVar33[0xf] = iVar14;
          piVar33[0x10] = iVar19;
          piVar33[0x11] = iVar25;
          piVar33[0x12] = iVar30;
          piVar33[0x13] = iVar9;
          piVar33[0x14] = iVar15;
          piVar33[0x15] = iVar20;
          piVar33[0x16] = iVar26;
          piVar33[0x17] = iVar31;
          if ((((uVar39 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar27 = FUN_015bf3f8(), iVar27 == 0)) {
            *(undefined1 *)(piVar33 + 1) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar27 = *piVar33;
            bVar3 = (bool)hasExclusiveAccess(piVar33);
          } while (!bVar3);
          *piVar33 = 0;
          if (iVar27 == 2) {
            FUN_016d6968(0xf0,piVar33,0x81,1);
          }
          if (((local_1a8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar27 = FUN_015bf3f8(), iVar27 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar27 = *piVar36;
            bVar3 = (bool)hasExclusiveAccess(piVar36);
          } while (!bVar3);
          *piVar36 = 0;
          if (iVar27 == 2) {
            FUN_016d6968(0xf0,piVar36,0x81,1);
          }
          bVar3 = false;
          (**(code **)(iVar38 + 0xc))(iVar35 + (uVar5 - 1 & 0xffffff98) + 0x68);
LAB_00e4a34c:
          DataMemoryBarrier(0xb);
          do {
            iVar27 = *piVar21;
            bVar4 = (bool)hasExclusiveAccess(piVar21);
          } while (!bVar4);
          *piVar21 = iVar27 + -1;
          if (iVar27 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac164(piVar21,iVar38);
          }
          if (!bVar3) goto LAB_00e4a3c8;
          goto LAB_00e4a384;
        }
        if (iVar22 == 5) {
          bVar3 = true;
          goto LAB_00e4a34c;
        }
        iVar35 = (**(code **)(iVar38 + 0xc))(iVar35 + (uVar5 - 1 & 0xffffff98) + 0x68);
        if (iVar35 == 0) {
          uVar5 = *(uint *)(param_2 + 0x10);
          uVar6 = *(uint *)(param_2 + 0x1c);
          if (uVar6 == uVar5) {
            FUN_00aa2b6c();
            uVar5 = *(uint *)(param_2 + 0x10);
            uVar6 = *(uint *)(param_2 + 0x1c);
          }
          uVar16 = *(int *)(param_2 + 0x18) + uVar6;
          *(uint *)(param_2 + 0x1c) = uVar6 + 1;
          uVar6 = uVar16 - uVar5;
          if (uVar16 < uVar5) {
            uVar6 = uVar16;
          }
          piVar33 = (int *)(*(int *)(param_2 + 0x14) + uVar6 * 0x58);
          *piVar33 = iVar22;
          piVar33[1] = iVar12;
          piVar33[2] = iVar17;
          piVar33[3] = iVar23;
          piVar33[4] = iVar28;
          piVar33[5] = iVar27;
          piVar33[6] = iVar13;
          piVar33[7] = iVar18;
          piVar33[8] = iVar24;
          piVar33[9] = iVar29;
          piVar33[10] = iVar10;
          piVar33[0xb] = iVar37;
          piVar33[0xc] = iVar8;
          piVar33[0xd] = iVar14;
          piVar33[0xe] = iVar19;
          piVar33[0xf] = iVar25;
          piVar33[0x10] = iVar30;
          piVar33[0x11] = iVar9;
          piVar33[0x12] = iVar15;
          piVar33[0x13] = iVar20;
          piVar33[0x14] = iVar26;
          piVar33[0x15] = iVar31;
          if (((local_1a8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar27 = FUN_015bf3f8(), iVar27 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar27 = *piVar36;
            bVar3 = (bool)hasExclusiveAccess(piVar36);
          } while (!bVar3);
          *piVar36 = 0;
          bVar3 = false;
          if (iVar27 == 2) {
            FUN_016d6968(0xf0,piVar36,0x81,1);
          }
          goto LAB_00e4a34c;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar35 = *piVar21;
          bVar3 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar3);
        *piVar21 = iVar35 + -1;
        if (iVar35 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac164(piVar21,iVar38);
        }
        iVar38 = *(int *)(param_2 + 0x2c);
      }
      if (iVar22 != 4) {
        uVar5 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x1c);
        if (uVar6 == uVar5) {
          FUN_00aa2b6c();
          uVar5 = *(uint *)(param_2 + 0x10);
          uVar6 = *(uint *)(param_2 + 0x1c);
        }
        uVar16 = *(int *)(param_2 + 0x18) + uVar6;
        *(uint *)(param_2 + 0x1c) = uVar6 + 1;
        uVar6 = uVar16 - uVar5;
        if (uVar16 < uVar5) {
          uVar6 = uVar16;
        }
        piVar21 = (int *)(*(int *)(param_2 + 0x14) + uVar6 * 0x58);
        *piVar21 = iVar22;
        piVar21[1] = iVar12;
        piVar21[2] = iVar17;
        piVar21[3] = iVar23;
        piVar21[4] = iVar28;
        piVar21[5] = iVar27;
        piVar21[6] = iVar13;
        piVar21[7] = iVar18;
        piVar21[8] = iVar24;
        piVar21[9] = iVar29;
        piVar21[10] = iVar10;
        piVar21[0xb] = iVar37;
        piVar21[0xc] = iVar8;
        piVar21[0xd] = iVar14;
        piVar21[0xe] = iVar19;
        piVar21[0xf] = iVar25;
        piVar21[0x10] = iVar30;
        piVar21[0x11] = iVar9;
        piVar21[0x12] = iVar15;
        piVar21[0x13] = iVar20;
        piVar21[0x14] = iVar26;
        piVar21[0x15] = iVar31;
      }
LAB_00e4a384:
      if (((local_1a8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar38 = FUN_015bf3f8(), iVar38 == 0)) {
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar38 = *piVar36;
        bVar3 = (bool)hasExclusiveAccess(piVar36);
      } while (!bVar3);
      *piVar36 = 0;
      if (iVar38 == 2) {
        FUN_016d6968(0xf0,piVar36,0x81,1);
      }
      goto LAB_00e4a3c8;
    }
    puVar32 = (uint *)(param_2 + 0x34);
    if (*puVar32 == 0x80000000) {
      uVar6 = *(uint *)(param_2 + 0x1c);
LAB_00e4a018:
      uVar5 = *(uint *)(param_2 + 0x10);
      if (uVar6 == uVar5) {
        FUN_00aa2b6c();
        uVar5 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x1c);
      }
      uVar16 = *(int *)(param_2 + 0x18) + uVar6;
      *(uint *)(param_2 + 0x1c) = uVar6 + 1;
      uVar6 = uVar16 - uVar5;
      if (uVar16 < uVar5) {
        uVar6 = uVar16;
      }
      iVar38 = 0xe4a068;
      FUN_016dd1aa(uVar6 * 0x58 + *(int *)(param_2 + 0x14),param_3,0x58);
      iVar27 = 3;
      iVar37 = extraout_r12;
      goto joined_r0x00e4a078;
    }
    uVar6 = *(uint *)(param_2 + 0x1c);
    if (uVar6 < *(uint *)(param_2 + 0x30)) goto LAB_00e4a018;
    uVar40 = thunk_FUN_016de0ee(*(uint *)(param_2 + 0x30),0x248);
    uVar6 = *(uint *)((int)uVar40 + (int)((ulonglong)uVar40 >> 0x20));
    if (uVar6 < 3) {
      piVar21 = (int *)FUN_015f7ed0();
    }
    else {
      piVar21 = (int *)(uVar6 - 8);
      do {
        iVar38 = *piVar21;
        bVar3 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar3);
      *piVar21 = iVar38 + 1;
      if (iVar38 < 0) goto LAB_00e4a8a0;
    }
    FUN_016dd1aa((uint)&local_100 | 3,param_3,0x58);
    local_94 = 0;
    local_8c = local_8c & 0xffffff00;
    local_90 = 0;
    local_98 = 1;
    local_9c = 1;
    local_a0 = (int *)0x1;
    FUN_016dd1aa((int)&local_8c + 1,&local_100,0x5b);
    local_30 = piVar21;
    piVar21 = (int *)thunk_FUN_016d4a50(0x78);
    if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x78);
    }
    FUN_016dd1aa(piVar21,&local_a0,0x78);
    uVar6 = *puVar32;
    if (uVar6 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886a74);
    }
    do {
      iVar38 = *piVar21;
      bVar3 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar3);
    *piVar21 = iVar38 + 1;
    if (iVar38 < 0) {
LAB_00e4a8a0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xe4a8a0);
      (*pcVar1)();
    }
    uVar5 = *(uint *)(param_2 + 0x40);
    if (uVar5 == uVar6) {
      FUN_00aa2a4c(puVar32);
      uVar6 = *(uint *)(param_2 + 0x34);
      uVar5 = *(uint *)(param_2 + 0x40);
    }
    uVar16 = *(int *)(param_2 + 0x3c) + uVar5;
    *(uint *)(param_2 + 0x40) = uVar5 + 1;
    uVar5 = uVar16 - uVar6;
    if (uVar16 < uVar6) {
      uVar5 = uVar16;
    }
    piVar33 = (int *)(*(int *)(param_2 + 0x38) + uVar5 * 8);
    *piVar33 = (int)piVar21;
    piVar33[1] = (int)&DAT_0187a7d0;
    if (((local_1a8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar38 = FUN_015bf3f8(), iVar38 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar38 = *piVar36;
      bVar3 = (bool)hasExclusiveAccess(piVar36);
    } while (!bVar3);
    *piVar36 = 0;
    if (iVar38 == 2) {
      FUN_016d6968(0xf0,piVar36,0x81,1);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar34 = &DAT_01886af4;
LAB_00e4a570:
      uVar39 = FUN_00e47b10(piVar21 + 2);
      piVar36 = (int *)uVar39;
      if (((uint)(uVar39 >> 0x20) & 0xff) != 2) {
        if (piVar36[2] != 4) goto code_r0x00e4a590;
        if ((((uVar39 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar38 = FUN_015bf3f8(), iVar38 == 0)) {
          *(undefined1 *)(piVar36 + 1) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar38 = *piVar36;
          bVar3 = (bool)hasExclusiveAccess(piVar36);
        } while (!bVar3);
        *piVar36 = 0;
        if (iVar38 == 2) {
          FUN_016d6968(0xf0,piVar36,0x81,1);
        }
        goto LAB_00e4a65c;
      }
      goto LAB_00e4a898;
    }
LAB_00e4a65c:
    uVar39 = FUN_00e47b10(piVar21 + 2);
    piVar36 = (int *)uVar39;
    if (((uint)(uVar39 >> 0x20) & 0xff) == 2) {
      puVar34 = &DAT_01886aa4;
LAB_00e4a898:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar34);
    }
    iVar38 = piVar36[2];
    local_100 = piVar36[3];
    iStack_fc = piVar36[4];
    iStack_f8 = piVar36[5];
    iStack_f4 = piVar36[6];
    local_f0 = piVar36[7];
    iStack_ec = piVar36[8];
    iStack_e8 = piVar36[9];
    iStack_e4 = piVar36[10];
    iStack_e0 = piVar36[0xb];
    iVar37 = piVar36[0xd];
    unaff_r9 = piVar36[0xc];
    local_a0 = (int *)piVar36[0xe];
    local_9c = piVar36[0xf];
    local_98 = piVar36[0x10];
    local_94 = piVar36[0x11];
    local_90 = piVar36[0x12];
    local_8c = piVar36[0x13];
    iStack_88 = piVar36[0x14];
    iStack_84 = piVar36[0x15];
    iStack_80 = piVar36[0x16];
    iStack_7c = piVar36[0x17];
    piVar36[2] = 4;
    if ((((uVar39 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar27 = FUN_015bf3f8(), iVar27 == 0)) {
      *(undefined1 *)(piVar36 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar27 = *piVar36;
      bVar3 = (bool)hasExclusiveAccess(piVar36);
    } while (!bVar3);
    *piVar36 = 0;
    if (iVar27 == 2) {
      FUN_016d6968(0xf0,piVar36,0x81,1);
      if (iVar38 == 4) goto LAB_00e4a708;
LAB_00e4a8cc:
      local_178 = local_100;
      iStack_174 = iStack_fc;
      iStack_170 = iStack_f8;
      iStack_16c = iStack_f4;
      local_168 = local_f0;
      iStack_164 = iStack_ec;
      iStack_160 = iStack_e8;
      iStack_15c = iStack_e4;
      iStack_158 = iStack_e0;
      local_1a0 = local_a0;
      iStack_19c = local_9c;
      iStack_198 = local_98;
      iStack_194 = local_94;
      iStack_190 = local_90;
      local_18c = local_8c;
      iStack_188 = iStack_88;
      iStack_184 = iStack_84;
      iStack_180 = iStack_80;
      iStack_17c = iStack_7c;
      iVar27 = 1;
    }
    else {
      if (iVar38 != 4) goto LAB_00e4a8cc;
LAB_00e4a708:
      iVar27 = 3;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar21;
      bVar3 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar3);
    *piVar21 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacd58(piVar21);
    }
  }
  else {
    iVar38 = *param_3;
    local_178 = param_3[1];
    iStack_174 = param_3[2];
    iStack_170 = param_3[3];
    iStack_16c = param_3[4];
    local_168 = param_3[5];
    iStack_164 = param_3[6];
    iStack_160 = param_3[7];
    iStack_15c = param_3[8];
    iStack_158 = param_3[9];
    unaff_r9 = param_3[10];
    iVar37 = param_3[0xb];
    local_1a0 = (int *)param_3[0xc];
    iStack_19c = param_3[0xd];
    iStack_198 = param_3[0xe];
    iStack_194 = param_3[0xf];
    iStack_190 = param_3[0x10];
    local_18c = param_3[0x11];
    iStack_188 = param_3[0x12];
    iStack_184 = param_3[0x13];
    iStack_180 = param_3[0x14];
    iStack_17c = param_3[0x15];
    iVar27 = 1;
joined_r0x00e4a078:
    if (((local_1a8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar36;
      bVar3 = (bool)hasExclusiveAccess(piVar36);
    } while (!bVar3);
    *piVar36 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,piVar36,0x81,1);
    }
  }
  if (iVar27 != 3) {
    if (iVar27 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01886a3c);
    }
    *param_1 = iVar38;
    param_1[1] = local_178;
    param_1[2] = iStack_174;
    param_1[3] = iStack_170;
    param_1[4] = iStack_16c;
    param_1[5] = local_168;
    param_1[6] = iStack_164;
    param_1[7] = iStack_160;
    param_1[8] = iStack_15c;
    param_1[9] = iStack_158;
    param_1[10] = unaff_r9;
    param_1[0xb] = iVar37;
    param_1[0xc] = (int)local_1a0;
    param_1[0xd] = iStack_19c;
    param_1[0xe] = iStack_198;
    param_1[0xf] = iStack_194;
    param_1[0x10] = iStack_190;
    param_1[0x11] = local_18c;
    param_1[0x12] = iStack_188;
    param_1[0x13] = iStack_184;
    param_1[0x14] = iStack_180;
    param_1[0x15] = iStack_17c;
    return;
  }
LAB_00e4a3c8:
  *param_1 = 4;
  return;
code_r0x00e4a590:
  if ((((uVar39 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar38 = FUN_015bf3f8(), iVar38 == 0)) {
    *(undefined1 *)(piVar36 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar38 = *piVar36;
    bVar3 = (bool)hasExclusiveAccess(piVar36);
  } while (!bVar3);
  *piVar36 = 0;
  if (iVar38 == 2) {
    FUN_016d6968(0xf0,piVar36,0x81,1);
  }
  FUN_015fbbf8();
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_00e4a65c;
  goto LAB_00e4a570;
}

