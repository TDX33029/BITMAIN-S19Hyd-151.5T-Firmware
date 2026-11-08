// FUN_0072e8d0 @ 0072e8d0 size=312 calls_out=2 calls_in=0
// strings: InvalidPublicKey

undefined4 FUN_0072e8d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  if (*param_1 == 1) {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    pcVar2 = "InvalidPublicKey";
  }
  else {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    pcVar2 = "InvalidSecretKeyexclusiveMinimumLazyStateIDError\x01";
  }
  iVar1 = (*pcVar3)(uVar4,pcVar2,0x10);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar5 = FUN_00faa4e8(param_1[2],param_1[3],uVar4,iVar5);
  }
  else {
    iVar1 = (*pcVar3)(uVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar4;
    local_2c = iVar5;
    iVar5 = FUN_00faa4e8(param_1[2],param_1[3],&local_30,&DAT_01880dc4);
    if (iVar5 != 0) {
      return 1;
    }
    iVar5 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar5 == 0) {
    uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
    return uVar4;
  }
  return 1;
}

