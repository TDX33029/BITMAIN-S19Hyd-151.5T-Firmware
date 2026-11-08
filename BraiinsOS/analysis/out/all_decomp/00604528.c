// FUN_00604528 @ 00604528 size=312 calls_out=1 calls_in=8
// strings: 

undefined4 FUN_00604528(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_38;
  undefined8 uStack_34;
  int *local_2c;
  undefined1 *local_28;
  
  piVar3 = (int *)*param_1;
  uStack_34 = (**(code **)(*piVar3 + 4))(piVar3);
  uVar5 = *param_2;
  uVar6 = param_2[1];
  local_28 = &LAB_01656d18;
  local_2c = (int *)&uStack_34;
  iVar1 = FUN_00fa948c(uVar5,uVar6,&DAT_00590e71,&local_2c);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      return 0;
    }
    uVar7 = (**(code **)(*piVar3 + 4))(piVar3);
    local_38 = 1;
    iVar1 = local_38;
    do {
      while( true ) {
        iVar2 = (int)uVar7;
        iVar4 = (int)((ulonglong)uVar7 >> 0x20);
        if (iVar1 == 0) break;
        if (iVar2 == 0) {
          return 0;
        }
        uVar7 = (**(code **)(iVar4 + 0x18))(iVar2);
        local_38 = 0;
        iVar1 = iVar1 + -1;
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar8 = (**(code **)(iVar4 + 0x18))(iVar2);
      local_28 = &LAB_01656d18;
      local_2c = (int *)&uStack_34;
      uStack_34 = uVar7;
      iVar2 = FUN_00fa948c(uVar5,uVar6,&DAT_0057523e,&local_2c);
      iVar1 = local_38;
      uVar7 = uVar8;
    } while (iVar2 == 0);
  }
  return 1;
}

