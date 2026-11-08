// FUN_01021a90 @ 01021a90 size=612 calls_out=3 calls_in=0
// strings: GoAway | last_stream_id | debug_data | debug_data

byte FUN_01021a90(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 *local_30;
  byte local_2c;
  byte local_2b;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"GoAway",6);
  local_2b = 0;
  local_30 = param_2;
  uVar3 = FUN_00fb2258(&local_30,&DAT_00410fac,10,param_1 + 0x14,FUN_0103066c);
  FUN_00fb2258(uVar3,"last_stream_id",0xe,param_1 + 0x10,FUN_0101a4ac);
  puVar1 = local_30;
  if (*(int *)(param_1 + 8) == 0) {
    bVar8 = local_2b ^ 1;
    bVar2 = local_2c;
LAB_01021b40:
    bVar5 = bVar8 ^ 1 | bVar2;
    if ((bVar8 & 1) == 0 && (bVar2 & 1) == 0) {
      if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
        uVar3 = *local_30;
        uVar9 = 2;
        pcVar10 = *(code **)(local_30[1] + 0xc);
        pcVar6 = " }";
      }
      else {
        uVar3 = *local_30;
        uVar9 = 1;
        pcVar10 = *(code **)(local_30[1] + 0xc);
        pcVar6 = "}";
      }
      bVar2 = (*pcVar10)(uVar3,pcVar6,uVar9);
      return bVar2 & 1;
    }
  }
  else {
    if (local_2c == 0) {
      if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
        puVar7 = &DAT_0041950f;
        if (local_2b == 0) {
          puVar7 = &DAT_00414a79;
        }
        uVar3 = 3;
        if (local_2b != 0) {
          uVar3 = 2;
        }
        iVar4 = (**(code **)(local_30[1] + 0xc))(*local_30,puVar7,uVar3);
        if (((iVar4 == 0) &&
            (iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,"debug_data",10), iVar4 == 0)) &&
           (iVar4 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2), iVar4 == 0)) {
          bVar2 = FUN_00f5df14(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),*puVar1,
                               puVar1[1]);
LAB_01021cc4:
          bVar8 = 0;
          goto LAB_01021b40;
        }
      }
      else if ((local_2b != 0) ||
              (iVar4 = (**(code **)(local_30[1] + 0xc))(*local_30,&DAT_00414a7e,3), iVar4 == 0)) {
        local_20 = &local_19;
        local_28 = *puVar1;
        local_24 = puVar1[1];
        local_19 = 1;
        iVar4 = FUN_00fb1f64(&local_28,"debug_data",10);
        if ((iVar4 == 0) &&
           ((iVar4 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2), iVar4 == 0 &&
            (iVar4 = FUN_00f5df14(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                                  &local_28,&DAT_01880dc4), iVar4 == 0)))) {
          bVar2 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
          goto LAB_01021cc4;
        }
      }
    }
    bVar5 = 1;
  }
  return bVar5 & 1;
}

