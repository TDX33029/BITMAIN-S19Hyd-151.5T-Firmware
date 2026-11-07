// FUN_00799374 @ 00799374 size=144 calls_out=2 calls_in=0
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

void FUN_00799374(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  iVar4 = *param_2;
  iVar3 = 0xb;
  if (iVar4 == -0x80000000) {
    iVar3 = 0xc;
  }
  local_20 = 0;
  local_24 = 1;
  local_28 = 0;
  FUN_006bca64(&local_28,0,iVar3,1,1);
  iVar1 = local_20;
  pcVar2 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  if (iVar4 != -0x80000000) {
    pcVar2 = "stratum+tcp";
  }
  FUN_016dd1aa(local_24 + local_20,pcVar2,iVar3);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = iVar1 + iVar3;
  return;
}

