// FUN_01385880 @ 01385880 size=2260 calls_out=10 calls_in=3
// strings: h2::proto::ping_pong/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:110event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll | recv PING SHUTDOWN ack | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::ping_pong/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:110event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/ping_pong.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01385880(int *param_1,int *****param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  int **ppiVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *****pppppuVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 ******ppppppuVar14;
  undefined4 ***local_94;
  int local_90;
  undefined4 ****local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 ****local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *****local_74;
  code *local_70;
  undefined4 *local_6c;
  undefined *local_68;
  undefined4 ******local_64;
  undefined4 ****local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *****local_54;
  undefined **local_50;
  undefined4 *local_4c;
  undefined4 ****local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int *****local_34;
  undefined4 ******local_30;
  int ****local_2c;
  undefined4 ******local_28;
  undefined1 *local_24;
  
  if ((char)param_1[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.pending_pong.is_none()",0x2d,&DAT_01ceb1fc);
  }
  if (*(char *)param_2 == '\0') {
    uVar12 = *(undefined4 *)((int)param_2 + 1);
    uVar9 = *(undefined4 *)((int)param_2 + 5);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)((int)param_1 + 9) = uVar9;
    *(undefined4 *)((int)param_1 + 5) = uVar12;
    return 0;
  }
  cVar2 = *(char *)((int)param_1 + 0xd);
  ppiVar8 = *(int ***)((int)param_1 + 0xe);
  iVar4 = *(int *)((int)param_1 + 0x12);
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  if (cVar2 == '\x02') {
LAB_01385a70:
    iVar4 = *param_1;
    if ((iVar4 != 0) &&
       (*(int *)((int)param_2 + 1) == 0x7adb7c3b && *(int *)((int)param_2 + 5) == -0x4be978f5)) {
      piVar5 = (int *)(iVar4 + 8);
      if (*piVar5 == 2) {
        DataMemoryBarrier(0xb);
LAB_01385abc:
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar1) goto code_r0x01385ac8;
        *piVar5 = 3;
        puVar7 = (uint *)(iVar4 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar10 = *puVar7;
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = uVar10 | 2;
        DataMemoryBarrier(0xb);
        if (uVar10 == 0) {
          iVar3 = *(int *)(iVar4 + 0x18);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar1);
          *puVar7 = *puVar7 & 0xfffffffd;
          if (iVar3 != 0) {
            (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar4 + 0x1c));
          }
        }
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4d76c - 1 < 2 ||
             ((DAT_01d4d76c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d764), cVar2 != '\0')))) &&
            (iVar4 = FUN_01aaa278(DAT_01d4d764), iVar4 != 0)))) {
          local_4c = (undefined4 *)(DAT_01d4d764 + 0x1c);
          local_48 = (undefined4 ****)*local_4c;
          local_44 = *(int *)(DAT_01d4d764 + 0x20);
          if (local_44 != 0) {
            local_28 = &local_74;
            local_40 = *(undefined4 *)(DAT_01d4d764 + 0x24);
            local_3c = *(undefined4 *)(DAT_01d4d764 + 0x28);
            local_2c = (int ****)&local_48;
            local_54 = &local_2c;
            local_38 = 0;
            local_70 = (code *)0x25;
            local_50 = (undefined **)0x1;
            local_24 = &DAT_01d2ea4c;
            local_74 = (int *****)0x470c94;
            FUN_0138636c(&local_54);
            return 1;
          }
LAB_0138613c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceb22c);
        }
        iVar4 = DAT_01d4d764;
        if (DAT_01d51ae9 != '\0') {
          return 1;
        }
        if (DAT_01d51b00 < 5) {
          return 1;
        }
        local_7c = *(undefined4 *)(DAT_01d4d764 + 0x14);
        local_78 = *(undefined4 *)(DAT_01d4d764 + 0x18);
        local_80 = (undefined4 ****)0x5;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        pcVar6 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar13[3])(pcVar6,&local_80);
        if (iVar3 == 0) {
          return 1;
        }
        local_4c = (undefined4 *)(DAT_01d4d764 + 0x1c);
        local_48 = (undefined4 ****)*local_4c;
        local_44 = *(int *)(DAT_01d4d764 + 0x20);
        if (local_44 == 0) goto LAB_0138613c;
        local_40 = *(undefined4 *)(DAT_01d4d764 + 0x24);
        local_3c = *(undefined4 *)(DAT_01d4d764 + 0x28);
        uVar12 = 1;
        pppppuVar11 = &local_80;
        local_70 = (code *)0x25;
        local_74 = (int *****)0x470c94;
        goto LAB_01385a38;
      }
LAB_01385ad4:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    if (DAT_01d50f88 < 4) {
      if (DAT_01d4d760 - 1 < 2) goto LAB_01385b08;
      if (DAT_01d4d760 != 0) goto LAB_013860f0;
    }
LAB_01385c5c:
    iVar4 = DAT_01d4d758;
    if (DAT_01d51ae9 != '\0') {
      return 1;
    }
    if (DAT_01d51b00 < 2) {
      return 1;
    }
    local_5c = *(undefined4 *)(DAT_01d4d758 + 0x14);
    local_58 = *(undefined4 *)(DAT_01d4d758 + 0x18);
    local_60 = (undefined4 ****)0x2;
    DataMemoryBarrier(0xb);
    puVar13 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar13 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar13[3])(pcVar6,&local_60);
    if (iVar3 == 0) {
      return 1;
    }
    local_4c = (undefined4 *)(DAT_01d4d758 + 0x1c);
    local_44 = *(int *)(DAT_01d4d758 + 0x20);
    if (local_44 == 0) {
LAB_0138610c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceb23c);
    }
    local_28 = &local_34;
    local_40 = *(undefined4 *)(DAT_01d4d758 + 0x24);
    local_3c = *(undefined4 *)(DAT_01d4d758 + 0x28);
    local_2c = (int ****)&local_48;
    local_54 = &local_2c;
    pppppuVar11 = &local_60;
    local_30 = &local_74;
    ppppppuVar14 = &local_54;
    local_38 = 0;
    local_50 = (undefined **)&DAT_00000001;
    local_24 = &DAT_01d2ea4c;
    local_34 = (int *****)&DAT_00582ecf;
    local_70 = FUN_013bc50c;
    uVar9 = puVar13[4];
    local_74 = param_2;
    local_48 = (undefined4 ****)*local_4c;
  }
  else {
    local_94 = (undefined4 ***)ppiVar8;
    local_90 = iVar4;
    if (ppiVar8 != *(int ***)((int)param_2 + 1) || iVar4 != *(int *)((int)param_2 + 5)) {
      *(char *)((int)param_1 + 0xd) = cVar2;
      goto LAB_01385a70;
    }
    local_48 = &local_94;
    if (ppiVar8 == (int **)0xf0a27b0b && iVar4 == 0x54fe9b8b) {
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4d778 - 1 < 2 ||
           ((DAT_01d4d778 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d770), cVar2 != '\0')))))) &&
         (iVar4 = FUN_01aaa278(DAT_01d4d770), iVar4 != 0)) {
        local_4c = (undefined4 *)(DAT_01d4d770 + 0x1c);
        local_44 = *(int *)(DAT_01d4d770 + 0x20);
        if (local_44 != 0) {
          local_28 = &local_74;
          local_40 = *(undefined4 *)(DAT_01d4d770 + 0x24);
          local_3c = *(undefined4 *)(DAT_01d4d770 + 0x28);
          local_2c = (int ****)&local_48;
          local_54 = &local_2c;
          local_38 = 0;
          local_50 = (undefined **)0x1;
          local_70 = (code *)0x2d;
          local_24 = &DAT_01d2ea4c;
          local_74 = (int *****)0x470c7e;
          local_48 = (undefined4 ****)*local_4c;
          FUN_01386274(&local_54);
          return 2;
        }
LAB_01386124:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceb21c);
      }
      iVar4 = DAT_01d4d770;
      uVar12 = 2;
      if (DAT_01d51ae9 != '\0') {
        return 2;
      }
      if (DAT_01d51b00 < 5) {
        return 2;
      }
      local_88 = *(undefined4 *)(DAT_01d4d770 + 0x14);
      local_84 = *(undefined4 *)(DAT_01d4d770 + 0x18);
      local_8c = (undefined4 ****)0x5;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar13[3])(pcVar6,&local_8c);
      if (iVar3 == 0) {
        return 2;
      }
      local_4c = (undefined4 *)(DAT_01d4d770 + 0x1c);
      local_44 = *(int *)(DAT_01d4d770 + 0x20);
      if (local_44 == 0) goto LAB_01386124;
      local_40 = *(undefined4 *)(DAT_01d4d770 + 0x24);
      local_3c = *(undefined4 *)(DAT_01d4d770 + 0x28);
      local_70 = (code *)0x2d;
      local_74 = (int *****)0x470c7e;
      pppppuVar11 = &local_8c;
      local_48 = (undefined4 ****)*local_4c;
LAB_01385a38:
      local_24 = &DAT_01d2ea4c;
      local_28 = &local_74;
      local_2c = (int ****)&local_48;
      local_54 = &local_2c;
      local_38 = 0;
      local_50 = (undefined **)&DAT_00000001;
      ppppppuVar14 = &local_54;
      uVar9 = puVar13[4];
      goto LAB_01385d9c;
    }
    FUN_0138b56c(&local_48);
LAB_013860f0:
    cVar2 = FUN_01aaafa8(&DAT_01d4d758);
    if (cVar2 == '\0') goto LAB_01385c5c;
LAB_01385b08:
    iVar4 = FUN_01aaa278(DAT_01d4d758);
    if (iVar4 == 0) goto LAB_01385c5c;
    local_44 = *(int *)(DAT_01d4d758 + 0x20);
    if (local_44 == 0) goto LAB_0138610c;
    local_50 = &local_68;
    local_40 = *(undefined4 *)(DAT_01d4d758 + 0x24);
    local_3c = *(undefined4 *)(DAT_01d4d758 + 0x28);
    local_6c = (undefined4 *)(DAT_01d4d758 + 0x1c);
    local_48 = (undefined4 ****)*local_6c;
    local_54 = &local_48;
    local_74 = (int *****)&local_54;
    ppppppuVar14 = &local_74;
    local_38 = 0;
    local_64 = &local_34;
    local_70 = (code *)0x1;
    local_4c = (undefined4 *)&DAT_01d2ea4c;
    local_68 = &DAT_00582ecf;
    local_30 = (undefined4 ******)FUN_013bc50c;
    local_34 = param_2;
    FUN_01aaaecc(DAT_01d4d758,ppppppuVar14);
    iVar4 = DAT_01d4d758;
    if (DAT_01d51ae9 != '\0') {
      return 1;
    }
    if (DAT_01d51b00 < 2) {
      return 1;
    }
    local_28 = *(undefined4 *******)(DAT_01d4d758 + 0x14);
    local_24 = *(undefined1 **)(DAT_01d4d758 + 0x18);
    local_2c = (int ****)0x2;
    DataMemoryBarrier(0xb);
    puVar13 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar13 = &DAT_01cfc5e0;
    }
    pcVar6 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar13[3])(pcVar6,&local_2c);
    if (iVar3 == 0) {
      return 1;
    }
    uVar9 = puVar13[4];
    pppppuVar11 = &local_2c;
  }
  uVar12 = 1;
LAB_01385d9c:
  FUN_01aaa328(iVar4,pcVar6,uVar9,pppppuVar11,ppppppuVar14);
  return uVar12;
code_r0x01385ac8:
  if (*piVar5 != 2) goto LAB_01385ad4;
  goto LAB_01385abc;
}

