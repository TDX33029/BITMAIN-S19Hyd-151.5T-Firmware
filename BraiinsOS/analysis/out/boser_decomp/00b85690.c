// FUN_00b85690 @ 00b85690 size=2472 calls_out=14 calls_in=2
// strings: boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b85690(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint **ppuVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *extraout_r1;
  undefined4 *puVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 ***local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 ***local_a0;
  uint ****local_9c;
  undefined1 *local_98;
  undefined4 ****local_90;
  code *local_8c;
  uint *local_88;
  uint ***local_84;
  undefined **local_80;
  uint *local_7c;
  undefined *local_78;
  uint ****local_74;
  undefined4 ****local_70;
  uint ****local_6c;
  undefined4 ***local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 ***local_58;
  uint ****local_54;
  undefined1 *local_50;
  uint **local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  if (*(char *)(param_2 + 5) != '\0') {
    if (*(char *)(param_2 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13c38);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13c38);
  }
  uVar16 = param_2[4];
  local_c0 = (undefined4 ***)*param_2;
  local_bc = param_2[1];
  local_b8 = param_2[2];
  local_b4 = param_2[3];
  if ((local_b4 & 0xff) == 0) {
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4c3b0 - 1 < 2 ||
         ((DAT_01d4c3b0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c3a8), cVar3 != '\0')))) &&
        (iVar4 = FUN_01aaa278(DAT_01d4c3a8), iVar4 != 0)))) {
      local_44 = *(uint *)(DAT_01d4c3a8 + 0x20);
      if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c18);
      }
      local_80 = &local_78;
      local_40 = *(uint *)(DAT_01d4c3a8 + 0x24);
      local_3c = *(uint *)(DAT_01d4c3a8 + 0x28);
      local_88 = (uint *)(DAT_01d4c3a8 + 0x1c);
      local_48 = (uint **)*local_88;
      local_84 = &local_48;
      local_90 = &local_84;
      local_38 = 0;
      local_8c = (code *)0x1;
      local_74 = (uint ****)&local_70;
      local_7c = (uint *)&DAT_01d2ea4c;
      local_78 = &DAT_00592cfc;
      local_6c = (uint ****)FUN_00b861cc;
      local_70 = &local_c0;
      FUN_01aaaecc(DAT_01d4c3a8,&local_90);
      iVar4 = DAT_01d4c3a8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_54 = *(uint *****)(DAT_01d4c3a8 + 0x14);
        local_50 = *(undefined1 **)(DAT_01d4c3a8 + 0x18);
        local_58 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar2,&local_58);
        if (iVar5 != 0) {
          FUN_01aaa328(iVar4,pcVar2,puVar11[4],&local_58,&local_90);
        }
      }
    }
    else {
      iVar4 = DAT_01d4c3a8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_a8 = *(undefined4 *)(DAT_01d4c3a8 + 0x14);
        local_a4 = *(undefined4 *)(DAT_01d4c3a8 + 0x18);
        local_ac = 4;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar2,&local_ac);
        if (iVar5 != 0) {
          local_7c = (uint *)(DAT_01d4c3a8 + 0x1c);
          local_48 = (uint **)*local_7c;
          local_44 = *(uint *)(DAT_01d4c3a8 + 0x20);
          if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c18);
          }
          local_54 = (uint ****)&local_70;
          local_40 = *(uint *)(DAT_01d4c3a8 + 0x24);
          local_3c = *(uint *)(DAT_01d4c3a8 + 0x28);
          local_58 = &local_48;
          local_84 = (uint ***)&local_58;
          local_80 = (undefined **)&DAT_00000001;
          local_6c = (uint ****)&local_90;
          local_38 = 0;
          local_50 = &DAT_01d2ea4c;
          local_8c = FUN_00b861cc;
          local_70 = (undefined4 ****)&DAT_00592cfc;
          local_90 = &local_c0;
          FUN_01aaa328(iVar4,pcVar2,puVar11[4],&local_ac,&local_84);
        }
      }
    }
    FUN_019bb7e0(local_c0,local_bc);
    uVar16 = 2;
    puVar10 = &DAT_80000018;
  }
  else {
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4c3a4 - 1 < 2 ||
         ((DAT_01d4c3a4 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c39c), cVar3 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4c39c), iVar4 != 0)) {
      local_44 = *(uint *)(DAT_01d4c39c + 0x20);
      if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c28);
      }
      local_40 = *(uint *)(DAT_01d4c39c + 0x24);
      local_3c = *(uint *)(DAT_01d4c39c + 0x28);
      local_88 = (uint *)(DAT_01d4c39c + 0x1c);
      local_48 = (uint **)*local_88;
      local_80 = &local_78;
      local_84 = &local_48;
      local_90 = &local_84;
      local_8c = (code *)0x1;
      local_74 = (uint ****)&local_70;
      local_38 = 0;
      local_7c = (uint *)&DAT_01d2ea4c;
      local_78 = &DAT_00579199;
      local_6c = (uint ****)FUN_00b861cc;
      local_70 = &local_c0;
      FUN_01aaaecc(DAT_01d4c39c,&local_90);
      iVar4 = DAT_01d4c39c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_54 = *(uint *****)(DAT_01d4c39c + 0x14);
        local_50 = *(undefined1 **)(DAT_01d4c39c + 0x18);
        local_58 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar2,&local_58);
        if (iVar5 != 0) {
          FUN_01aaa328(iVar4,pcVar2,puVar11[4],&local_58,&local_90);
        }
      }
    }
    else {
      iVar4 = DAT_01d4c39c;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_9c = *(uint *****)(DAT_01d4c39c + 0x14);
        local_98 = *(undefined1 **)(DAT_01d4c39c + 0x18);
        local_a0 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar2,&local_a0);
        if (iVar5 != 0) {
          local_88 = (uint *)(DAT_01d4c39c + 0x1c);
          local_48 = (uint **)*local_88;
          local_44 = *(uint *)(DAT_01d4c39c + 0x20);
          if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c28);
          }
          local_84 = &local_48;
          local_40 = *(uint *)(DAT_01d4c39c + 0x24);
          local_3c = *(uint *)(DAT_01d4c39c + 0x28);
          local_80 = &local_78;
          local_90 = &local_84;
          local_8c = (code *)0x1;
          local_74 = (uint ****)&local_70;
          local_38 = 0;
          local_7c = (uint *)&DAT_01d2ea4c;
          local_78 = &DAT_00579199;
          local_6c = (uint ****)FUN_00b861cc;
          local_70 = &local_c0;
          local_58 = local_a0;
          local_54 = local_9c;
          local_50 = local_98;
          FUN_01aaa328(iVar4,pcVar2,puVar11[4],&local_58,&local_90);
        }
      }
    }
    uVar20 = FUN_00b81df8(uVar16);
    iVar4 = local_b8;
    uVar16 = local_bc;
    iVar5 = (int)uVar20;
    uVar9 = (uint)((ulonglong)uVar20 >> 0x20) & 1;
    if (*(int *)(iVar5 + 0x14) != 0) {
      local_48 = *(uint ***)(iVar5 + 0x18);
      local_44 = *(uint *)(iVar5 + 0x1c);
      local_30 = &DAT_01d519f0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_2c = '\0';
      FUN_00b8c814(&local_48);
      if (local_2c == '\0') {
        ppuVar8 = local_48;
      }
      else {
        ppuVar8 = (uint **)((local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
                            ((uint)local_48 ^ local_40) * (*local_30 ^ local_38) ^
                           (uint)((ulonglong)(local_44 ^ local_3c) *
                                  (ulonglong)(*local_30 ^ local_38) >> 0x20) ^
                           (uint)((ulonglong)((uint)local_48 ^ local_40) *
                                  (ulonglong)(local_30[1] ^ local_34) >> 0x20));
      }
      uVar1 = (uint)ppuVar8 >> 0x19;
      iVar12 = *(int *)(iVar5 + 8);
      uVar14 = *(uint *)(iVar5 + 0xc);
      iVar19 = 0;
      while( true ) {
        uVar15 = uVar14 & (uint)ppuVar8;
        uVar17 = *(uint *)(iVar12 + uVar15);
        uVar6 = uVar17 ^ uVar1 * 0x1010101;
        for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6
            ) {
          uVar18 = uVar15 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                           (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                   uVar14;
          iVar7 = *(int *)(iVar12 + -8 + uVar18 * -8);
          if ((iVar4 == *(int *)(iVar7 + 8)) &&
             (iVar7 = thunk_FUN_01bed842(uVar16,*(undefined4 *)(iVar7 + 4)), iVar7 == 0)) {
            iVar4 = *(int *)(iVar5 + 0x24);
            plVar13 = *(longlong **)(iVar12 + uVar18 * -8 + -4);
            lVar21 = plVar13[5];
            *(int *)(*(int *)((int)plVar13 + 0x24) + 0x28) = (int)lVar21;
            *(undefined4 *)((int)lVar21 + 0x24) = *(undefined4 *)((int)plVar13 + 0x24);
            uVar16 = *(undefined4 *)(iVar4 + 0x28);
            *(int *)((int)plVar13 + 0x24) = iVar4;
            *(undefined4 *)(plVar13 + 5) = uVar16;
            *(longlong **)(iVar4 + 0x28) = plVar13;
            *(longlong **)((int)plVar13[5] + 0x24) = plVar13;
            lVar21 = FUN_00b81808();
            *plVar13 = lVar21 + 0xe10;
            local_68 = local_c0;
            uStack_64 = local_bc;
            iStack_60 = local_b8;
            FUN_00a97e8c(iVar5,uVar9);
            uVar16 = 0;
            puVar10 = extraout_r1;
            goto LAB_00b85edc;
          }
        }
        if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
        iVar19 = iVar19 + 4;
        ppuVar8 = (uint **)(iVar19 + uVar15);
      }
    }
    FUN_00a97e8c(iVar5,uVar9);
    FUN_019bb7e0(local_c0,local_bc);
    uVar16 = 2;
    puVar10 = &DAT_80000016;
  }
LAB_00b85edc:
  param_1[8] = 0x80000001;
  param_1[3] = uVar16;
  param_1[4] = puVar10;
  param_1[5] = 0x2000000;
  *param_1 = 0xe10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xc] = &DAT_0051da27;
  param_1[0xd] = 10;
  param_1[0xe] = local_68;
  param_1[0xf] = uStack_64;
  param_1[0x10] = iStack_60;
  param_1[0x17] = 0x3020202;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = &DAT_005327c4;
  param_1[0x16] = 1;
  param_1[0x11] = 0x80000002;
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}

