// FUN_01a6bf78 @ 01a6bf78 size=1788 calls_out=16 calls_in=4
// strings: clear_queue | tracing::span::active | h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01a6bf78(int param_1,undefined4 param_2,undefined4 ****param_3)

{
  char cVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  int iVar6;
  undefined4 ***pppuVar7;
  uint uVar8;
  int *extraout_r2;
  int extraout_r3;
  undefined4 ***extraout_r3_00;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 ***pppuVar13;
  bool bVar14;
  undefined4 ****local_238;
  undefined4 ***local_234;
  undefined *local_230;
  int local_22c;
  int local_228;
  undefined4 uStack_224;
  int local_220;
  undefined4 uStack_21c;
  undefined4 ****local_218;
  undefined4 ***local_214;
  undefined *local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 ****local_160;
  undefined2 *local_15c;
  uint local_158;
  int iStack_154;
  int local_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 uStack_144;
  undefined4 ****local_a8;
  undefined4 local_a4;
  int *local_a0;
  undefined4 ****local_9c;
  undefined4 local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 local_8c;
  int *local_88;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  int *local_78;
  undefined4 ***local_74;
  undefined4 ****local_70;
  undefined *local_6c;
  undefined4 ***local_68;
  uint uStack_64;
  int iStack_60;
  undefined4 ****ppppuStack_5c;
  undefined4 local_58;
  undefined4 ***local_54;
  uint uStack_50;
  int iStack_4c;
  undefined4 ****ppppuStack_48;
  undefined4 local_44;
  undefined4 ****local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 ****ppppuStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50840 - 1 < 2 ||
       ((DAT_01d50840 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50838), cVar1 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d50838), iVar2 = DAT_01d50838, iVar5 != 0)))) {
    local_15c = *(undefined2 **)(DAT_01d50838 + 0x20);
    if (local_15c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d044);
    }
    local_158 = *(uint *)(DAT_01d50838 + 0x24);
    iStack_154 = *(int *)(DAT_01d50838 + 0x28);
    local_150 = 0;
    piVar9 = (int *)(DAT_01d50838 + 0x1c);
    local_160 = (undefined4 ****)*piVar9;
    iVar5 = FUN_01367c40((*param_3)[0xd],(*param_3)[0xe],param_3[1],param_3[2]);
    local_54 = (undefined4 ***)(iVar5 + 0xd4);
    local_214 = &local_54;
    local_218 = &local_160;
    local_7c = (undefined4 ****)&DAT_00000001;
    local_80 = &local_218;
    local_210 = &DAT_01d2d754;
    local_78 = piVar9;
    FUN_01aaa548(&local_238,iVar2,&local_80);
  }
  else {
    local_148 = DAT_01d50838;
    local_158 = 2;
    if (DAT_01d51ae9 == '\0') {
      piVar9 = (int *)(DAT_01d50838 + 0x1c);
      local_218 = (undefined4 ****)*piVar9;
      local_214 = *(undefined4 ****)(DAT_01d50838 + 0x20);
      if (local_214 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d044);
      }
      local_210 = *(undefined **)(DAT_01d50838 + 0x24);
      uStack_20c = *(undefined4 *)(DAT_01d50838 + 0x28);
      uStack_208 = 0;
      iVar2 = FUN_01367c40((*param_3)[0xd],(*param_3)[0xe],param_3[1],param_3[2]);
      local_234 = &local_54;
      local_54 = (undefined4 ***)(iVar2 + 0xd4);
      local_238 = &local_218;
      local_80 = &local_238;
      local_7c = (undefined4 ****)&DAT_00000001;
      local_230 = &DAT_01d2d754;
      local_78 = piVar9;
      FUN_01aaa3e0(&local_160,&local_80);
    }
    local_238 = local_160;
    local_234 = (undefined4 ***)local_15c;
    local_230 = (undefined *)local_158;
    local_22c = iStack_154;
    local_228 = local_150;
    uStack_224 = uStack_14c;
    local_220 = local_148;
    uStack_21c = uStack_144;
  }
  if (local_230 != (undefined *)0x2) {
    if (((uint)local_230 & 1) == 0) {
      iVar2 = local_22c;
    }
    else {
      iVar2 = local_22c + (*(int *)(local_228 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_228 + 0x30))(iVar2,&local_238);
  }
  if ((DAT_01d51ae9 == '\0') && (local_220 != 0)) {
    local_214 = *(undefined4 ****)(local_220 + 0x10);
    local_218 = *(undefined4 *****)(local_220 + 0xc);
    local_160 = &local_218;
    local_15c = &DAT_0132b6a0;
    FUN_006404a8(&local_238,"tracing::span::active",0x15,&DAT_00594cdd,&local_160);
  }
  pppuVar3 = *param_3;
  pppuVar4 = param_3[1];
  pppuVar13 = param_3[2];
  iVar2 = param_1;
  ppppuVar12 = param_3;
  do {
    iVar5 = FUN_01367cb8(pppuVar3[0xd],pppuVar3[0xe],pppuVar4,pppuVar13);
    FUN_01a7e628(&local_218,iVar5 + 0x6c,param_2);
    if ((char)local_218 == '\t') {
      pppuVar3 = *param_3;
      pppuVar13 = param_3[1];
      pppuVar4 = param_3[2];
      iVar2 = FUN_01367cb8(pppuVar3[0xd],pppuVar3[0xe],pppuVar13,pppuVar4);
      *(undefined4 *)(iVar2 + 0xe0) = 0;
      iVar2 = FUN_01367cb8(pppuVar3[0xd],pppuVar3[0xe],pppuVar13,pppuVar4);
      *(undefined4 *)(iVar2 + 0xdc) = 0;
      pppuVar3 = *(undefined4 ****)(param_1 + 0x3c);
      bVar14 = pppuVar3 == (undefined4 ***)0x1;
      if (bVar14) {
        pppuVar3 = *(undefined4 ****)(param_1 + 0x40);
      }
      if ((bVar14 && pppuVar13 == pppuVar3) && (pppuVar4 == *(undefined4 ****)(param_1 + 0x44))) {
        *(undefined4 *)(param_1 + 0x3c) = 2;
      }
      FUN_0134c39c(&local_238);
      FUN_01834abc(&local_238);
      return;
    }
    FUN_01bed4e2(&local_160,&local_218,0xb8);
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d5084c - 1 < 2 ||
         ((DAT_01d5084c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50844), cVar1 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d50844), iVar5 != 0)) {
      uVar8 = *(uint *)(DAT_01d50844 + 0x20);
      piVar9 = extraout_r2;
      pppuVar7 = extraout_r3_00;
      if (uVar8 != 0) {
        piVar9 = (int *)(DAT_01d50844 + 0x1c);
        pppuVar7 = (undefined4 ***)*piVar9;
        local_58 = 0;
        iVar2 = *(int *)(DAT_01d50844 + 0x24);
        ppppuVar12 = *(undefined4 *****)(DAT_01d50844 + 0x28);
        local_98 = 0x11;
        local_9c = (undefined4 ****)&DAT_00570340;
        local_68 = pppuVar7;
        uStack_64 = uVar8;
        iStack_60 = iVar2;
        ppppuStack_5c = ppppuVar12;
      }
      if (uVar8 < 2) {
LAB_01a6c58c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d054);
      }
      local_70 = &local_94;
      local_74 = &local_54;
      local_7c = &local_9c;
      local_80 = &local_68;
      local_a8 = &local_80;
      local_44 = 1;
      local_a4 = 2;
      local_6c = &DAT_01d2d064;
      local_78 = (int *)&DAT_01d2ea4c;
      local_a0 = piVar9;
      local_94 = &local_160;
      local_54 = pppuVar7;
      uStack_50 = uVar8;
      iStack_4c = iVar2;
      ppppuStack_48 = ppppuVar12;
      FUN_01aaaecc(DAT_01d50844,&local_a8);
      iVar5 = DAT_01d50844;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(undefined4 *)(DAT_01d50844 + 0x14);
        local_38 = *(int **)(DAT_01d50844 + 0x18);
        local_40 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        ppppuVar11 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          ppppuVar11 = (undefined4 ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar10[3])(ppppuVar11,&local_40);
        iVar2 = iVar5;
        if (iVar6 != 0) {
          ppppuStack_30 = local_40;
          uStack_2c = local_3c;
          piStack_28 = local_38;
          FUN_01aaa328(iVar5,ppppuVar11,puVar10[4],&ppppuStack_30,&local_a8);
        }
      }
    }
    else {
      iVar5 = DAT_01d50844;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_8c = *(undefined4 *)(DAT_01d50844 + 0x14);
        local_88 = *(int **)(DAT_01d50844 + 0x18);
        local_90 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        ppppuVar12 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          ppppuVar12 = (undefined4 ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar10[3])(ppppuVar12,&local_90);
        ppppuVar11 = &local_218;
        iVar2 = iVar5;
        if (iVar6 != 0) {
          pppuVar7 = *(undefined4 ****)(DAT_01d50844 + 0x1c);
          uVar8 = *(uint *)(DAT_01d50844 + 0x20);
          iVar6 = extraout_r3;
          if (uVar8 != 0) {
            local_58 = 0;
            iVar6 = *(int *)(DAT_01d50844 + 0x24);
            ppppuVar11 = *(undefined4 *****)(DAT_01d50844 + 0x28);
            local_a4 = 0x11;
            local_a8 = (undefined4 ****)&DAT_00570340;
            local_68 = pppuVar7;
            uStack_64 = uVar8;
            iStack_60 = iVar6;
            ppppuStack_5c = ppppuVar11;
          }
          if (uVar8 < 2) goto LAB_01a6c58c;
          local_7c = &local_a8;
          local_70 = &local_9c;
          local_80 = &local_68;
          local_74 = &local_54;
          local_40 = &local_80;
          local_44 = 1;
          local_3c = 2;
          local_6c = &DAT_01d2d064;
          local_78 = (int *)&DAT_01d2ea4c;
          ppppuStack_30 = local_90;
          uStack_2c = local_8c;
          piStack_28 = local_88;
          local_9c = &local_160;
          local_54 = pppuVar7;
          uStack_50 = uVar8;
          iStack_4c = iVar6;
          ppppuStack_48 = ppppuVar11;
          local_38 = (int *)(DAT_01d50844 + 0x1c);
          FUN_01aaa328(iVar5,ppppuVar12,puVar10[4],&ppppuStack_30,&local_40);
        }
      }
    }
    FUN_017b5074(&local_160);
  } while( true );
}

