// FUN_01088c48 @ 01088c48 size=1224 calls_out=2 calls_in=0
// strings: rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | name_labels | Record | dns_class | rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | name_labels

undefined4 FUN_01088c48(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar5 = *(int *)*param_1;
  iVar6 = ((int *)*param_1)[1];
  uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar6 != 0) {
    iVar6 = iVar6 * 0xe8;
    bVar7 = uVar2 == 0;
    uVar2 = 1;
    if (bVar7) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        local_38 = (undefined4 *)(iVar5 + 0x50);
        uVar2 = FUN_00fb34b0(param_2,"Record",6,"name_labels",0xb,iVar5 + 8,FUN_0103cee8,"dns_class"
                             ,9,iVar5 + 0x4c,FUN_007227c0,"ttl",3,iVar5 + 0xec,FUN_007883b8,
                             "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                             ,5,&local_38,FUN_01095888);
      }
      else {
        uVar2 = 1;
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
        if (iVar3 == 0) {
          local_48 = *param_2;
          local_44 = param_2[1];
          uVar2 = 1;
          local_30 = param_2[2];
          local_38 = &local_48;
          local_2c = param_2[3];
          local_40 = &local_39;
          local_34 = &DAT_01880dc4;
          local_28 = iVar5 + 0x50;
          local_39 = 1;
          iVar3 = FUN_00fb34b0(&local_38,"Record",6,"name_labels",0xb,iVar5 + 8,FUN_0103cee8,
                               "dns_class",9,iVar5 + 0x4c,FUN_007227c0,"ttl",3,iVar5 + 0xec,
                               FUN_007883b8,
                               "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                               ,5,&local_28,FUN_01095888);
          if (iVar3 == 0) {
            uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
          }
        }
      }
    }
    if (iVar6 != 0xe8) {
      iVar5 = iVar5 + 0xf0;
      iVar6 = iVar6 + -0xe8;
      do {
        uVar1 = uVar2 & 1;
        uVar2 = 1;
        if (uVar1 == 0) {
          if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
            iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
            uVar2 = 1;
            if (iVar3 == 0) {
              local_38 = (undefined4 *)(iVar5 + 0x48);
              uVar2 = FUN_00fb34b0(param_2,"Record",6,"name_labels",0xb,iVar5,FUN_0103cee8,
                                   "dns_class",9,iVar5 + 0x44,FUN_007227c0,"ttl",3,iVar5 + 0xe4,
                                   FUN_007883b8,
                                   "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                                   ,5,&local_38,FUN_01095888);
            }
          }
          else {
            local_48 = *param_2;
            local_44 = param_2[1];
            local_39 = 1;
            local_30 = param_2[2];
            local_2c = param_2[3];
            local_40 = &local_39;
            local_34 = &DAT_01880dc4;
            local_38 = &local_48;
            local_28 = iVar5 + 0x48;
            iVar3 = FUN_00fb34b0(&local_38,"Record",6,"name_labels",0xb,iVar5,FUN_0103cee8,
                                 "dns_class",9,iVar5 + 0x44,FUN_007227c0,"ttl",3,iVar5 + 0xe4,
                                 FUN_007883b8,
                                 "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                                 ,5,&local_28,FUN_01095888);
            if (iVar3 == 0) {
              uVar2 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
            }
            else {
              uVar2 = 1;
            }
          }
        }
        iVar5 = iVar5 + 0xe8;
        iVar6 = iVar6 + -0xe8;
      } while (iVar6 != 0);
    }
  }
  uVar4 = 1;
  if (uVar2 == 0) {
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar4;
}

