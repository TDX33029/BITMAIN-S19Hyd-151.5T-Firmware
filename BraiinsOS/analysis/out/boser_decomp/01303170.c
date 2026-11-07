// FUN_01303170 @ 01303170 size=372 calls_out=1 calls_in=59
// strings: 

void FUN_01303170(int *param_1,undefined4 param_2,code *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = 1;
  if ((char)param_1[1] == '\0') {
    puVar3 = (undefined4 *)*param_1;
    if ((*(byte *)((int)puVar3 + 10) & 0x80) == 0) {
      if (*(char *)((int)param_1 + 5) != '\0') {
        iVar2 = (**(code **)(puVar3[1] + 0xc))(*puVar3,&DAT_00533bc1,2);
        uVar1 = 1;
        if (iVar2 != 0) goto LAB_013032d4;
      }
      uVar1 = (*param_3)(param_2,puVar3);
    }
    else if ((*(char *)((int)param_1 + 5) != '\0') ||
            (iVar2 = (**(code **)(puVar3[1] + 0xc))(*puVar3,"\n",1), iVar2 == 0)) {
      local_3c = &local_35;
      local_2c = puVar3[2];
      local_28 = puVar3[3];
      uStack_44 = *puVar3;
      uStack_40 = puVar3[1];
      local_34 = &uStack_44;
      local_35 = 1;
      local_30 = &DAT_01ce45f8;
      iVar2 = (*param_3)(param_2,&local_34);
      uVar1 = 1;
      if (iVar2 == 0) {
        uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
    }
  }
LAB_013032d4:
  *(undefined1 *)((int)param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

