// FUN_0135c3bc @ 0135c3bc size=2448 calls_out=7 calls_in=3
// strings: h2::proto::peer/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/peer.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/peer.rs:88 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0135c3bc(undefined2 *param_1,uint *param_2,uint ****param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 ******ppppppuVar8;
  uint *****pppppuVar9;
  undefined4 *puVar10;
  undefined4 ******ppppppuVar11;
  uint ****local_98;
  uint ****local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *****local_88;
  undefined4 *****local_84;
  undefined4 *****local_80;
  code *local_7c;
  uint ****local_78;
  undefined4 *****local_74;
  undefined4 *****local_70;
  undefined4 local_6c;
  undefined4 ******local_68;
  undefined4 *****local_64;
  undefined4 *local_60;
  undefined *local_5c;
  undefined4 *****local_58;
  uint *****local_54;
  undefined4 *****local_50;
  undefined4 *local_4c;
  uint ****local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 *****local_34;
  undefined4 ******local_30;
  undefined4 *****local_2c;
  undefined4 ******local_28;
  undefined4 *local_24;
  
  local_98 = param_3;
  if (param_2[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.refused.is_none()",0x28,&DAT_01ce7964);
  }
  local_78 = param_3;
  if (*(char *)(param_5 + 0x2c) == '\0') {
    if ((((uint)(param_3 == (uint ****)0x0) ^ (uint)param_3) & 1) == 0 && param_4 == 0)
    goto LAB_0135c6a0;
    if ((1 < DAT_01d50f88) ||
       (((1 < DAT_01d4d7e4 - 1 &&
         ((DAT_01d4d7e4 == 0 || (cVar1 = FUN_01aaafa8(&DAT_01d4d7dc), cVar1 == '\0')))) ||
        (iVar2 = FUN_01aaa278(DAT_01d4d7dc), iVar2 == 0)))) {
      iVar2 = DAT_01d4d7dc;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135caec;
      local_50 = *(undefined4 ******)(DAT_01d4d7dc + 0x14);
      local_4c = *(undefined4 **)(DAT_01d4d7dc + 0x18);
      local_54 = (undefined4 *****)0x4;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar10[3])(pcVar5,&local_54);
      if (iVar3 == 0) goto LAB_0135caec;
      local_24 = (undefined4 *)(DAT_01d4d7dc + 0x1c);
      local_48 = (uint ****)*local_24;
      iStack_44 = *(int *)(DAT_01d4d7dc + 0x20);
      if (iStack_44 == 0) goto LAB_0135cd1c;
      uStack_40 = *(undefined4 *)(DAT_01d4d7dc + 0x24);
      uStack_3c = *(undefined4 *)(DAT_01d4d7dc + 0x28);
      local_34 = (undefined4 *****)&DAT_00577baa;
      ppppppuVar8 = &local_54;
      goto LAB_0135cabc;
    }
    iStack_44 = *(int *)(DAT_01d4d7dc + 0x20);
    if (iStack_44 == 0) {
LAB_0135cd1c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cec298);
    }
    local_28 = (undefined4 ******)&local_5c;
    uStack_40 = *(undefined4 *)(DAT_01d4d7dc + 0x24);
    uStack_3c = *(undefined4 *)(DAT_01d4d7dc + 0x28);
    local_60 = (undefined4 *)(DAT_01d4d7dc + 0x1c);
    local_48 = (uint ****)*local_60;
    local_2c = &local_48;
    local_68 = &local_2c;
    local_38 = 0;
    local_64 = (undefined4 *****)0x1;
    local_58 = &local_34;
    local_34 = &local_78;
    local_24 = (undefined4 *)&DAT_01d2ea4c;
    local_5c = &DAT_00577baa;
    local_30 = (undefined4 ******)FUN_00b1c384;
    FUN_01aaaecc(DAT_01d4d7dc,&local_68);
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135caec;
    iVar2 = DAT_01d4d7dc;
LAB_0135c620:
    ppppppuVar11 = &local_68;
    local_84 = *(undefined4 ******)(iVar2 + 0x14);
    local_80 = *(undefined4 ******)(iVar2 + 0x18);
    local_88 = (undefined4 *****)&SUB_00000004;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar10[3])(pcVar5,&local_88);
    if (iVar3 == 0) goto LAB_0135caec;
    uVar6 = puVar10[4];
    ppppppuVar8 = &local_88;
  }
  else {
    if (param_4 != 0 && ((uint)param_3 & 1) != 0) {
LAB_0135c6a0:
      if (*param_2 == 1) goto LAB_0135cc64;
      local_34 = (undefined4 *****)param_2[1];
      if (local_34 <= param_3) {
        uVar7 = *(uint *)(param_5 + 0x14);
        uVar4 = *(uint *)(param_5 + 0x10);
        *param_2 = (int)param_3 + 2U >> 0x1f;
        param_2[1] = (int)param_3 + 2U;
        if (uVar7 < uVar4) {
          *(undefined4 *)(param_1 + 2) = 1;
          *(uint *****)(param_1 + 4) = param_3;
        }
        else {
          param_2[2] = 1;
          param_2[3] = (uint)param_3;
          *(undefined4 *)(param_1 + 2) = 0;
        }
        *(undefined1 *)param_1 = 3;
        return;
      }
      if (((DAT_01d50f88 < 2) &&
          ((DAT_01d4d184 - 1 < 2 ||
           ((DAT_01d4d184 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d17c), cVar1 != '\0')))))) &&
         (iVar2 = FUN_01aaa278(DAT_01d4d17c), iVar2 != 0)) {
        iStack_44 = *(int *)(DAT_01d4d17c + 0x20);
        if (iStack_44 == 0) {
LAB_0135cd34:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce7974);
        }
        local_50 = &local_74;
        uStack_40 = *(undefined4 *)(DAT_01d4d17c + 0x24);
        uStack_3c = *(undefined4 *)(DAT_01d4d17c + 0x28);
        local_60 = (undefined4 *)(DAT_01d4d17c + 0x1c);
        local_48 = (uint ****)*local_60;
        local_54 = &local_48;
        local_68 = &local_54;
        local_38 = 0;
        ppppppuVar8 = &local_68;
        local_64 = (undefined4 *****)&DAT_00000001;
        local_70 = &local_88;
        local_80 = &local_34;
        local_88 = &local_98;
        local_4c = (undefined4 *)&DAT_01d2ea4c;
        local_74 = (undefined4 *****)&DAT_005a8bcd;
        local_7c = FUN_00b1c384;
        local_84 = (undefined4 *****)FUN_00b1c384;
        FUN_01aaaecc(DAT_01d4d17c,ppppppuVar8);
        iVar2 = DAT_01d4d17c;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135cc64;
        local_28 = *(undefined4 *******)(DAT_01d4d17c + 0x14);
        local_24 = *(undefined4 **)(DAT_01d4d17c + 0x18);
        local_2c = (undefined4 *****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar10[3])(pcVar5,&local_2c);
        if (iVar3 == 0) goto LAB_0135cc64;
        uVar6 = puVar10[4];
        pppppuVar9 = (uint *****)&local_2c;
      }
      else {
        iVar2 = DAT_01d4d17c;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135cc64;
        local_90 = *(undefined4 *)(DAT_01d4d17c + 0x14);
        local_8c = *(undefined4 *)(DAT_01d4d17c + 0x18);
        local_94 = (uint ****)0x4;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar10[3])(pcVar5,&local_94);
        if (iVar3 == 0) goto LAB_0135cc64;
        local_4c = (undefined4 *)(DAT_01d4d17c + 0x1c);
        local_48 = (uint ****)*local_4c;
        iStack_44 = *(int *)(DAT_01d4d17c + 0x20);
        if (iStack_44 == 0) goto LAB_0135cd34;
        local_28 = &local_68;
        uStack_40 = *(undefined4 *)(DAT_01d4d17c + 0x24);
        uStack_3c = *(undefined4 *)(DAT_01d4d17c + 0x28);
        local_2c = &local_48;
        local_54 = (uint *****)&local_2c;
        local_38 = 0;
        local_50 = (undefined4 *****)&DAT_00000001;
        local_64 = &local_88;
        local_80 = &local_34;
        local_88 = &local_98;
        local_24 = (undefined4 *)&DAT_01d2ea4c;
        ppppppuVar8 = &local_54;
        local_68 = (undefined4 ******)&DAT_005a8bcd;
        pppppuVar9 = &local_94;
        local_7c = FUN_00b1c384;
        local_84 = (undefined4 *****)FUN_00b1c384;
        uVar6 = puVar10[4];
      }
      FUN_01aaa328(iVar2,pcVar5,uVar6,pppppuVar9,ppppppuVar8);
LAB_0135cc64:
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = 1;
      *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
      *(undefined4 *)(param_1 + 6) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      return;
    }
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4d7f0 - 1 < 2 ||
         ((DAT_01d4d7f0 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d7e8), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4d7e8), iVar2 != 0)) {
      iStack_44 = *(int *)(DAT_01d4d7e8 + 0x20);
      if (iStack_44 == 0) {
LAB_0135cd04:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cec2a8);
      }
      local_28 = (undefined4 ******)&local_5c;
      uStack_40 = *(undefined4 *)(DAT_01d4d7e8 + 0x24);
      uStack_3c = *(undefined4 *)(DAT_01d4d7e8 + 0x28);
      local_60 = (undefined4 *)(DAT_01d4d7e8 + 0x1c);
      local_48 = (uint ****)*local_60;
      local_2c = &local_48;
      local_68 = &local_2c;
      local_38 = 0;
      local_64 = (undefined4 *****)0x1;
      local_58 = &local_34;
      local_34 = &local_78;
      local_24 = (undefined4 *)&DAT_01d2ea4c;
      local_5c = &DAT_00571ff1;
      local_30 = (undefined4 ******)FUN_00b1c384;
      FUN_01aaaecc(DAT_01d4d7e8,&local_68);
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135caec;
      iVar2 = DAT_01d4d7e8;
      goto LAB_0135c620;
    }
    iVar2 = DAT_01d4d7e8;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0135caec;
    local_70 = *(undefined4 ******)(DAT_01d4d7e8 + 0x14);
    local_6c = *(undefined4 *)(DAT_01d4d7e8 + 0x18);
    local_74 = (undefined4 *****)0x4;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar10[3])(pcVar5,&local_74);
    if (iVar3 == 0) goto LAB_0135caec;
    local_24 = (undefined4 *)(DAT_01d4d7e8 + 0x1c);
    local_48 = (uint ****)*local_24;
    iStack_44 = *(int *)(DAT_01d4d7e8 + 0x20);
    if (iStack_44 == 0) goto LAB_0135cd04;
    uStack_40 = *(undefined4 *)(DAT_01d4d7e8 + 0x24);
    uStack_3c = *(undefined4 *)(DAT_01d4d7e8 + 0x28);
    local_34 = (undefined4 *****)&DAT_00571ff1;
    ppppppuVar8 = &local_74;
LAB_0135cabc:
    local_28 = (undefined4 ******)&DAT_00000001;
    local_2c = &local_88;
    local_38 = 0;
    local_84 = &local_34;
    local_88 = &local_48;
    local_30 = &local_68;
    local_68 = (undefined4 ******)&local_78;
    ppppppuVar11 = &local_2c;
    local_80 = (undefined4 *****)&DAT_01d2ea4c;
    local_64 = (undefined4 *****)FUN_00b1c384;
    uVar6 = puVar10[4];
  }
  FUN_01aaa328(iVar2,pcVar5,uVar6,ppppppuVar8,ppppppuVar11);
LAB_0135caec:
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = 0x101;
  return;
}

