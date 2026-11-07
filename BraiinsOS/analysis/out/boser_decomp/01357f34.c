// FUN_01357f34 @ 01357f34 size=1212 calls_out=13 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01357f34(char *param_1,int param_2,undefined4 *param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 ****local_14c;
  code *local_148;
  undefined4 *local_144;
  undefined *local_140;
  undefined **local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 ****local_12c;
  undefined **local_128;
  undefined4 *local_124;
  undefined *local_120;
  undefined4 *****local_11c;
  undefined4 ***local_118;
  undefined **local_114;
  undefined1 *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 ***local_d8;
  int local_d4;
  undefined4 ***local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar9 = *param_4;
  iVar8 = param_4[1];
  iVar7 = param_4[2];
  iVar3 = FUN_01367cb8(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar8,iVar7);
  FUN_0137a160(&local_d8,iVar3 + 0x20);
  cVar2 = (char)local_d8;
  if ((char)local_d8 == '\x03') {
    piVar4 = (int *)FUN_01367c40(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar8,
                                 iVar7);
    if ((*piVar4 != 2 || piVar4[1] != 0) || (piVar4[2] == 0 && piVar4[3] == 0)) {
      FUN_01bed4e2(&local_d8,param_3,0xb0);
      local_118 = (undefined4 ***)*param_3;
      local_114 = (undefined **)param_3[1];
      local_110 = (undefined1 *)param_3[2];
      uStack_10c = param_3[3];
      uStack_108 = param_3[4];
      local_104 = param_3[5];
      uStack_100 = param_3[6];
      uStack_fc = param_3[7];
      uStack_f8 = param_3[8];
      uStack_f4 = param_3[9];
      local_f0 = param_3[10];
      uStack_ec = param_3[0xb];
      uStack_e8 = param_3[0xc];
      uStack_e4 = param_3[0xd];
      uStack_e0 = param_3[0xe];
      uStack_dc = param_3[0xf];
      FUN_008e1044(&uStack_98);
      iVar3 = FUN_01367cb8(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar8,iVar7);
      local_d0 = local_118;
      uStack_cc = local_114;
      local_c8 = local_110;
      uStack_c4 = uStack_10c;
      uStack_c0 = uStack_108;
      local_bc = local_104;
      uStack_b8 = uStack_100;
      uStack_b4 = uStack_fc;
      uStack_b0 = uStack_f8;
      uStack_ac = uStack_f4;
      local_a8 = local_f0;
      uStack_a4 = uStack_ec;
      uStack_a0 = uStack_e8;
      uStack_9c = uStack_e4;
      uStack_98 = uStack_e0;
      uStack_94 = uStack_dc;
      local_d8 = (undefined4 ***)0x5;
      local_d4 = 0;
      FUN_0138b32c(iVar3 + 0xb4,param_2 + 100,&local_d8);
      iVar3 = FUN_01367cb8(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar8,iVar7);
      iVar7 = *(int *)(iVar3 + 0x50);
      *(undefined4 *)(iVar3 + 0x50) = 0;
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar3 + 0x54));
      }
      *param_1 = '\x03';
      return;
    }
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4d0d0 - 1 < 2 ||
         ((DAT_01d4d0d0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d0c8), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4d0c8), iVar3 != 0)))) {
      puVar5 = (undefined4 *)(DAT_01d4d0c8 + 0x1c);
      local_d8 = (undefined4 ***)*puVar5;
      local_d4 = *(int *)(DAT_01d4d0c8 + 0x20);
      if (local_d4 == 0) {
LAB_013583d8:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce7414);
      }
      local_d0 = *(undefined4 ****)(DAT_01d4d0c8 + 0x24);
      uStack_cc = *(undefined4 *)(DAT_01d4d0c8 + 0x28);
      local_c8 = 0;
      iVar3 = FUN_01367c40(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar8,iVar7);
      local_13c = &local_120;
      local_120 = (undefined *)(iVar3 + 0xd4);
      local_128 = &local_140;
      local_12c = &local_d8;
      local_14c = &local_12c;
      local_148 = (code *)0x1;
      local_11c = (undefined4 *****)FUN_00b1c384;
      local_140 = &DAT_00579013;
      local_124 = (undefined4 *)&DAT_01d2ea4c;
      local_144 = puVar5;
      FUN_01aaaecc(DAT_01d4d0c8,&local_14c);
      iVar3 = DAT_01d4d0c8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_114 = *(undefined ***)(DAT_01d4d0c8 + 0x14);
        local_110 = *(undefined1 **)(DAT_01d4d0c8 + 0x18);
        local_118 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar5[3])(pcVar1,&local_118);
        if (iVar7 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_118,&local_14c);
        }
      }
    }
    else {
      iVar3 = DAT_01d4d0c8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_134 = *(undefined4 *)(DAT_01d4d0c8 + 0x14);
        local_130 = *(undefined4 *)(DAT_01d4d0c8 + 0x18);
        local_138 = 4;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar5[3])(pcVar1,&local_138);
        if (iVar7 != 0) {
          puVar6 = (undefined4 *)(DAT_01d4d0c8 + 0x1c);
          local_d8 = (undefined4 ***)*puVar6;
          local_d4 = *(int *)(DAT_01d4d0c8 + 0x20);
          if (local_d4 == 0) goto LAB_013583d8;
          local_d0 = *(undefined4 ****)(DAT_01d4d0c8 + 0x24);
          uStack_cc = *(undefined4 *)(DAT_01d4d0c8 + 0x28);
          local_c8 = 0;
          iVar7 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                               param_4[1],param_4[2]);
          local_11c = &local_14c;
          local_14c = (undefined4 ****)(iVar7 + 0xd4);
          local_114 = &local_120;
          local_118 = &local_d8;
          local_12c = &local_118;
          local_128 = (undefined **)&DAT_00000001;
          local_148 = FUN_00b1c384;
          local_120 = &DAT_00579013;
          local_110 = &DAT_01d2ea4c;
          local_124 = puVar6;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_138,&local_12c);
        }
      }
    }
    iVar3 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                         param_4[1],param_4[2]);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar3 + 0xd4);
    param_1[8] = '\x01';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0] = '\0';
    param_1[1] = '\x01';
  }
  else {
    FUN_01bed4e2(param_1 + 1,(uint)&local_d8 | 1,0x17);
    *param_1 = cVar2;
  }
  FUN_01834c18(param_3);
  return;
}

