// FUN_00d960bc @ 00d960bc size=552 calls_out=3 calls_in=0
// strings: BackendDescriptorCommon | hashchain_descriptor

byte FUN_00d960bc(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_3c;
  undefined4 *local_38;
  byte local_34;
  byte local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  local_3c = param_1;
  iVar2 = (*pcVar3)(uVar4,"BackendDescriptorCommon",0x17);
  bVar1 = 1;
  local_38 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0035b835,5);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            bVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
                                 *param_2,param_2[1]);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_30 = *param_2;
        local_2c = param_2[1];
        local_28 = &local_21;
        local_21 = 1;
        iVar2 = FUN_00fb1f64(&local_30,&DAT_0035b835,5);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar2 == 0)) {
          iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138),
                               &local_30,&DAT_01880dc4);
          if (iVar2 == 0) {
            bVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_33 = 1;
  local_34 = bVar1;
  FUN_00fb2258(&local_38,"hashchain_descriptor",0x14,&local_3c,FUN_00f0092c);
  if (local_33 != 1 || (local_34 & 1) != 0) {
    return (local_33 | local_34) & 1;
  }
  if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_38[1] + 0xc))(*local_38,"}",1);
  return bVar1 & 1;
}

