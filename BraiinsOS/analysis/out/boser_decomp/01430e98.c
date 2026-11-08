// FUN_01430e98 @ 01430e98 size=1852 calls_out=11 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | sent pingevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:510event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h2/ping.rs:526keep-alive timed out | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01430e98(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 ******ppppppuVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 ******ppppppuVar12;
  undefined1 auStack_b8 [28];
  undefined4 *****local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 ******local_90;
  undefined1 *local_8c;
  uint *local_88;
  undefined *local_84;
  undefined4 ******local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 ******local_70;
  undefined **local_6c;
  uint *local_68;
  undefined4 ******local_64;
  undefined4 ******local_60;
  undefined4 ******local_5c;
  undefined4 ******local_58;
  uint *local_54;
  undefined4 ******local_50;
  undefined4 ******local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *****local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar3 = *(int *)(param_1 + 0x38);
  piVar6 = (int *)(iVar3 + 8);
  iVar4 = *piVar6;
  if (iVar4 == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
      if (bVar1) {
        *piVar6 = 1;
        goto LAB_01430edc;
      }
      iVar4 = *piVar6;
    } while (iVar4 == 0);
  }
  ClearExclusiveLocal();
LAB_01430edc:
  DataMemoryBarrier(0xb);
  if (iVar4 != 0) {
    if (iVar4 == 4) {
      local_38 = (undefined4 *****)CONCAT22(local_38._2_2_,0xb01);
      FUN_013bc5a0(&local_50,&local_38);
      if (((uint)local_50 & 0xff) == 4) goto LAB_01431160;
      if (((uint)local_50 & 0xff) == 3) goto LAB_01430f20;
      FUN_013b8db0(&local_38,&local_50);
      cVar2 = (char)local_38;
      FUN_01bed4e2(auStack_b8,(uint)&local_38 | 1,0x17);
      if (cVar2 == '\x05') goto LAB_01431160;
    }
    else {
LAB_01430f20:
      local_38 = (undefined4 *****)CONCAT22(local_38._2_2_,0x903);
      FUN_01bed4e2(auStack_b8,(uint)&local_38 | 1,0x17);
      cVar2 = '\x03';
    }
    local_38 = (undefined4 *****)CONCAT31(local_38._1_3_,cVar2);
    FUN_01bed4e2((uint)&local_38 | 1,auStack_b8,0x17);
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4e9fc - 1 < 2 ||
         ((DAT_01d4e9fc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4e9f4), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4e9f4), iVar3 != 0)))) {
      local_4c = *(undefined4 *******)(DAT_01d4e9f4 + 0x20);
      if (local_4c == (undefined4 ******)0x0) {
LAB_014315a4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf57c0);
      }
      local_6c = &local_84;
      local_48 = *(undefined1 **)(DAT_01d4e9f4 + 0x24);
      local_44 = *(undefined4 *)(DAT_01d4e9f4 + 0x28);
      local_88 = (uint *)(DAT_01d4e9f4 + 0x1c);
      local_50 = (undefined4 ******)*local_88;
      local_70 = &local_50;
      local_90 = &local_70;
      local_40 = 0;
      local_8c = (undefined1 *)0x1;
      local_80 = &local_64;
      local_68 = (uint *)&DAT_01d2ea4c;
      local_84 = &DAT_0059c115;
      local_60 = (undefined4 ******)&LAB_013ba9ac;
      local_64 = &local_38;
      FUN_01aaaecc(DAT_01d4e9f4,&local_90);
      iVar3 = DAT_01d4e9f4;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_58 = *(undefined4 *******)(DAT_01d4e9f4 + 0x14);
        local_54 = *(uint **)(DAT_01d4e9f4 + 0x18);
        local_5c = (undefined4 ******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar10 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar11[3])(pcVar10,&local_5c);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar10,puVar11[4],&local_5c,&local_90);
        }
      }
    }
    else {
      iVar3 = DAT_01d4e9f4;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_78 = *(undefined4 *)(DAT_01d4e9f4 + 0x14);
        local_74 = *(undefined4 *)(DAT_01d4e9f4 + 0x18);
        local_7c = 4;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar10 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar11[3])(pcVar10,&local_7c);
        if (iVar4 != 0) {
          local_68 = (uint *)(DAT_01d4e9f4 + 0x1c);
          local_50 = (undefined4 ******)*local_68;
          local_4c = *(undefined4 *******)(DAT_01d4e9f4 + 0x20);
          if (local_4c == (undefined4 ******)0x0) goto LAB_014315a4;
          local_58 = &local_64;
          local_48 = *(undefined1 **)(DAT_01d4e9f4 + 0x24);
          local_44 = *(undefined4 *)(DAT_01d4e9f4 + 0x28);
          local_5c = &local_50;
          local_70 = &local_5c;
          local_6c = (undefined **)&DAT_00000001;
          local_60 = &local_90;
          local_40 = 0;
          local_54 = (uint *)&DAT_01d2ea4c;
          local_64 = (undefined4 ******)&DAT_0059c115;
          local_8c = &LAB_013ba9ac;
          local_90 = &local_38;
          FUN_01aaa328(iVar3,pcVar10,puVar11[4],&local_7c,&local_70);
        }
      }
    }
    FUN_01431954(&local_38);
    return;
  }
  puVar5 = (uint *)(iVar3 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    uVar7 = *puVar5;
    bVar1 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar1);
  *puVar5 = uVar7 | 2;
  DataMemoryBarrier(0xb);
  if (uVar7 == 0) {
    iVar4 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = *puVar5 & 0xfffffffd;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x10));
    }
  }
LAB_01431160:
  FUN_019ac130(&local_38,1);
  *(undefined4 ******)(param_1 + 8) = local_38;
  *(int *)(param_1 + 0xc) = iStack_34;
  *(undefined4 *)(param_1 + 0x10) = uStack_30;
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4e9f0 - 1 < 2 ||
       ((DAT_01d4e9f0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4e9e8), cVar2 != '\0')))))) &&
     (iVar3 = FUN_01aaa278(DAT_01d4e9e8), iVar3 != 0)) {
    iStack_34 = *(int *)(DAT_01d4e9e8 + 0x20);
    if (iStack_34 == 0) {
LAB_014315c0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf57b0);
    }
    local_58 = &local_90;
    uStack_30 = *(undefined4 *)(DAT_01d4e9e8 + 0x24);
    uStack_2c = *(undefined4 *)(DAT_01d4e9e8 + 0x28);
    local_68 = (uint *)(DAT_01d4e9e8 + 0x1c);
    local_38 = (undefined4 *****)*local_68;
    local_70 = &local_5c;
    local_28 = 0;
    ppppppuVar12 = &local_70;
    local_6c = (undefined **)0x1;
    local_8c = (undefined1 *)0x13;
    local_54 = (uint *)&DAT_01d2ea4c;
    local_90 = (undefined4 ******)0x47906f;
    local_5c = &local_38;
    FUN_01aaaecc(DAT_01d4e9e8,ppppppuVar12);
    iVar3 = DAT_01d4e9e8;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_4c = *(undefined4 *******)(DAT_01d4e9e8 + 0x14);
    local_48 = *(undefined1 **)(DAT_01d4e9e8 + 0x18);
    local_50 = (undefined4 ******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar11 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar11 = &DAT_01cfc5e0;
    }
    pcVar10 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar11[3])(pcVar10,&local_50);
    if (iVar4 == 0) {
      return;
    }
    uVar8 = puVar11[4];
    ppppppuVar9 = &local_50;
  }
  else {
    iVar3 = DAT_01d4e9e8;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_98 = *(undefined4 *)(DAT_01d4e9e8 + 0x14);
    local_94 = *(undefined4 *)(DAT_01d4e9e8 + 0x18);
    local_9c = (undefined4 *****)0x5;
    DataMemoryBarrier(0xb);
    puVar11 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar11 = &DAT_01cfc5e0;
    }
    pcVar10 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar11[3])(pcVar10,&local_9c);
    if (iVar4 == 0) {
      return;
    }
    local_54 = (uint *)(DAT_01d4e9e8 + 0x1c);
    iStack_34 = *(int *)(DAT_01d4e9e8 + 0x20);
    if (iStack_34 == 0) goto LAB_014315c0;
    local_4c = &local_70;
    uStack_30 = *(undefined4 *)(DAT_01d4e9e8 + 0x24);
    uStack_2c = *(undefined4 *)(DAT_01d4e9e8 + 0x28);
    local_5c = &local_50;
    local_28 = 0;
    local_58 = (undefined4 ******)&DAT_00000001;
    ppppppuVar9 = &local_9c;
    local_6c = (undefined **)0x13;
    ppppppuVar12 = &local_5c;
    local_48 = &DAT_01d2ea4c;
    local_70 = (undefined4 ******)0x47906f;
    uVar8 = puVar11[4];
    local_50 = &local_38;
    local_38 = (undefined4 *****)*local_54;
  }
  FUN_01aaa328(iVar3,pcVar10,uVar8,ppppppuVar9,ppppppuVar12);
  return;
}

