// FUN_013d08c8 @ 013d08c8 size=644 calls_out=6 calls_in=0
// strings: SubnetExpireKeepalivePGPIPKIXISPKIACPKIXIACPKIXURIOIDExperimentalRawSha256Sha512PrivateRSAMD5ECCRSASHA1PRIVATEDNSPRIVATEOIDDSANSEC3SHA1RSASHA256RSASHA512ECCGOSTECDSAP256SHA256ECDSAP384SHA384SM2SM3ECCGOST12PkixTaPkixEeDaneTaDaneEe

undefined4 FUN_013d08c8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  uint *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  char *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  pcVar3 = (char *)*param_1;
  if (*pcVar3 != '\x01') {
    local_34 = pcVar3 + 1;
    uVar6 = FUN_013032f4(param_2,
                         "SubnetExpireKeepalivePGPIPKIXISPKIACPKIXIACPKIXURIOIDExperimentalRawSha256Sha512PrivateRSAMD5ECCRSASHA1PRIVATEDNSPRIVATEOIDDSANSEC3SHA1RSASHA256RSASHA512ECCGOSTECDSAP256SHA256ECDSAP384SHA384SM2SM3ECCGOST12PkixTaPkixEeDaneTaDaneEe"
                         ,6,&local_34,FUN_013cfe44);
    goto LAB_013d0940;
  }
  uVar6 = *param_2;
  pcVar2 = *(code **)(param_2[1] + 0xc);
  iVar1 = (*pcVar2)(uVar6,&DAT_0052e437,7);
  if (iVar1 == 0) {
    pcVar5 = pcVar3 + 2;
    puVar4 = param_2 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*puVar4 & 0x2000000) == 0) {
        if ((*puVar4 & 0x4000000) == 0) {
          iVar1 = FUN_012fcf18(pcVar5,param_2);
        }
        else {
          iVar1 = FUN_012fa300(pcVar5,param_2);
        }
      }
      else {
        iVar1 = FUN_012fd958(pcVar5,param_2);
      }
LAB_013d0a74:
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00533bc1,2);
        if (iVar1 != 0) goto LAB_013d0908;
        iVar1 = FUN_018a670c(*(undefined4 *)(pcVar3 + 8),*(undefined4 *)(pcVar3 + 0xc),param_2);
      }
      else {
        local_2c = *puVar4;
        local_28 = param_2[3];
        local_3c = &local_35;
        local_34 = (char *)&uStack_44;
        uStack_44 = *param_2;
        uStack_40 = param_2[1];
        local_30 = &DAT_01ce45f8;
        local_35 = 1;
        iVar1 = FUN_018a670c(*(undefined4 *)(pcVar3 + 8),*(undefined4 *)(pcVar3 + 0xc),&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
      goto LAB_013d0940;
    }
    iVar1 = (*pcVar2)(uVar6,"(\n",2);
    if (iVar1 == 0) {
      uStack_44 = *param_2;
      uStack_40 = param_2[1];
      local_3c = &local_35;
      local_30 = &DAT_01ce45f8;
      local_34 = (char *)&uStack_44;
      local_35 = 1;
      local_2c = *puVar4;
      local_28 = param_2[3];
      if ((local_2c & 0x2000000) == 0) {
        if ((local_2c & 0x4000000) == 0) {
          iVar1 = FUN_012fcf18(pcVar5);
        }
        else {
          iVar1 = FUN_012fa300(pcVar5);
        }
      }
      else {
        iVar1 = FUN_012fd958(pcVar5,&local_34);
      }
      if (iVar1 == 0) {
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        goto LAB_013d0a74;
      }
    }
  }
LAB_013d0908:
  uVar6 = 1;
LAB_013d0940:
  return uVar6;
}

