// FUN_00793a58 @ 00793a58 size=872 calls_out=3 calls_in=0
// strings: Descriptor | user-- | description | description

undefined4 FUN_00793a58(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 *local_38;
  char local_34;
  char local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar8 = *param_2;
  pcVar7 = *(code **)(param_2[1] + 0xc);
  iVar3 = (*pcVar7)(uVar8,"Descriptor",10);
  cVar2 = '\x01';
  local_38 = param_2;
  if (iVar3 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar7)(uVar8,&DAT_00414a79,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"description",0xb);
        cVar2 = '\x01';
        if (iVar3 == 0) {
          iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          cVar2 = '\x01';
          if (iVar3 == 0) {
            cVar2 = FUN_00faa4e8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc),
                                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),*param_2,param_2[1]
                                );
          }
        }
      }
    }
    else {
      iVar3 = (*pcVar7)(uVar8,&DAT_00414a7e,3);
      cVar2 = '\x01';
      if (iVar3 == 0) {
        local_30 = *param_2;
        local_2c = param_2[1];
        local_28 = &local_21;
        local_21 = 1;
        iVar3 = FUN_00fb1f64(&local_30,"description",0xb);
        if ((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2), iVar3 == 0)) {
          iVar3 = FUN_00faa4e8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc),
                               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10),&local_30,
                               &DAT_01880dc4);
          if (iVar3 == 0) {
            cVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
          }
          else {
            cVar2 = '\x01';
          }
        }
      }
    }
  }
  local_33 = '\x01';
  local_34 = cVar2;
  FUN_00fb2258(&local_38,"user--",4,param_1,FUN_00edf6a8);
  puVar1 = local_38;
  if (local_34 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
    puVar4 = &DAT_0041950f;
    if (local_33 == '\0') {
      puVar4 = &DAT_00414a79;
    }
    uVar8 = 3;
    if (local_33 != '\0') {
      uVar8 = 2;
    }
    iVar3 = (**(code **)(local_38[1] + 0xc))(*local_38,puVar4,uVar8);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_0034fb98,0xf);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00faa4e8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),*puVar1,puVar1[1]);
  }
  else {
    if ((local_33 == '\0') &&
       (iVar3 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00414a7e,3), iVar3 != 0)) {
      return 1;
    }
    local_28 = &local_21;
    local_30 = *puVar1;
    local_2c = puVar1[1];
    local_21 = 1;
    iVar3 = FUN_00fb1f64(&local_30,&DAT_0034fb98,0xf);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00faa4e8(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10),&local_30,&DAT_01880dc4);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar8 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = " }";
  }
  else {
    uVar8 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = "}";
  }
  uVar8 = (*pcVar7)(uVar8,pcVar5,uVar6);
  return uVar8;
}

