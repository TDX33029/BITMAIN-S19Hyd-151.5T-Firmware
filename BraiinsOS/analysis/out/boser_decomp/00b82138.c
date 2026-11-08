// FUN_00b82138 @ 00b82138 size=2096 calls_out=20 calls_in=1
// strings: Logout all related sessionsevent open/boser/boser-buildroot/src/session.rs:276event open/boser/boser-buildroot/src/session.rs:186event open/boser/boser-buildroot/src/session.rs:175 | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00b82138(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint ***pppuVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 ****ppppuVar13;
  uint ****ppppuVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  uint ****local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 ****local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 ****local_80;
  uint ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_70;
  uint ****local_6c;
  undefined4 ****local_68;
  uint ***local_60;
  uint ***local_5c;
  uint ***local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  char local_44;
  undefined4 ****local_40;
  uint ****local_3c;
  undefined4 ****local_38;
  undefined4 ****local_30;
  uint ****local_2c;
  undefined4 ****ppppuStack_28;
  
  if (*(char *)(param_2 + 5) != '\0') {
    if (*(char *)(param_2 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13a48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13a48);
  }
  local_c0 = *param_2;
  local_bc = param_2[1];
  local_b8 = param_2[2];
  uStack_b4 = param_2[3];
  uVar20 = FUN_00b81df8(param_2[4]);
  iVar8 = local_b8;
  uVar11 = local_bc;
  iVar4 = (int)uVar20;
  uVar15 = (uint)((ulonglong)uVar20 >> 0x20) & 1;
  if (*(int *)(iVar4 + 0x14) != 0) {
    local_60 = *(uint ****)(iVar4 + 0x18);
    local_5c = *(uint ****)(iVar4 + 0x1c);
    local_48 = &DAT_01d519f0;
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = (uint ***)0x0;
    local_44 = '\0';
    FUN_00b8c814(&local_60,local_bc);
    if (local_44 == '\0') {
      pppuVar7 = local_60;
    }
    else {
      pppuVar7 = (uint ***)
                 (((uint)local_5c ^ local_54) * (local_48[1] ^ local_4c) ^
                  ((uint)local_60 ^ (uint)local_58) * (*local_48 ^ local_50) ^
                 (uint)((ulonglong)((uint)local_5c ^ local_54) * (ulonglong)(*local_48 ^ local_50)
                       >> 0x20) ^
                 (uint)((ulonglong)((uint)local_60 ^ (uint)local_58) *
                        (ulonglong)(local_48[1] ^ local_4c) >> 0x20));
    }
    uVar1 = (uint)pppuVar7 >> 0x19;
    iVar16 = *(int *)(iVar4 + 8);
    uVar9 = *(uint *)(iVar4 + 0xc);
    iVar19 = 0;
    while( true ) {
      uVar17 = uVar9 & (uint)pppuVar7;
      uVar18 = *(uint *)(iVar16 + uVar17);
      uVar5 = uVar18 ^ uVar1 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar10 = uVar17 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar9;
        iVar6 = *(int *)(iVar16 + -8 + uVar10 * -8);
        if ((iVar8 == *(int *)(iVar6 + 8)) &&
           (iVar6 = thunk_FUN_01bed842(uVar11,*(undefined4 *)(iVar6 + 4),iVar8), iVar6 == 0)) {
          iVar8 = *(int *)(iVar16 + uVar10 * -8 + -4);
          FUN_006666fc(&local_a0,*(undefined4 *)(iVar8 + 0xc),*(undefined4 *)(iVar8 + 0x10));
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4c374 - 1 < 2 ||
               ((DAT_01d4c374 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c36c), cVar3 != '\0')))) &&
              (iVar8 = FUN_01aaa278(DAT_01d4c36c), iVar8 != 0)))) {
            if (*(uint ****)(DAT_01d4c36c + 0x20) == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13a38);
            }
            local_6c = (uint ****)&local_88;
            local_58 = *(uint ****)(DAT_01d4c36c + 0x24);
            local_54 = *(uint *)(DAT_01d4c36c + 0x28);
            local_8c = (undefined4 *)(DAT_01d4c36c + 0x1c);
            local_60 = (uint ***)*local_8c;
            local_70 = &local_60;
            local_94 = &local_70;
            local_50 = 0;
            local_90 = 1;
            local_68 = (undefined4 ****)&DAT_01d2ea4c;
            local_84 = 0x37;
            local_88 = 
            "Logout all related sessionsevent open/boser/boser-buildroot/src/session.rs:276event open/boser/boser-buildroot/src/session.rs:186event open/boser/boser-buildroot/src/session.rs:175"
            ;
            local_5c = *(uint ****)(DAT_01d4c36c + 0x20);
            FUN_01aaaecc(DAT_01d4c36c,&local_94);
            iVar8 = DAT_01d4c36c;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_3c = *(uint *****)(DAT_01d4c36c + 0x14);
              local_38 = *(undefined4 *****)(DAT_01d4c36c + 0x18);
              local_40 = (undefined4 ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar16 = (*(code *)puVar12[3])(pcVar2,&local_40);
              if (iVar16 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                ppppuStack_28 = local_38;
                FUN_01aaa328(iVar8,pcVar2,puVar12[4],&local_30,&local_94);
              }
            }
          }
          else {
            iVar8 = DAT_01d4c36c;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_7c = *(uint *****)(DAT_01d4c36c + 0x14);
              local_78 = *(undefined4 *****)(DAT_01d4c36c + 0x18);
              local_80 = (undefined4 ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar12 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar12 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar16 = (*(code *)puVar12[3])(pcVar2,&local_80);
              if (iVar16 != 0) {
                local_68 = (undefined4 ****)(DAT_01d4c36c + 0x1c);
                if (*(uint ****)(DAT_01d4c36c + 0x20) == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13a38);
                }
                local_3c = (uint ****)&local_94;
                local_58 = *(uint ****)(DAT_01d4c36c + 0x24);
                local_54 = *(uint *)(DAT_01d4c36c + 0x28);
                local_40 = &local_60;
                local_70 = &local_40;
                local_50 = 0;
                local_6c = (uint ****)&DAT_00000001;
                local_90 = 0x37;
                local_38 = (undefined4 ****)&DAT_01d2ea4c;
                local_94 = (undefined4 ****)0x3ef307;
                local_30 = local_80;
                local_2c = local_7c;
                ppppuStack_28 = local_78;
                local_60 = *local_68;
                local_5c = *(uint ****)(DAT_01d4c36c + 0x20);
                FUN_01aaa328(iVar8,pcVar2,puVar12[4],&local_30,&local_70);
              }
            }
          }
          iVar16 = *(int *)(iVar4 + 0x14);
          iVar8 = *(int *)(*(int *)(iVar4 + 0x24) + 0x28);
          goto LAB_00b8265c;
        }
      }
      if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
      iVar19 = iVar19 + 4;
      pppuVar7 = (uint ***)(iVar19 + uVar17);
    }
  }
  FUN_00a97e8c(iVar4,uVar15);
  FUN_019bb7e0(local_c0,uVar11);
  uVar11 = 2;
  goto LAB_00b8270c;
  while( true ) {
    iVar8 = *(int *)(iVar19 + 0x28);
    iVar6 = FUN_00b81ecc(&local_c0,&local_a0,iVar19 + 0x18,iVar19);
    iVar16 = iVar16 + -1;
    if (iVar6 != 0) break;
LAB_00b8265c:
    iVar19 = iVar8;
    if (iVar16 == 0) goto LAB_00b826b0;
  }
  FUN_006666fc(&local_30,*(undefined4 *)(iVar19 + 0x1c),*(undefined4 *)(iVar19 + 0x20));
  if (local_30 == (undefined4 ****)&DAT_80000000) {
LAB_00b826b0:
    local_68 = (undefined4 ****)0x0;
    local_6c = (uint ****)&SUB_00000004;
    local_70 = (undefined4 ****)0x0;
  }
  else {
    local_c8 = (uint ****)thunk_FUN_01be5118(0x30);
    if (local_c8 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x30);
    }
    *local_c8 = (uint ***)local_30;
    local_c8[1] = (uint ***)local_2c;
    local_c8[2] = (uint ***)ppppuStack_28;
    local_38 = (undefined4 ****)&DAT_00000001;
    local_40 = (undefined4 ****)&SUB_00000004;
    ppppuVar13 = (undefined4 ****)&DAT_00000001;
    local_3c = local_c8;
    while (iVar19 = iVar8, iVar16 != 0) {
      iVar8 = *(int *)(iVar19 + 0x28);
      iVar6 = FUN_00b81ecc(&local_c0,&local_a0,iVar19 + 0x18,iVar19);
      iVar16 = iVar16 + -1;
      if (iVar6 != 0) {
        FUN_006666fc(&local_60,*(undefined4 *)(iVar19 + 0x1c),*(undefined4 *)(iVar19 + 0x20));
        if (local_60 == (uint ***)0x80000000) break;
        if (ppppuVar13 == local_40) {
          FUN_006520b4(&local_40,ppppuVar13,1,4,0xc);
          local_c8 = local_3c;
        }
        local_38 = (undefined4 ****)((int)ppppuVar13 + 1);
        ppppuVar14 = local_c8 + (int)ppppuVar13 * 3;
        *ppppuVar14 = local_60;
        ppppuVar14[1] = local_5c;
        ppppuVar14[2] = local_58;
        ppppuVar13 = local_38;
      }
    }
    local_70 = local_40;
    local_6c = local_3c;
    local_68 = local_38;
    if (local_38 != (undefined4 ****)0x0) {
      ppppuVar14 = local_3c + 1;
      iVar8 = (int)local_38 * 0xc;
      do {
        FUN_00b8ca34(&local_60,iVar4 + 8,*ppppuVar14,ppppuVar14[1]);
        if (local_58 != (uint ***)0x80000000) {
          FUN_019bb7e0(local_58,local_54);
        }
        ppppuVar14 = ppppuVar14 + 3;
        iVar8 = iVar8 + -0xc;
      } while (iVar8 != 0);
    }
  }
  uVar11 = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  FUN_006a41c0(&local_70);
  FUN_019bb7e0(local_a0,local_9c);
  FUN_00a97e8c(iVar4,uVar15);
  FUN_019bb7e0(local_c0,local_bc);
LAB_00b8270c:
  *param_1 = local_b0;
  param_1[1] = local_ac;
  param_1[2] = local_a8;
  param_1[0x15] = &DAT_005327c4;
  param_1[0xc] = &DAT_0051da27;
  param_1[0xd] = 10;
  param_1[0xe] = 0x80000000;
  param_1[0x17] = 0x3020202;
  param_1[0x11] = 0x80000002;
  param_1[8] = 0x80000001;
  param_1[0x14] = 0x80000000;
  param_1[0x16] = 1;
  param_1[0xb] = 0x80000000;
  param_1[0xf] = 1;
  param_1[0x10] = 0;
  param_1[3] = uVar11;
  param_1[4] = &DAT_80000016;
  param_1[5] = 0x2000000;
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}

