// FUN_010c9320 @ 010c9320 size=868 calls_out=9 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_010c9320(char *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *local_f4;
  undefined *local_f0;
  char ***local_ec;
  char **local_e8;
  code *local_e4;
  undefined4 **local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 *local_b0;
  undefined **local_ac;
  undefined4 *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *local_50;
  undefined **local_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 ***local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*param_1 == '\0') && (*(int *)(param_1 + 0x10) != 0)) goto LAB_010c9574;
  local_f4 = param_1 + 0x18;
  if (*(uint *)(param_1 + 0x20) < 2) {
    pcVar6 = &DAT_00418645;
    if (*(uint *)(param_1 + 0x20) != 0) {
      pcVar6 = *(char **)(param_1 + 0x1c);
    }
    if (*pcVar6 != '/') goto LAB_010c9378;
  }
  else {
LAB_010c9378:
    if ((DAT_018d9130 < 4) && (DAT_018da544 != '\0')) {
      if (DAT_018da544 == '\x01') {
LAB_010c93e8:
        DataMemoryBarrier(0xb);
        pcVar6 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar5 = (**(code **)(puVar1 + 0x14))(pcVar6,DAT_018da53c);
        if (iVar5 == 0) goto LAB_010c9568;
      }
      else if (DAT_018da544 != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018da53c);
        if (cVar4 == '\0') goto LAB_010c9568;
        if (cVar4 != '\x02') goto LAB_010c93e8;
      }
      local_3c = DAT_018da53c;
      if (*(int *)(DAT_018da53c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01885198);
      }
      local_7c = *(undefined4 *)(DAT_018da53c + 0x20);
      local_78 = *(undefined4 *)(DAT_018da53c + 0x24);
      local_74 = *(undefined4 *)(DAT_018da53c + 0x28);
      local_b0 = &local_80;
      local_ac = &local_f0;
      local_ec = &local_e8;
      local_d8 = (undefined4 *)(DAT_018da53c + 0x1c);
      local_80 = (undefined4 **)*local_d8;
      local_e8 = &local_f4;
      local_e0 = &local_b0;
      local_40 = &local_e0;
      local_70 = 0;
      local_a8 = (undefined4 *)&DAT_018abb78;
      local_f0 = &DAT_005876da;
      local_e4 = FUN_010cc53c;
      local_dc = 1;
      local_4c = (undefined **)0x0;
      local_50 = (undefined4 *)0x1;
      DataMemoryBarrier(0xb);
      pcVar6 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar6 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar6 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar5 = (**(code **)(puVar1 + 0x28))(pcVar6,&local_50);
      if (iVar5 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar6,&local_50);
      }
    }
  }
LAB_010c9568:
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: authority_form with relative uri",0x95,
                 &DAT_018851a8);
  }
LAB_010c9574:
  local_98 = 0;
  local_a8 = (undefined4 *)0x0;
  local_b0 = (undefined4 *)CONCAT31(local_b0._1_3_,3);
  (*(code *)**(undefined4 **)(param_1 + 8))(&local_50,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc))
  ;
  local_3c = uStack_44;
  local_40 = (undefined4 ***)puStack_48;
  ppuVar3 = local_4c;
  puVar2 = local_50;
  local_a8 = local_50;
  uStack_a4 = local_4c;
  uStack_a0 = puStack_48;
  local_9c = uStack_44;
  local_50 = local_b0;
  local_4c = local_ac;
  puStack_48 = puVar2;
  uStack_44 = ppuVar3;
  uStack_38 = local_98;
  uStack_34 = uStack_94;
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  uStack_28 = uStack_88;
  FUN_010a2fe8(&local_80,&local_50);
  if ((char)local_80 == '\x03') {
    local_50 = (undefined4 *)CONCAT31(local_50._1_3_,local_80._1_1_);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("authority is validevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:292event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/client.rs:222"
                 ,0x12,&local_50,&DAT_01885284,&DAT_018851b8);
  }
  local_e0 = local_80;
  local_dc = local_7c;
  local_d8 = (undefined4 *)local_78;
  uStack_d4 = local_74;
  uStack_d0 = local_70;
  local_cc = local_6c;
  uStack_c8 = uStack_68;
  uStack_c4 = uStack_64;
  uStack_c0 = uStack_60;
  uStack_bc = uStack_5c;
  uStack_b8 = uStack_58;
  FUN_0145d5e0(param_1);
  *(undefined4 ***)param_1 = local_e0;
  *(undefined4 *)(param_1 + 4) = local_dc;
  *(undefined4 **)(param_1 + 8) = local_d8;
  *(undefined4 *)(param_1 + 0xc) = uStack_d4;
  *(undefined4 *)(param_1 + 0x10) = uStack_d0;
  *(undefined4 *)(param_1 + 0x14) = local_cc;
  *(undefined4 *)(param_1 + 0x18) = uStack_c8;
  *(undefined4 *)(param_1 + 0x1c) = uStack_c4;
  *(undefined4 *)(param_1 + 0x20) = uStack_c0;
  *(undefined4 *)(param_1 + 0x24) = uStack_bc;
  *(undefined4 *)(param_1 + 0x28) = uStack_b8;
  return;
}

