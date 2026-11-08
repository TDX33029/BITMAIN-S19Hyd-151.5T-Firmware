// FUN_01776770 @ 01776770 size=1176 calls_out=11 calls_in=1
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Removing unreachable block (ram,0x01776bf8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01776770(int param_1,code *param_2)

{
  char *pcVar1;
  code ***pppcVar2;
  char cVar3;
  int iVar4;
  code **ppcVar5;
  code *pcVar6;
  code **ppcVar7;
  undefined4 *puVar8;
  uint uVar9;
  code *local_84;
  code *****local_80;
  char *local_7c;
  undefined4 *local_78;
  code ****local_74;
  undefined **local_70;
  undefined4 *local_6c;
  code ***local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  code ***local_50;
  code **local_4c;
  code **local_48;
  code ***local_44;
  code ***local_40;
  undefined *local_3c;
  code ***local_38;
  code *local_34;
  code ****local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: size <= proto::MAX_WINDOW_SIZE",0x30,&DAT_01d1a250);
  }
  FUN_01933ff0(&local_48,param_1 + 8);
  pppcVar2 = local_44;
  if (local_48 == (code **)&DAT_00000001) {
    local_64 = CONCAT31(local_64._1_3_,local_40._0_1_);
    local_68 = local_44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_68,&DAT_01d1d434,&DAT_01d1d224);
  }
  uVar9 = (uint)local_40 & 0xff;
  local_84 = param_2;
  if (((DAT_01d50f88 == 0) && (cVar3 = FUN_01aaafa8(0x1d4d95c), cVar3 != '\0')) &&
     (iVar4 = FUN_01aaa278(&DAT_01cece24), iVar4 != 0)) {
    local_64 = 1;
    local_60 = 0x1d4d95c;
    local_5c = &DAT_01cec72c;
    local_78 = &DAT_01cece40;
    local_68 = (code ***)&DAT_01d2f7e0;
    local_70 = &local_54;
    local_4c = pppcVar2[0x17];
    local_74 = &local_68;
    local_38 = pppcVar2 + 0x2d;
    local_58 = 0;
    local_6c = (undefined4 *)&DAT_01d2ea4c;
    local_54 = &DAT_00582526;
    local_34 = FUN_012fd02c;
    local_7c = (char *)0x1;
    local_80 = &local_74;
    local_3c = &DAT_01380cd0;
    local_40 = &local_4c;
    local_48 = &local_84;
    local_44 = (code ***)FUN_012fd02c;
    local_50 = &local_48;
    FUN_01aaaecc(&DAT_01cece24,&local_80);
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = (undefined **)0x45cead;
      local_28 = (undefined1 *)0x18;
      local_30 = (code ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar8[3])(pcVar1,&local_30);
      if (iVar4 != 0) {
        FUN_01aaa328(&DAT_01cece24,pcVar1,puVar8[4],&local_30,&local_80);
      }
    }
  }
  else if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_7c = 
    "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
    ;
    local_78 = (undefined4 *)0x18;
    local_80 = (code *****)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar8[3])(pcVar1,&local_80);
    if (iVar4 != 0) {
      local_6c = &DAT_01cece40;
      local_68 = (code ***)&DAT_01d2f7e0;
      local_64 = 1;
      local_60 = 0x1d4d95c;
      local_5c = &DAT_01cec72c;
      local_30 = &local_68;
      local_2c = &local_54;
      local_58 = 0;
      local_4c = pppcVar2[0x17];
      local_28 = &DAT_01d2ea4c;
      local_34 = FUN_012fd02c;
      local_54 = &DAT_00582526;
      local_38 = pppcVar2 + 0x2d;
      local_3c = &DAT_01380cd0;
      local_40 = &local_4c;
      local_48 = &local_84;
      local_70 = (undefined **)&DAT_00000001;
      local_74 = (code ****)&local_30;
      local_44 = (code ***)FUN_012fd02c;
      local_50 = &local_48;
      FUN_01aaa328(&DAT_01cece24,pcVar1,puVar8[4],&local_80,&local_74);
    }
  }
  ppcVar5 = pppcVar2[0x17];
  pcVar6 = (code *)((int)ppcVar5 + (int)pppcVar2[0x2d]);
  if (!SCARRY4((int)ppcVar5,(int)pppcVar2[0x2d])) {
    if ((int)pcVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("negative Window",0xf,&DAT_01cf0d60);
    }
    if (pcVar6 < param_2) {
      iVar4 = (int)param_2 - (int)pcVar6;
      if (SCARRY4((int)ppcVar5,iVar4)) goto LAB_01776ae0;
    }
    else {
      iVar4 = -((int)pcVar6 - (int)param_2);
      if (SBORROW4((int)ppcVar5,(int)pcVar6 - (int)param_2)) goto LAB_01776ae0;
    }
    ppcVar5 = (code **)((int)ppcVar5 + iVar4);
    ppcVar7 = pppcVar2[0x16];
    pppcVar2[0x17] = ppcVar5;
    if (((int)ppcVar7 < (int)ppcVar5) && ((int)ppcVar7 / 2 <= (int)ppcVar5 - (int)ppcVar7)) {
      ppcVar5 = pppcVar2[0x38];
      pppcVar2[0x38] = (code **)0x0;
      if (ppcVar5 != (code **)0x0) {
        (*ppcVar5[1])(pppcVar2[0x39]);
      }
    }
  }
LAB_01776ae0:
  FUN_00a97e8c(pppcVar2,uVar9);
  return;
}

