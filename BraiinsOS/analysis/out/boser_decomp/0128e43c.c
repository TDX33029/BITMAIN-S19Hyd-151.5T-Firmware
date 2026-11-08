// FUN_0128e43c @ 0128e43c size=428 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0128e43c(uint param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 **local_2c;
  code *local_28;
  
  uVar1 = param_1 / 0x3c;
  puVar7 = param_2;
  if (&DAT_3b9ac9ff < param_2) {
    puVar7 = param_2 + -1000000000;
  }
  iVar6 = param_1 + (uVar1 * 0x10 - param_1 / 0x3c) * -4;
  if (&DAT_3b9ac9ff < param_2) {
    iVar6 = iVar6 + 1;
  }
  local_34 = puVar7;
  iVar2 = FUN_0128891c(param_3,param_4,param_1 / 0xe10);
  if (iVar2 != 0) {
    return 1;
  }
  pcVar8 = *(code **)(param_4 + 0x10);
  iVar2 = (*pcVar8)(param_3,0x3a);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = FUN_0128891c(param_3,param_4,uVar1 + ((uVar1 / 0x3c) * 0x10 - uVar1 / 0x3c) * -4);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (*pcVar8)(param_3,0x3a);
  if (iVar2 != 0) {
    return 1;
  }
  iVar6 = FUN_0128891c(param_3,param_4,iVar6);
  if (iVar6 != 0) {
    return 1;
  }
  if (puVar7 == (undefined1 *)0x0) {
    return 0;
  }
  puVar3 = (undefined1 *)((uint)puVar7 / 1000000);
  if (puVar7 + (short)puVar3 * -1000000 == (undefined1 *)0x0) {
    puVar5 = &DAT_004ba617;
  }
  else {
    puVar3 = (undefined1 *)((uint)puVar7 / 1000);
    if ((uint)puVar7 % 1000 != 0) {
      local_2c = &local_34;
      puVar5 = &DAT_004ba62b;
      goto LAB_0128e5c8;
    }
    puVar5 = &DAT_004ba621;
  }
  local_2c = &local_30;
  local_30 = puVar3;
LAB_0128e5c8:
  local_28 = FUN_012fd02c;
  uVar4 = FUN_012fa178(param_3,param_4,puVar5,&local_2c);
  return uVar4;
}

