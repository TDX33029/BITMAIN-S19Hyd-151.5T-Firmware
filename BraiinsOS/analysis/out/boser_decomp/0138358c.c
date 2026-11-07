// FUN_0138358c @ 0138358c size=868 calls_out=7 calls_in=2
// strings: h2::prot | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::prot | InvalidParamSegmentInvalidParamInvalidCatchAll | assertion failed: !frame.is_ack()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/settings.rs:145event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/settings.rs:121

undefined4 FUN_0138358c(uint *param_1,undefined4 *****param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  undefined4 ****ppppuVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 ****ppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 *****local_78;
  code *local_74;
  undefined4 *local_70;
  undefined *local_6c;
  undefined4 *****local_68;
  undefined4 ***local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ****local_58;
  undefined **local_54;
  undefined4 *local_50;
  undefined4 ***local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *****local_38;
  undefined4 *****local_34;
  undefined4 ****local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
  if (((uint)param_2[0xe] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !frame.is_ack()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/settings.rs:145event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/settings.rs:121"
                 ,0x21,&DAT_01ceaf04);
  }
  if (*param_1 < 2) {
    return 10;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d730 - 1 < 2 ||
       ((DAT_01d4d730 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d728), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d728), iVar3 != 0)))) {
    local_48 = *(int *)(DAT_01d4d728 + 0x20);
    if (local_48 == 0) {
LAB_013838d8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceaef4);
    }
    local_54 = &local_6c;
    local_44 = *(undefined4 *)(DAT_01d4d728 + 0x24);
    pppppuVar11 = &local_78;
    local_40 = *(undefined4 *)(DAT_01d4d728 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4d728 + 0x1c);
    local_4c = (undefined4 ***)*local_70;
    local_58 = &local_4c;
    local_78 = &local_58;
    local_74 = (code *)0x1;
    local_68 = &local_38;
    local_3c = 0;
    local_50 = (undefined4 *)&DAT_01d2ea4c;
    local_6c = &DAT_0059e52d;
    local_34 = (undefined4 *****)FUN_01381580;
    local_38 = param_2;
    FUN_01aaaecc(DAT_01d4d728,pppppuVar11);
    iVar3 = DAT_01d4d728;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01383870;
    local_2c = *(undefined4 ******)(DAT_01d4d728 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d728 + 0x18);
    local_30 = (undefined4 ****)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar9 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar8[3])(pcVar9,&local_30);
    if (iVar2 == 0) goto LAB_01383870;
    uVar5 = puVar8[4];
    ppppuVar4 = &local_30;
  }
  else {
    iVar3 = DAT_01d4d728;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01383870;
    local_60 = *(undefined4 *)(DAT_01d4d728 + 0x14);
    local_5c = *(undefined4 *)(DAT_01d4d728 + 0x18);
    local_64 = (undefined4 ***)0x5;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar9 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar8[3])(pcVar9,&local_64);
    if (iVar2 == 0) goto LAB_01383870;
    local_50 = (undefined4 *)(DAT_01d4d728 + 0x1c);
    local_4c = (undefined4 ***)*local_50;
    local_48 = *(int *)(DAT_01d4d728 + 0x20);
    if (local_48 == 0) goto LAB_013838d8;
    local_2c = &local_38;
    local_44 = *(undefined4 *)(DAT_01d4d728 + 0x24);
    local_40 = *(undefined4 *)(DAT_01d4d728 + 0x28);
    local_30 = &local_4c;
    local_58 = &local_30;
    local_3c = 0;
    local_54 = (undefined **)&DAT_00000001;
    local_34 = &local_78;
    local_28 = &DAT_01d2ea4c;
    pppppuVar11 = &local_58;
    local_38 = (undefined4 *****)&DAT_0059e52d;
    ppppuVar4 = &local_64;
    local_74 = FUN_01381580;
    uVar5 = puVar8[4];
    local_78 = param_2;
  }
  FUN_01aaa328(iVar3,pcVar9,uVar5,ppppuVar4,pppppuVar11);
LAB_01383870:
  *param_1 = 0;
  ppppuVar4 = param_2[1];
  ppppuVar6 = param_2[2];
  ppppuVar7 = param_2[3];
  ppppuVar10 = param_2[4];
  param_1[1] = (uint)*param_2;
  param_1[2] = (uint)ppppuVar4;
  param_1[3] = (uint)ppppuVar6;
  param_1[4] = (uint)ppppuVar7;
  param_1[5] = (uint)ppppuVar10;
  ppppuVar4 = param_2[6];
  ppppuVar6 = param_2[7];
  ppppuVar7 = param_2[8];
  ppppuVar10 = param_2[9];
  param_1[6] = (uint)param_2[5];
  param_1[7] = (uint)ppppuVar4;
  param_1[8] = (uint)ppppuVar6;
  param_1[9] = (uint)ppppuVar7;
  param_1[10] = (uint)ppppuVar10;
  ppppuVar4 = param_2[0xb];
  ppppuVar6 = param_2[0xc];
  ppppuVar7 = param_2[0xd];
  ppppuVar10 = param_2[0xe];
  param_1[0xb] = (uint)param_2[10];
  param_1[0xc] = (uint)ppppuVar4;
  param_1[0xd] = (uint)ppppuVar6;
  param_1[0xe] = (uint)ppppuVar7;
  param_1[0xf] = (uint)ppppuVar10;
  return 0xc;
}

