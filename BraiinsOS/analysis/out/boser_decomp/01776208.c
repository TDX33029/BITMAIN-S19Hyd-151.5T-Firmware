// FUN_01776208 @ 01776208 size=1092 calls_out=16 calls_in=1
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_01776208(char *param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char cVar13;
  char local_a0 [24];
  int local_88;
  int *local_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  char local_70 [24];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int **local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined **local_3c;
  undefined1 *local_38;
  undefined *local_34;
  int *local_30;
  int local_2c;
  undefined1 *local_28;
  
  piVar12 = param_2 + 2;
  iVar10 = *piVar12;
  FUN_01933ff0(&local_88,*param_2 + 8);
  piVar2 = local_84;
  if (local_88 == 1) {
    local_3c = (undefined **)CONCAT31(local_3c._1_3_,(undefined1)local_80);
    local_40 = local_84;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01d1d434,&DAT_01d1d234);
  }
  uVar4 = local_80 & 0xff;
  FUN_01383464(&local_88,local_84 + 0xe);
  cVar13 = (char)local_88;
  if ((char)local_88 == '\x03') {
    if (piVar2[0x3a] == 0) {
      cVar13 = '\x05';
      if (iVar10 != 0) {
        iVar10 = param_2[3];
        iVar11 = param_2[4];
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4f6dc - 1 < 2 ||
             ((DAT_01d4f6dc != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4f6d4), cVar3 != '\0')))) &&
            (iVar6 = FUN_01aaa278(DAT_01d4f6d4), iVar6 != 0)))) {
          piVar9 = (int *)(DAT_01d4f6d4 + 0x1c);
          local_88 = *piVar9;
          local_84 = *(int **)(DAT_01d4f6d4 + 0x20);
          if (local_84 == (int *)0x0) {
LAB_01776638:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d244);
          }
          local_80 = *(uint *)(DAT_01d4f6d4 + 0x24);
          uStack_7c = *(undefined4 *)(DAT_01d4f6d4 + 0x28);
          uStack_78 = 0;
          local_2c = FUN_0139f0d0(piVar2[99],piVar2[100],iVar10,iVar11);
          local_30 = &local_2c;
          local_2c = local_2c + 0xe4;
          local_3c = &local_34;
          local_4c = &local_40;
          local_48 = 1;
          local_28 = &LAB_01a705e0;
          local_34 = &DAT_005af2b6;
          local_38 = &DAT_01d2ea4c;
          local_44 = piVar9;
          local_40 = &local_88;
          FUN_017f9f10(&local_4c);
        }
        else {
          iVar6 = DAT_01d4f6d4;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_54 = *(undefined4 *)(DAT_01d4f6d4 + 0x14);
            local_50 = *(undefined4 *)(DAT_01d4f6d4 + 0x18);
            local_58 = 5;
            DataMemoryBarrier(0xb);
            puVar8 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar8 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar5 = (*(code *)puVar8[3])(pcVar1,&local_58);
            if (iVar5 != 0) {
              piVar9 = (int *)(DAT_01d4f6d4 + 0x1c);
              local_88 = *piVar9;
              local_84 = *(int **)(DAT_01d4f6d4 + 0x20);
              if (local_84 == (int *)0x0) goto LAB_01776638;
              local_80 = *(uint *)(DAT_01d4f6d4 + 0x24);
              uStack_7c = *(undefined4 *)(DAT_01d4f6d4 + 0x28);
              uStack_78 = 0;
              local_2c = FUN_0139f0d0(piVar2[99],piVar2[100],iVar10,iVar11);
              local_30 = &local_2c;
              local_2c = local_2c + 0xe4;
              local_3c = &local_34;
              local_48 = 1;
              local_4c = &local_40;
              local_28 = &LAB_01a705e0;
              local_34 = &DAT_005af2b6;
              local_38 = &DAT_01d2ea4c;
              local_44 = piVar9;
              local_40 = &local_88;
              FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_58,&local_4c);
            }
          }
        }
        iVar6 = FUN_0139f0d0(piVar2[99],piVar2[100],iVar10,iVar11);
        if (*(char *)(iVar6 + 0xe4) != '\0') {
          uVar7 = FUN_0139f148(piVar2[99],piVar2[100],iVar10,iVar11);
          FUN_013bc270(uVar7,*param_3,param_3[1]);
          FUN_00a97e8c(piVar2,uVar4);
          cVar3 = '\x06';
          goto LAB_017765cc;
        }
      }
    }
    else {
      cVar13 = '\x03';
      local_a0[1] = 5;
    }
    FUN_00a97e8c(piVar2,uVar4);
  }
  else {
    FUN_01bed4e2((uint)local_70 | 1,(uint)&local_88 | 1,0x17);
    local_70[0] = cVar13;
    FUN_013b8db0(local_a0,local_70);
    FUN_00a97e8c(piVar2,uVar4);
    cVar3 = '\x06';
    cVar13 = local_a0[0];
    if (local_a0[0] == '\x06') goto LAB_017765cc;
  }
  if (cVar13 == '\x05') {
    if (*piVar12 != 0) {
      FUN_017721f4(piVar12);
    }
    *param_1 = '\x05';
    *piVar12 = 0;
    return;
  }
  FUN_01bed4e2(param_1 + 1,(uint)local_a0 | 1,0x17);
  cVar3 = cVar13;
LAB_017765cc:
  *param_1 = cVar3;
  return;
}

