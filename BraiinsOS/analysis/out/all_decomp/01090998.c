// FUN_01090998 @ 01090998 size=888 calls_out=3 calls_in=1
// strings: ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer | rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | dns_class | Record | name_labels | rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer.

byte FUN_01090998(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_54;
  undefined4 *local_50;
  byte local_4c;
  byte local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  local_54 = param_1 + 0xe8;
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,
                    "ForwardNSDatasoa_serialimmediatesoa_minimumtype_bit_mapsregexpreplacementhickory_resolver::resolver/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hickory-resolver-0.25.2/src/resolver.rs:102issuer_criticalreserved_flagstagraw_tagraw_valueIssuer"
                    ,0xd);
  bVar1 = 1;
  local_50 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00415475,2);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_38 = (undefined4 *)(param_1 + 0x48);
            bVar1 = FUN_00fb34b0(param_2,"Record",6,"name_labels",0xb,param_1,FUN_0103cee8,
                                 "dns_class",9,param_1 + 0x44,FUN_007227c0,"ttl",3,param_1 + 0xe4,
                                 FUN_007883b8,
                                 "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                                 ,5,&local_38,FUN_01095888);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_48 = *param_2;
        local_44 = param_2[1];
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_40 = &local_39;
        local_38 = &local_48;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_38,&DAT_00415475,2);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_48,&DAT_00414a7c,2), iVar2 == 0)) {
          local_28 = param_1 + 0x48;
          iVar2 = FUN_00fb34b0(&local_38,"Record",6,"name_labels",0xb,param_1,FUN_0103cee8,
                               "dns_class",9,param_1 + 0x44,FUN_007227c0,"ttl",3,param_1 + 0xe4,
                               FUN_007883b8,
                               "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                               ,5,&local_28,FUN_01095888);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_4b = 1;
  local_4c = bVar1;
  FUN_00fb2258(&local_50,&DAT_0056715c,4,&local_54,FUN_01088c48);
  if (local_4b != 1 || (local_4c & 1) != 0) {
    return (local_4b | local_4c) & 1;
  }
  if ((*(byte *)((int)local_50 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_50[1] + 0xc))(*local_50," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_50[1] + 0xc))(*local_50,"}",1);
  return bVar1 & 1;
}

