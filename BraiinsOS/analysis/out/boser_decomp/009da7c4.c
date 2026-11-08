// FUN_009da7c4 @ 009da7c4 size=2504 calls_out=11 calls_in=1
// strings: tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | InvalidParamSegmentInvalidParamInvalidCatchAll

bool FUN_009da7c4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 ******ppppppuVar9;
  undefined4 *******pppppppuVar10;
  undefined4 *local_b4;
  undefined3 local_b0;
  undefined1 uStack_ad;
  undefined3 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 *******local_90;
  code *local_8c;
  int *local_88;
  undefined4 ******local_84;
  undefined4 ******local_80;
  undefined4 *****local_7c;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined4 *local_70;
  undefined4 *******local_68;
  undefined4 ******local_64;
  int *local_60;
  undefined4 ******local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined4 *local_28;
  
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
LAB_009da7e8:
  do {
    FUN_00918dc8(&local_5c,param_1,param_2);
    uVar8 = (int)local_5c - 5;
    ppppppuVar9 = local_5c;
    if (2 < uVar8) {
LAB_009dabac:
      local_b0 = (undefined3)(local_58 >> 8);
      uStack_ad = (undefined1)uStack_54;
      uStack_ac = (undefined3)((uint)uStack_54 >> 8);
      uVar8 = local_58 & 0xff;
      goto LAB_009db07c;
    }
    FUN_0091c6c8(&local_5c,param_1,param_2);
    uVar1 = 1 >> (uVar8 & 0xff);
    uVar8 = 4 >> (uVar8 & 0xff);
    if (local_5c != (undefined4 ******)0x5) {
      if (local_5c == (undefined4 ******)0x6) {
        if ((uVar8 & 1) == 0 && uVar1 == 0) break;
        if (param_1[0x3b] == 0) {
          if (((DAT_01d50f88 < 3) &&
              ((DAT_01d50370 - 1 < 2 ||
               ((DAT_01d50370 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50368), cVar2 != '\0')))))) &&
             (iVar3 = FUN_01aaa278(DAT_01d50368), iVar3 != 0)) {
            if (*(int *)(DAT_01d50368 + 0x20) != 0) {
              local_3c = &local_90;
              uStack_54 = *(undefined4 *)(DAT_01d50368 + 0x24);
              local_50 = *(undefined4 *)(DAT_01d50368 + 0x28);
              local_60 = (int *)(DAT_01d50368 + 0x1c);
              local_5c = (undefined4 ******)*local_60;
              local_68 = &local_40;
              local_4c = 0;
              local_64 = (undefined4 ******)&DAT_00000001;
              local_90 = (undefined4 *******)0x3e23e3;
              local_38 = (undefined4 *)&DAT_01d2ea4c;
              local_8c = (code *)0x6f;
              local_58 = *(int *)(DAT_01d50368 + 0x20);
              local_40 = &local_5c;
              FUN_01aaaecc(DAT_01d50368,&local_68);
              uVar8 = (uint)DAT_01d51ae9;
              if ((DAT_01d51ae9 != 0) || (uVar8 = DAT_01d51b00, DAT_01d51b00 < 3))
              goto LAB_009dae20;
              iVar3 = DAT_01d50368;
              goto LAB_009dad9c;
            }
          }
          else {
            iVar3 = DAT_01d50368;
            ppppppuVar9 = (undefined4 ******)0x5;
            uVar8 = (uint)DAT_01d51ae9;
            if ((DAT_01d51ae9 != 0) || (uVar8 = DAT_01d51b00, DAT_01d51b00 < 3)) goto LAB_009db07c;
            local_98 = *(undefined4 *)(DAT_01d50368 + 0x14);
            local_94 = *(undefined4 *)(DAT_01d50368 + 0x18);
            local_9c = 3;
            DataMemoryBarrier(0xb);
            local_b4 = &DAT_01cfc5e0;
            if (DAT_01d51174 == 2) {
              local_b4 = DAT_01d4edc8;
            }
            pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            if (DAT_01d51174 == 2) {
              pcVar6 = DAT_01d4edc4;
            }
            iVar5 = (*(code *)local_b4[3])(pcVar6,&local_9c);
            uVar8 = 0;
            if (iVar5 == 0) goto LAB_009db07c;
            if (*(int *)(DAT_01d50368 + 0x20) != 0) {
              uStack_54 = *(undefined4 *)(DAT_01d50368 + 0x24);
              local_50 = *(undefined4 *)(DAT_01d50368 + 0x28);
              local_68 = (undefined4 *******)0x3e23e3;
              puVar4 = &local_9c;
              local_64 = (undefined4 ******)0x6f;
              local_5c = *(undefined4 *******)(DAT_01d50368 + 0x1c);
              local_58 = *(int *)(DAT_01d50368 + 0x20);
              local_38 = (undefined4 *)(DAT_01d50368 + 0x1c);
              goto LAB_009db05c;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0bf30);
        }
        if (((DAT_01d50f88 < 3) &&
            ((DAT_01d50388 - 1 < 2 ||
             ((DAT_01d50388 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50380), cVar2 != '\0')))))) &&
           (iVar3 = FUN_01aaa278(DAT_01d50380), iVar3 != 0)) {
          if (*(uint *)(DAT_01d50380 + 0x20) == 0) {
LAB_009db148:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0bf20);
          }
          local_64 = &local_84;
          local_90 = &local_68;
          local_88 = (int *)(DAT_01d50380 + 0x1c);
          local_5c = (undefined4 ******)*local_88;
          uStack_54 = *(undefined4 *)(DAT_01d50380 + 0x24);
          local_50 = *(undefined4 *)(DAT_01d50380 + 0x28);
          local_4c = 0;
          local_8c = (code *)0x1;
          local_7c = (undefined4 *****)param_1[0x3b];
          local_80 = &local_48;
          local_60 = (int *)&DAT_01d2ea4c;
          local_84 = (undefined4 ******)&DAT_00584ead;
          local_44 = (undefined4 *******)FUN_012fd02c;
          local_48 = &local_7c;
          local_68 = &local_5c;
          local_58 = *(uint *)(DAT_01d50380 + 0x20);
          FUN_01aaaecc(DAT_01d50380,&local_90);
          iVar3 = DAT_01d50380;
          if ((DAT_01d51ae9 == 0) && (2 < DAT_01d51b00)) {
            local_3c = *(undefined4 ********)(DAT_01d50380 + 0x14);
            local_38 = *(undefined4 **)(DAT_01d50380 + 0x18);
            local_40 = (undefined4 *******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar4 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar4 = &DAT_01cfc5e0;
            }
            pcVar6 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar5 = (*(code *)puVar4[3])(pcVar6,&local_40);
            if (iVar5 != 0) {
              local_30 = local_40;
              local_2c = local_3c;
              local_28 = local_38;
              pppppppuVar10 = &local_90;
              uVar7 = puVar4[4];
              goto LAB_009dab74;
            }
          }
        }
        else {
          iVar3 = DAT_01d50380;
          if ((DAT_01d51ae9 == 0) && (2 < DAT_01d51b00)) {
            local_74 = *(undefined4 ********)(DAT_01d50380 + 0x14);
            local_70 = *(undefined4 **)(DAT_01d50380 + 0x18);
            local_78 = (undefined4 *******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar4 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar4 = &DAT_01cfc5e0;
            }
            pcVar6 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar5 = (*(code *)puVar4[3])(pcVar6,&local_78);
            if (iVar5 != 0) {
              if (*(uint *)(DAT_01d50380 + 0x20) == 0) goto LAB_009db148;
              local_3c = &local_48;
              local_68 = &local_40;
              uStack_54 = *(undefined4 *)(DAT_01d50380 + 0x24);
              local_4c = 0;
              local_50 = *(undefined4 *)(DAT_01d50380 + 0x28);
              local_64 = (undefined4 ******)&DAT_00000001;
              local_84 = (undefined4 ******)param_1[0x3b];
              local_44 = &local_90;
              local_38 = (undefined4 *)&DAT_01d2ea4c;
              local_48 = (undefined4 ******)&DAT_00584ead;
              local_8c = FUN_012fd02c;
              local_90 = &local_84;
              local_30 = local_78;
              local_2c = local_74;
              local_28 = local_70;
              pppppppuVar10 = &local_68;
              uVar7 = puVar4[4];
              local_60 = (int *)(DAT_01d50380 + 0x1c);
              local_5c = *(undefined4 *******)(DAT_01d50380 + 0x1c);
              local_58 = *(uint *)(DAT_01d50380 + 0x20);
              local_40 = &local_5c;
LAB_009dab74:
              FUN_01aaa328(iVar3,pcVar6,uVar7,&local_30,pppppppuVar10);
            }
          }
        }
      }
      else {
        ppppppuVar9 = local_5c;
        if (local_5c != (undefined4 ******)0x7) goto LAB_009dabac;
        if ((uVar8 & 1) == 0 && uVar1 == 0) break;
      }
      if ((uVar1 == 0) || ((uVar8 & 1) != 0)) {
        return true;
      }
      goto LAB_009da7e8;
    }
  } while ((uVar8 & 1) != 0 || uVar1 != 0);
  if ((DAT_01d50f88 < 3) &&
     (((DAT_01d5037c - 1 < 2 ||
       ((DAT_01d5037c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50374), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50374), iVar3 != 0)))) {
    if (*(int *)(DAT_01d50374 + 0x20) == 0) {
LAB_009db160:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0bf10);
    }
    local_3c = &local_90;
    uStack_54 = *(undefined4 *)(DAT_01d50374 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d50374 + 0x28);
    local_60 = (int *)(DAT_01d50374 + 0x1c);
    local_5c = (undefined4 ******)*local_60;
    local_68 = &local_40;
    local_4c = 0;
    local_64 = (undefined4 ******)&DAT_00000001;
    local_90 = (undefined4 *******)0x3e23b6;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_8c = (code *)0x5b;
    local_58 = *(int *)(DAT_01d50374 + 0x20);
    local_40 = &local_5c;
    FUN_01aaaecc(DAT_01d50374,&local_68);
    uVar8 = (uint)DAT_01d51ae9;
    if ((DAT_01d51ae9 == 0) && (uVar8 = DAT_01d51b00, 2 < DAT_01d51b00)) {
      iVar3 = DAT_01d50374;
LAB_009dad9c:
      local_2c = *(undefined4 ********)(iVar3 + 0x14);
      local_28 = *(undefined4 **)(iVar3 + 0x18);
      local_30 = (undefined4 *******)&DAT_00000003;
      DataMemoryBarrier(0xb);
      puVar4 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar4 = DAT_01d4edc8;
      }
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar6 = DAT_01d4edc4;
      }
      iVar5 = (*(code *)puVar4[3])(pcVar6,&local_30);
      uVar8 = 0;
      if (iVar5 != 0) {
        uVar8 = FUN_01aaa328(iVar3,pcVar6,puVar4[4],&local_30,&local_68);
      }
    }
LAB_009dae20:
    ppppppuVar9 = (undefined4 ******)0x5;
  }
  else {
    iVar3 = DAT_01d50374;
    ppppppuVar9 = (undefined4 ******)0x5;
    uVar8 = (uint)DAT_01d51ae9;
    if ((DAT_01d51ae9 == 0) && (uVar8 = DAT_01d51b00, 2 < DAT_01d51b00)) {
      local_a4 = *(undefined4 *)(DAT_01d50374 + 0x14);
      local_a0 = *(undefined4 *)(DAT_01d50374 + 0x18);
      local_a8 = 3;
      DataMemoryBarrier(0xb);
      local_b4 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        local_b4 = DAT_01d4edc8;
      }
      pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar6 = DAT_01d4edc4;
      }
      iVar5 = (*(code *)local_b4[3])(pcVar6,&local_a8);
      uVar8 = 0;
      if (iVar5 != 0) {
        if (*(int *)(DAT_01d50374 + 0x20) == 0) goto LAB_009db160;
        uStack_54 = *(undefined4 *)(DAT_01d50374 + 0x24);
        local_50 = *(undefined4 *)(DAT_01d50374 + 0x28);
        local_68 = (undefined4 *******)0x3e23b6;
        puVar4 = &local_a8;
        local_64 = (undefined4 ******)0x5b;
        local_5c = *(undefined4 *******)(DAT_01d50374 + 0x1c);
        local_58 = *(int *)(DAT_01d50374 + 0x20);
        local_38 = (undefined4 *)(DAT_01d50374 + 0x1c);
LAB_009db05c:
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_2c = &local_68;
        local_3c = (undefined4 *******)&DAT_00000001;
        local_40 = &local_30;
        local_4c = 0;
        ppppppuVar9 = (undefined4 ******)0x5;
        local_30 = &local_5c;
        uVar8 = FUN_01aaa328(iVar3,pcVar6,local_b4[4],puVar4,&local_40);
      }
    }
  }
LAB_009db07c:
  uStack_54 = CONCAT31(uStack_ac,uStack_ad);
  local_58._1_3_ = (undefined3)_local_b0;
  local_58 = CONCAT31(local_58._1_3_,(char)uVar8);
  local_5c = ppppppuVar9;
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
  FUN_009d635c(param_1);
  *param_1 = 2;
  if (ppppppuVar9 == (undefined4 ******)0x5) {
    return false;
  }
  FUN_00942ab0(&local_5c);
  return ppppppuVar9 == (undefined4 ******)0x6;
}

