// FUN_010264e8 @ 010264e8 size=692 calls_out=3 calls_in=0
// strings: Headers | stream_id | stream_dep

byte FUN_010264e8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *local_38;
  byte local_34;
  byte local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  local_34 = (**(code **)(param_2[1] + 0xc))(*param_2,"Headers",7);
  local_33 = 0;
  local_38 = param_2;
  uVar3 = FUN_00fb2258(&local_38,"stream_id",9,param_1 + 0xa8,FUN_0101a4ac);
  FUN_00fb2258(uVar3,&DAT_00410f76,5,param_1 + 0xac,FUN_01025f48);
  puVar1 = local_38;
  if (*(int *)(param_1 + 0x84) == 0) goto LAB_0102658c;
  bVar2 = 1;
  if (local_34 == 0) {
    if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
      puVar5 = &DAT_0041950f;
      if (local_33 == 0) {
        puVar5 = &DAT_00414a79;
      }
      uVar3 = 3;
      if (local_33 != 0) {
        uVar3 = 2;
      }
      iVar4 = (**(code **)(local_38[1] + 0xc))(*local_38,puVar5,uVar3);
      bVar2 = 1;
      if (iVar4 == 0) {
        iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_0056a278,8);
        bVar2 = 1;
        if (iVar4 == 0) {
          iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
          bVar2 = 1;
          if (iVar4 == 0) {
            bVar2 = FUN_00f5df14(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                                 *puVar1,puVar1[1]);
          }
        }
      }
    }
    else {
      if (local_33 == 0) {
        iVar4 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00414a7e,3);
        bVar2 = 1;
        if (iVar4 != 0) goto LAB_01026584;
      }
      local_28 = &local_21;
      local_30 = *puVar1;
      local_2c = puVar1[1];
      bVar2 = 1;
      local_21 = 1;
      iVar4 = FUN_00fb1f64(&local_30,&DAT_0056a278,8);
      if ((iVar4 == 0) && (iVar4 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar4 == 0)) {
        iVar4 = FUN_00f5df14(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                             &local_30,&DAT_01880dc4);
        if (iVar4 == 0) {
          bVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
        }
        else {
          bVar2 = 1;
        }
      }
    }
  }
LAB_01026584:
  local_33 = 1;
  local_34 = bVar2;
LAB_0102658c:
  if (*(char *)(param_1 + 0xa5) != '\x02') {
    FUN_00fb2258(&local_38,"stream_dep",10,param_1 + 0xa0,FUN_010267e4);
  }
  if (local_33 != 1 || (local_34 & 1) != 0) {
    return (local_33 | local_34) & 1;
  }
  if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_38[1] + 0xc))(*local_38," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,"}",1);
  return bVar2 & 1;
}

