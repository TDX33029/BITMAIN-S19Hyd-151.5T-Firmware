// FUN_01025f48 @ 01025f48 size=656 calls_out=1 calls_in=0
// strings: END_HEADERSPushPromisepromised_id

undefined4 FUN_01025f48(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcStack_38;
  undefined4 uStack_34;
  char *local_30;
  undefined4 local_2c;
  char **local_28;
  code *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  
  bVar1 = *param_1;
  uVar8 = (uint)bVar1;
  local_30 = (char *)CONCAT31(local_30._1_3_,bVar1);
  uVar5 = *param_2;
  iVar6 = param_2[1];
  local_24 = FUN_00facb58;
  local_28 = &local_30;
  uVar2 = FUN_00fa948c(uVar5,iVar6,&DAT_00569d98,&local_28);
  pcStack_38 = "END_HEADERSPushPromisepromised_id";
  uStack_34 = 0xb;
  uVar7 = (uVar8 & 4) >> 2 ^ 1 | uVar2;
  if (uVar7 == 0) {
    local_2c = 2;
    local_30 = &DAT_00414a7c;
    local_1c = &DAT_0157d360;
    local_24 = (code *)&DAT_0157d360;
    local_28 = &local_30;
    local_20 = (undefined1 *)&pcStack_38;
    uVar2 = FUN_00fa948c(uVar5,iVar6,&DAT_00570dec,&local_28);
  }
  else {
    uVar2 = uVar2 | (uVar8 & 4) >> 2;
  }
  uVar4 = uVar7 ^ 1;
  pcStack_38 = &DAT_003831f4;
  uStack_34 = 10;
  uVar3 = uVar2 | uVar8;
  if (((bVar1 & 1) != 0) && (uVar2 == 0)) {
    local_2c = 3;
    if (uVar7 != 0) {
      local_2c = 2;
    }
    local_30 = " | ";
    if (uVar7 != 0) {
      local_30 = &DAT_00414a7c;
    }
    local_1c = &DAT_0157d360;
    local_24 = (code *)&DAT_0157d360;
    local_28 = &local_30;
    local_20 = (undefined1 *)&pcStack_38;
    uVar3 = FUN_00fa948c(uVar5,iVar6,&DAT_00570dec,&local_28);
    uVar4 = 1;
  }
  pcStack_38 = &DAT_003831fe;
  uStack_34 = 6;
  uVar2 = uVar3 | (uVar8 & 8) >> 3;
  if (((bVar1 & 8) != 0) && ((uVar3 & 1) == 0)) {
    local_2c = 2;
    if (uVar4 != 0) {
      local_2c = 3;
    }
    local_30 = &DAT_00414a7c;
    if (uVar4 != 0) {
      local_30 = " | ";
    }
    local_1c = &DAT_0157d360;
    local_24 = (code *)&DAT_0157d360;
    local_28 = &local_30;
    local_20 = (undefined1 *)&pcStack_38;
    uVar2 = FUN_00fa948c(uVar5,iVar6,&DAT_00570dec,&local_28);
    uVar4 = 1;
  }
  pcStack_38 = "PRIORITY\x01";
  uStack_34 = 8;
  if ((bVar1 & 0x20) == 0) {
    uVar2 = uVar2 & 1;
  }
  else {
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    local_2c = 2;
    local_30 = &DAT_00414a7c;
    if (uVar4 != 0) {
      local_2c = 3;
      local_30 = " | ";
    }
    local_1c = &DAT_0157d360;
    local_24 = (code *)&DAT_0157d360;
    local_28 = &local_30;
    local_20 = (undefined1 *)&pcStack_38;
    uVar2 = FUN_00fa948c(uVar5,iVar6,&DAT_00570dec,&local_28);
  }
  if (uVar2 == 0) {
    uVar5 = (**(code **)(iVar6 + 0xc))(uVar5,&DAT_00418e07,1);
    return uVar5;
  }
  return 1;
}

