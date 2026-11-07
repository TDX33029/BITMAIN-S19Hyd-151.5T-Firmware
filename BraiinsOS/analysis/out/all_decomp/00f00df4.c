// FUN_00f00df4 @ 00f00df4 size=600 calls_out=5 calls_in=0
// strings: GenericTelemetryFrame

undefined4 FUN_00f00df4(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  char local_2c;
  char local_2b;
  int **local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  local_30 = *(int **)(param_1 + 8);
  local_28 = &local_30;
  local_24 = &LAB_00fac484;
  FUN_00600d2c(&local_3c,&DAT_0057d543,&local_28);
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"GenericTelemetryFrame",0x15);
  local_2b = '\0';
  local_30 = param_2;
  FUN_00fb2258(&local_30,&DAT_00410ff9,7,param_1 + 0xc,FUN_0078955c);
  piVar1 = local_30;
  uVar6 = 1;
  if (local_2c != '\0') goto LAB_00f00fd8;
  if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_2b == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_2b != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,puVar3,uVar5);
    if (((iVar2 != 0) ||
        (iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00411190,7), iVar2 != 0)) ||
       (iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2), iVar2 != 0))
    goto LAB_00f00fd8;
    iVar2 = FUN_00faa4e8(local_38,local_34,*piVar1,piVar1[1]);
  }
  else {
    if ((local_2b == '\0') &&
       (iVar2 = (**(code **)(local_30[1] + 0xc))(*local_30,&DAT_00414a7e,3), iVar2 != 0))
    goto LAB_00f00fd8;
    local_20 = &local_19;
    local_28 = (int **)*piVar1;
    local_24 = (undefined1 *)piVar1[1];
    local_19 = 1;
    iVar2 = FUN_00fb1f64(&local_28,&DAT_00411190,7);
    if ((iVar2 != 0) ||
       ((iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2), iVar2 != 0 ||
        (iVar2 = FUN_00faa4e8(local_38,local_34,&local_28,&DAT_01880dc4), iVar2 != 0)))) {
      uVar6 = 1;
      goto LAB_00f00fd8;
    }
    iVar2 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
  }
  uVar6 = 1;
  if (iVar2 == 0) {
    bVar7 = (piVar1[2] & 0x800000U) != 0;
    pcVar4 = " }";
    if (bVar7) {
      pcVar4 = "}";
    }
    uVar6 = 1;
    if (!bVar7) {
      uVar6 = 2;
    }
    uVar6 = (**(code **)(piVar1[1] + 0xc))(*piVar1,pcVar4,uVar6);
  }
LAB_00f00fd8:
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  return uVar6;
}

