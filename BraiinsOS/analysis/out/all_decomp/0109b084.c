// FUN_0109b084 @ 0109b084 size=672 calls_out=2 calls_in=0
// strings: rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | Record | name_labels | dns_class | rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer. | Record

undefined4 FUN_0109b084(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0109b0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar4;
  }
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar2 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar2)(uVar4,&DAT_00569804,4);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar4,"(",1);
      if (iVar1 == 0) {
        local_38 = (undefined4 *)(iVar3 + 0x44);
        iVar3 = FUN_00fb34b0(param_2,"Record",6,"name_labels",0xb,iVar3,FUN_0103cee8,"dns_class",9,
                             iVar3 + 0xe0,FUN_007227c0,"ttl",3,iVar3 + 0xe4,FUN_007883b8,
                             "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                             ,5,&local_38,FUN_0109077c);
        if (iVar3 == 0) {
          uVar4 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_0109b300:
          uVar4 = (*pcVar2)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
    }
    else {
      iVar1 = (*pcVar2)(uVar4,"(\n",2);
      if (iVar1 == 0) {
        local_40 = &local_39;
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_28 = iVar3 + 0x44;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        local_38 = &local_48;
        local_48 = uVar4;
        local_44 = iVar5;
        iVar3 = FUN_00fb34b0(&local_38,"Record",6,"name_labels",0xb,iVar3,FUN_0103cee8,"dns_class",9
                             ,iVar3 + 0xe0,FUN_007227c0,"ttl",3,iVar3 + 0xe4,FUN_007883b8,
                             "rdataFormErrNotImpRefusedYXRRSetNXRRSetNotAuthNotZoneBADVERSBADSIGBADKEYBADTIMEBADMODEBADNAMEBADALGBADCOOKIEargument `ptr` is mis-aligned for `N` tag bits and could be parsed as marked `null` pointer."
                             ,5,&local_28,FUN_0109077c);
        if ((iVar3 == 0) &&
           (iVar3 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2), iVar3 == 0))
        goto LAB_0109b300;
      }
    }
  }
  return 1;
}

