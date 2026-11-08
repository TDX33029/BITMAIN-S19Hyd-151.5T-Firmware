// FUN_00681204 @ 00681204 size=4520 calls_out=45 calls_in=0
// strings: send stream capacity unexpectedly closedFuture polled twice

/* WARNING: Removing unreachable block (ram,0x0068148c) */
/* WARNING: Removing unreachable block (ram,0x0068191c) */
/* WARNING: Removing unreachable block (ram,0x00681acc) */
/* WARNING: Removing unreachable block (ram,0x00681944) */
/* WARNING: Removing unreachable block (ram,0x006821b4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_00681204(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  ushort *puVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined4 *******pppppppuVar16;
  undefined4 *******pppppppuVar17;
  undefined4 uVar18;
  undefined4 extraout_r1;
  int *piVar19;
  code *pcVar20;
  int *piVar21;
  uint *puVar22;
  int extraout_r2;
  undefined *puVar23;
  int extraout_r3;
  undefined4 *******pppppppuVar24;
  bool bVar25;
  undefined4 *******pppppppuVar26;
  undefined4 *puVar27;
  uint uVar28;
  short *psVar29;
  uint uVar30;
  undefined4 *******pppppppuVar31;
  undefined4 *******pppppppuVar32;
  int *unaff_r10;
  uint uVar33;
  undefined4 *******pppppppuVar34;
  undefined4 *******pppppppuVar35;
  uint uVar36;
  undefined8 uVar37;
  undefined *local_204;
  undefined4 local_1e0;
  undefined4 *******local_1dc;
  undefined4 *******local_1d8;
  undefined4 *******local_1d4;
  undefined4 *******local_1d0;
  undefined4 *******local_1cc;
  undefined4 local_1c8;
  undefined4 *******pppppppuStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 *******local_188;
  undefined4 *******local_184;
  undefined4 *******pppppppuStack_180;
  undefined4 *******pppppppuStack_17c;
  undefined4 *******pppppppuStack_178;
  undefined4 *******pppppppuStack_174;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined4 *******local_120;
  undefined4 *******local_11c;
  undefined4 *******local_118;
  undefined4 *******pppppppuStack_114;
  undefined4 *******local_110;
  undefined4 *******local_10c;
  int local_108;
  undefined4 *******local_104;
  int local_fc;
  undefined4 *******local_f8;
  int local_f0;
  undefined4 *******local_ec;
  ushort local_e8;
  int local_e0;
  ushort local_dc;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  int *local_c4;
  undefined4 *******local_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined4 *******pppppppuStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 *******local_60;
  undefined4 *******pppppppuStack_5c;
  undefined4 *******pppppppuStack_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 *******pppppppuStack_4c;
  undefined4 *******local_48;
  undefined4 *******pppppppuStack_44;
  int local_40;
  int local_3c;
  int local_38;
  uint uStack_34;
  uint uStack_30;
  
  piVar19 = param_1 + 0x34;
  if (*param_1 != 0) {
LAB_00681224:
    piVar19 = param_1 + 1;
    FUN_00682780(piVar19);
    iVar9 = FUN_00682914(piVar19);
    if (iVar9 == 0) {
      do {
        FUN_0076cff4(&local_120,piVar19,param_2);
        uVar10 = (uint)local_120 & 0xff;
        if (uVar10 == 7) {
LAB_00681b38:
          bVar25 = uVar10 == 7;
          goto LAB_00681b40;
        }
        if (uVar10 != 5) {
          if (uVar10 == 6) {
            unaff_r10 = (int *)thunk_FUN_016d4a50(0xc);
            if (unaff_r10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            *(undefined1 *)(unaff_r10 + 2) = 9;
            *unaff_r10 = 0;
            FUN_00682d50(unaff_r10,"send stream capacity unexpectedly closedFuture polled twice",
                         0x28);
          }
          else {
            local_1d8 = local_118;
            local_1d4 = pppppppuStack_114;
            local_1d0 = local_110;
            local_1dc = local_11c;
            local_1e0 = (undefined4 *******)
                        CONCAT13(*(undefined1 *)((undefined2 *)((uint)&local_120 | 1) + 1),
                                 CONCAT21(*(undefined2 *)((uint)&local_120 | 1),local_120._0_1_));
            local_1cc = local_10c;
            unaff_r10 = (int *)FUN_00682e78(&local_1e0);
          }
          goto LAB_00681b38;
        }
      } while (local_11c == (undefined4 *******)0x0);
LAB_00681434:
      pppppppuVar11 = (undefined4 *******)param_1[5];
      param_1[5] = 0;
      if (pppppppuVar11 == (undefined4 *******)0x0) {
        local_1e0 = (undefined4 *******)&SUB_00000002;
        cVar7 = FUN_00682f50(piVar19,&local_1e0,1);
        bVar25 = false;
        unaff_r10 = (int *)0x0;
        if (cVar7 == '\f') {
LAB_00681b40:
          if (bVar25 != false) {
            return bVar25;
          }
          goto LAB_00681b48;
        }
      }
      else {
        local_120 = (undefined4 *******)0x0;
        local_118 = (undefined4 *******)param_1[6];
        pppppppuStack_114 = (undefined4 *******)param_1[7];
        local_110 = (undefined4 *******)param_1[8];
        local_11c = pppppppuVar11;
        cVar7 = FUN_00682f50(piVar19,&local_120,1);
        if (cVar7 == '\f') {
          unaff_r10 = (int *)0x0;
          goto LAB_00681b48;
        }
      }
      local_1e0 = (undefined4 *******)CONCAT31(CONCAT21(local_1e0._2_2_,cVar7),3);
      unaff_r10 = (int *)FUN_00682e78(&local_1e0);
    }
    else {
      FUN_00682b24(&local_120,piVar19,param_2,1);
      if (((uint)local_120 & 0xff) == 5) {
        local_1e0 = (undefined4 *******)CONCAT31(local_1e0._1_3_,2);
      }
      else {
        if (((uint)local_120 & 0xff) == 6) goto LAB_00681434;
        local_1e0 = local_120;
        local_1d8 = local_118;
        local_1d4 = pppppppuStack_114;
        local_1d0 = local_110;
        local_1cc = local_10c;
      }
      local_1dc = local_11c;
      unaff_r10 = (int *)FUN_00682e78(&local_1e0);
    }
    goto LAB_00681b48;
  }
  FUN_00683b28(&local_1e0,param_1 + 6);
  if (!(local_1e0 != (undefined4 *******)0x3 || local_1dc != (undefined4 *******)0x0)) {
    FUN_00682b24(&local_120,piVar19,param_2,0);
    if (((uint)local_120 & 0xff) == 5) {
      local_184 = local_11c;
      local_188 = (undefined4 *******)CONCAT31(local_188._1_3_,2);
      unaff_r10 = (int *)FUN_010bed08(&local_188);
    }
    else {
      if (((uint)local_120 & 0xff) == 6) {
        return true;
      }
      local_188 = local_120;
      local_184 = local_11c;
      pppppppuStack_180 = local_118;
      pppppppuStack_17c = pppppppuStack_114;
      pppppppuStack_178 = local_110;
      pppppppuStack_174 = local_10c;
      unaff_r10 = (int *)FUN_010bed08();
    }
    goto LAB_00681b48;
  }
  FUN_016dd1aa(&local_188,&local_1e0,0x58);
  FUN_016dd1aa(&local_120,&local_188,0x48);
  local_130 = local_140;
  local_12c = iStack_13c;
  local_128 = iStack_138;
  local_124 = iStack_134;
  FUN_010b8868(&local_120,0);
  if ((char)param_1[0x38] != '\0') {
    local_1d4 = (undefined4 *******)0x0;
    local_1d8 = (undefined4 *******)0x0;
    local_1dc = (undefined4 *******)&DAT_00000020;
    local_1e0 = (undefined4 *******)0x0;
    iVar9 = FUN_006863d4(&local_120);
    if (iVar9 != 0) {
      if (local_1e0 != (undefined4 *******)0x0) {
        (*(code *)local_1e0[4])(&local_1d4,0x20,0);
      }
      puVar23 = &DAT_018a6164;
LAB_00682358:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0040929f,0x17,&local_1e0,&DAT_018a62e4,puVar23);
    }
    uVar8 = FUN_00686724(&local_120,&local_1e0);
    uVar2 = local_e8;
    pppppppuVar34 = local_f8;
    iVar6 = local_fc;
    pppppppuVar31 = local_104;
    iVar9 = local_108;
    pppppppuVar17 = local_1d8;
    pppppppuVar35 = local_1dc;
    pppppppuVar11 = local_1e0;
    uVar30 = (uint)local_e8;
    uVar10 = 0;
    uVar36 = (uint)local_1dc & 0xff;
    pppppppuVar32 = (undefined4 *******)(uint)(local_e8 & uVar8);
LAB_006814a4:
    do {
      pppppppuVar12 = pppppppuVar32;
      pppppppuVar5 = local_1d4;
      pppppppuVar26 = local_1d8;
      pppppppuVar32 = (undefined4 *******)0x0;
    } while (pppppppuVar31 <= pppppppuVar12);
    puVar13 = (ushort *)(iVar9 + (int)pppppppuVar12 * 4);
    pppppppuVar32 = (undefined4 *******)(uint)*puVar13;
    if ((pppppppuVar32 == (undefined4 *******)&DAT_0000ffff) ||
       (uVar1 = puVar13[1], ((int)pppppppuVar12 - (uint)(uVar2 & uVar1) & uVar30) < uVar10)) {
      local_1d4 = local_1d8;
      local_1d0 = pppppppuVar5;
      local_1d8 = pppppppuVar35;
      local_1dc = pppppppuVar11;
      local_1e0 = &local_120;
      local_1c8 = (undefined4 *******)CONCAT22(local_1c8._2_2_,uVar8);
      local_1cc = pppppppuVar12;
      uVar37 = thunk_FUN_016de0ee(local_1e0,local_120,local_11c,0x158);
      piVar21 = (int *)((int)uVar37 + extraout_r3);
      bVar25 = uVar10 >> 9 != 0 && ((int)((ulonglong)uVar37 >> 0x20) != 2 || extraout_r2 != 0);
      local_1c8._0_3_ = CONCAT12(bVar25,(undefined2)local_1c8);
      if (((char)piVar21[0x14] != '\x01') &&
         (piVar21 = (int *)FUN_010c2e34(piVar21,0), piVar21 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      if (*piVar21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_01884868);
      }
      *piVar21 = -1;
      FUN_015f3b0c(&local_78,0);
      pppppppuVar31 = (undefined4 *******)piVar21[2];
      pppppppuVar17 = (undefined4 *******)piVar21[3];
      bVar4 = (int)pppppppuVar17 - (int)((int)local_74 + (uint)(pppppppuVar31 < local_78)) < 0 !=
              (SBORROW4((int)pppppppuVar17,(int)local_74) !=
              SBORROW4((int)pppppppuVar17 - (int)local_74,(uint)(pppppppuVar31 < local_78)));
      if (local_78 == pppppppuVar31 && local_74 == pppppppuVar17) {
        bVar4 = (undefined4 *******)piVar21[4] < local_70;
      }
      if (bVar4) {
        FUN_010bcee4(piVar21 + 2);
      }
      (**(code **)piVar21[6])(&local_78,piVar21 + 9,piVar21[7],piVar21[8]);
      pppppppuVar17 = local_f8;
      local_60 = local_78;
      pppppppuStack_5c = local_74;
      pppppppuStack_58 = local_70;
      local_54 = local_6c;
      *piVar21 = *piVar21 + 1;
      local_70 = pppppppuVar26;
      local_6c = pppppppuVar5;
      local_74 = pppppppuVar35;
      local_50 = (undefined4 *******)CONCAT31(local_50._1_3_,(char)piVar21[10]);
      local_78 = pppppppuVar11;
      iVar9 = FUN_00686b04(&local_120,uVar8,&local_78,&local_60);
      if (iVar9 == 0) {
        uVar30 = 0;
        uVar10 = (uint)pppppppuVar17 & 0xffff;
        while( true ) {
          do {
            pppppppuVar11 = pppppppuVar12;
            pppppppuVar12 = (undefined4 *******)0x0;
          } while (local_104 <= pppppppuVar11);
          puVar13 = (ushort *)(local_108 + (int)pppppppuVar11 * 4);
          uVar2 = *puVar13;
          if (uVar2 == 0xffff) break;
          uVar1 = puVar13[1];
          *puVar13 = (ushort)uVar10;
          uVar30 = uVar30 + 1;
          puVar13[1] = uVar8;
          uVar10 = (uint)uVar2;
          pppppppuVar12 = (undefined4 *******)((int)pppppppuVar11 + 1);
          uVar8 = uVar1;
        }
        puVar13[1] = uVar8;
        *puVar13 = (ushort)uVar10;
        if ((bVar25 || 0x7f < uVar30) &&
            (local_120 == (undefined4 *******)0x0 && local_11c == (undefined4 *******)0x0)) {
          local_11c = (undefined4 *******)0x0;
          local_120 = (undefined4 *******)&DAT_00000001;
        }
        if (local_f8 <= pppppppuVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppppppuVar17,local_f8,&DAT_018a64f4);
        }
        goto LAB_006817c8;
      }
      puVar23 = &DAT_018a6324;
      goto LAB_00682358;
    }
    if (uVar1 != uVar8) {
LAB_0068149c:
      uVar10 = uVar10 + 1;
      pppppppuVar32 = (undefined4 *******)((int)pppppppuVar12 + 1);
      goto LAB_006814a4;
    }
    if (pppppppuVar34 <= pppppppuVar32) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppppuVar32,pppppppuVar34,&DAT_018a6334);
    }
    iVar14 = (int)pppppppuVar32 * 0x34 + iVar6;
    if ((*(int *)(iVar14 + 0x20) != 0) == (pppppppuVar11 == (undefined4 *******)0x0))
    goto LAB_0068149c;
    if (*(int *)(iVar14 + 0x20) == 0) {
      if (*(byte *)(iVar14 + 0x24) == uVar36) goto LAB_00681580;
      goto LAB_0068149c;
    }
    if ((*(undefined4 ********)(iVar14 + 0x28) != pppppppuVar17) ||
       (iVar14 = thunk_FUN_016dd50a(*(undefined4 *)(iVar14 + 0x24),pppppppuVar35), iVar14 != 0))
    goto LAB_0068149c;
    if (pppppppuVar11 != (undefined4 *******)0x0) {
      (*(code *)pppppppuVar11[4])(&local_1d4,pppppppuVar35);
      pppppppuVar34 = local_f8;
    }
LAB_00681580:
    if (pppppppuVar34 <= pppppppuVar32) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppppuVar32,pppppppuVar34,&DAT_018a6314);
    }
  }
LAB_006817c8:
  piVar21 = param_1 + 1;
  uVar18 = 0;
  iVar9 = *piVar21;
  *piVar21 = 0;
  if (iVar9 != 0) {
    local_d0 = param_1[2];
    local_cc = param_1[3];
    local_c8 = (int *)param_1[4];
    local_c4 = (int *)param_1[5];
    local_d4 = iVar9;
    if (local_dc - 200 < 100) {
      FUN_010c0c60(&local_1e0,&local_120);
      pppppppuVar11 = local_f8;
      uVar10 = (uint)local_1e0 &
               (uint)(local_1d8 != (undefined4 *******)0x0 || local_1d4 != (undefined4 *******)0x0);
      if (uVar10 == 0) {
        pppppppuVar35 = (undefined4 *******)0x0;
        local_6c = (undefined4 *******)0x0;
        local_70 = (undefined4 *******)0x0;
        local_74 = (undefined4 *******)&DAT_00000018;
        local_78 = (undefined4 *******)0x0;
        if (local_f8 != (undefined4 *******)0x0) {
          uVar30 = FUN_00686724(&local_120,&local_78);
          pppppppuVar34 = local_70;
          pppppppuVar31 = local_74;
          pppppppuVar35 = local_78;
          uVar2 = local_e8;
          iVar6 = local_fc;
          pppppppuVar17 = local_104;
          iVar9 = local_108;
          uVar28 = 0;
          uVar33 = (uint)local_e8;
          uVar36 = (uint)local_74 & 0xff;
          local_204 = &DAT_018a6bf0;
          pppppppuVar32 = (undefined4 *******)(uVar33 & uVar30 & 0xffff);
LAB_00681c44:
          do {
            pppppppuVar26 = pppppppuVar32;
            pppppppuVar32 = (undefined4 *******)0x0;
          } while (pppppppuVar17 <= pppppppuVar26);
          puVar13 = (ushort *)(iVar9 + (int)pppppppuVar26 * 4);
          uVar8 = *puVar13;
          pppppppuVar32 = (undefined4 *******)(uint)uVar8;
          if ((pppppppuVar32 == (undefined4 *******)&DAT_0000ffff) ||
             (uVar1 = puVar13[1], ((int)pppppppuVar26 - (uint)(uVar1 & uVar2) & uVar33) < uVar28))
          goto LAB_00681eac;
          if ((uint)uVar1 == (uVar30 & 0xffff)) {
            if (pppppppuVar11 <= pppppppuVar32) goto LAB_00682310;
            iVar14 = (int)pppppppuVar32 * 0x34 + iVar6;
            if ((*(int *)(iVar14 + 0x20) != 0) != (pppppppuVar35 == (undefined4 *******)0x0)) {
              if (*(int *)(iVar14 + 0x20) == 0) {
                if (*(byte *)(iVar14 + 0x24) == uVar36) goto LAB_00681d00;
              }
              else if ((*(undefined4 ********)(iVar14 + 0x28) == pppppppuVar34) &&
                      (iVar14 = thunk_FUN_016dd50a(*(undefined4 *)(iVar14 + 0x24),pppppppuVar31,
                                                   pppppppuVar34), iVar14 == 0)) goto LAB_00681d00;
            }
          }
          uVar28 = uVar28 + 1;
          pppppppuVar32 = (undefined4 *******)((int)pppppppuVar26 + 1);
          goto LAB_00681c44;
        }
LAB_00681eac:
        local_1d0 = (undefined4 *******)CONCAT31(local_1d0._1_3_,2);
        goto joined_r0x00682280;
      }
      FUN_00686dd4(piVar19);
      unaff_r10 = (int *)thunk_FUN_016d4a50(0xc);
      if (unaff_r10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *(undefined2 *)(unaff_r10 + 2) = 0x401;
      *unaff_r10 = 0;
      goto joined_r0x00682064;
    }
    FUN_00686c30(&local_d4);
    uVar18 = extraout_r1;
  }
  if (local_130 == 0) {
    FUN_016dd1aa(&local_1e0,&local_120,0x48);
    FUN_006870e4(&local_78,piVar19,&local_1e0,1);
    if ((char)local_78 == '\x05') {
      FUN_014ed5dc((uint)&local_78 | 4);
      goto LAB_00681fd8;
    }
    local_60 = local_78;
    pppppppuStack_5c = local_74;
    pppppppuStack_58 = local_70;
    local_54 = local_6c;
    local_50 = pppppppuStack_68;
    pppppppuStack_4c = pppppppuStack_64;
    FUN_00686dd4(piVar19);
    local_1e0 = local_78;
    local_1dc = local_74;
    local_1d8 = local_70;
    local_1d4 = local_6c;
    local_1d0 = pppppppuStack_68;
    local_1cc = pppppppuStack_64;
    unaff_r10 = (int *)FUN_010bed08(&local_1e0);
  }
  else {
    FUN_010c1088(&local_120,uVar18,local_128,0);
    FUN_016dd1aa(&local_1e0,&local_120,0x48);
    FUN_006870e4(&local_78,piVar19,&local_1e0,0);
    if ((char)local_78 == '\x05') {
      piVar19 = (int *)((uint)&local_78 | 4);
      local_88 = local_130;
      local_84 = local_12c;
      local_80 = local_128;
      local_7c = local_124;
      local_98 = *piVar19;
      local_94 = piVar19[1];
      local_90 = piVar19[2];
      local_8c = piVar19[3];
      if (*param_1 == 0) {
        FUN_006878dc(param_1 + 6);
        if (*piVar21 != 0) {
          FUN_00686c30(piVar21);
        }
      }
      else {
        FUN_014ed5dc(piVar21);
        if (param_1[5] != 0) {
          (**(code **)(param_1[5] + 0x10))(param_1 + 8,param_1[6],param_1[7]);
        }
      }
      *param_1 = 1;
      *piVar21 = local_98;
      param_1[2] = local_94;
      param_1[3] = local_90;
      param_1[4] = local_8c;
      unaff_r10 = param_1 + 5;
      *unaff_r10 = local_88;
      param_1[6] = local_84;
      param_1[7] = local_80;
      param_1[8] = local_7c;
      *(undefined1 *)(param_1 + 9) = 0;
      goto LAB_00681224;
    }
    local_60 = local_78;
    pppppppuStack_5c = local_74;
    pppppppuStack_58 = local_70;
    local_54 = local_6c;
    local_50 = pppppppuStack_68;
    pppppppuStack_4c = pppppppuStack_64;
    FUN_00686dd4(piVar19);
    local_1e0 = local_78;
    local_1dc = local_74;
    local_1d8 = local_70;
    local_1d4 = local_6c;
    local_1d0 = pppppppuStack_68;
    local_1cc = pppppppuStack_64;
    unaff_r10 = (int *)FUN_010bed08(&local_1e0);
  }
  goto LAB_00682184;
LAB_00681d00:
  piVar21 = (int *)(iVar6 + (int)pppppppuVar32 * 0x34);
  pppppppuVar11 = pppppppuVar17;
  if (*piVar21 == 1) {
    FUN_01442274(&local_120,piVar21[1]);
    pppppppuVar11 = local_104;
  }
  if (pppppppuVar11 <= pppppppuVar26) {
    local_204 = &DAT_018a6364;
    pppppppuVar32 = pppppppuVar26;
LAB_00682310:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(pppppppuVar32,pppppppuVar11,local_204);
  }
  puVar15 = (undefined2 *)(local_108 + (int)pppppppuVar26 * 4);
  *puVar15 = 0xffff;
  puVar15[1] = 0;
  if (local_f8 <= pppppppuVar32) {
    FUN_006028e8(pppppppuVar32);
                    /* WARNING: Does not return */
    pcVar20 = (code *)software_udf(0xfdee,0x6823c8);
    (*pcVar20)();
  }
  piVar21 = (int *)((int)pppppppuVar32 * 0x34 + local_fc);
  pppppppuVar35 = (undefined4 *******)((int)local_f8 + -1);
  local_1e0 = (undefined4 *******)*piVar21;
  local_1dc = (undefined4 *******)piVar21[1];
  local_1d8 = (undefined4 *******)piVar21[2];
  local_1d4 = (undefined4 *******)piVar21[3];
  local_1d0 = (undefined4 *******)piVar21[4];
  local_1cc = (undefined4 *******)piVar21[5];
  local_1c8 = (undefined4 *******)piVar21[6];
  pppppppuStack_1c4 = (undefined4 *******)piVar21[7];
  local_1c0 = piVar21[8];
  iStack_1bc = piVar21[9];
  iStack_1b8 = piVar21[10];
  uStack_1b4 = piVar21[0xb];
  uVar30 = piVar21[0xc];
  local_1b0 = uVar30;
  FUN_016dd52c(piVar21,(int)pppppppuVar35 * 0x34 + local_fc,0x34);
  pppppppuVar12 = local_1d0;
  pppppppuVar5 = local_1d4;
  pppppppuVar34 = local_1d8;
  pppppppuVar31 = local_1dc;
  pppppppuVar17 = local_1e0;
  local_f8 = pppppppuVar35;
  if (pppppppuVar32 < pppppppuVar35) {
    pppppppuVar16 = (undefined4 *******)(uint)(*(ushort *)(piVar21 + 0xc) & local_e8);
    while( true ) {
      do {
        pppppppuVar24 = pppppppuVar16;
        pppppppuVar16 = (undefined4 *******)0x0;
      } while (pppppppuVar11 <= pppppppuVar24);
      puVar13 = (ushort *)(local_108 + (int)pppppppuVar24 * 4);
      if (((undefined4 *******)(uint)*puVar13 != (undefined4 *******)&DAT_0000ffff) &&
         (pppppppuVar35 <= (undefined4 *******)(uint)*puVar13)) break;
      pppppppuVar16 = (undefined4 *******)((int)pppppppuVar24 + 1);
    }
    puVar13[1] = *(ushort *)(piVar21 + 0xc);
    *puVar13 = uVar8;
    if (*piVar21 == 1) {
      pppppppuVar16 = (undefined4 *******)piVar21[1];
      if (local_ec <= pppppppuVar16) {
        puVar23 = &DAT_018a6374;
        goto LAB_006823c4;
      }
      uVar30 = (int)pppppppuVar16 * 9;
      pppppppuVar24 = (undefined4 *******)piVar21[2];
      puVar27 = (undefined4 *)(local_f0 + (int)pppppppuVar16 * 0x24);
      *puVar27 = 0;
      puVar27[1] = pppppppuVar32;
      if (local_ec <= pppppppuVar24) {
        puVar23 = &DAT_018a6384;
        pppppppuVar16 = pppppppuVar24;
        goto LAB_006823c4;
      }
      local_f0 = local_f0 + (int)pppppppuVar24 * 0x24;
      *(undefined4 *)(local_f0 + 8) = 0;
      *(undefined4 ********)(local_f0 + 0xc) = pppppppuVar32;
    }
  }
  if (pppppppuVar35 != (undefined4 *******)0x0) {
    puVar23 = &DAT_018a6394;
    pppppppuVar35 = (undefined4 *******)((int)pppppppuVar26 + 1);
    while( true ) {
      do {
        pppppppuVar32 = pppppppuVar35;
        pppppppuVar35 = (undefined4 *******)0x0;
      } while (pppppppuVar11 <= pppppppuVar32);
      psVar29 = (short *)(local_108 + (int)pppppppuVar32 * 4);
      sVar3 = *psVar29;
      if (sVar3 != -1) {
        piVar21 = (int *)(uint)(ushort)psVar29[1];
        uVar30 = (int)pppppppuVar32 - (uint)(psVar29[1] & local_e8);
      }
      if (sVar3 == -1 || (uVar30 & local_e8) == 0) goto LAB_00682214;
      if (pppppppuVar11 <= pppppppuVar26) break;
      uVar30 = (int)pppppppuVar26 * 4;
      *(short *)(local_108 + uVar30) = sVar3;
      *psVar29 = -1;
      ((short *)(local_108 + uVar30))[1] = (short)piVar21;
      psVar29[1] = 0;
      pppppppuVar35 = (undefined4 *******)((int)pppppppuVar32 + 1);
      pppppppuVar26 = pppppppuVar32;
    }
    pppppppuVar16 = pppppppuVar26;
    local_ec = pppppppuVar11;
LAB_006823c4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(pppppppuVar16,local_ec,puVar23);
  }
LAB_00682214:
  local_60 = local_1e0;
  pppppppuStack_5c = local_1dc;
  pppppppuStack_58 = local_1d8;
  local_54 = local_1d4;
  local_50 = local_1d0;
  pppppppuStack_4c = local_1cc;
  local_48 = local_1c8;
  pppppppuStack_44 = pppppppuStack_1c4;
  local_40 = local_1c0;
  local_3c = iStack_1bc;
  local_38 = iStack_1b8;
  uStack_34 = uStack_1b4;
  uStack_30 = local_1b0;
  local_1e0 = local_1d4;
  local_1dc = local_1d0;
  local_1d8 = local_1cc;
  local_1d4 = local_1c8;
  local_1d0 = pppppppuStack_1c4;
  pppppppuVar35 = local_78;
  if (local_1c0 != 0) {
    (**(code **)(local_1c0 + 0x10))(&uStack_34,iStack_1bc,iStack_1b8);
    pppppppuVar35 = local_78;
  }
joined_r0x00682280:
  if (pppppppuVar35 != (undefined4 *******)0x0) {
    (*(code *)pppppppuVar35[4])(&local_6c,local_74,local_70);
  }
  if ((char)local_1d0 != '\x02') {
    (*(code *)local_1e0[4])(&local_1d4,local_1dc,local_1d8);
  }
  FUN_016dd1aa(&local_1e0,&local_120,0x48);
  FUN_006870e4(&local_78,piVar19,&local_1e0,0);
  if ((char)local_78 == '\x05') {
    local_c0 = local_74;
    pppppppuStack_bc = local_70;
    pppppppuStack_b8 = local_6c;
    pppppppuStack_b4 = pppppppuStack_68;
    FUN_0076411c(&local_1e0,&local_c0,&local_d4,local_c4);
    piVar19 = local_c8;
    local_60 = local_1e0;
    pppppppuStack_5c = local_1dc;
    pppppppuStack_58 = local_1d8;
    local_54 = local_1d4;
    local_50 = local_1d0;
    pppppppuStack_4c = local_1cc;
    local_48 = local_1c8;
    pppppppuStack_44 = pppppppuStack_1c4;
    local_40 = local_1c0;
    local_3c = iStack_1bc;
    local_38 = iStack_1b8;
    uStack_34 = uStack_1b4;
    local_b0 = local_1b0;
    uStack_ac = uStack_1ac;
    uStack_a8 = uStack_1a8;
    uStack_a4 = uStack_1a4;
    uStack_a0 = uStack_1a0;
    uStack_9c = uStack_19c;
    local_6c = (undefined4 *******)0x0;
    local_70 = (undefined4 *******)0x0;
    local_74 = (undefined4 *******)&DAT_00000001;
    local_78 = (undefined4 *******)&DAT_01858684;
    FUN_0076448c(&local_1e0,&local_60,&local_78);
    FUN_010b58a0(piVar19,&local_1e0);
    FUN_0076e3a4(&local_b0);
LAB_00681fd8:
    unaff_r10 = (int *)0x0;
  }
  else {
    local_60 = local_78;
    pppppppuStack_5c = local_74;
    pppppppuStack_58 = local_70;
    local_54 = local_6c;
    local_50 = pppppppuStack_68;
    pppppppuStack_4c = pppppppuStack_64;
    FUN_00686dd4(piVar19);
    local_1e0 = local_78;
    local_1dc = local_74;
    local_1d8 = local_70;
    local_1d4 = local_6c;
    local_1d0 = pppppppuStack_68;
    local_1cc = pppppppuStack_64;
    unaff_r10 = (int *)FUN_010bed08(&local_1e0);
joined_r0x00682064:
    if (local_c8 != (int *)0x0) {
      puVar22 = (uint *)(local_c8 + 6);
      uVar30 = local_c8[6];
      do {
        while( true ) {
          uVar36 = uVar30;
          if ((uVar36 & 4) != 0) goto LAB_006820c4;
          uVar30 = *puVar22;
          if (uVar30 == uVar36) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar25 = (bool)hasExclusiveAccess(puVar22);
        if (bVar25) {
          *puVar22 = uVar36 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar25);
LAB_006820c4:
      if ((uVar36 & 5) == 1) {
        (**(code **)(local_c8[4] + 8))(local_c8[5]);
      }
      if (local_c8 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *local_c8;
          bVar25 = (bool)hasExclusiveAccess(local_c8);
        } while (!bVar25);
        *local_c8 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010b50b8(local_c8);
        }
      }
    }
    if (local_c4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *local_c4;
        bVar25 = (bool)hasExclusiveAccess(local_c4);
      } while (!bVar25);
      *local_c4 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(local_c4);
      }
    }
    FUN_010b6c44(&local_d4);
    if ((uVar10 != 0) && (FUN_01015c1c(&local_120), local_e0 != 0)) {
      FUN_0148eea4(local_e0);
      thunk_FUN_016d3fb4(local_e0);
    }
  }
LAB_00682184:
  if (local_130 != 0) {
    (**(code **)(local_130 + 0x10))(&local_124,local_12c,local_128);
  }
LAB_00681b48:
  if (unaff_r10 == (int *)0x0) {
    return false;
  }
  iVar9 = *unaff_r10;
  if (iVar9 != 0) {
    puVar27 = (undefined4 *)unaff_r10[1];
    pcVar20 = (code *)*puVar27;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(iVar9);
    }
    if (puVar27[1] != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  thunk_FUN_016d3fb4(unaff_r10);
  return false;
}

