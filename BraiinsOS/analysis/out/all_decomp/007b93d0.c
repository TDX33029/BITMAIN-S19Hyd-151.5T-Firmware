// FUN_007b93d0 @ 007b93d0 size=592 calls_out=2 calls_in=2
// strings: 

undefined4 * FUN_007b93d0(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = (undefined4 *)*param_1;
  iVar4 = param_2 + 0x4c;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    if ((*(byte *)((int)puVar5 + 10) & 0x80) == 0) {
      if (((*(byte *)((int)param_1 + 5) & 1) == 0) ||
         (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0041950f,2), iVar3 == 0)) {
        bVar2 = FUN_00728604(param_2,puVar5);
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(byte *)(param_1 + 1) = bVar2;
        goto joined_r0x007b9610;
      }
    }
    else if (((*(byte *)((int)param_1 + 5) & 1) != 0) ||
            (iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0041950e,1), iVar3 == 0)) {
      local_2c = puVar5[2];
      uStack_28 = puVar5[3];
      local_35 = 1;
      uStack_44 = *puVar5;
      uStack_40 = puVar5[1];
      local_3c = &local_35;
      local_34 = &uStack_44;
      local_30 = &DAT_01880dc4;
      iVar3 = FUN_00728604(param_2,&local_34);
      if (iVar3 == 0) {
        bVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        *(undefined1 *)((int)param_1 + 5) = 1;
        *(byte *)(param_1 + 1) = bVar2;
        goto joined_r0x007b9610;
      }
    }
  }
  bVar2 = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = 1;
joined_r0x007b9610:
  if (iVar4 != param_3) {
    do {
      bVar1 = bVar2 & 1;
      bVar2 = 1;
      if (bVar1 == 0) {
        if ((*(byte *)((int)puVar5 + 10) & 0x80) == 0) {
          iVar3 = (**(code **)(puVar5[1] + 0xc))(*puVar5,&DAT_0041950f,2);
          bVar2 = 1;
          if (iVar3 == 0) {
            bVar2 = FUN_00728604(iVar4,puVar5);
          }
        }
        else {
          local_2c = puVar5[2];
          uStack_28 = puVar5[3];
          local_3c = &local_35;
          local_35 = 1;
          uStack_44 = *puVar5;
          uStack_40 = puVar5[1];
          local_30 = &DAT_01880dc4;
          local_34 = &uStack_44;
          iVar3 = FUN_00728604(iVar4,&local_34);
          if (iVar3 == 0) {
            bVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
          }
          else {
            bVar2 = 1;
          }
        }
      }
      iVar4 = iVar4 + 0x4c;
      *(undefined1 *)((int)param_1 + 5) = 1;
      *(byte *)(param_1 + 1) = bVar2;
    } while (iVar4 != param_3);
  }
  return param_1;
}

