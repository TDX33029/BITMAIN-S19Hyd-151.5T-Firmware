// FUN_0093ea04 @ 0093ea04 size=3200 calls_out=19 calls_in=2
// strings: FramedWrite::flushevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:159event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:138queued_data_frameevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:143 | tracing::span::active | h2::codec::framed_writerem/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:266event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:286 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::codec::framed_writerem/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:266event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:286 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0093ea04(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *****pppppuVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined *local_2c4;
  undefined4 *****local_2a8;
  undefined2 *local_2a4;
  uint local_2a0;
  int local_29c;
  int local_298;
  undefined4 uStack_294;
  int local_290;
  undefined4 uStack_28c;
  undefined4 *****local_288;
  undefined4 *****local_284;
  undefined4 *local_280;
  undefined4 *****local_27c;
  undefined4 local_278;
  undefined4 *local_274;
  undefined4 *****local_270;
  undefined4 *****local_26c;
  undefined4 *local_268;
  undefined4 *****local_260;
  undefined1 *local_25c;
  undefined4 *local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 *****local_248;
  undefined4 *****local_244;
  undefined4 *local_240;
  undefined4 *****local_238;
  undefined4 *****local_234;
  undefined4 *local_230;
  undefined4 *****local_228 [2];
  uint local_220;
  int local_21c;
  int local_218;
  undefined4 uStack_214;
  int local_210;
  undefined4 uStack_20c;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50b40 - 1 < 2 ||
       ((DAT_01d50b40 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b38), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d50b38), iVar4 != 0)))) {
    local_220 = DAT_01d50b38 + 0x1c;
    local_228[1] = (undefined4 *****)0x0;
    local_228[0] = (undefined4 *****)&SUB_00000004;
    FUN_01aaa548(&local_2a8,DAT_01d50b38,local_228);
  }
  else {
    local_210 = DAT_01d50b38;
    local_220 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_2a0 = DAT_01d50b38 + 0x1c;
      local_2a4 = (undefined2 *)0x0;
      local_2a8 = (undefined4 *****)0x4;
      FUN_01aaa3e0(local_228,&local_2a8);
    }
    local_2a8 = local_228[0];
    local_2a4 = (undefined2 *)local_228[1];
    local_2a0 = local_220;
    local_29c = local_21c;
    local_298 = local_218;
    uStack_294 = uStack_214;
    local_290 = local_210;
    uStack_28c = uStack_20c;
  }
  if (local_2a0 != 2) {
    if ((local_2a0 & 1) == 0) {
      iVar4 = local_29c;
    }
    else {
      iVar4 = local_29c + (*(int *)(local_298 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_298 + 0x30))(iVar4,&local_2a8);
  }
  if ((DAT_01d51ae9 == '\0') && (local_290 != 0)) {
    local_234 = *(undefined4 ******)(local_290 + 0x10);
    local_238 = *(undefined4 ******)(local_290 + 0xc);
    local_228[0] = &local_238;
    local_228[1] = (undefined4 *****)&DAT_0132b6a0;
    FUN_006404a8(&local_2a8,"tracing::span::active",0x15,&DAT_00594cdd,local_228);
  }
  piVar3 = (int *)(param_2 + 0x80);
  puVar11 = (uint *)(param_2 + 200);
  local_2c4 = &DAT_01d20a58;
LAB_0093ebcc:
  do {
    iVar4 = FUN_01a83be8(param_2 + 0x10);
    if (iVar4 == 0) {
      if (*piVar3 - 3U < 2) {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d50b58 - 1 < 2 ||
             ((DAT_01d50b58 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b50), cVar2 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d50b50), iVar4 != 0)) {
          if (*(undefined2 **)(DAT_01d50b50 + 0x20) == (undefined2 *)0x0) {
LAB_0093f660:
            local_2c4 = &DAT_01d20a68;
            goto LAB_0093f678;
          }
          local_274 = (undefined4 *)(DAT_01d50b50 + 0x1c);
          local_228[0] = (undefined4 *****)*local_274;
          local_27c = &local_260;
          local_220 = *(uint *)(DAT_01d50b50 + 0x24);
          local_21c = *(int *)(DAT_01d50b50 + 0x28);
          local_218 = 0;
          local_278 = 1;
          local_258 = (undefined4 *)&DAT_01d2d0f4;
          local_25c = &DAT_00523849;
          local_260 = local_228;
          local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b50 + 0x20);
          FUN_01aaaecc(DAT_01d50b50,&local_27c);
          iVar4 = DAT_01d50b50;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_244 = *(undefined4 ******)(DAT_01d50b50 + 0x14);
            local_240 = *(undefined4 **)(DAT_01d50b50 + 0x18);
            local_248 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar7 = (*(code *)puVar10[3])(pcVar8,&local_248);
            if (iVar7 != 0) {
              local_238 = local_248;
              local_234 = local_244;
              local_230 = local_240;
              FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_238,&local_27c);
            }
          }
        }
        else {
          iVar4 = DAT_01d50b50;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_26c = *(undefined4 ******)(DAT_01d50b50 + 0x14);
            local_268 = *(undefined4 **)(DAT_01d50b50 + 0x18);
            local_270 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar7 = (*(code *)puVar10[3])(pcVar8,&local_270);
            if (iVar7 != 0) {
              if (*(undefined2 **)(DAT_01d50b50 + 0x20) == (undefined2 *)0x0) goto LAB_0093f660;
              local_21c = *(int *)(DAT_01d50b50 + 0x28);
              local_260 = &local_248;
              local_220 = *(uint *)(DAT_01d50b50 + 0x24);
              local_218 = 0;
              local_25c = (undefined1 *)0x1;
              local_240 = (undefined4 *)&DAT_01d2d0f4;
              local_244 = (undefined4 *****)&DAT_00523849;
              local_238 = local_270;
              local_234 = local_26c;
              local_230 = local_268;
              local_258 = (undefined4 *)(DAT_01d50b50 + 0x1c);
              local_248 = local_228;
              local_228[0] = *(undefined4 ******)(DAT_01d50b50 + 0x1c);
              local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b50 + 0x20);
              FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_238,&local_260);
            }
          }
        }
        if (*(int *)(param_2 + 0xcc) != 0) goto LAB_0093ebcc;
        uVar5 = *puVar11;
        uVar9 = *(uint *)(param_2 + 0xbc);
        if (uVar9 <= uVar5) goto LAB_0093ebcc;
        iVar4 = 0;
        do {
          local_228[iVar4 * 2] = (undefined4 *****)0x1;
          iVar7 = iVar4 + 1;
          local_228[iVar4 * 2 + 1] = (undefined4 *****)0x0;
          iVar4 = iVar7;
        } while (iVar7 != 0x40);
        local_228[1] = (undefined4 *****)(uVar9 - uVar5);
        local_228[0] = (undefined4 *****)(*(int *)(param_2 + 0xb8) + uVar5);
        FUN_019dfc70(&local_238,param_2,param_3,local_228,1);
        if ((char)local_238 != '\x05') {
          if (((uint)local_238 & 0xff) == 4) {
            uVar5 = *puVar11;
            pppppuVar6 = (undefined4 *****)(*(uint *)(param_2 + 0xbc) - uVar5);
            if (*(uint *)(param_2 + 0xbc) < uVar5) {
              pppppuVar6 = (undefined4 *****)0x0;
            }
            if (*(int *)(param_2 + 0xcc) != 0) {
              pppppuVar6 = (undefined4 *****)0x0;
            }
            if (pppppuVar6 < local_234) {
              local_228[0] = local_234;
              local_228[1] = pppppuVar6;
                    /* WARNING: Subroutine does not return */
              FUN_01284540(local_228);
            }
            *puVar11 = (uint)(uVar5 + (int)local_234);
            *(uint *)(param_2 + 0xcc) =
                 *(int *)(param_2 + 0xcc) + (uint)CARRY4(uVar5,(uint)local_234);
            goto LAB_0093ebcc;
          }
          if (((uint)local_238 & 0xff) != 5) {
            *param_1 = local_238;
            param_1[1] = local_234;
            goto LAB_0093f58c;
          }
        }
      }
      else {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d50b4c - 1 < 2 ||
             ((DAT_01d50b4c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b44), cVar2 != '\0')))))) &&
           (iVar4 = FUN_01aaa278(DAT_01d50b44), iVar4 != 0)) {
          if (*(undefined2 **)(DAT_01d50b44 + 0x20) == (undefined2 *)0x0) goto LAB_0093f678;
          local_274 = (undefined4 *)(DAT_01d50b44 + 0x1c);
          local_228[0] = (undefined4 *****)*local_274;
          local_27c = &local_260;
          local_220 = *(uint *)(DAT_01d50b44 + 0x24);
          local_21c = *(int *)(DAT_01d50b44 + 0x28);
          local_218 = 0;
          local_278 = 1;
          local_258 = (undefined4 *)&DAT_01d2d0f4;
          local_25c = &DAT_00528c36;
          local_260 = local_228;
          local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b44 + 0x20);
          FUN_01aaaecc(DAT_01d50b44,&local_27c);
          iVar4 = DAT_01d50b44;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_244 = *(undefined4 ******)(DAT_01d50b44 + 0x14);
            local_240 = *(undefined4 **)(DAT_01d50b44 + 0x18);
            local_248 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar7 = (*(code *)puVar10[3])(pcVar8,&local_248);
            if (iVar7 != 0) {
              local_238 = local_248;
              local_234 = local_244;
              local_230 = local_240;
              FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_238,&local_27c);
            }
          }
        }
        else {
          iVar4 = DAT_01d50b44;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_284 = *(undefined4 ******)(DAT_01d50b44 + 0x14);
            local_280 = *(undefined4 **)(DAT_01d50b44 + 0x18);
            local_288 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar8 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar7 = (*(code *)puVar10[3])(pcVar8,&local_288);
            if (iVar7 != 0) {
              if (*(undefined2 **)(DAT_01d50b44 + 0x20) == (undefined2 *)0x0) goto LAB_0093f678;
              local_260 = &local_248;
              local_220 = *(uint *)(DAT_01d50b44 + 0x24);
              local_21c = *(int *)(DAT_01d50b44 + 0x28);
              local_218 = 0;
              local_25c = (undefined1 *)0x1;
              local_240 = (undefined4 *)&DAT_01d2d0f4;
              local_244 = (undefined4 *****)&DAT_00528c36;
              local_238 = local_288;
              local_234 = local_284;
              local_230 = local_280;
              local_258 = (undefined4 *)(DAT_01d50b44 + 0x1c);
              local_248 = local_228;
              local_228[0] = *(undefined4 ******)(DAT_01d50b44 + 0x1c);
              local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b44 + 0x20);
              FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_238,&local_260);
            }
          }
        }
        iVar4 = FUN_01a84a20(*(undefined4 *)(param_2 + 0xbc),piVar3,*puVar11,
                             *(undefined4 *)(param_2 + 0xcc),piVar3);
        if (iVar4 == 0) goto LAB_0093ebcc;
        iVar4 = 0;
        do {
          local_228[iVar4 * 2] = (undefined4 *****)0x1;
          iVar7 = iVar4 + 1;
          local_228[iVar4 * 2 + 1] = (undefined4 *****)0x0;
          iVar4 = iVar7;
        } while (iVar7 != 0x40);
        uVar5 = FUN_01a84a94(param_2 + 0xb8,piVar3,local_228);
        if (0x40 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar5,0x40,&DAT_01d20a28);
        }
        FUN_019dfc70(&local_238,param_2,param_3,local_228,uVar5);
        if ((char)local_238 != '\x05') {
          if (((uint)local_238 & 0xff) == 4) {
            FUN_01a84b80(param_2 + 0xb8,piVar3,local_234);
            goto LAB_0093ebcc;
          }
          if (((uint)local_238 & 0xff) != 5) {
            *param_1 = local_238;
            param_1[1] = local_234;
            goto LAB_0093f58c;
          }
        }
      }
      uVar1 = 5;
      goto LAB_0093f584;
    }
    iVar4 = FUN_01a803e8(param_2 + 0x10);
  } while (iVar4 == 0);
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50b64 - 1 < 2 ||
       ((DAT_01d50b64 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b5c), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d50b5c), iVar4 != 0)))) {
    if (*(undefined2 **)(DAT_01d50b5c + 0x20) == (undefined2 *)0x0) {
LAB_0093f66c:
      local_2c4 = &DAT_01d20a78;
LAB_0093f678:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_2c4);
    }
    local_244 = &local_27c;
    local_220 = *(uint *)(DAT_01d50b5c + 0x24);
    local_21c = *(int *)(DAT_01d50b5c + 0x28);
    local_258 = (undefined4 *)(DAT_01d50b5c + 0x1c);
    local_228[0] = (undefined4 *****)*local_258;
    local_260 = &local_248;
    local_218 = 0;
    local_25c = (undefined1 *)0x1;
    local_240 = (undefined4 *)&DAT_01d2ea4c;
    local_278 = 0x1f;
    local_27c = (undefined4 *****)0x51ccbd;
    local_248 = local_228;
    local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b5c + 0x20);
    FUN_01aaaecc(DAT_01d50b5c,&local_260);
    iVar4 = DAT_01d50b5c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_234 = *(undefined4 ******)(DAT_01d50b5c + 0x14);
      local_230 = *(undefined4 **)(DAT_01d50b5c + 0x18);
      local_238 = (undefined4 *****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar8 = DAT_01d4edc4;
      }
      puVar10 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar10 = DAT_01d4edc8;
      }
      iVar7 = (*(code *)puVar10[3])(pcVar8,&local_238);
      if (iVar7 != 0) {
        FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_238,&local_260);
      }
    }
  }
  else {
    iVar4 = DAT_01d50b5c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_250 = *(undefined4 *)(DAT_01d50b5c + 0x14);
      local_24c = *(undefined4 *)(DAT_01d50b5c + 0x18);
      local_254 = 5;
      DataMemoryBarrier(0xb);
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar8 = DAT_01d4edc4;
      }
      puVar10 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar10 = DAT_01d4edc8;
      }
      iVar7 = (*(code *)puVar10[3])(pcVar8,&local_254);
      if (iVar7 != 0) {
        if (*(undefined2 **)(DAT_01d50b5c + 0x20) == (undefined2 *)0x0) goto LAB_0093f66c;
        local_234 = &local_260;
        local_220 = *(uint *)(DAT_01d50b5c + 0x24);
        local_21c = *(int *)(DAT_01d50b5c + 0x28);
        local_248 = &local_238;
        local_244 = (undefined4 *****)&DAT_00000001;
        local_218 = 0;
        local_230 = (undefined4 *)&DAT_01d2ea4c;
        local_25c = (undefined1 *)0x1f;
        local_260 = (undefined4 *****)0x51ccbd;
        local_240 = (undefined4 *)(DAT_01d50b5c + 0x1c);
        local_238 = local_228;
        local_228[0] = *(undefined4 ******)(DAT_01d50b5c + 0x1c);
        local_228[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b5c + 0x20);
        FUN_01aaa328(iVar4,pcVar8,puVar10[4],&local_254,&local_248);
      }
    }
  }
  uVar1 = 4;
LAB_0093f584:
  *(undefined1 *)param_1 = uVar1;
LAB_0093f58c:
  FUN_0134c39c(&local_2a8);
  FUN_01834abc(&local_2a8);
  return;
}

