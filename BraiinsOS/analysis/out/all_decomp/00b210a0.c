// FUN_00b210a0 @ 00b210a0 size=616 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00b210a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar4 = *param_2;
    iVar1 = param_2[1];
    pcVar3 = *(code **)(iVar1 + 0xc);
    iVar2 = (*pcVar3)(uVar4,&DAT_00410e37,2);
    if (iVar2 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (*pcVar3)(uVar4,"(",1);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = FUN_00faace8(param_2,&DAT_00415204,2);
      }
      else {
        iVar2 = (*pcVar3)(uVar4,"(\n",2);
        if (iVar2 != 0) {
          return 1;
        }
        local_38 = &local_31;
        local_28 = param_2[2];
        local_24 = param_2[3];
        local_2c = &DAT_01880dc4;
        local_31 = 1;
        local_40 = uVar4;
        local_3c = iVar1;
        local_30 = (undefined1 *)&local_40;
        iVar2 = FUN_00faace8(&local_30,&DAT_00415204,2);
        if (iVar2 != 0) {
          return 1;
        }
        iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
      }
      if (iVar2 == 0) {
        uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
        return uVar4;
      }
    }
  }
  else {
    uVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_00410e39,3);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar3)(uVar4,"(",1);
        if ((iVar1 == 0) && (iVar2 = FUN_00603f68(iVar2,param_2), iVar2 == 0)) {
          uVar4 = *param_2;
          pcVar3 = *(code **)(param_2[1] + 0xc);
LAB_00b21230:
          uVar4 = (*pcVar3)(uVar4,&DAT_00418e07,1);
          return uVar4;
        }
      }
      else {
        iVar1 = (*pcVar3)(uVar4,"(\n",2);
        if (iVar1 == 0) {
          local_38 = &local_31;
          local_2c = &DAT_01880dc4;
          local_28 = param_2[2];
          local_24 = param_2[3];
          local_31 = 1;
          local_40 = uVar4;
          local_3c = iVar5;
          local_30 = (undefined1 *)&local_40;
          iVar2 = FUN_00603f68(iVar2,&local_30);
          if ((iVar2 == 0) &&
             (iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2), iVar2 == 0))
          goto LAB_00b21230;
        }
      }
    }
  }
  return 1;
}

