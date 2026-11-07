// FUN_010bdf68 @ 010bdf68 size=528 calls_out=2 calls_in=0
// strings: hyper::ErrorMethodVersionH2UriTooLong

undefined4 FUN_010bdf68(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,"hyper::ErrorMethodVersionH2UriTooLong",0xc);
  piVar3 = (int *)*param_1;
  iVar2 = 1;
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar5,"(",1);
      if (iVar1 == 0) {
        iVar2 = FUN_010be19c(piVar3 + 2,param_2);
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar5,"(\n",2);
      if (iVar1 == 0) {
        iVar2 = 1;
        local_38 = &local_31;
        local_2c = &DAT_01880dc4;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_31 = 1;
        local_40 = uVar5;
        local_3c = iVar6;
        local_30 = (undefined1 *)&local_40;
        iVar1 = FUN_010be19c(piVar3 + 2,&local_30);
        if (iVar1 == 0) {
          iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
        }
      }
    }
  }
  if (*piVar3 != 0) {
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar5,&DAT_0041950f,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(piVar3[1] + 0xc))(*piVar3,param_2);
    }
    else {
      local_38 = &local_31;
      local_31 = 1;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_2c = &DAT_01880dc4;
      local_40 = uVar5;
      local_3c = iVar6;
      local_30 = (undefined1 *)&local_40;
      iVar2 = (**(code **)(piVar3[1] + 0xc))(*piVar3,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
    }
  }
  uVar5 = 1;
  if (iVar2 == 0) {
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar5;
}

