// FUN_013b9174 @ 013b9174 size=4420 calls_out=12 calls_in=2
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs

/* WARNING: Type propagation algorithm not settling */

void FUN_013b9174(undefined2 *param_1,int *param_2,undefined4 ******param_3)

{
  char *pcVar1;
  undefined4 ******ppppppuVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  int iVar7;
  undefined4 *****pppppuVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *****pppppuVar12;
  undefined4 ******local_94;
  undefined4 *****local_90;
  undefined4 ******local_8c;
  undefined4 *******local_88;
  undefined4 ******local_84;
  int *local_80;
  undefined4 *******local_78;
  undefined4 ******local_74;
  int *local_70;
  undefined4 *******local_68;
  undefined4 ******local_64;
  int *local_60;
  undefined4 ******local_5c;
  undefined4 ******local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 ******local_3c;
  int *local_38;
  undefined4 *******local_30;
  undefined4 ******local_2c;
  int *local_28;
  
  if ((int)param_3 < 0) {
    *param_1 = 0x403;
    return;
  }
  FUN_01933ff0(&local_5c,*param_2 + 8);
  ppppppuVar2 = local_58;
  if (local_5c == (undefined4 ******)0x1) {
    local_2c = (undefined4 ******)CONCAT31(local_2c._1_3_,(undefined1)local_54);
    local_30 = (undefined4 *******)local_58;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01cf144c,&DAT_01cf0e1c);
  }
  uVar11 = local_54 & 0xff;
  pppppuVar5 = (undefined4 *****)param_2[1];
  pppppuVar12 = (undefined4 *****)param_2[2];
  local_94 = param_3;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d8d4 - 1 < 2 ||
       ((DAT_01d4d8d4 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4d8cc), cVar4 != '\0')))) &&
      (iVar7 = FUN_01aaa278(DAT_01d4d8cc), iVar7 != 0)))) {
    if (*(undefined4 *******)(DAT_01d4d8cc + 0x20) == (undefined4 ******)0x0) {
LAB_013ba29c:
      puVar9 = &DAT_01ceca64;
      goto LAB_013ba2a4;
    }
    local_54 = *(uint *)(DAT_01d4d8cc + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d8cc + 0x28);
    local_64 = &local_90;
    local_70 = (int *)(DAT_01d4d8cc + 0x1c);
    local_5c = (undefined4 ******)*local_70;
    local_68 = &local_5c;
    local_74 = (undefined4 ******)&DAT_00000001;
    local_8c = &local_48;
    local_78 = &local_68;
    local_48 = &local_94;
    local_4c = 0;
    local_60 = (int *)&DAT_01d2ea4c;
    local_90 = (undefined4 *****)&DAT_00578c73;
    local_44 = (undefined4 *******)FUN_012fd02c;
    local_58 = *(undefined4 *******)(DAT_01d4d8cc + 0x20);
    FUN_01aaaecc(DAT_01d4d8cc,&local_78);
    iVar7 = DAT_01d4d8cc;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *******)(DAT_01d4d8cc + 0x14);
      local_38 = *(int **)(DAT_01d4d8cc + 0x18);
      local_40 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar6 = (*(code *)puVar10[3])(pcVar1,&local_40);
      if (iVar6 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_78);
      }
    }
  }
  else {
    iVar7 = DAT_01d4d8cc;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_84 = *(undefined4 *******)(DAT_01d4d8cc + 0x14);
      local_80 = *(int **)(DAT_01d4d8cc + 0x18);
      local_88 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar6 = (*(code *)puVar10[3])(pcVar1,&local_88);
      if (iVar6 != 0) {
        if (*(undefined4 *******)(DAT_01d4d8cc + 0x20) == (undefined4 ******)0x0) goto LAB_013ba29c;
        local_40 = &local_5c;
        local_54 = *(uint *)(DAT_01d4d8cc + 0x24);
        local_50 = *(undefined4 *)(DAT_01d4d8cc + 0x28);
        local_3c = &local_48;
        local_68 = &local_40;
        local_4c = 0;
        local_64 = (undefined4 ******)&DAT_00000001;
        local_48 = (undefined4 ******)&DAT_00578c73;
        local_38 = (int *)&DAT_01d2ea4c;
        local_44 = &local_78;
        local_74 = (undefined4 ******)FUN_012fd02c;
        local_78 = &local_94;
        local_30 = local_88;
        local_2c = local_84;
        local_28 = local_80;
        local_60 = (int *)(DAT_01d4d8cc + 0x1c);
        local_5c = *(undefined4 *******)(DAT_01d4d8cc + 0x1c);
        local_58 = *(undefined4 *******)(DAT_01d4d8cc + 0x20);
        FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_68);
      }
    }
  }
  iVar7 = FUN_0139f0d0(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
  if (*(undefined4 *******)(iVar7 + 0xdc) < param_3) {
    FUN_00a97e8c(ppppppuVar2,uVar11);
    *(undefined1 *)((int)param_1 + 1) = 4;
    uVar3 = 3;
    goto LAB_013ba1bc;
  }
  FUN_0139366c(ppppppuVar2 + 0xe,param_3,ppppppuVar2 + 0x38);
  iVar7 = FUN_0139f148(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
  *(int *)(iVar7 + 0xdc) = *(int *)(iVar7 + 0xdc) - (int)param_3;
  iVar7 = FUN_0139f148(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
  if (!SCARRY4(*(int *)(iVar7 + 0x4c),(int)param_3)) {
    *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + (int)param_3;
  }
  iVar7 = FUN_0139f0d0(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
  iVar6 = *(int *)(iVar7 + 0x48);
  if ((iVar6 < *(int *)(iVar7 + 0x4c)) && (iVar6 / 2 <= *(int *)(iVar7 + 0x4c) - iVar6)) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4db44 - 1 < 2 ||
         ((DAT_01d4db44 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4db3c), cVar4 != '\0')))))) &&
       (iVar7 = FUN_01aaa278(DAT_01d4db3c), iVar7 != 0)) {
      if (*(undefined4 *******)(DAT_01d4db3c + 0x20) == (undefined4 ******)0x0) {
LAB_013ba2bc:
        puVar9 = &DAT_01ceddfc;
        goto LAB_013ba2a4;
      }
      local_64 = &local_48;
      local_54 = *(uint *)(DAT_01d4db3c + 0x24);
      local_50 = *(undefined4 *)(DAT_01d4db3c + 0x28);
      local_70 = (int *)(DAT_01d4db3c + 0x1c);
      local_5c = (undefined4 ******)*local_70;
      local_68 = &local_5c;
      local_78 = &local_68;
      local_4c = 0;
      local_74 = (undefined4 ******)&DAT_00000001;
      local_60 = (int *)&DAT_01d2ea4c;
      local_44 = (undefined4 *******)&DAT_00000021;
      local_48 = (undefined4 ******)0x568cb8;
      local_58 = *(undefined4 *******)(DAT_01d4db3c + 0x20);
      FUN_01aaaecc(DAT_01d4db3c,&local_78);
      iVar7 = DAT_01d4db3c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(undefined4 *******)(DAT_01d4db3c + 0x14);
        local_38 = *(int **)(DAT_01d4db3c + 0x18);
        local_40 = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_40);
        if (iVar6 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_78);
        }
      }
    }
    else {
      iVar7 = DAT_01d4db3c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_74 = *(undefined4 *******)(DAT_01d4db3c + 0x14);
        local_70 = *(int **)(DAT_01d4db3c + 0x18);
        local_78 = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_78);
        if (iVar6 != 0) {
          if (*(undefined4 *******)(DAT_01d4db3c + 0x20) == (undefined4 ******)0x0)
          goto LAB_013ba2bc;
          local_50 = *(undefined4 *)(DAT_01d4db3c + 0x28);
          local_3c = &local_48;
          local_54 = *(uint *)(DAT_01d4db3c + 0x24);
          local_40 = &local_5c;
          local_68 = &local_40;
          local_64 = (undefined4 ******)&DAT_00000001;
          local_4c = 0;
          local_38 = (int *)&DAT_01d2ea4c;
          local_44 = (undefined4 *******)&DAT_00000021;
          local_48 = (undefined4 ******)0x568cb8;
          local_30 = local_78;
          local_2c = local_74;
          local_28 = local_70;
          local_60 = (int *)(DAT_01d4db3c + 0x1c);
          local_5c = *(undefined4 *******)(DAT_01d4db3c + 0x1c);
          local_58 = *(undefined4 *******)(DAT_01d4db3c + 0x20);
          FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_68);
        }
      }
    }
    iVar7 = FUN_0139f0d0(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
    if (*(char *)(iVar7 + 0xe7) == '\0') {
      iVar7 = FUN_0139f148(ppppppuVar2[99],ppppppuVar2[100],pppppuVar5,pppppuVar12);
      pppppuVar8 = ppppppuVar2[0x18];
      *(undefined1 *)(iVar7 + 0xe7) = 1;
      if (pppppuVar8 == (undefined4 *****)0x0) {
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d4db20 - 1 < 2 ||
             ((DAT_01d4db20 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4db18), cVar4 != '\0')))))) &&
           (iVar7 = FUN_01aaa278(DAT_01d4db18), iVar7 != 0)) {
          if (*(undefined4 *******)(DAT_01d4db18 + 0x20) == (undefined4 ******)0x0) {
LAB_013ba2e0:
            puVar9 = &DAT_01cede0c;
            goto LAB_013ba2a4;
          }
          local_3c = &local_48;
          local_54 = *(uint *)(DAT_01d4db18 + 0x24);
          local_50 = *(undefined4 *)(DAT_01d4db18 + 0x28);
          local_60 = (int *)(DAT_01d4db18 + 0x1c);
          local_5c = (undefined4 ******)*local_60;
          local_40 = &local_5c;
          local_68 = &local_40;
          local_4c = 0;
          local_64 = (undefined4 ******)&DAT_00000001;
          local_38 = (int *)&DAT_01d2ea4c;
          local_44 = (undefined4 *******)&DAT_0000001f;
          local_48 = (undefined4 ******)0x52fba5;
          local_58 = *(undefined4 *******)(DAT_01d4db18 + 0x20);
          FUN_01aaaecc(DAT_01d4db18,&local_68);
          iVar7 = DAT_01d4db18;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_2c = *(undefined4 *******)(DAT_01d4db18 + 0x14);
            local_28 = *(int **)(DAT_01d4db18 + 0x18);
            local_30 = (undefined4 *******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_30);
            if (iVar6 != 0) {
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_68);
            }
          }
        }
        else {
          iVar7 = DAT_01d4db18;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_64 = *(undefined4 *******)(DAT_01d4db18 + 0x14);
            local_60 = *(int **)(DAT_01d4db18 + 0x18);
            local_68 = (undefined4 *******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_68);
            if (iVar6 != 0) {
              if (*(undefined4 *******)(DAT_01d4db18 + 0x20) == (undefined4 ******)0x0)
              goto LAB_013ba2e0;
              local_2c = &local_48;
              local_54 = *(uint *)(DAT_01d4db18 + 0x24);
              local_50 = *(undefined4 *)(DAT_01d4db18 + 0x28);
              local_30 = &local_5c;
              local_40 = &local_30;
              local_3c = (undefined4 ******)&DAT_00000001;
              local_4c = 0;
              local_28 = (int *)&DAT_01d2ea4c;
              local_44 = (undefined4 *******)&DAT_0000001f;
              local_48 = (undefined4 ******)0x52fba5;
              local_5c = *(undefined4 *******)(DAT_01d4db18 + 0x1c);
              local_58 = *(undefined4 *******)(DAT_01d4db18 + 0x20);
              local_38 = (int *)(DAT_01d4db18 + 0x1c);
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_68,&local_40);
            }
          }
        }
        ppppppuVar2[0x1a] = pppppuVar12;
        ppppppuVar2[0x18] = (undefined4 *****)0x1;
        ppppppuVar2[0x19] = pppppuVar5;
        ppppppuVar2[0x1b] = pppppuVar5;
      }
      else {
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4db2c - 1 < 2 ||
             ((DAT_01d4db2c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4db24), cVar4 != '\0')))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4db24), iVar7 != 0)))) {
          if (*(undefined4 *******)(DAT_01d4db24 + 0x20) == (undefined4 ******)0x0) {
LAB_013ba2d4:
            puVar9 = &DAT_01cede1c;
            goto LAB_013ba2a4;
          }
          local_3c = &local_48;
          local_54 = *(uint *)(DAT_01d4db24 + 0x24);
          local_50 = *(undefined4 *)(DAT_01d4db24 + 0x28);
          local_60 = (int *)(DAT_01d4db24 + 0x1c);
          local_5c = (undefined4 ******)*local_60;
          local_40 = &local_5c;
          local_68 = &local_40;
          local_4c = 0;
          local_64 = (undefined4 ******)&DAT_00000001;
          local_38 = (int *)&DAT_01d2ea4c;
          local_44 = (undefined4 *******)&DAT_00000029;
          local_48 = (undefined4 ******)0x52fbb4;
          local_58 = *(undefined4 *******)(DAT_01d4db24 + 0x20);
          FUN_01aaaecc(DAT_01d4db24,&local_68);
          iVar7 = DAT_01d4db24;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_2c = *(undefined4 *******)(DAT_01d4db24 + 0x14);
            local_28 = *(int **)(DAT_01d4db24 + 0x18);
            local_30 = (undefined4 *******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_30);
            if (iVar6 != 0) {
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_68);
            }
          }
        }
        else {
          iVar7 = DAT_01d4db24;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_64 = *(undefined4 *******)(DAT_01d4db24 + 0x14);
            local_60 = *(int **)(DAT_01d4db24 + 0x18);
            local_68 = (undefined4 *******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_68);
            if (iVar6 != 0) {
              if (*(undefined4 *******)(DAT_01d4db24 + 0x20) == (undefined4 ******)0x0)
              goto LAB_013ba2d4;
              local_2c = &local_48;
              local_54 = *(uint *)(DAT_01d4db24 + 0x24);
              local_50 = *(undefined4 *)(DAT_01d4db24 + 0x28);
              local_30 = &local_5c;
              local_40 = &local_30;
              local_3c = (undefined4 ******)&DAT_00000001;
              local_4c = 0;
              local_28 = (int *)&DAT_01d2ea4c;
              local_44 = (undefined4 *******)&DAT_00000029;
              local_48 = (undefined4 ******)0x52fbb4;
              local_5c = *(undefined4 *******)(DAT_01d4db24 + 0x1c);
              local_58 = *(undefined4 *******)(DAT_01d4db24 + 0x20);
              local_38 = (int *)(DAT_01d4db24 + 0x1c);
              FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_68,&local_40);
            }
          }
        }
        iVar7 = FUN_0139f148(ppppppuVar2[99],ppppppuVar2[100],ppppppuVar2[0x1b],ppppppuVar2[0x1c]);
        *(undefined4 ******)(iVar7 + 0x9c) = pppppuVar12;
        *(undefined4 *)(iVar7 + 0x94) = 1;
        *(undefined4 ******)(iVar7 + 0x98) = pppppuVar5;
        ppppppuVar2[0x1b] = pppppuVar5;
      }
      ppppppuVar2[0x1c] = pppppuVar12;
    }
    else if (((DAT_01d50f88 == 0) &&
             ((DAT_01d4db38 - 1 < 2 ||
              ((DAT_01d4db38 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4db30), cVar4 != '\0')))))) &&
            (iVar7 = FUN_01aaa278(DAT_01d4db30), iVar7 != 0)) {
      if (*(undefined4 *******)(DAT_01d4db30 + 0x20) == (undefined4 ******)0x0) {
LAB_013ba2c8:
        puVar9 = &DAT_01cede2c;
LAB_013ba2a4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar9);
      }
      local_3c = &local_48;
      local_54 = *(uint *)(DAT_01d4db30 + 0x24);
      local_50 = *(undefined4 *)(DAT_01d4db30 + 0x28);
      local_60 = (int *)(DAT_01d4db30 + 0x1c);
      local_5c = (undefined4 ******)*local_60;
      local_40 = &local_5c;
      local_68 = &local_40;
      local_4c = 0;
      local_64 = (undefined4 ******)&DAT_00000001;
      local_38 = (int *)&DAT_01d2ea4c;
      local_44 = (undefined4 *******)&DAT_00000025;
      local_48 = (undefined4 ******)0x52fbc8;
      local_58 = *(undefined4 *******)(DAT_01d4db30 + 0x20);
      FUN_01aaaecc(DAT_01d4db30,&local_68);
      iVar7 = DAT_01d4db30;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 *******)(DAT_01d4db30 + 0x14);
        local_28 = *(int **)(DAT_01d4db30 + 0x18);
        local_30 = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_30);
        if (iVar6 != 0) {
          FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_30,&local_68);
        }
      }
    }
    else {
      iVar7 = DAT_01d4db30;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_64 = *(undefined4 *******)(DAT_01d4db30 + 0x14);
        local_60 = *(int **)(DAT_01d4db30 + 0x18);
        local_68 = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_68);
        if (iVar6 != 0) {
          if (*(undefined4 *******)(DAT_01d4db30 + 0x20) == (undefined4 ******)0x0)
          goto LAB_013ba2c8;
          local_2c = &local_48;
          local_54 = *(uint *)(DAT_01d4db30 + 0x24);
          local_50 = *(undefined4 *)(DAT_01d4db30 + 0x28);
          local_30 = &local_5c;
          local_40 = &local_30;
          local_3c = (undefined4 ******)&DAT_00000001;
          local_4c = 0;
          local_28 = (int *)&DAT_01d2ea4c;
          local_44 = (undefined4 *******)&DAT_00000025;
          local_48 = (undefined4 ******)0x52fbc8;
          local_5c = *(undefined4 *******)(DAT_01d4db30 + 0x1c);
          local_58 = *(undefined4 *******)(DAT_01d4db30 + 0x20);
          local_38 = (int *)(DAT_01d4db30 + 0x1c);
          FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_68,&local_40);
        }
      }
    }
    pppppuVar5 = ppppppuVar2[0x38];
    ppppppuVar2[0x38] = (undefined4 *****)0x0;
    if (pppppuVar5 != (undefined4 *****)0x0) {
      (*(code *)pppppuVar5[1])(ppppppuVar2[0x39]);
    }
  }
  FUN_00a97e8c(ppppppuVar2,uVar11);
  uVar3 = 5;
LAB_013ba1bc:
  *(undefined1 *)param_1 = uVar3;
  return;
}

