// FUN_01046744 @ 01046744 size=4212 calls_out=3 calls_in=0
// strings: ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer | ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer | ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer | ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_01046744(int *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *******pppppppuVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 ******ppppppuVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 ******local_84;
  int local_80;
  undefined1 *local_7c;
  undefined1 local_75;
  undefined4 *******local_74;
  undefined *local_70;
  undefined4 *******local_6c;
  int local_68;
  undefined4 *******local_64;
  undefined *puStack_60;
  undefined1 *puStack_5c;
  undefined1 local_55;
  undefined4 *******local_54;
  undefined *local_50;
  undefined4 *******local_4c;
  int iStack_48;
  undefined4 *******local_44;
  undefined *local_40;
  undefined4 ******local_3c;
  undefined1 local_35;
  undefined4 *******local_34;
  undefined *local_30;
  undefined4 *******local_2c;
  int iStack_28;
  
  iVar10 = *param_1;
  if (iVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010467b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar8;
  }
  ppppppuVar12 = (undefined4 ******)*param_2;
  iVar14 = param_2[1];
  pcVar9 = *(code **)(iVar14 + 0xc);
  iVar3 = (*pcVar9)(ppppppuVar12,&DAT_00569804,4);
  if (iVar3 != 0) {
    return 1;
  }
  puVar15 = (uint *)(param_2 + 2);
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar3 = (*pcVar9)(ppppppuVar12,"(",1);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = param_1[1];
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
    if (iVar3 != 0) {
      puVar11 = (undefined4 *)(iVar10 + 0xf4);
      iVar3 = iVar3 * 0xf0;
      bVar2 = false;
      do {
        uVar1 = uVar4 & 1;
        uVar4 = 1;
        if (uVar1 == 0) {
          pppppppuVar5 = (undefined4 *******)*param_2;
          puVar6 = (undefined *)param_2[1];
          puVar13 = puVar11 + -0x3b;
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            if (bVar2) {
              iVar10 = (**(code **)(puVar6 + 0xc))(pppppppuVar5,&DAT_0041950f,2);
              uVar4 = 1;
              if (iVar10 != 0) goto LAB_010468f8;
              pppppppuVar5 = (undefined4 *******)*param_2;
              puVar6 = (undefined *)param_2[1];
            }
            iVar10 = (**(code **)(puVar6 + 0xc))
                               (pppppppuVar5,
                                "ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer"
                                ,0xd);
            uVar4 = 1;
            if (iVar10 == 0) {
              if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a79,3);
                uVar4 = 1;
                if (iVar10 == 0) {
                  iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00415475,2);
                  uVar4 = 1;
                  if (iVar10 == 0) {
                    iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
                    uVar4 = 1;
                    if (iVar10 == 0) {
                      iVar10 = FUN_01053244(puVar13,param_2);
                      goto joined_r0x01046d44;
                    }
                  }
                }
              }
              else {
                iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7e,3);
                uVar4 = 1;
                if (iVar10 == 0) {
                  local_74 = (undefined4 *******)CONCAT31(local_74._1_3_,1);
                  local_54 = (undefined4 *******)*param_2;
                  local_2c = (undefined4 *******)*puVar15;
                  iStack_28 = param_2[3];
                  local_4c = &local_74;
                  local_50 = (undefined *)param_2[1];
                  local_34 = &local_54;
                  local_30 = &DAT_01880dc4;
                  iVar10 = FUN_00fb1f64(local_34,&DAT_00415475,2);
                  if (((iVar10 == 0) &&
                      (iVar10 = FUN_00fb1f64(&local_54,&DAT_00414a7c,2), iVar10 == 0)) &&
                     (iVar10 = FUN_01053244(puVar13,&local_34), iVar10 == 0)) {
                    iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
joined_r0x01046d44:
                    uVar4 = 1;
                    if (iVar10 == 0) {
                      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                        iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
                        uVar4 = 1;
                        if (iVar10 == 0) {
                          iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056715c,4);
                          uVar4 = 1;
                          if (iVar10 == 0) {
                            iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
                            uVar4 = 1;
                            if (iVar10 == 0) {
                              iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,param_2);
                              goto LAB_01046f48;
                            }
                          }
                        }
                      }
                      else {
                        local_2c = (undefined4 *******)*puVar15;
                        iStack_28 = param_2[3];
                        local_74._1_3_ = (undefined3)((uint)local_74 >> 8);
                        local_74 = (undefined4 *******)CONCAT31(local_74._1_3_,1);
                        local_54 = (undefined4 *******)*param_2;
                        local_50 = (undefined *)param_2[1];
                        local_4c = &local_74;
                        local_34 = &local_54;
                        local_30 = &DAT_01880dc4;
                        iVar10 = FUN_00fb1f64(local_34,&DAT_0056715c,4);
                        pppppppuVar5 = local_74;
                        puVar6 = local_70;
                        if (((iVar10 != 0) ||
                            (iVar10 = FUN_00fb1f64(&local_54,&DAT_00414a7c,2),
                            pppppppuVar5 = local_74, puVar6 = local_70, iVar10 != 0)) ||
                           (iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_34),
                           pppppppuVar5 = local_74, puVar6 = local_70, iVar10 != 0))
                        goto LAB_010468f4;
                        iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
LAB_01046f48:
                        uVar4 = 1;
                        if (iVar10 == 0) {
                          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
                            pcVar9 = *(code **)(param_2[1] + 0xc);
                            pcVar7 = " }";
                            pppppppuVar5 = (undefined4 *******)*param_2;
LAB_01046fb0:
                            uVar8 = 2;
                          }
                          else {
                            pppppppuVar5 = (undefined4 *******)*param_2;
                            uVar8 = 1;
                            pcVar9 = *(code **)(param_2[1] + 0xc);
                            pcVar7 = "}";
                          }
                          uVar4 = (*pcVar9)(pppppppuVar5,pcVar7,uVar8);
                        }
                      }
                    }
                  }
                  else {
                    uVar4 = 1;
                  }
                }
              }
            }
          }
          else {
            if (!bVar2) {
              iVar10 = (**(code **)(puVar6 + 0xc))(pppppppuVar5,&DAT_0041950e,1);
              if (iVar10 != 0) goto LAB_010468f8;
              pppppppuVar5 = (undefined4 *******)*param_2;
              puVar6 = (undefined *)param_2[1];
            }
            local_50 = &DAT_01880dc4;
            local_84 = (undefined4 ******)CONCAT31(local_84._1_3_,1);
            local_4c = (undefined4 *******)*puVar15;
            iStack_48 = param_2[3];
            local_3c = &local_84;
            local_54 = &local_44;
            local_44 = pppppppuVar5;
            local_40 = puVar6;
            iVar10 = FUN_00fb1f64(local_54,
                                  "ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer"
                                  ,0xd);
            pppppppuVar5 = local_74;
            puVar6 = local_70;
            if (iVar10 == 0) {
              if (((uint)local_4c & 0x800000) == 0) {
                iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a79,3);
                pppppppuVar5 = local_74;
                puVar6 = local_70;
                if (((iVar10 == 0) &&
                    (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00415475,2),
                    pppppppuVar5 = local_74, puVar6 = local_70, iVar10 == 0)) &&
                   (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7c,2),
                   pppppppuVar5 = local_74, puVar6 = local_70, iVar10 == 0)) {
                  iVar10 = FUN_01053244(puVar13,&local_54);
                  pppppppuVar5 = local_74;
                  puVar6 = local_70;
                  local_74 = local_54;
                  local_70 = local_50;
joined_r0x01046c8c:
                  local_54 = local_74;
                  local_50 = local_70;
                  if (iVar10 == 0) {
                    if (((uint)local_4c & 0x800000) == 0) {
                      puVar13 = (undefined4 *)(local_70 + 0xc);
                      local_74 = pppppppuVar5;
                      local_70 = puVar6;
                      iVar10 = (*(code *)*puVar13)(local_54,&DAT_0041950f,2);
                      pppppppuVar5 = local_74;
                      puVar6 = local_70;
                      if (((iVar10 == 0) &&
                          (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_0056715c,4),
                          pppppppuVar5 = local_74, puVar6 = local_70, iVar10 == 0)) &&
                         (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7c,2),
                         pppppppuVar5 = local_74, puVar6 = local_70, iVar10 == 0)) {
                        iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_54);
LAB_01046e78:
                        pppppppuVar5 = local_74;
                        puVar6 = local_70;
                        if (iVar10 == 0) {
                          if (((uint)local_4c & 0x800000) == 0) {
                            uVar8 = 2;
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = " }";
                          }
                          else {
                            uVar8 = 1;
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = "}";
                          }
                          iVar10 = (*pcVar9)(local_54,pcVar7,uVar8);
                          pppppppuVar5 = local_74;
                          puVar6 = local_70;
                          if (iVar10 == 0) {
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = &DAT_00414a81;
                            pppppppuVar5 = local_54;
                            goto LAB_01046fb0;
                          }
                        }
                      }
                    }
                    else {
                      local_64._1_3_ = (undefined3)((uint)local_64 >> 8);
                      local_64 = (undefined4 *******)CONCAT31(local_64._1_3_,1);
                      local_6c = &local_64;
                      local_34 = &local_74;
                      local_30 = &DAT_01880dc4;
                      local_2c = local_4c;
                      iStack_28 = iStack_48;
                      iVar10 = FUN_00fb1f64(local_34,&DAT_0056715c,4);
                      pppppppuVar5 = local_74;
                      puVar6 = local_70;
                      if (((iVar10 == 0) &&
                          (iVar10 = FUN_00fb1f64(&local_74,&DAT_00414a7c,2), pppppppuVar5 = local_74
                          , puVar6 = local_70, iVar10 == 0)) &&
                         (iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_34),
                         pppppppuVar5 = local_74, puVar6 = local_70, iVar10 == 0)) {
                        iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                        goto LAB_01046e78;
                      }
                    }
                  }
                }
              }
              else {
                iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7e,3);
                pppppppuVar5 = local_74;
                puVar6 = local_70;
                if (iVar10 == 0) {
                  local_64 = (undefined4 *******)CONCAT31(local_64._1_3_,1);
                  local_2c = local_4c;
                  iStack_28 = iStack_48;
                  local_6c = &local_64;
                  local_74 = local_54;
                  local_70 = local_50;
                  local_34 = &local_74;
                  local_30 = &DAT_01880dc4;
                  iVar10 = FUN_00fb1f64(local_34,&DAT_00415475,2);
                  pppppppuVar5 = local_74;
                  puVar6 = local_70;
                  if (((iVar10 == 0) &&
                      (iVar10 = FUN_00fb1f64(&local_74,&DAT_00414a7c,2), pppppppuVar5 = local_74,
                      puVar6 = local_70, iVar10 == 0)) &&
                     (iVar10 = FUN_01053244(puVar13,&local_34), pppppppuVar5 = local_74,
                     puVar6 = local_70, iVar10 == 0)) {
                    iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                    pppppppuVar5 = local_74;
                    puVar6 = local_70;
                    local_74 = local_54;
                    local_70 = local_50;
                    goto joined_r0x01046c8c;
                  }
                }
              }
            }
LAB_010468f4:
            local_70 = puVar6;
            local_74 = pppppppuVar5;
            uVar4 = 1;
          }
        }
LAB_010468f8:
        puVar11 = puVar11 + 0x3c;
        iVar3 = iVar3 + -0xf0;
        bVar2 = true;
      } while (iVar3 != 0);
    }
    if (uVar4 != 0) {
      return 1;
    }
    iVar10 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  else {
    iVar3 = (*pcVar9)(ppppppuVar12,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_7c = &local_75;
    local_6c = (undefined4 *******)*puVar15;
    local_68 = param_2[3];
    local_75 = 1;
    local_74 = &local_84;
    local_70 = &DAT_01880dc4;
    iVar3 = param_1[1];
    local_84 = ppppppuVar12;
    local_80 = iVar14;
    uVar4 = FUN_00fb1f64(local_74,&DAT_00418df9,1);
    if (iVar3 != 0) {
      puVar11 = (undefined4 *)(iVar10 + 0xf4);
      iVar3 = iVar3 * 0xf0;
      bVar2 = false;
      do {
        uVar1 = uVar4 & 1;
        uVar4 = 1;
        if (uVar1 == 0) {
          puVar13 = puVar11 + -0x3b;
          if (((uint)local_6c & 0x800000) == 0) {
            if (bVar2) {
              iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_0041950f,2);
              uVar4 = 1;
              if (iVar10 != 0) goto LAB_01047014;
            }
            iVar10 = (**(code **)(local_70 + 0xc))
                               (local_74,
                                "ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer"
                                ,0xd);
            uVar4 = 1;
            if (iVar10 == 0) {
              if (((uint)local_6c & 0x800000) == 0) {
                iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00414a79,3);
                uVar4 = 1;
                if (iVar10 == 0) {
                  iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00415475,2);
                  uVar4 = 1;
                  if (iVar10 == 0) {
                    iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00414a7c,2);
                    uVar4 = 1;
                    if (iVar10 == 0) {
                      iVar10 = FUN_01053244(puVar13,&local_74);
                      goto joined_r0x01047488;
                    }
                  }
                }
              }
              else {
                iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00414a7e,3);
                uVar4 = 1;
                if (iVar10 == 0) {
                  local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,1);
                  local_2c = local_6c;
                  iStack_28 = local_68;
                  local_4c = &local_44;
                  local_54 = local_74;
                  local_50 = local_70;
                  local_34 = &local_54;
                  local_30 = &DAT_01880dc4;
                  iVar10 = FUN_00fb1f64(local_34,&DAT_00415475,2);
                  if (((iVar10 == 0) &&
                      (iVar10 = FUN_00fb1f64(&local_54,&DAT_00414a7c,2), iVar10 == 0)) &&
                     (iVar10 = FUN_01053244(puVar13,&local_34), iVar10 == 0)) {
                    iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
joined_r0x01047488:
                    uVar4 = 1;
                    if (iVar10 == 0) {
                      if (((uint)local_6c & 0x800000) == 0) {
                        iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_0041950f,2);
                        uVar4 = 1;
                        if (iVar10 == 0) {
                          iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_0056715c,4);
                          uVar4 = 1;
                          if (iVar10 == 0) {
                            iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00414a7c,2);
                            uVar4 = 1;
                            if (iVar10 == 0) {
                              iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_74);
                              goto LAB_010475c4;
                            }
                          }
                        }
                      }
                      else {
                        local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
                        local_44 = (undefined4 *******)CONCAT31(local_44._1_3_,1);
                        local_4c = &local_44;
                        local_34 = &local_54;
                        local_30 = &DAT_01880dc4;
                        local_54 = local_74;
                        local_50 = local_70;
                        local_2c = local_6c;
                        iStack_28 = local_68;
                        iVar10 = FUN_00fb1f64(local_34,&DAT_0056715c,4);
                        if (((iVar10 != 0) ||
                            (iVar10 = FUN_00fb1f64(&local_54,&DAT_00414a7c,2), iVar10 != 0)) ||
                           (iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_34), iVar10 != 0))
                        goto LAB_01047010;
                        iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
LAB_010475c4:
                        uVar4 = 1;
                        if (iVar10 == 0) {
                          pppppppuVar5 = local_74;
                          if (((uint)local_6c & 0x800000) == 0) {
                            pcVar9 = *(code **)(local_70 + 0xc);
                            pcVar7 = " }";
LAB_01047718:
                            uVar8 = 2;
                          }
                          else {
                            uVar8 = 1;
                            pcVar9 = *(code **)(local_70 + 0xc);
                            pcVar7 = "}";
                          }
                          uVar4 = (*pcVar9)(pppppppuVar5,pcVar7,uVar8);
                        }
                      }
                    }
                  }
                  else {
                    uVar4 = 1;
                  }
                }
              }
            }
          }
          else if ((bVar2) ||
                  (iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_0041950e,1), iVar10 == 0)) {
            local_50 = &DAT_01880dc4;
            local_55 = 1;
            local_4c = local_6c;
            iStack_48 = local_68;
            puStack_5c = &local_55;
            local_54 = &local_64;
            local_64 = local_74;
            puStack_60 = local_70;
            iVar10 = FUN_00fb1f64(local_54,
                                  "ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer"
                                  ,0xd);
            if (iVar10 == 0) {
              if (((uint)local_4c & 0x800000) == 0) {
                iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a79,3);
                if (((iVar10 == 0) &&
                    (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00415475,2), iVar10 == 0))
                   && (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7c,2), iVar10 == 0
                      )) {
                  iVar10 = FUN_01053244(puVar13,&local_54);
joined_r0x010473cc:
                  if (iVar10 == 0) {
                    if (((uint)local_4c & 0x800000) == 0) {
                      iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_0041950f,2);
                      if (((iVar10 == 0) &&
                          (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_0056715c,4),
                          iVar10 == 0)) &&
                         (iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7c,2),
                         iVar10 == 0)) {
                        iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_54);
LAB_01047694:
                        if (iVar10 == 0) {
                          if (((uint)local_4c & 0x800000) == 0) {
                            uVar8 = 2;
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = " }";
                          }
                          else {
                            uVar8 = 1;
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = "}";
                          }
                          iVar10 = (*pcVar9)(local_54,pcVar7,uVar8);
                          if (iVar10 == 0) {
                            pcVar9 = *(code **)(local_50 + 0xc);
                            pcVar7 = &DAT_00414a81;
                            pppppppuVar5 = local_54;
                            goto LAB_01047718;
                          }
                        }
                      }
                    }
                    else {
                      local_35 = 1;
                      local_3c = (undefined4 ******)&local_35;
                      local_34 = &local_44;
                      local_30 = &DAT_01880dc4;
                      local_44 = local_54;
                      local_40 = local_50;
                      local_2c = local_4c;
                      iStack_28 = iStack_48;
                      iVar10 = FUN_00fb1f64(local_34,&DAT_0056715c,4);
                      if (((iVar10 == 0) &&
                          (iVar10 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar10 == 0)) &&
                         (iVar10 = FUN_0104cd34(puVar11[-1] + 8,*puVar11,&local_34), iVar10 == 0)) {
                        iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                        goto LAB_01047694;
                      }
                    }
                  }
                }
              }
              else {
                iVar10 = (**(code **)(local_50 + 0xc))(local_54,&DAT_00414a7e,3);
                if (iVar10 == 0) {
                  local_35 = 1;
                  local_2c = local_4c;
                  iStack_28 = iStack_48;
                  local_3c = (undefined4 ******)&local_35;
                  local_44 = local_54;
                  local_40 = local_50;
                  local_34 = &local_44;
                  local_30 = &DAT_01880dc4;
                  iVar10 = FUN_00fb1f64(local_34,&DAT_00415475,2);
                  if (((iVar10 == 0) &&
                      (iVar10 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar10 == 0)) &&
                     (iVar10 = FUN_01053244(puVar13,&local_34), iVar10 == 0)) {
                    iVar10 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
                    goto joined_r0x010473cc;
                  }
                }
              }
            }
LAB_01047010:
            uVar4 = 1;
          }
        }
LAB_01047014:
        puVar11 = puVar11 + 0x3c;
        iVar3 = iVar3 + -0xf0;
        bVar2 = true;
      } while (iVar3 != 0);
    }
    if ((uVar4 != 0) ||
       (iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00418ec5,1), iVar10 != 0)) {
      return 1;
    }
    iVar10 = (**(code **)(local_70 + 0xc))(local_74,&DAT_00414a81,2);
  }
  if (iVar10 == 0) {
    uVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar8;
  }
  return 1;
}

