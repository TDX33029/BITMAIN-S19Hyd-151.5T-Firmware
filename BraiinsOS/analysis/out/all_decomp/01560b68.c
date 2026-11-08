// FUN_01560b68 @ 01560b68 size=720 calls_out=2 calls_in=1
// strings: 

byte FUN_01560b68(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int local_4c;
  undefined4 *local_48;
  byte local_44;
  byte local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar6 = *param_1;
  local_4c = iVar6 + 0x14;
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0040c747,0xc);
  local_43 = '\0';
  local_48 = param_2;
  FUN_00fb2258(&local_48,&DAT_005689a4,4,iVar6 + 8,FUN_01504760);
  puVar1 = local_48;
  bVar2 = 1;
  if (local_44 == '\0') {
    if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
      puVar4 = &DAT_0041950f;
      if (local_43 == '\0') {
        puVar4 = &DAT_00414a79;
      }
      uVar5 = 3;
      if (local_43 != '\0') {
        uVar5 = 2;
      }
      iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar4,uVar5);
      bVar2 = 1;
      if (iVar3 == 0) {
        iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_004145fc,3);
        bVar2 = 1;
        if (iVar3 == 0) {
          iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
          bVar2 = 1;
          if (iVar3 == 0) {
            bVar2 = (**(code **)(*(int *)(iVar6 + 0x24) + 0xc))
                              (*(int *)(iVar6 + 0x20) +
                               (*(int *)(*(int *)(iVar6 + 0x24) + 8) - 1U & 0xfffffff8) + 8,puVar1);
          }
        }
      }
    }
    else {
      if (local_43 == '\0') {
        iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3);
        bVar2 = 1;
        if (iVar3 != 0) goto LAB_01560be0;
      }
      local_28 = puVar1[2];
      local_24 = puVar1[3];
      local_38 = &local_31;
      local_30 = &local_40;
      local_3c = puVar1[1];
      local_40 = *puVar1;
      local_2c = &DAT_01880dc4;
      bVar2 = 1;
      local_31 = 1;
      iVar3 = FUN_00fb1f64(local_30,&DAT_004145fc,3);
      if ((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar3 == 0)) {
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x24) + 0xc))
                          (*(int *)(iVar6 + 0x20) +
                           (*(int *)(*(int *)(iVar6 + 0x24) + 8) - 1U & 0xfffffff8) + 8,&local_30);
        if (iVar6 == 0) {
          bVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
        }
        else {
          bVar2 = 1;
        }
      }
    }
  }
LAB_01560be0:
  local_43 = 1;
  local_44 = bVar2;
  FUN_00fb2258(&local_48,&DAT_005693b0,4,&local_4c,FUN_0152c274);
  if (local_43 != 1 || (local_44 & 1) != 0) {
    return (local_43 | local_44) & 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_48[1] + 0xc))(*local_48," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,"}",1);
  return bVar2 & 1;
}

