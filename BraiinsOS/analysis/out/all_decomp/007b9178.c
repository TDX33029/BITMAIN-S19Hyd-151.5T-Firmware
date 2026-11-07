// FUN_007b9178 @ 007b9178 size=572 calls_out=2 calls_in=15
// strings: 

undefined4 * FUN_007b9178(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (param_2 == param_3) {
    return param_1;
  }
  puVar4 = (undefined4 *)*param_1;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    local_48 = param_2;
    if ((*(byte *)((int)puVar4 + 10) & 0x80) == 0) {
      if (((*(byte *)((int)param_1 + 5) & 1) == 0) ||
         (iVar3 = (**(code **)(puVar4[1] + 0xc))(*puVar4,&DAT_0041950f,2), iVar3 == 0)) {
        bVar2 = FUN_01135a50(&local_48,puVar4);
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(byte *)(param_1 + 1) = bVar2;
        goto joined_r0x007b93a4;
      }
    }
    else if (((*(byte *)((int)param_1 + 5) & 1) != 0) ||
            (iVar3 = (**(code **)(puVar4[1] + 0xc))(*puVar4,&DAT_0041950e,1), iVar3 == 0)) {
      local_35 = 1;
      local_2c = puVar4[2];
      uStack_28 = puVar4[3];
      uStack_44 = *puVar4;
      uStack_40 = puVar4[1];
      local_3c = &local_35;
      local_30 = &DAT_01880dc4;
      local_34 = &uStack_44;
      iVar3 = FUN_01135a50(&local_48,&local_34);
      if (iVar3 == 0) {
        bVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(byte *)(param_1 + 1) = bVar2;
        goto joined_r0x007b93a4;
      }
    }
  }
  bVar2 = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
joined_r0x007b93a4:
  while (param_2 = param_2 + 1, param_2 != param_3) {
    bVar1 = bVar2 & 1;
    bVar2 = 1;
    if (bVar1 == 0) {
      local_48 = param_2;
      if ((*(byte *)((int)puVar4 + 10) & 0x80) == 0) {
        iVar3 = (**(code **)(puVar4[1] + 0xc))(*puVar4,&DAT_0041950f,2);
        bVar2 = 1;
        if (iVar3 == 0) {
          bVar2 = FUN_01135a50(&local_48,puVar4);
        }
      }
      else {
        local_2c = puVar4[2];
        uStack_28 = puVar4[3];
        local_3c = &local_35;
        local_35 = 1;
        uStack_44 = *puVar4;
        uStack_40 = puVar4[1];
        local_30 = &DAT_01880dc4;
        local_34 = &uStack_44;
        iVar3 = FUN_01135a50(&local_48,&local_34);
        if (iVar3 == 0) {
          bVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        }
        else {
          bVar2 = 1;
        }
      }
    }
    *(undefined1 *)((int)param_1 + 5) = 1;
    *(byte *)(param_1 + 1) = bVar2;
  }
  return param_1;
}

