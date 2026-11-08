// FUN_011dca7c @ 011dca7c size=496 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_011dca7c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar2 = *(int *)*param_1;
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056a990,8);
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar2 + 0x10) == 0) {
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar4 = param_2[1];
      uVar3 = *param_2;
      iVar1 = (**(code **)(iVar4 + 0xc))(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(*(int *)(iVar2 + 8) + 8,*(undefined4 *)(iVar2 + 0xc),uVar3,iVar4);
      goto LAB_011dcc3c;
    }
    uVar3 = *param_2;
    iVar4 = param_2[1];
    iVar1 = (**(code **)(iVar4 + 0xc))(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar3;
    iStack_2c = iVar4;
    iVar1 = FUN_00faa4e8(*(int *)(iVar2 + 8) + 8,*(undefined4 *)(iVar2 + 0xc),&local_30,
                         &DAT_01880dc4);
  }
  else {
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      uVar3 = *param_2;
      iVar2 = param_2[1];
      iVar1 = (**(code **)(iVar2 + 0xc))(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fa948c(uVar3,iVar2,&DAT_0056aab8,0x11);
      goto LAB_011dcc3c;
    }
    uVar3 = *param_2;
    iVar2 = param_2[1];
    iVar1 = (**(code **)(iVar2 + 0xc))(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar3;
    iStack_2c = iVar2;
    iVar1 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_0056aab8,0x11);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
LAB_011dcc3c:
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}

