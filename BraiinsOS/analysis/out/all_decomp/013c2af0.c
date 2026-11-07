// FUN_013c2af0 @ 013c2af0 size=1192 calls_out=3 calls_in=1
// strings: RegexInfoI | props | props_union | confignfastride2start_mapclassesquitsetcache_capacity | Configutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity | confignfastride2start_mapclassesquitsetcache_capacity

byte FUN_013c2af0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int local_d4;
  undefined4 *local_d0;
  byte local_cc;
  byte local_cb;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 local_b9;
  undefined4 *local_b8;
  undefined *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a4;
  undefined *local_a0;
  int local_9c;
  undefined *local_98;
  int local_94;
  undefined *local_90;
  int local_8c;
  undefined *local_88;
  int local_84;
  undefined *local_80;
  int local_7c;
  undefined *local_78;
  int local_74;
  undefined *local_70;
  int local_6c;
  undefined *local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  undefined *local_58;
  int local_54;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  
  iVar5 = *param_1;
  uVar3 = *param_2;
  local_d4 = iVar5 + 0x58;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(uVar3,"RegexInfoI",10);
  bVar1 = 1;
  local_d0 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar3,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))
                          (*param_2,"confignfastride2start_mapclassesquitsetcache_capacity",6);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_2c = &local_b8;
            local_34 = iVar5 + 0x49;
            local_3c = iVar5 + 0x48;
            local_44 = iVar5 + 0x47;
            local_4c = iVar5 + 0x28;
            local_54 = iVar5 + 0x20;
            local_5c = iVar5 + 0x46;
            local_64 = iVar5 + 0x45;
            local_74 = iVar5 + 0x18;
            local_7c = iVar5 + 0x10;
            local_84 = iVar5 + 0x4a;
            local_8c = iVar5 + 0x30;
            local_94 = iVar5 + 0x44;
            local_9c = iVar5 + 0x43;
            local_a4 = iVar5 + 0x42;
            local_28 = &DAT_01894070;
            local_68 = &DAT_01893fd8;
            local_30 = &DAT_01893fb8;
            local_38 = &DAT_01893fb8;
            local_40 = &DAT_01893fb8;
            local_58 = &DAT_01893fb8;
            local_60 = &DAT_01893fb8;
            local_90 = &DAT_01893fb8;
            local_98 = &DAT_01893fb8;
            local_b8 = (undefined4 *)(iVar5 + 0x40);
            local_48 = &DAT_01893fe8;
            local_50 = &DAT_01893fe8;
            local_70 = &DAT_01893fe8;
            local_78 = &DAT_01893fe8;
            local_80 = &DAT_01894060;
            local_88 = &DAT_01893fa8;
            local_a0 = &DAT_01893f98;
            local_6c = iVar5 + 8;
            bVar1 = FUN_00fb36b8(param_2,
                                 "Configutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity"
                                 ,6,&DAT_01894080,0x10,&local_a4,0x10);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar3,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_c8 = *param_2;
        local_c4 = param_2[1];
        local_b0 = param_2[2];
        local_ac = param_2[3];
        local_c0 = &local_b9;
        local_b8 = &local_c8;
        local_b9 = 1;
        local_b4 = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_b8,"confignfastride2start_mapclassesquitsetcache_capacity",6);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_c8,&DAT_00414a7c,2), iVar2 == 0)) {
          local_2c = &local_a8;
          local_34 = iVar5 + 0x49;
          local_3c = iVar5 + 0x48;
          local_44 = iVar5 + 0x47;
          local_4c = iVar5 + 0x28;
          local_54 = iVar5 + 0x20;
          local_5c = iVar5 + 0x46;
          local_64 = iVar5 + 0x45;
          local_74 = iVar5 + 0x18;
          local_7c = iVar5 + 0x10;
          local_84 = iVar5 + 0x4a;
          local_8c = iVar5 + 0x30;
          local_94 = iVar5 + 0x44;
          local_9c = iVar5 + 0x43;
          local_a4 = iVar5 + 0x42;
          local_28 = &DAT_01894070;
          local_68 = &DAT_01893fd8;
          local_30 = &DAT_01893fb8;
          local_38 = &DAT_01893fb8;
          local_40 = &DAT_01893fb8;
          local_58 = &DAT_01893fb8;
          local_60 = &DAT_01893fb8;
          local_90 = &DAT_01893fb8;
          local_98 = &DAT_01893fb8;
          local_a8 = (undefined4 *)(iVar5 + 0x40);
          local_48 = &DAT_01893fe8;
          local_50 = &DAT_01893fe8;
          local_70 = &DAT_01893fe8;
          local_78 = &DAT_01893fe8;
          local_80 = &DAT_01894060;
          local_88 = &DAT_01893fa8;
          local_a0 = &DAT_01893f98;
          local_6c = iVar5 + 8;
          iVar2 = FUN_00fb36b8(&local_b8,
                               "Configutf8_emptyautoprewhich_capturesnfa_size_limitonepass_size_limithybrid_cache_capacity"
                               ,6,&DAT_01894080,0x10,&local_a4,0x10);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_b4 + 0xc))(local_b8,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_cb = 1;
  local_cc = bVar1;
  uVar3 = FUN_00fb2258(&local_d0,"props",5,iVar5 + 0x4c,FUN_01360ccc);
  FUN_00fb2258(uVar3,"props_union",0xb,&local_d4,FUN_013c301c);
  if (local_cb != 1 || (local_cc & 1) != 0) {
    return (local_cb | local_cc) & 1;
  }
  if ((*(byte *)((int)local_d0 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_d0[1] + 0xc))(*local_d0," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_d0[1] + 0xc))(*local_d0,"}",1);
  return bVar1 & 1;
}

