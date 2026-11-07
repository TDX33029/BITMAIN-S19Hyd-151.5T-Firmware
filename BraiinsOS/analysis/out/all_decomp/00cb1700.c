// FUN_00cb1700 @ 00cb1700 size=5892 calls_out=26 calls_in=2
// strings: assertion failed: prev | Failed to send message to monitor - channel closed | BUG: send failed | Failed to send message to monitor - channel closed | Failed to send message to monitor - channel closed | BUG: send failed

/* WARNING: Removing unreachable block (ram,0x00cb17f4) */
/* WARNING: Removing unreachable block (ram,0x00cb180c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00cb1700(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined **ppuVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined2 *puVar13;
  undefined **ppuVar14;
  uint uVar15;
  uint uVar16;
  int *extraout_r2;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int extraout_r3;
  int iVar20;
  char cVar21;
  undefined *puVar22;
  uint uVar23;
  int *piVar24;
  uint *puVar25;
  int unaff_r5;
  uint *puVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  undefined *puVar30;
  char cVar31;
  int iVar32;
  undefined **ppuVar33;
  int *piVar34;
  uint *puVar35;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint uVar36;
  uint *puVar37;
  uint uVar38;
  bool bVar39;
  undefined8 uVar40;
  uint local_230;
  uint local_22c;
  undefined4 *local_1fc;
  undefined4 *local_1f0;
  undefined2 local_1d4;
  undefined1 local_1d2;
  undefined4 local_1d0;
  undefined **local_1cc;
  undefined **local_1c8;
  uint *local_1c4;
  undefined4 *local_1c0;
  uint *local_1bc;
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  int *local_1b4;
  int local_1b0;
  int local_1ac;
  int *piStack_1a8;
  undefined *local_1a4;
  undefined **local_1a0;
  undefined1 local_19c;
  undefined *local_194;
  int *local_190;
  uint *local_18c;
  undefined **local_188;
  uint *local_184;
  undefined **local_180;
  uint *local_17c;
  undefined **local_178;
  undefined *local_174;
  int *local_170;
  undefined *local_16c;
  undefined **local_168;
  undefined **local_164;
  uint *local_160;
  undefined **local_15c;
  undefined **local_158;
  undefined *local_154;
  undefined *local_150;
  undefined *local_14c;
  undefined4 *local_148;
  undefined *local_144;
  undefined *local_38;
  undefined **local_34;
  undefined *puStack_30;
  undefined *local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x12)) {
  case 0:
    local_1f0 = (undefined4 *)*param_1;
    ppuVar33 = (undefined **)param_1[1];
    param_1[0x11] = param_1[0x10];
    local_180 = (undefined **)&DAT_00000007;
    FUN_008ebf58(param_1[0x10],&local_180);
    if (&DAT_0000001e < ppuVar33) {
      local_144 = (undefined *)CONCAT22(local_144._2_2_,1);
      local_148 = (undefined4 *)0xffffffff;
      local_174 = (undefined *)0x0;
      local_178 = (undefined **)0x0;
      local_158 = (undefined **)0x0;
      local_17c = (uint *)0x1;
      local_180 = (undefined **)0x1;
      local_154 = (undefined *)0x0;
      local_150 = (undefined *)0x0;
      local_14c = (undefined *)0x0;
      ppuVar8 = (undefined **)thunk_FUN_016d4a50(0x40);
      if (ppuVar8 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x40);
      }
      *ppuVar8 = (undefined *)local_180;
      ppuVar8[1] = (undefined *)local_17c;
      ppuVar8[2] = (undefined *)local_178;
      ppuVar8[3] = local_174;
      ppuVar8[4] = (undefined *)local_170;
      ppuVar8[5] = local_16c;
      ppuVar8[6] = (undefined *)local_168;
      ppuVar8[7] = (undefined *)local_164;
      ppuVar8[8] = (undefined *)local_160;
      ppuVar8[9] = (undefined *)local_15c;
      ppuVar8[10] = (undefined *)local_158;
      ppuVar8[0xb] = local_154;
      ppuVar8[0xc] = local_150;
      ppuVar8[0xd] = local_14c;
      ppuVar8[0xe] = (undefined *)local_148;
      ppuVar8[0xf] = local_144;
      local_168 = ppuVar8 + 2;
      local_16c = (undefined *)0x0;
      local_174 = (undefined *)0x0;
      local_17c = (uint *)&DAT_00000001;
      local_180 = (undefined **)&DAT_00000001;
      local_178 = ppuVar8;
      local_164 = local_168;
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x20);
      }
      puVar37 = (uint *)0x0;
      ppuVar8 = (undefined **)0x0;
      *puVar6 = local_180;
      puVar6[1] = local_17c;
      puVar6[2] = local_178;
      puVar6[3] = local_174;
      puVar6[4] = local_170;
      puVar6[5] = local_16c;
      puVar6[6] = local_168;
      puVar6[7] = local_164;
      local_184 = (uint *)0x0;
      local_188 = (undefined **)0x0;
      piVar34 = (int *)0x0;
      iVar32 = 8;
      iVar5 = 0;
      local_160 = (uint *)0x0;
      local_15c = (undefined **)0x0;
      while( true ) {
        piVar24 = (int *)local_1f0[(int)ppuVar8];
        do {
          iVar28 = *piVar24;
          bVar39 = (bool)hasExclusiveAccess(piVar24);
        } while (!bVar39);
        *piVar24 = iVar28 + 1;
        if (iVar28 < 0) break;
        local_1c8 = local_188;
        local_1c4 = local_184;
        local_1b7[2] = local_1d2;
        local_1b7._0_2_ = local_1d4;
        local_1d0 = (uint *)((int)local_160 + 1);
        local_1b8 = 0;
        local_1cc = (undefined **)((int)local_15c + (uint)((uint *)0xfffffffe < local_160));
        piVar12 = puVar6 + 1;
        local_19c = 0;
        local_194 = local_1a4;
LAB_00cb1d78:
        iVar28 = *piVar12;
        do {
          if (iVar28 == -1) goto LAB_00cb1d74;
          local_1c0 = puVar6;
          local_1bc = puVar37;
          local_1b4 = piVar34;
          local_1b0 = iVar32;
          local_1ac = iVar5;
          piStack_1a8 = piVar24;
          local_190 = piVar24;
          if (iVar28 < 0) {
            local_17c = &DAT_0157d360;
            local_180 = (undefined **)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_180,&DAT_018ae278);
          }
          iVar11 = *piVar12;
          if (iVar11 == iVar28) {
            bVar39 = false;
            bVar2 = (bool)hasExclusiveAccess(piVar12);
            if (bVar2) {
              *piVar12 = iVar28 + 1;
              DataMemoryBarrier(0xb);
              bVar39 = true;
            }
          }
          else {
            bVar39 = false;
            ClearExclusiveLocal();
          }
          iVar28 = iVar11;
        } while (!bVar39);
        local_178 = (undefined **)&DAT_00000001;
        local_174 = (undefined *)0x0;
        local_16c = local_1a4;
        local_158 = (undefined **)(puVar6[2] + 8);
        local_164 = (undefined **)((uint)local_164 & 0xffffff00);
        local_168 = local_1a0;
        local_144 = (undefined *)CONCAT22(local_144._2_2_,1);
        local_14c = (undefined *)0x0;
        local_150 = (undefined *)0x0;
        local_154 = (undefined *)0x0;
        local_17c = (uint *)&DAT_00000001;
        local_180 = (undefined **)&DAT_00000001;
        local_170 = piVar24;
        local_148 = puVar6;
        puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x40);
        puVar4 = local_1d0;
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x40);
        }
        *puVar6 = local_180;
        puVar6[1] = local_17c;
        puVar6[2] = local_178;
        puVar6[3] = local_174;
        puVar6[4] = local_170;
        puVar6[5] = local_16c;
        puVar6[6] = local_168;
        puVar6[7] = local_164;
        puVar6[8] = local_160;
        puVar6[9] = local_15c;
        puVar6[10] = local_158;
        puVar6[0xb] = local_154;
        puVar6[0xc] = local_150;
        puVar6[0xd] = local_14c;
        puVar6[0xe] = local_148;
        puVar6[0xf] = local_144;
        puVar37 = puVar6 + 2;
        local_1b8 = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar39 = (bool)hasExclusiveAccess(&local_1bc);
        } while (!bVar39);
        DataMemoryBarrier(0xb);
        if (local_1bc == (uint *)0x0) {
          puVar6[0xc] = 1;
          DataMemoryBarrier(0xb);
          puVar6[10] = 0;
        }
        else {
          do {
            DataMemoryBarrier(0xb);
          } while (local_1bc[8] == local_1c0[2] + 8);
          puVar6[0xc] = local_1bc[10] + 1;
          DataMemoryBarrier(0xb);
          puVar6[10] = local_1bc;
          local_1bc[9] = (uint)puVar37;
        }
        puVar6[0xd] = 0;
        piVar34 = local_1c0 + 6;
        DataMemoryBarrier(0xb);
        do {
          iVar32 = *piVar34;
          bVar39 = (bool)hasExclusiveAccess(piVar34);
        } while (!bVar39);
        *piVar34 = (int)puVar37;
        DataMemoryBarrier(0xb);
        ppuVar8 = (undefined **)((int)ppuVar8 + 1);
        *(uint **)(iVar32 + 0x2c) = puVar37;
        local_188 = local_1c8;
        local_184 = local_1c4;
        puVar17 = (undefined4 *)0x0;
        local_1d4 = local_1b7._0_2_;
        local_1d2 = local_1b7[2];
        puVar6 = local_1c0;
        piVar34 = local_1b4;
        iVar32 = local_1b0;
        iVar5 = local_1ac;
        local_160 = local_1d0;
        local_15c = local_1cc;
        local_1bc = puVar37;
        if (ppuVar8 == ppuVar33) {
          iVar32 = 0;
          local_1d0 = (uint *)CONCAT13(local_1d0._3_1_,local_1b7);
          local_1f0 = local_1c0;
          iVar5 = local_1b0;
          unaff_r5 = local_1ac;
          ppuVar33 = local_1cc;
          local_180 = local_188;
          local_17c = local_184;
          goto LAB_00cb1ff0;
        }
      }
LAB_00cb2e98:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xcb2e98);
      (*pcVar1)();
    }
    if (ppuVar33 == (undefined **)0x0) {
      local_178 = (undefined **)0x0;
      local_17c = (uint *)&DAT_00000004;
      piVar34 = extraout_r2;
      iVar5 = extraout_r3;
      puVar37 = extraout_r12;
    }
    else {
      unaff_r5 = (int)ppuVar33 * 0x14;
      puVar4 = (uint *)thunk_FUN_016d4a50(unaff_r5);
      if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,unaff_r5);
      }
      ppuVar8 = (undefined **)0x0;
      do {
        piVar34 = (int *)local_1f0[(int)ppuVar8];
        do {
          iVar32 = *piVar34;
          bVar39 = (bool)hasExclusiveAccess(piVar34);
        } while (!bVar39);
        *piVar34 = iVar32 + 1;
        if (iVar32 < 0) goto LAB_00cb2e98;
        iVar5 = (int)ppuVar8 * 5;
        ppuVar14 = (undefined **)((int)ppuVar8 + 1);
        puVar37 = puVar4 + (int)ppuVar8 * 5;
        *puVar37 = 0;
        *(undefined1 *)(puVar37 + 4) = 0;
        puVar37[1] = (uint)piVar34;
        ppuVar8 = ppuVar14;
      } while (ppuVar14 != ppuVar33);
      puVar37 = extraout_r12_00;
      local_17c = puVar4;
      local_178 = ppuVar33;
    }
    iVar32 = -0x80000000;
    puVar17 = param_1;
    puVar4 = local_17c;
    ppuVar33 = local_178;
    local_180 = local_178;
LAB_00cb1ff0:
    param_1[4] = local_180;
    *(char *)(param_1 + 8) = (char)puVar17;
    param_1[6] = local_1f0;
    param_1[7] = puVar37;
    param_1[2] = puVar4;
    param_1[3] = ppuVar33;
    param_1[5] = local_17c;
    *(undefined2 *)((int)param_1 + 0x21) = (undefined2)local_1d0;
    *(undefined1 *)((int)param_1 + 0x23) = local_1d0._2_1_;
    param_1[9] = piVar34;
    param_1[10] = iVar5;
    param_1[0xb] = unaff_r5;
    param_1[0xc] = iVar32;
    param_1[0xd] = 1;
    param_1[0xe] = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875bf8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875bf8);
  case 3:
    iVar32 = param_1[0xc];
  }
  if (iVar32 == -0x80000000) {
    iVar32 = param_1[3];
    piVar34 = (int *)param_1[2];
    if (iVar32 == 0) {
      iVar32 = 0;
      param_1[2] = 4;
      param_1[3] = 0;
LAB_00cb1f98:
      FUN_00bbb8f8(piVar34,iVar32);
LAB_00cb1fa4:
      local_1fc = param_1 + 2;
      FUN_00c87964(local_1fc);
      local_180 = (undefined **)0x0;
      FUN_008ebf58(param_1[0x11],&local_180);
      *(undefined1 *)(param_1 + 0x12) = 1;
      return 0;
    }
    uVar40 = thunk_FUN_016de0ee(iVar32 * 5,0x40);
    iVar5 = (int)uVar40 + (int)((ulonglong)uVar40 >> 0x20);
    puVar6 = (undefined4 *)*param_2;
    bVar39 = true;
    piVar24 = piVar34;
    do {
      while( true ) {
        piVar12 = piVar24 + 5;
        if (*piVar24 == 0) break;
        if (*piVar24 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0035b674,0x22,&DAT_0187d048);
        }
joined_r0x00cb1898:
        piVar24 = piVar12;
        if (piVar12 == piVar34 + iVar32 * 5) {
          if (bVar39) {
            iVar32 = param_1[3];
            piVar34 = (int *)param_1[2];
            param_1[2] = 4;
            param_1[3] = 0;
            if (iVar32 != 0) {
              iVar5 = iVar32;
              piVar24 = piVar34;
              do {
                if (*piVar24 != 1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_0187c3e4);
                }
                local_180 = (undefined **)*piVar24;
                local_17c = (uint *)piVar24[1];
                local_178 = (undefined **)piVar24[2];
                local_174 = (undefined *)piVar24[3];
                local_170 = (int *)piVar24[4];
                *piVar24 = 2;
                if (local_180 != (undefined **)0x1) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c290);
                }
                piVar24 = piVar24 + 5;
                iVar5 = iVar5 + -1;
                local_180 = (undefined **)&DAT_00000001;
              } while (iVar5 != 0);
              local_180 = (undefined **)&DAT_00000001;
            }
            goto LAB_00cb1f98;
          }
          goto LAB_00cb2b6c;
        }
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)piVar24[4]) {
      case '\0':
        ppuVar33 = (undefined **)piVar24[1];
        piVar24[2] = (int)ppuVar33;
        do {
          puVar30 = *ppuVar33;
          bVar2 = (bool)hasExclusiveAccess(ppuVar33);
        } while (!bVar2);
        *ppuVar33 = puVar30 + 1;
        if ((int)puVar30 < 0) goto LAB_00cb2e98;
        local_174 = (undefined *)((uint)local_174 & 0xffffff00);
        local_180 = ppuVar33;
        iVar28 = FUN_00d09798(&local_180,&DAT_01871680);
        piVar24[3] = iVar28;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01871690);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01871690);
      case '\x03':
        iVar28 = piVar24[3];
      }
      cVar31 = '\0';
      local_17c = (uint *)0x0;
      local_180 = (undefined **)&DAT_00000001;
      if (*(char *)(iVar5 + 0x38) == '\x01') {
LAB_00cb1978:
        cVar21 = *(char *)(iVar5 + 0x31);
        cVar31 = *(char *)(iVar5 + 0x30);
        cVar3 = cVar21;
        if (cVar31 != '\x01') {
LAB_00cb1998:
          *(char *)(iVar5 + 0x31) = cVar3;
          goto LAB_00cb199c;
        }
        if (cVar21 != '\0') {
          cVar3 = cVar21 + -1;
          goto LAB_00cb1998;
        }
        FUN_016455a4(*puVar6,puVar6[1]);
      }
      else {
        cVar21 = '\0';
        if (*(char *)(iVar5 + 0x38) != '\x02') {
          FUN_015e8e6c(iVar5,FUN_00bacf28);
          *(undefined1 *)(iVar5 + 0x38) = 1;
          goto LAB_00cb1978;
        }
LAB_00cb199c:
        (**(code **)(*(int *)(iVar28 + 8) + 0xc))(iVar28,&local_180,puVar6);
        puVar30 = local_174;
        ppuVar33 = local_178;
        if (local_180 == (undefined **)0x0 && local_17c == (uint *)0x0) {
          piVar27 = local_170;
          puVar22 = local_16c;
          piVar7 = (int *)piVar24[3];
          if (*piVar7 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar2 = (bool)hasExclusiveAccess(piVar7);
            if (!bVar2) goto LAB_00cb1a08;
            *piVar7 = 0x84;
          }
          else {
            ClearExclusiveLocal();
LAB_00cb1a08:
            (**(code **)(piVar7[2] + 0x10))();
          }
          if (ppuVar33 != (undefined **)0x0 || puVar30 != (undefined *)0x0) {
            local_180 = ppuVar33;
            local_17c = (uint *)puVar30;
            local_178 = (undefined **)piVar27;
            local_174 = puVar22;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0035012e,0x1d,&local_180,&DAT_01870fcc,&DAT_018716a0);
          }
          local_1cc = *(undefined ***)(piVar24[2] + 0x378);
          local_1d0 = (uint *)CONCAT22(local_1d0._2_2_,0x301);
          FUN_009cb590(&local_180,*(undefined4 *)(piVar24[2] + 0x37c),&local_1d0);
          if ((char)local_174 != '\x02') {
            local_180 = (undefined **)
                        FUN_009cbe14(&local_180,"Failed to send message to monitor - channel closed"
                                     ,0x32);
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("BUG: send failed",0x10,&local_180,&DAT_01870fbc,&DAT_018716b0);
          }
          local_180 = (undefined **)0x3;
          FUN_008e0b68(*(int *)(piVar24[2] + 900) + 8,&local_180);
          piVar7 = (int *)piVar24[2];
          DataMemoryBarrier(0xb);
          do {
            iVar28 = *piVar7;
            bVar2 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar2);
          *piVar7 = iVar28 + -1;
          if (iVar28 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f31e8(piVar24[2]);
          }
          *piVar24 = 1;
          *(undefined1 *)(piVar24 + 4) = 1;
          goto joined_r0x00cb1898;
        }
        if (cVar31 != '\0') {
          if (*(char *)(iVar5 + 0x38) != '\x01') {
            if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_00cb1b08;
            FUN_015e8e6c(iVar5,FUN_01655ec4);
            *(undefined1 *)(iVar5 + 0x38) = 1;
          }
          *(char *)(iVar5 + 0x31) = cVar21;
          *(undefined1 *)(iVar5 + 0x30) = 1;
        }
      }
LAB_00cb1b08:
      *(undefined1 *)(piVar24 + 4) = 3;
      bVar39 = false;
      piVar24 = piVar12;
    } while (piVar12 != piVar34 + iVar32 * 5);
LAB_00cb2b6c:
    *(undefined1 *)(param_1 + 0x12) = 3;
    return 1;
  }
  uVar40 = thunk_FUN_016de0ee(param_1 + 2,0x40);
  iVar32 = (int)uVar40 + (int)((ulonglong)uVar40 >> 0x20);
  puVar37 = param_1 + 4;
  param_2 = (int *)*param_2;
  puVar4 = param_1 + 7;
  piVar34 = param_1 + 6;
  uVar38 = param_1[0xb];
joined_r0x00cb20b0:
  if (uVar38 == 0) {
LAB_00cb2250:
    iVar5 = param_1[7];
    DataMemoryBarrier(0xb);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        DataMemoryBarrier(0xb);
      } while (*(int *)(iVar5 + 0x20) == *(int *)(*piVar34 + 8) + 8);
      iVar5 = *(int *)(iVar5 + 0x28);
    }
    iVar28 = *piVar34;
    piVar24 = (int *)(iVar28 + 0x14);
    do {
      iVar11 = *piVar24;
      if (iVar11 != 0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (iVar11 == 0) goto LAB_00cb22e0;
        if (iVar11 != 2) goto LAB_00cb23b8;
        iVar11 = param_2[1];
        puVar6 = (undefined4 *)(*param_2 + 8);
        goto LAB_00cb23ac;
      }
      bVar39 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar39);
    *piVar24 = 1;
    DataMemoryBarrier(0xb);
LAB_00cb22e0:
    if (*(undefined4 **)(iVar28 + 0xc) == (undefined4 *)0x0) {
      iVar11 = param_2[1];
    }
    else {
      iVar11 = param_2[1];
      if (*(int *)(iVar28 + 0x10) == iVar11 &&
          *(undefined4 **)(iVar28 + 0xc) == (undefined4 *)*param_2) {
        iVar11 = *piVar24;
        goto joined_r0x00cb2358;
      }
    }
    uVar40 = (**(code **)*param_2)(iVar11);
    if (*(int *)(iVar28 + 0xc) != 0) {
      (**(code **)(*(int *)(iVar28 + 0xc) + 0xc))(*(undefined4 *)(iVar28 + 0x10));
    }
    *(undefined8 *)(iVar28 + 0xc) = uVar40;
    iVar11 = *piVar24;
joined_r0x00cb2358:
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar39 = (bool)hasExclusiveAccess(piVar24);
        if (bVar39) {
          *piVar24 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_00cb23b8;
        }
      } while (*piVar24 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar19 = *(int *)(iVar28 + 0xc);
    iVar11 = *(int *)(iVar28 + 0x10);
    *(undefined4 *)(iVar28 + 0xc) = 0;
    if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01882284);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar39 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar39);
    *piVar24 = 0;
    DataMemoryBarrier(0xb);
    puVar6 = (undefined4 *)(iVar19 + 4);
LAB_00cb23ac:
    (*(code *)*puVar6)(iVar11);
LAB_00cb23b8:
    iVar28 = 0;
    uVar38 = 0;
LAB_00cb23c4:
    do {
      iVar11 = *piVar34;
      puVar26 = *(uint **)(iVar11 + 0x1c);
      puVar35 = (uint *)puVar26[0xb];
      DataMemoryBarrier(0xb);
      if (puVar26 == (uint *)(*(int *)(iVar11 + 8) + 8)) {
        if (puVar35 == (uint *)0x0) {
          if (param_1[7] != 0) goto LAB_00cb2b6c;
          iVar32 = param_1[0xc];
          *(undefined1 *)(param_1 + 8) = 1;
          param_1[0xc] = 0;
          param_1[0xd] = 1;
          param_1[0xe] = 0;
          if (iVar32 == -0x80000000) goto LAB_00cb2b6c;
          goto LAB_00cb1fa4;
        }
        *(uint **)(iVar11 + 0x1c) = puVar35;
        DataMemoryBarrier(0xb);
        puVar26 = puVar35;
        puVar35 = (uint *)puVar35[0xb];
      }
      if (puVar35 == (uint *)0x0) {
        DataMemoryBarrier(0xb);
        if (*(uint **)(iVar11 + 0x18) == puVar26) {
          iVar19 = *(int *)(iVar11 + 8);
          piVar24 = (int *)(iVar11 + 0x18);
          *(undefined4 *)(iVar19 + 0x34) = 0;
          iVar19 = iVar19 + 8;
          DataMemoryBarrier(0xb);
          do {
            iVar20 = *piVar24;
            bVar39 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar39);
          *piVar24 = iVar19;
          DataMemoryBarrier(0xb);
          *(int *)(iVar20 + 0x2c) = iVar19;
          puVar35 = (uint *)puVar26[0xb];
          DataMemoryBarrier(0xb);
          if (puVar35 != (uint *)0x0) goto LAB_00cb2460;
        }
        (**(code **)(*param_2 + 8))(param_2[1]);
        goto LAB_00cb2b6c;
      }
LAB_00cb2460:
      *(uint **)(iVar11 + 0x1c) = puVar35;
      if ((*puVar26 & 1) == 0) {
        puVar26 = puVar26 + -2;
        DataMemoryBarrier(0xb);
        do {
          uVar9 = *puVar26;
          bVar39 = (bool)hasExclusiveAccess(puVar26);
        } while (!bVar39);
        *puVar26 = uVar9 - 1;
        if (uVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00ced03c();
        }
        goto LAB_00cb23c4;
      }
      uVar9 = param_1[7];
      iVar11 = *(int *)(uVar9 + 0x28);
      uVar15 = puVar26[8];
      uVar18 = puVar26[9];
      puVar26[8] = *(int *)(param_1[6] + 8) + 8;
      puVar26[9] = 0;
      if (uVar15 == 0) {
        if (uVar18 != 0) goto LAB_00cb24f4;
        param_1[7] = 0;
      }
      else {
        *(uint *)(uVar15 + 0x24) = uVar18;
        if (uVar18 == 0) {
          param_1[7] = uVar15;
          uVar9 = uVar15;
        }
        else {
LAB_00cb24f4:
          *(uint *)(uVar18 + 0x20) = uVar15;
        }
        *(int *)(uVar9 + 0x28) = iVar11 + -1;
      }
      puVar35 = puVar26 + 0xd;
      puVar25 = puVar26 + -2;
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar35;
        bVar39 = (bool)hasExclusiveAccess(puVar35);
      } while (!bVar39);
      *(char *)puVar35 = '\0';
      DataMemoryBarrier(0xb);
      if ((char)uVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: prev",0x16,&DAT_0187b5ac);
      }
      *(undefined1 *)((int)puVar26 + 0x35) = 0;
      uVar15 = puVar26[6];
      uVar9 = puVar26[7];
      local_188 = (undefined **)&DAT_01876f4c;
      local_190 = piVar34;
      local_18c = puVar25;
      local_184 = puVar26;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)puVar26[5]) {
      case '\0':
        ppuVar33 = (undefined **)puVar26[2];
        puVar26[3] = (uint)ppuVar33;
        do {
          puVar30 = *ppuVar33;
          bVar39 = (bool)hasExclusiveAccess(ppuVar33);
        } while (!bVar39);
        *ppuVar33 = puVar30 + 1;
        if ((int)puVar30 < 0) goto LAB_00cb2e98;
        local_174 = (undefined *)((uint)local_174 & 0xffffff00);
        local_180 = ppuVar33;
        uVar18 = FUN_00d09798(&local_180,&DAT_01871680);
        puVar26[4] = uVar18;
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01871690);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01871690);
      case '\x03':
        uVar18 = puVar26[4];
      }
      cVar31 = '\0';
      local_17c = (uint *)0x0;
      local_180 = (undefined **)&DAT_00000001;
      if (*(char *)(iVar32 + 0x38) == '\x01') {
LAB_00cb2610:
        cVar21 = *(char *)(iVar32 + 0x31);
        cVar31 = *(char *)(iVar32 + 0x30);
        cVar3 = cVar21;
        if (cVar31 != '\x01') {
LAB_00cb2634:
          *(char *)(iVar32 + 0x31) = cVar3;
          goto LAB_00cb2638;
        }
        if (cVar21 != '\0') {
          cVar3 = cVar21 + -1;
          goto LAB_00cb2634;
        }
        FUN_016455a4(&DAT_01876f4c,puVar26);
      }
      else {
        cVar21 = '\0';
        if (*(char *)(iVar32 + 0x38) != '\x02') {
          FUN_015e8e6c(iVar32,FUN_00bacf28);
          *(undefined1 *)(iVar32 + 0x38) = 1;
          goto LAB_00cb2610;
        }
LAB_00cb2638:
        (**(code **)(*(int *)(uVar18 + 8) + 0xc))(uVar18,&local_180,&local_188);
        puVar30 = local_174;
        ppuVar33 = local_178;
        if (local_180 == (undefined **)0x0 && local_17c == (uint *)0x0) {
          piVar24 = local_170;
          puVar22 = local_16c;
          piVar12 = (int *)puVar26[4];
          if (*piVar12 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar39 = (bool)hasExclusiveAccess(piVar12);
            if (bVar39) {
              *piVar12 = 0x84;
              goto LAB_00cb2850;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar12[2] + 0x10))();
LAB_00cb2850:
          if (ppuVar33 != (undefined **)0x0 || puVar30 != (undefined *)0x0) {
            local_180 = ppuVar33;
            local_17c = (uint *)puVar30;
            local_178 = (undefined **)piVar24;
            local_174 = puVar22;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0035012e,0x1d,&local_180,&DAT_018725fc,&DAT_018716a0);
          }
          iVar5 = *(int *)(puVar26[3] + 0x37c);
          local_34 = *(undefined ***)(puVar26[3] + 0x378);
          local_180 = local_34;
          if (iVar5 != 0) {
            uVar38 = *(uint *)(iVar5 + 0x10);
            puVar35 = (uint *)(iVar5 + 0x10);
            DataMemoryBarrier(0xb);
            while (0x7fffffff < uVar38) {
              if ((~uVar38 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
              }
              uVar18 = *puVar35;
              if (*puVar35 == uVar38) {
                DataMemoryBarrier(0xb);
LAB_00cb28c8:
                bVar39 = (bool)hasExclusiveAccess(puVar35);
                if (!bVar39) goto code_r0x00cb28d4;
                *puVar35 = uVar38 + 1 | 0x80000000;
                DataMemoryBarrier(0xb);
                puVar13 = (undefined2 *)thunk_FUN_016d4a50(0x10);
                if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x10);
                }
                piVar24 = (int *)(iVar5 + 8);
                *(undefined4 *)(puVar13 + 6) = 0;
                *(undefined ***)(puVar13 + 2) = local_34;
                *puVar13 = 0x301;
                DataMemoryBarrier(0xb);
                do {
                  iVar28 = *piVar24;
                  bVar39 = (bool)hasExclusiveAccess(piVar24);
                } while (!bVar39);
                *piVar24 = (int)puVar13;
                DataMemoryBarrier(0xb);
                *(undefined2 **)(iVar28 + 0xc) = puVar13;
                puVar35 = (uint *)(iVar5 + 0x20);
                DataMemoryBarrier(0xb);
                do {
                  uVar38 = *puVar35;
                  bVar39 = (bool)hasExclusiveAccess(puVar35);
                } while (!bVar39);
                *puVar35 = uVar38 | 2;
                DataMemoryBarrier(0xb);
                if (uVar38 == 0) {
                  iVar28 = *(int *)(iVar5 + 0x18);
                  *(undefined4 *)(iVar5 + 0x18) = 0;
                  DataMemoryBarrier(0xb);
                  do {
                    bVar39 = (bool)hasExclusiveAccess(puVar35);
                  } while (!bVar39);
                  *puVar35 = *puVar35 & 0xfffffffd;
                  if (iVar28 != 0) {
                    (**(code **)(iVar28 + 4))(*(undefined4 *)(iVar5 + 0x1c));
                  }
                }
                local_2c = (undefined *)CONCAT31(local_2c._1_3_,2);
                local_180 = (undefined **)0x3;
                FUN_008e0b68(*(int *)(puVar26[3] + 900) + 8,&local_180);
                piVar24 = (int *)puVar26[3];
                DataMemoryBarrier(0xb);
                do {
                  iVar5 = *piVar24;
                  bVar39 = (bool)hasExclusiveAccess(piVar24);
                } while (!bVar39);
                *piVar24 = iVar5 + -1;
                if (iVar5 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_008f31e8(puVar26[3]);
                }
                *(undefined1 *)(puVar26 + 5) = 1;
                bVar39 = false;
                local_230 = uVar9;
                local_22c = uVar15;
                goto LAB_00cb2a24;
              }
LAB_00cb2880:
              uVar38 = uVar18;
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            }
          }
          local_2c = (undefined *)CONCAT31(local_2c._1_3_,1);
          local_38 = (undefined *)CONCAT22(local_38._2_2_,0x301);
          FUN_01602d08(&local_1d0);
          puVar6 = (undefined4 *)((uint)&local_180 | 4);
          *puVar6 = local_1d0;
          puVar6[1] = local_1cc;
          puVar6[2] = local_1c8;
          puVar6[3] = local_1c4;
          puVar6[4] = local_1c0;
          puVar6[5] = local_1bc;
          local_164 = (undefined **)0x34953f;
          local_15c = (undefined **)local_38;
          local_158 = local_34;
          local_154 = puStack_30;
          local_150 = local_2c;
          local_160 = (uint *)0x32;
          local_180 = &PTR_FUN_0186a8d0;
          ppuVar33 = (undefined **)thunk_FUN_016d4a50(0x34);
          if (ppuVar33 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x34);
          }
          *ppuVar33 = (undefined *)local_180;
          ppuVar33[1] = (undefined *)local_17c;
          ppuVar33[2] = (undefined *)local_178;
          ppuVar33[3] = local_174;
          ppuVar33[4] = (undefined *)local_170;
          ppuVar33[5] = local_16c;
          ppuVar33[6] = (undefined *)local_168;
          ppuVar33[7] = (undefined *)local_164;
          ppuVar33[8] = (undefined *)local_160;
          ppuVar33[9] = (undefined *)local_15c;
          ppuVar33[10] = (undefined *)local_158;
          ppuVar33[0xb] = local_154;
          ppuVar33[0xc] = local_150;
          local_180 = ppuVar33;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("BUG: send failed",0x10,&local_180,&DAT_018725cc,&DAT_018716b0);
        }
        if (cVar31 != '\0') {
          if (*(char *)(iVar32 + 0x38) != '\x01') {
            if (*(char *)(iVar32 + 0x38) == '\x02') goto LAB_00cb26ec;
            FUN_015e8e6c(iVar32,FUN_01655ec4);
            *(undefined1 *)(iVar32 + 0x38) = 1;
          }
          *(char *)(iVar32 + 0x31) = cVar21;
          *(undefined1 *)(iVar32 + 0x30) = 1;
        }
      }
LAB_00cb26ec:
      local_18c = (uint *)0x0;
      *(undefined1 *)(puVar26 + 5) = 3;
      DataMemoryBarrier(0xb);
      if (*(char *)((int)puVar26 + 0x35) != '\0') {
        uVar38 = uVar38 + 1;
      }
      iVar28 = iVar28 + 1;
      do {
        uVar9 = *puVar4;
        bVar39 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar39);
      *puVar4 = (uint)puVar26;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        puVar26[10] = 1;
        DataMemoryBarrier(0xb);
        puVar26[8] = 0;
      }
      else {
        do {
          DataMemoryBarrier(0xb);
        } while (*(int *)(uVar9 + 0x20) == *(int *)(*piVar34 + 8) + 8);
        puVar26[10] = *(int *)(uVar9 + 0x28) + 1;
        DataMemoryBarrier(0xb);
        puVar26[8] = uVar9;
        *(uint **)(uVar9 + 0x24) = puVar26;
      }
      if ((1 < uVar38) || (iVar28 == iVar5)) goto LAB_00cb27d4;
      FUN_00cf0078(&local_190);
    } while( true );
  }
  puVar26 = (uint *)param_1[10];
  uVar9 = *puVar26;
  uVar15 = puVar26[1];
  if (uVar9 != *puVar37 || uVar15 != param_1[5]) goto LAB_00cb2250;
  uVar18 = uVar38 - 1;
  *puVar37 = uVar9 + 1;
  uVar36 = puVar26[uVar18 * 2];
  param_1[5] = uVar15 + (0xfffffffe < uVar9);
  uVar9 = (puVar26 + uVar18 * 2)[1];
  param_1[0xb] = uVar18;
  if (uVar18 != 0) {
    uVar15 = uVar38 - 3;
    *puVar26 = uVar36;
    if (uVar18 < 2) {
      uVar15 = 0;
    }
    puVar26[1] = uVar9;
    if (uVar38 < 4) {
      uVar16 = 0;
      uVar23 = 1;
      if (uVar18 == 2) {
LAB_00cb21ac:
        puVar35 = puVar26 + uVar23 * 2;
        puVar26[uVar16 * 2] = *puVar35;
        *puVar35 = uVar36;
        (puVar26 + uVar16 * 2)[1] = puVar35[1];
        puVar35[1] = uVar9;
        goto LAB_00cb21e0;
      }
    }
    else {
      uVar23 = 1;
      uVar18 = 0;
      do {
        uVar10 = (puVar26 + uVar23 * 2)[1];
        uVar29 = (puVar26 + (uVar23 + 1) * 2)[1];
        bVar39 = puVar26[uVar23 * 2] < puVar26[(uVar23 + 1) * 2];
        uVar16 = uVar23;
        if ((int)(uVar10 - (uVar29 + bVar39)) < 0 ==
            (SBORROW4(uVar10,uVar29) != SBORROW4(uVar10 - uVar29,(uint)bVar39))) {
          uVar16 = uVar23 + 1;
        }
        puVar35 = puVar26 + uVar16 * 2;
        uVar23 = puVar35[1];
        puVar26[uVar18 * 2] = *puVar35;
        (puVar26 + uVar18 * 2)[1] = uVar23;
        uVar23 = uVar16 << 1 | 1;
        uVar18 = uVar16;
      } while (uVar16 * 2 < uVar15);
      if (uVar16 * 2 == uVar38 - 3) goto LAB_00cb21ac;
      *puVar35 = uVar36;
      puVar35[1] = uVar9;
      uVar23 = uVar16;
LAB_00cb21e0:
      do {
        uVar38 = uVar23 - 1;
        uVar16 = uVar38 >> 1;
        uVar15 = puVar26[uVar16 * 2];
        uVar18 = (puVar26 + uVar16 * 2)[1];
        if ((int)(uVar9 - (uVar18 + (uVar36 < uVar15))) < 0 ==
            (SBORROW4(uVar9,uVar18) != SBORROW4(uVar9 - uVar18,(uint)(uVar36 < uVar15)))) {
          uVar16 = uVar23;
          break;
        }
        puVar26[uVar23 * 2] = uVar15;
        (puVar26 + uVar23 * 2)[1] = uVar18;
        uVar23 = uVar16;
      } while (1 < uVar38);
    }
    puVar26[uVar16 * 2] = uVar36;
    (puVar26 + uVar16 * 2)[1] = uVar9;
  }
  goto LAB_00cb222c;
LAB_00cb1d74:
  HintYield();
  goto LAB_00cb1d78;
code_r0x00cb28d4:
  uVar18 = *puVar35;
  if (*puVar35 != uVar38) goto LAB_00cb2880;
  goto LAB_00cb28c8;
LAB_00cb27d4:
  bVar39 = true;
  (**(code **)(*param_2 + 8))(param_2[1]);
LAB_00cb2a24:
  FUN_00cf0078(&local_190);
  if (bVar39) goto LAB_00cb2b6c;
  if (local_22c == *puVar37 && local_230 == param_1[5]) goto LAB_00cb2b04;
  uVar38 = param_1[0xb];
  if (uVar38 == param_1[9]) {
    FUN_00d64eec(param_1 + 9);
  }
  iVar5 = param_1[10];
  param_1[0xb] = uVar38 + 1;
  puVar26 = (uint *)(iVar5 + uVar38 * 8);
  *puVar26 = local_22c;
  puVar26[1] = local_230;
  if (uVar38 == 0) {
    uVar9 = 0;
  }
  else {
    do {
      uVar15 = uVar38 - 1;
      uVar9 = uVar15 >> 1;
      puVar26 = (uint *)(iVar5 + uVar9 * 8);
      uVar18 = *puVar26;
      uVar36 = puVar26[1];
      if ((int)(local_230 - (uVar36 + (local_22c < uVar18))) < 0 ==
          (SBORROW4(local_230,uVar36) != SBORROW4(local_230 - uVar36,(uint)(local_22c < uVar18)))) {
        uVar9 = uVar38;
        break;
      }
      puVar26 = (uint *)(iVar5 + uVar38 * 8);
      *puVar26 = uVar18;
      puVar26[1] = uVar36;
      uVar38 = uVar9;
    } while (1 < uVar15);
  }
  puVar26 = (uint *)(iVar5 + uVar9 * 8);
  *puVar26 = local_22c;
  puVar26[1] = local_230;
  goto LAB_00cb2250;
LAB_00cb2b04:
  *puVar37 = local_22c + 1;
  param_1[5] = local_230 + (0xfffffffe < local_22c);
LAB_00cb222c:
  if (0xfffffffe < (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  param_1[0xe] = param_1[0xe] + 1;
  uVar38 = param_1[0xb];
  goto joined_r0x00cb20b0;
}

