// FUN_00664008 @ 00664008 size=340 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00664008(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar4 = (int *)*param_1;
  if (*piVar4 == 1) {
    uVar6 = *param_2;
    iVar7 = param_2[1];
    uVar3 = 5;
    pcVar5 = *(code **)(iVar7 + 0xc);
    puVar2 = &DAT_00523769;
  }
  else {
    uVar6 = *param_2;
    iVar7 = param_2[1];
    uVar3 = 8;
    pcVar5 = *(code **)(iVar7 + 0xc);
    puVar2 = &DAT_00570bd0;
  }
  iVar1 = (*pcVar5)(uVar6,puVar2,uVar3);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar7 = (*pcVar5)(uVar6,"(",1);
    if (iVar7 != 0) {
      return 1;
    }
    iVar7 = FUN_018a004c(piVar4[1],piVar4[2],param_2);
  }
  else {
    iVar1 = (*pcVar5)(uVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_2c = &DAT_01ce45f8;
    local_31 = 1;
    local_40 = uVar6;
    local_3c = iVar7;
    local_30 = (undefined1 *)&local_40;
    iVar7 = FUN_018a004c(piVar4[1],piVar4[2],&local_30);
    if (iVar7 != 0) {
      return 1;
    }
    iVar7 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
  }
  uVar3 = 1;
  if (iVar7 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar3;
}

