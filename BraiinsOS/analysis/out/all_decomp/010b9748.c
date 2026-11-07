// FUN_010b9748 @ 010b9748 size=456 calls_out=2 calls_in=0
// strings: ToStrError | _priv | _priv

undefined4 FUN_010b9748(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,"ToStrError",10);
  if (iVar1 != 0) {
    return 1;
  }
  uVar7 = param_2[2];
  if ((uVar7 & 0x800000) == 0) {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a79,3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,"_priv",5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faace8(param_2,&DAT_00415204,2);
  }
  else {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7e,3);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    uVar7 = param_2[2];
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar5;
    local_40 = iVar6;
    local_2c = uVar7;
    iVar1 = FUN_00fb1f64(local_34,"_priv",5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faace8(&local_34,&DAT_00415204,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  if ((uVar7 & 0x800000) == 0) {
    uVar3 = 2;
    pcVar2 = " }";
  }
  else {
    uVar3 = 1;
    pcVar2 = "}";
  }
  uVar5 = (*pcVar4)(uVar5,pcVar2,uVar3);
  return uVar5;
}

