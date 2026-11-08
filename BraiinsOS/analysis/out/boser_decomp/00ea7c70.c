// FUN_00ea7c70 @ 00ea7c70 size=3160 calls_out=19 calls_in=5
// strings: FramedWrite::flushevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:159event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:138queued_data_frameevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:143 | tracing::span::active | h2::codec::framed_writerem/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:266event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:286 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::codec::framed_writerem/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:266event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_write.rs:286 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00ea7c70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  char *pcVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined *local_2bc;
  undefined4 *****local_2a0;
  undefined2 *local_29c;
  uint local_298;
  int local_294;
  int local_290;
  undefined4 uStack_28c;
  int local_288;
  undefined4 uStack_284;
  undefined4 *****local_280;
  undefined4 *****local_27c;
  undefined4 *local_278;
  undefined4 *****local_274;
  undefined4 local_270;
  undefined4 *local_26c;
  undefined4 *****local_268;
  undefined4 *****local_264;
  undefined4 *local_260;
  undefined4 *****local_258;
  undefined1 *local_254;
  undefined4 *local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 *****local_240;
  undefined4 *****local_23c;
  undefined4 *local_238;
  undefined4 *****local_230 [2];
  uint local_228;
  int local_224;
  int local_220;
  undefined4 uStack_21c;
  int local_218;
  undefined4 uStack_214;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  undefined4 *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50b40 - 1 < 2 ||
       ((DAT_01d50b40 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b38), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50b38), iVar3 != 0)))) {
    local_228 = DAT_01d50b38 + 0x1c;
    local_230[1] = (undefined4 *****)0x0;
    local_230[0] = (undefined4 *****)&SUB_00000004;
    FUN_01aaa548(&local_2a0,DAT_01d50b38,local_230);
  }
  else {
    local_218 = DAT_01d50b38;
    local_228 = 2;
    if (DAT_01d51ae9 == '\0') {
      local_298 = DAT_01d50b38 + 0x1c;
      local_29c = (undefined2 *)0x0;
      local_2a0 = (undefined4 *****)0x4;
      FUN_01aaa3e0(local_230,&local_2a0);
    }
    local_2a0 = local_230[0];
    local_29c = (undefined2 *)local_230[1];
    local_298 = local_228;
    local_294 = local_224;
    local_290 = local_220;
    uStack_28c = uStack_21c;
    local_288 = local_218;
    uStack_284 = uStack_214;
  }
  if (local_298 != 2) {
    if ((local_298 & 1) == 0) {
      iVar3 = local_294;
    }
    else {
      iVar3 = local_294 + (*(int *)(local_290 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_290 + 0x30))(iVar3,&local_2a0);
  }
  if ((DAT_01d51ae9 == '\0') && (local_288 != 0)) {
    local_2c = *(undefined4 ******)(local_288 + 0x10);
    local_30 = *(undefined4 ******)(local_288 + 0xc);
    local_230[0] = &local_30;
    local_230[1] = (undefined4 *****)&DAT_0132b6a0;
    FUN_006404a8(&local_2a0,"tracing::span::active",0x15,&DAT_00594cdd,local_230);
  }
  puVar8 = (uint *)(param_2 + 0xd8);
  piVar9 = (int *)(param_2 + 0x90);
  local_2bc = &DAT_01d20a58;
LAB_00ea7e40:
  do {
    iVar3 = FUN_01a83be8(param_2 + 0x20);
    if (iVar3 == 0) {
      if (*piVar9 - 3U < 2) {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d50b58 - 1 < 2 ||
             ((DAT_01d50b58 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b50), cVar2 != '\0')))))) &&
           (iVar3 = FUN_01aaa278(DAT_01d50b50), iVar3 != 0)) {
          if (*(undefined2 **)(DAT_01d50b50 + 0x20) == (undefined2 *)0x0) {
LAB_00ea88a4:
            local_2bc = &DAT_01d20a68;
            goto LAB_00ea88b0;
          }
          local_228 = *(uint *)(DAT_01d50b50 + 0x24);
          local_26c = (undefined4 *)(DAT_01d50b50 + 0x1c);
          local_230[0] = (undefined4 *****)*local_26c;
          local_274 = &local_258;
          local_224 = *(int *)(DAT_01d50b50 + 0x28);
          local_220 = 0;
          local_270 = 1;
          local_250 = (undefined4 *)&DAT_01d2d0f4;
          local_254 = &DAT_00523849;
          local_258 = local_230;
          local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b50 + 0x20);
          FUN_01aaaecc(DAT_01d50b50,&local_274);
          iVar3 = DAT_01d50b50;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_23c = *(undefined4 ******)(DAT_01d50b50 + 0x14);
            local_238 = *(undefined4 **)(DAT_01d50b50 + 0x18);
            local_240 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar7 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar6 = (*(code *)puVar10[3])(pcVar7,&local_240);
            if (iVar6 != 0) {
              local_30 = local_240;
              local_2c = local_23c;
              local_28 = local_238;
              FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_30,&local_274);
            }
          }
        }
        else {
          iVar3 = DAT_01d50b50;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_264 = *(undefined4 ******)(DAT_01d50b50 + 0x14);
            local_260 = *(undefined4 **)(DAT_01d50b50 + 0x18);
            local_268 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar7 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar6 = (*(code *)puVar10[3])(pcVar7,&local_268);
            if (iVar6 != 0) {
              if (*(undefined2 **)(DAT_01d50b50 + 0x20) == (undefined2 *)0x0) goto LAB_00ea88a4;
              local_258 = &local_240;
              local_228 = *(uint *)(DAT_01d50b50 + 0x24);
              local_224 = *(int *)(DAT_01d50b50 + 0x28);
              local_220 = 0;
              local_254 = (undefined1 *)0x1;
              local_238 = (undefined4 *)&DAT_01d2d0f4;
              local_23c = (undefined4 *****)&DAT_00523849;
              local_30 = local_268;
              local_2c = local_264;
              local_28 = local_260;
              local_250 = (undefined4 *)(DAT_01d50b50 + 0x1c);
              local_240 = local_230;
              local_230[0] = *(undefined4 ******)(DAT_01d50b50 + 0x1c);
              local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b50 + 0x20);
              FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_30,&local_258);
            }
          }
        }
        if (*(int *)(param_2 + 0xdc) != 0) goto LAB_00ea7e40;
        uVar4 = *puVar8;
        uVar11 = *(uint *)(param_2 + 0xcc);
        if (uVar11 <= uVar4) goto LAB_00ea7e40;
        iVar3 = 0;
        do {
          local_230[iVar3 * 2] = (undefined4 *****)0x1;
          iVar6 = iVar3 + 1;
          local_230[iVar3 * 2 + 1] = (undefined4 *****)0x0;
          iVar3 = iVar6;
        } while (iVar6 != 0x40);
        local_230[1] = (undefined4 *****)(uVar11 - uVar4);
        local_230[0] = (undefined4 *****)(*(int *)(param_2 + 200) + uVar4);
        FUN_019dfc70(&local_30,param_2,param_3,local_230,1);
        if ((char)local_30 != '\x05') {
          if (((uint)local_30 & 0xff) == 4) {
            uVar4 = *puVar8;
            pppppuVar5 = (undefined4 *****)(*(uint *)(param_2 + 0xcc) - uVar4);
            if (*(uint *)(param_2 + 0xcc) < uVar4) {
              pppppuVar5 = (undefined4 *****)0x0;
            }
            if (*(int *)(param_2 + 0xdc) != 0) {
              pppppuVar5 = (undefined4 *****)0x0;
            }
            if (pppppuVar5 < local_2c) {
              local_230[0] = local_2c;
              local_230[1] = pppppuVar5;
                    /* WARNING: Subroutine does not return */
              FUN_01284540(local_230);
            }
            *puVar8 = (uint)(uVar4 + (int)local_2c);
            *(uint *)(param_2 + 0xdc) =
                 *(int *)(param_2 + 0xdc) + (uint)CARRY4(uVar4,(uint)local_2c);
            goto LAB_00ea7e40;
          }
          if (((uint)local_30 & 0xff) != 5) {
            *param_1 = local_30;
            param_1[1] = local_2c;
            goto LAB_00ea8830;
          }
        }
      }
      else {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d50b4c - 1 < 2 ||
             ((DAT_01d50b4c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b44), cVar2 != '\0')))))) &&
           (iVar3 = FUN_01aaa278(DAT_01d50b44), iVar3 != 0)) {
          if (*(undefined2 **)(DAT_01d50b44 + 0x20) == (undefined2 *)0x0) goto LAB_00ea88b0;
          local_228 = *(uint *)(DAT_01d50b44 + 0x24);
          local_26c = (undefined4 *)(DAT_01d50b44 + 0x1c);
          local_230[0] = (undefined4 *****)*local_26c;
          local_274 = &local_258;
          local_224 = *(int *)(DAT_01d50b44 + 0x28);
          local_220 = 0;
          local_270 = 1;
          local_250 = (undefined4 *)&DAT_01d2d0f4;
          local_254 = &DAT_00528c36;
          local_258 = local_230;
          local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b44 + 0x20);
          FUN_01aaaecc(DAT_01d50b44,&local_274);
          iVar3 = DAT_01d50b44;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_23c = *(undefined4 ******)(DAT_01d50b44 + 0x14);
            local_238 = *(undefined4 **)(DAT_01d50b44 + 0x18);
            local_240 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar7 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar6 = (*(code *)puVar10[3])(pcVar7,&local_240);
            if (iVar6 != 0) {
              local_30 = local_240;
              local_2c = local_23c;
              local_28 = local_238;
              FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_30,&local_274);
            }
          }
        }
        else {
          iVar3 = DAT_01d50b44;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_27c = *(undefined4 ******)(DAT_01d50b44 + 0x14);
            local_278 = *(undefined4 **)(DAT_01d50b44 + 0x18);
            local_280 = (undefined4 *****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar7 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            puVar10 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
            }
            iVar6 = (*(code *)puVar10[3])(pcVar7,&local_280);
            if (iVar6 != 0) {
              if (*(undefined2 **)(DAT_01d50b44 + 0x20) == (undefined2 *)0x0) goto LAB_00ea88b0;
              local_258 = &local_240;
              local_228 = *(uint *)(DAT_01d50b44 + 0x24);
              local_224 = *(int *)(DAT_01d50b44 + 0x28);
              local_220 = 0;
              local_254 = (undefined1 *)0x1;
              local_238 = (undefined4 *)&DAT_01d2d0f4;
              local_23c = (undefined4 *****)&DAT_00528c36;
              local_30 = local_280;
              local_2c = local_27c;
              local_28 = local_278;
              local_250 = (undefined4 *)(DAT_01d50b44 + 0x1c);
              local_240 = local_230;
              local_230[0] = *(undefined4 ******)(DAT_01d50b44 + 0x1c);
              local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b44 + 0x20);
              FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_30,&local_258);
            }
          }
        }
        iVar3 = FUN_01a84a20(*(undefined4 *)(param_2 + 0xcc),piVar9,*puVar8,
                             *(undefined4 *)(param_2 + 0xdc),piVar9);
        if (iVar3 == 0) goto LAB_00ea7e40;
        iVar3 = 0;
        do {
          local_230[iVar3 * 2] = (undefined4 *****)0x1;
          iVar6 = iVar3 + 1;
          local_230[iVar3 * 2 + 1] = (undefined4 *****)0x0;
          iVar3 = iVar6;
        } while (iVar6 != 0x40);
        uVar4 = FUN_01a84a94(param_2 + 200,piVar9,local_230);
        if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar4,0x40,&DAT_01d20a28);
        }
        FUN_019dfc70(&local_30,param_2,param_3,local_230,uVar4);
        if ((char)local_30 != '\x05') {
          if (((uint)local_30 & 0xff) == 4) {
            FUN_01a84b80(param_2 + 200,piVar9,local_2c);
            goto LAB_00ea7e40;
          }
          if (((uint)local_30 & 0xff) != 5) {
            *param_1 = local_30;
            param_1[1] = local_2c;
            goto LAB_00ea8830;
          }
        }
      }
      uVar1 = 5;
      goto LAB_00ea8828;
    }
    iVar3 = FUN_01a803e8(param_2 + 0x20);
  } while (iVar3 == 0);
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50b64 - 1 < 2 ||
       ((DAT_01d50b64 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50b5c), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50b5c), iVar3 != 0)))) {
    if (*(undefined2 **)(DAT_01d50b5c + 0x20) == (undefined2 *)0x0) {
LAB_00ea88c8:
      local_2bc = &DAT_01d20a78;
LAB_00ea88b0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_2bc);
    }
    local_23c = &local_274;
    local_228 = *(uint *)(DAT_01d50b5c + 0x24);
    local_224 = *(int *)(DAT_01d50b5c + 0x28);
    local_250 = (undefined4 *)(DAT_01d50b5c + 0x1c);
    local_230[0] = (undefined4 *****)*local_250;
    local_258 = &local_240;
    local_220 = 0;
    local_254 = (undefined1 *)0x1;
    local_238 = (undefined4 *)&DAT_01d2ea4c;
    local_270 = 0x1f;
    local_274 = (undefined4 *****)0x51ccbd;
    local_240 = local_230;
    local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b5c + 0x20);
    FUN_01aaaecc(DAT_01d50b5c,&local_258);
    iVar3 = DAT_01d50b5c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined4 ******)(DAT_01d50b5c + 0x14);
      local_28 = *(undefined4 **)(DAT_01d50b5c + 0x18);
      local_30 = (undefined4 *****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar7 = DAT_01d4edc4;
      }
      puVar10 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar10 = DAT_01d4edc8;
      }
      iVar6 = (*(code *)puVar10[3])(pcVar7,&local_30);
      if (iVar6 != 0) {
        FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_30,&local_258);
      }
    }
  }
  else {
    iVar3 = DAT_01d50b5c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_248 = *(undefined4 *)(DAT_01d50b5c + 0x14);
      local_244 = *(undefined4 *)(DAT_01d50b5c + 0x18);
      local_24c = 5;
      DataMemoryBarrier(0xb);
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      if (DAT_01d51174 == 2) {
        pcVar7 = DAT_01d4edc4;
      }
      puVar10 = &DAT_01cfc5e0;
      if (DAT_01d51174 == 2) {
        puVar10 = DAT_01d4edc8;
      }
      iVar6 = (*(code *)puVar10[3])(pcVar7,&local_24c);
      if (iVar6 != 0) {
        if (*(undefined2 **)(DAT_01d50b5c + 0x20) == (undefined2 *)0x0) goto LAB_00ea88c8;
        local_2c = &local_258;
        local_228 = *(uint *)(DAT_01d50b5c + 0x24);
        local_224 = *(int *)(DAT_01d50b5c + 0x28);
        local_240 = &local_30;
        local_23c = (undefined4 *****)&DAT_00000001;
        local_220 = 0;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_254 = (undefined1 *)0x1f;
        local_258 = (undefined4 *****)0x51ccbd;
        local_238 = (undefined4 *)(DAT_01d50b5c + 0x1c);
        local_230[0] = *(undefined4 ******)(DAT_01d50b5c + 0x1c);
        local_230[1] = (undefined4 *****)*(undefined2 **)(DAT_01d50b5c + 0x20);
        local_30 = local_230;
        FUN_01aaa328(iVar3,pcVar7,puVar10[4],&local_24c,&local_240);
      }
    }
  }
  uVar1 = 4;
LAB_00ea8828:
  *(undefined1 *)param_1 = uVar1;
LAB_00ea8830:
  FUN_0134c39c(&local_2a0);
  FUN_01834abc(&local_2a0);
  return;
}

