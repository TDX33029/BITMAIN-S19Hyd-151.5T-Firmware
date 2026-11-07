// FUN_01433fa0 @ 01433fa0 size=3520 calls_out=21 calls_in=1
// strings: tcp set_nonblocking error | tcp open error | hyper::client::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:545event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:549event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:542event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:354event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:617event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:650event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:662event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/http.rs:656event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/client.rs:616 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01433fa0(undefined4 *param_1,short *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *****pppppuVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 ******ppppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 uVar12;
  undefined4 ******ppppppuVar13;
  undefined4 uVar14;
  undefined4 *****pppppuVar15;
  undefined4 *puVar16;
  undefined4 *****local_168;
  undefined4 *****local_164;
  undefined4 ******local_160;
  undefined4 *****local_15c;
  undefined4 *local_158;
  undefined4 ******local_154;
  undefined4 ******local_150;
  undefined4 *local_14c;
  undefined4 ******local_148;
  undefined4 ******local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 ******local_130;
  undefined4 ******local_12c;
  undefined1 *local_128;
  undefined4 *****local_120;
  undefined4 *****local_11c;
  undefined4 ******local_118;
  undefined4 ******local_114;
  undefined1 *local_110;
  undefined4 ******local_10c;
  undefined4 *****local_108;
  undefined4 *local_104;
  undefined4 *****local_100;
  undefined4 *****local_fc;
  undefined4 *****local_f8;
  undefined4 ******local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 ******local_b8;
  undefined4 *****local_b4;
  undefined4 *local_b0;
  undefined4 ******local_a8;
  undefined4 *****local_a4;
  int local_a0;
  int local_9c;
  undefined1 *local_98;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined4 local_28;
  
  sVar1 = *param_2;
  uVar4 = 2;
  if (sVar1 != 0) {
    uVar4 = 10;
  }
  pppppuVar5 = (undefined4 *****)FUN_01be9c4e(uVar4,0x80001,6);
  if (pppppuVar5 == (undefined4 *****)&DAT_ffffffff) {
    piVar8 = (int *)FUN_01be3244();
    local_144 = (undefined4 ******)*piVar8;
    local_148 = (undefined4 ******)0x0;
    FUN_01433c5c(&local_a8,"tcp open error",0xe,&local_148);
    pppppuVar5 = local_a4;
    if (local_a8 != (undefined4 ******)0x0) {
      *param_1 = 1;
      param_1[3] = local_a0;
      param_1[4] = local_9c;
      param_1[1] = local_a8;
      param_1[2] = local_a4;
      return;
    }
  }
  else if ((int)pppppuVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005258fe,0x5b,&DAT_01d27598);
  }
  uVar6 = FUN_01be3388(pppppuVar5,3);
  if ((uVar6 == 0xffffffff) ||
     (((uVar6 | 0x800) != uVar6 && (iVar7 = FUN_01be3388(pppppuVar5,4), iVar7 == -1)))) {
    piVar8 = (int *)FUN_01be3244();
    local_144 = (undefined4 ******)*piVar8;
    local_148 = (undefined4 ******)0x0;
    ppppppuVar13 = &local_a8;
    FUN_01433c5c(ppppppuVar13,"tcp set_nonblocking error",0x19,&local_148);
    ppppppuVar10 = local_a8;
    if (local_a8 == (undefined4 ******)0x0) goto LAB_01434078;
LAB_01434058:
    pppppuVar11 = ppppppuVar13[2];
    pppppuVar15 = ppppppuVar13[3];
    param_1[2] = ppppppuVar13[1];
    param_1[3] = pppppuVar11;
    param_1[4] = pppppuVar15;
    *param_1 = 1;
    param_1[1] = ppppppuVar10;
    FUN_01bf01d6(pppppuVar5);
  }
  else {
LAB_01434078:
    if ((undefined1 *)param_3[0xe] != &DAT_3b9aca00) {
      local_a0 = param_3[0xc];
      local_9c = param_3[0xd];
      local_a8 = (undefined4 ******)0x0;
      local_88 = &DAT_3b9aca00;
      local_98 = (undefined1 *)param_3[0xe];
      FUN_01979988(&local_168,pppppuVar5,&local_a8);
      if ((char)local_168 != '\x04') {
        local_11c = local_164;
        local_120 = local_168;
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4ea38 - 1 < 2 ||
             ((DAT_01d4ea38 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ea30), cVar3 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4ea30), iVar7 != 0)))) {
          local_104 = (undefined4 *)(DAT_01d4ea30 + 0x1c);
          if (*(undefined4 *******)(DAT_01d4ea30 + 0x20) == (undefined4 ******)0x0) {
LAB_01434d00:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf6218);
          }
          local_b8 = &local_148;
          local_140 = *(undefined1 **)(DAT_01d4ea30 + 0x24);
          local_13c = *(undefined4 *)(DAT_01d4ea30 + 0x28);
          local_b4 = &local_f8;
          local_10c = &local_b8;
          local_108 = (undefined4 *****)&DAT_00000001;
          local_f4 = &local_154;
          local_138 = 0;
          local_b0 = (undefined4 *)&DAT_01d2ea4c;
          local_f8 = (undefined4 *****)&DAT_0057e920;
          local_150 = (undefined4 ******)FUN_019a7d7c;
          local_154 = &local_120;
          local_148 = (undefined4 ******)*local_104;
          local_144 = *(undefined4 *******)(DAT_01d4ea30 + 0x20);
          FUN_01434f58(&local_10c);
        }
        else {
          iVar7 = DAT_01d4ea30;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_15c = *(undefined4 ******)(DAT_01d4ea30 + 0x14);
            local_158 = *(undefined4 **)(DAT_01d4ea30 + 0x18);
            local_160 = (undefined4 ******)0x2;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar16[3])();
            if (iVar9 != 0) {
              local_14c = (undefined4 *)(DAT_01d4ea30 + 0x1c);
              if (*(undefined4 *******)(DAT_01d4ea30 + 0x20) == (undefined4 ******)0x0)
              goto LAB_01434d00;
              local_10c = &local_148;
              local_140 = *(undefined1 **)(DAT_01d4ea30 + 0x24);
              local_13c = *(undefined4 *)(DAT_01d4ea30 + 0x28);
              local_108 = &local_100;
              local_154 = &local_10c;
              local_138 = 0;
              local_150 = (undefined4 ******)&DAT_00000001;
              local_100 = (undefined4 *****)&DAT_0057e920;
              local_104 = (undefined4 *)&DAT_01d2ea4c;
              local_fc = &local_f8;
              local_f4 = (undefined4 ******)FUN_019a7d7c;
              local_f8 = &local_120;
              local_b8 = local_160;
              local_b4 = local_15c;
              local_b0 = local_158;
              local_148 = (undefined4 ******)*local_14c;
              local_144 = *(undefined4 *******)(DAT_01d4ea30 + 0x20);
              FUN_01aaa328(iVar7,pcVar2,puVar16[4],&local_b8,&local_154);
            }
          }
        }
        FUN_0143f1c4((uint)local_120 & 0xff,local_11c);
      }
    }
    if (sVar1 == 0) {
      if (*(char *)((int)param_3 + 0x41) == '\x01') {
        pppppuVar11 = *(undefined4 ******)((int)param_3 + 0x42);
        FUN_01bed93e(&local_a0,0,0x78);
        local_28 = 0x10;
        local_a8 = (undefined4 ******)0x2;
        local_a4 = pppppuVar11;
        goto LAB_01434408;
      }
    }
    else if (*(char *)((int)param_3 + 0x46) != '\0') {
      local_a0 = *(int *)((int)param_3 + 0x47);
      FUN_01bed4e2(&local_9c,(int)param_3 + 0x4b,0xc);
      FUN_01bed93e(auStack_90,0,0x68);
      local_a4 = (undefined4 *****)0x0;
      local_28 = 0x1c;
      local_a8 = (undefined4 ******)&DAT_0000000a;
LAB_01434408:
      FUN_01979aec(&local_b8,pppppuVar5,&local_a8);
      if (((char)local_b8 != '\x04') && (((uint)local_b8 & 0xff) != 4)) {
        local_a8 = local_b8;
        local_a4 = local_b4;
        ppppppuVar13 = &local_148;
        FUN_01433c5c(ppppppuVar13,"tcp bind local error",0x14,&local_a8);
        ppppppuVar10 = local_148;
        if (local_148 != (undefined4 ******)0x0) goto LAB_01434058;
      }
    }
    if ((char)param_3[0x16] != '\0') {
      FUN_01979dd0(&local_120,pppppuVar5,1,2,1);
      if ((char)local_120 != '\x04') {
        local_fc = local_11c;
        local_100 = local_120;
        if (((DAT_01d50f88 < 4) &&
            ((DAT_01d4ea50 - 1 < 2 ||
             ((DAT_01d4ea50 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ea48), cVar3 != '\0')))))) &&
           (iVar7 = FUN_01aaa278(DAT_01d4ea48), iVar7 != 0)) {
          if (*(undefined4 ******)(DAT_01d4ea48 + 0x20) == (undefined4 *****)0x0) {
LAB_01434d1c:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf6228);
          }
          local_a0 = *(int *)(DAT_01d4ea48 + 0x24);
          local_144 = &local_154;
          local_9c = *(int *)(DAT_01d4ea48 + 0x28);
          local_148 = &local_a8;
          local_b4 = (undefined4 *****)&DAT_00000001;
          local_150 = &local_10c;
          local_b8 = &local_148;
          local_10c = &local_100;
          local_98 = (undefined1 *)0x0;
          local_140 = &DAT_01d2ea4c;
          local_154 = (undefined4 ******)&DAT_005a5294;
          local_108 = (undefined4 *****)FUN_019a7d7c;
          local_b0 = (undefined4 *)(DAT_01d4ea48 + 0x1c);
          local_a8 = *(undefined4 *******)(DAT_01d4ea48 + 0x1c);
          local_a4 = *(undefined4 ******)(DAT_01d4ea48 + 0x20);
          FUN_01435050(&local_b8);
        }
        else {
          iVar7 = DAT_01d4ea48;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_12c = *(undefined4 *******)(DAT_01d4ea48 + 0x14);
            local_128 = *(undefined1 **)(DAT_01d4ea48 + 0x18);
            local_130 = (undefined4 ******)0x2;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar16[3])(pcVar2);
            if (iVar9 != 0) {
              if (*(undefined4 ******)(DAT_01d4ea48 + 0x20) == (undefined4 *****)0x0)
              goto LAB_01434d1c;
              local_b8 = &local_a8;
              local_a0 = *(int *)(DAT_01d4ea48 + 0x24);
              local_9c = *(int *)(DAT_01d4ea48 + 0x28);
              local_b4 = &local_f8;
              local_10c = &local_b8;
              local_98 = (undefined1 *)0x0;
              local_108 = (undefined4 *****)&DAT_00000001;
              local_f8 = (undefined4 *****)&DAT_005a5294;
              local_b0 = (undefined4 *)&DAT_01d2ea4c;
              local_f4 = &local_154;
              local_150 = (undefined4 ******)FUN_019a7d7c;
              local_154 = &local_100;
              local_148 = local_130;
              local_144 = local_12c;
              local_140 = local_128;
              local_104 = (undefined4 *)(DAT_01d4ea48 + 0x1c);
              local_a8 = *(undefined4 *******)(DAT_01d4ea48 + 0x1c);
              local_a4 = *(undefined4 ******)(DAT_01d4ea48 + 0x20);
              FUN_01aaa328(iVar7,pcVar2,puVar16[4],&local_148,&local_10c);
            }
          }
        }
        FUN_0143f1c4((uint)local_100 & 0xff,local_fc);
      }
    }
    if (*param_3 != 0) {
      FUN_01979dd0(&local_120,pppppuVar5,1,7,param_3[1]);
      if ((char)local_120 != '\x04') {
        local_fc = local_11c;
        local_100 = local_120;
        if (((DAT_01d50f88 < 4) &&
            ((DAT_01d4ea44 - 1 < 2 ||
             ((DAT_01d4ea44 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ea3c), cVar3 != '\0')))))) &&
           (iVar7 = FUN_01aaa278(DAT_01d4ea3c), iVar7 != 0)) {
          if (*(undefined4 ******)(DAT_01d4ea3c + 0x20) == (undefined4 *****)0x0) {
LAB_01434d38:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf6238);
          }
          local_a0 = *(int *)(DAT_01d4ea3c + 0x24);
          local_144 = &local_154;
          local_9c = *(int *)(DAT_01d4ea3c + 0x28);
          local_148 = &local_a8;
          local_b4 = (undefined4 *****)&DAT_00000001;
          local_150 = &local_10c;
          local_b8 = &local_148;
          local_10c = &local_100;
          local_98 = (undefined1 *)0x0;
          local_140 = &DAT_01d2ea4c;
          local_154 = (undefined4 ******)&DAT_005900de;
          local_108 = (undefined4 *****)FUN_019a7d7c;
          local_b0 = (undefined4 *)(DAT_01d4ea3c + 0x1c);
          local_a8 = *(undefined4 *******)(DAT_01d4ea3c + 0x1c);
          local_a4 = *(undefined4 ******)(DAT_01d4ea3c + 0x20);
          FUN_01435148(&local_b8);
        }
        else {
          iVar7 = DAT_01d4ea3c;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_114 = *(undefined4 *******)(DAT_01d4ea3c + 0x14);
            local_110 = *(undefined1 **)(DAT_01d4ea3c + 0x18);
            local_118 = (undefined4 ******)0x2;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar16[3])(pcVar2);
            if (iVar9 != 0) {
              if (*(undefined4 ******)(DAT_01d4ea3c + 0x20) == (undefined4 *****)0x0)
              goto LAB_01434d38;
              local_b8 = &local_a8;
              local_a0 = *(int *)(DAT_01d4ea3c + 0x24);
              local_9c = *(int *)(DAT_01d4ea3c + 0x28);
              local_b4 = &local_f8;
              local_10c = &local_b8;
              local_98 = (undefined1 *)0x0;
              local_108 = (undefined4 *****)&DAT_00000001;
              local_f8 = (undefined4 *****)&DAT_005900de;
              local_b0 = (undefined4 *)&DAT_01d2ea4c;
              local_f4 = &local_154;
              local_150 = (undefined4 ******)FUN_019a7d7c;
              local_154 = &local_100;
              local_148 = local_118;
              local_144 = local_114;
              local_140 = local_110;
              local_104 = (undefined4 *)(DAT_01d4ea3c + 0x1c);
              local_a8 = *(undefined4 *******)(DAT_01d4ea3c + 0x1c);
              local_a4 = *(undefined4 ******)(DAT_01d4ea3c + 0x20);
              FUN_01aaa328(iVar7,pcVar2,puVar16[4],&local_148,&local_10c);
            }
          }
        }
        FUN_0143f1c4((uint)local_100 & 0xff,local_fc);
      }
    }
    if (param_3[2] != 0) {
      FUN_01979dd0(&local_100,pppppuVar5,1,8,param_3[3]);
      if ((char)local_100 != '\x04') {
        local_f4 = (undefined4 ******)local_fc;
        local_f8 = local_100;
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4ea5c - 1 < 2 ||
             ((DAT_01d4ea5c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4ea54), cVar3 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4ea54), iVar7 != 0)))) {
          if (*(undefined4 ******)(DAT_01d4ea54 + 0x20) == (undefined4 *****)0x0) {
LAB_01434d54:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf6248);
          }
          local_a0 = *(int *)(DAT_01d4ea54 + 0x24);
          local_144 = &local_154;
          local_9c = *(int *)(DAT_01d4ea54 + 0x28);
          local_148 = &local_a8;
          local_b4 = (undefined4 *****)&DAT_00000001;
          local_150 = &local_10c;
          local_b8 = &local_148;
          local_10c = &local_f8;
          local_98 = (undefined1 *)0x0;
          local_140 = &DAT_01d2ea4c;
          local_154 = (undefined4 ******)&DAT_00574c2b;
          local_108 = (undefined4 *****)FUN_019a7d7c;
          local_b0 = (undefined4 *)(DAT_01d4ea54 + 0x1c);
          local_a8 = *(undefined4 *******)(DAT_01d4ea54 + 0x1c);
          local_a4 = *(undefined4 ******)(DAT_01d4ea54 + 0x20);
          FUN_01435240(&local_b8);
        }
        else {
          iVar7 = DAT_01d4ea54;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_e8 = *(undefined4 *)(DAT_01d4ea54 + 0x14);
            local_e4 = *(undefined4 *)(DAT_01d4ea54 + 0x18);
            local_ec = 2;
            DataMemoryBarrier(0xb);
            puVar16 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar16 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar16[3])(pcVar2,&local_ec);
            if (iVar9 != 0) {
              if (*(undefined4 ******)(DAT_01d4ea54 + 0x20) == (undefined4 *****)0x0)
              goto LAB_01434d54;
              local_148 = &local_a8;
              local_b8 = &local_148;
              local_a0 = *(int *)(DAT_01d4ea54 + 0x24);
              local_9c = *(int *)(DAT_01d4ea54 + 0x28);
              local_144 = &local_154;
              local_98 = (undefined1 *)0x0;
              local_b4 = (undefined4 *****)&DAT_00000001;
              local_140 = &DAT_01d2ea4c;
              local_150 = &local_10c;
              local_154 = (undefined4 ******)&DAT_00574c2b;
              local_108 = (undefined4 *****)FUN_019a7d7c;
              local_10c = &local_f8;
              local_b0 = (undefined4 *)(DAT_01d4ea54 + 0x1c);
              local_a8 = *(undefined4 *******)(DAT_01d4ea54 + 0x1c);
              local_a4 = *(undefined4 ******)(DAT_01d4ea54 + 0x20);
              FUN_01aaa328(iVar7,pcVar2,puVar16[4],&local_ec,&local_b8);
            }
          }
        }
        FUN_0143f1c4((uint)local_f8 & 0xff,local_f4);
      }
    }
    uVar4 = *(undefined4 *)(param_2 + 2);
    uVar12 = *(undefined4 *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 6);
    puVar16 = (undefined4 *)((uint)&local_e0 | 4);
    *puVar16 = *(undefined4 *)param_2;
    puVar16[1] = uVar4;
    puVar16[2] = uVar12;
    puVar16[3] = uVar14;
    uVar4 = *(undefined4 *)(param_2 + 10);
    uVar12 = *(undefined4 *)(param_2 + 0xc);
    uVar14 = *(undefined4 *)(param_2 + 0xe);
    puVar16[4] = *(undefined4 *)(param_2 + 8);
    puVar16[5] = uVar4;
    puVar16[6] = uVar12;
    puVar16[7] = uVar14;
    param_1[2] = param_5;
    param_1[3] = param_6;
    *param_1 = 0;
    param_1[4] = param_7;
    param_1[5] = local_e0;
    param_1[6] = uStack_dc;
    param_1[7] = uStack_d8;
    param_1[8] = uStack_d4;
    param_1[9] = local_d0;
    param_1[10] = uStack_cc;
    param_1[0xb] = uStack_c8;
    param_1[0xc] = uStack_c4;
    param_1[0xd] = uStack_c0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[0xe] = pppppuVar5;
  }
  return;
}

