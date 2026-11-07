// FUN_00fb243c @ 00fb243c size=572 calls_out=2 calls_in=2
// strings: attempted to begin a new map entry without completing the previous one

int * FUN_00fb243c(int *param_1,undefined4 param_2,code *param_3,undefined4 param_4,code *param_5)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar6 = 1;
  if ((char)param_1[1] != '\0') goto LAB_00fb2460;
  if (*(char *)((int)param_1 + 6) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("attempted to begin a new map entry without completing the previous one",0x8d,
                 &DAT_01880dec);
  }
  puVar5 = (undefined4 *)*param_1;
  if ((*(byte *)((int)puVar5 + 10) & 0x80) == 0) {
    if (*(char *)((int)param_1 + 5) != '\0') {
      iVar2 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0041950f,2);
      uVar6 = 1;
      if (iVar2 != 0) goto LAB_00fb2460;
    }
    uVar6 = 1;
    iVar2 = (*param_3)(param_2,puVar5);
    if (iVar2 != 0) goto LAB_00fb2460;
    puVar3 = (undefined1 *)*puVar5;
    puVar4 = (undefined *)puVar5[1];
  }
  else {
    if ((*(char *)((int)param_1 + 5) == '\0') &&
       (iVar2 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0041950e,1), iVar2 != 0))
    goto LAB_00fb2460;
    local_38 = (undefined1 *)((int)param_1 + 7);
    *local_38 = 1;
    local_2c = puVar5[2];
    local_28 = puVar5[3];
    local_40 = *puVar5;
    local_3c = puVar5[1];
    local_30 = &DAT_01880dc4;
    local_34 = (undefined1 *)&local_40;
    iVar2 = (*param_3)(param_2,&local_34);
    if (iVar2 != 0) goto LAB_00fb2460;
    puVar3 = local_34;
    puVar4 = local_30;
  }
  uVar6 = 1;
  iVar2 = (**(code **)(puVar4 + 0xc))(puVar3,&DAT_00414a7c,2);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)*param_1;
    *(undefined1 *)((int)param_1 + 6) = 1;
    bVar1 = *(byte *)((int)puVar5 + 10);
    *(undefined1 *)(param_1 + 1) = 0;
    if ((bVar1 & 0x80) == 0) {
      iVar2 = (*param_5)(param_4);
      if (iVar2 != 0) goto LAB_00fb2460;
    }
    else {
      local_40 = *puVar5;
      local_3c = puVar5[1];
      local_38 = (undefined1 *)((int)param_1 + 7);
      local_2c = puVar5[2];
      local_28 = puVar5[3];
      local_30 = &DAT_01880dc4;
      local_34 = (undefined1 *)&local_40;
      iVar2 = (*param_5)(param_4,&local_34);
      if ((iVar2 != 0) ||
         (iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar2 != 0)) {
        uVar6 = 1;
        goto LAB_00fb2460;
      }
    }
    uVar6 = 0;
    *(undefined1 *)((int)param_1 + 6) = 0;
  }
LAB_00fb2460:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = uVar6;
  return param_1;
}

