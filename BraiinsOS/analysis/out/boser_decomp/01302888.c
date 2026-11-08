// FUN_01302888 @ 01302888 size=376 calls_out=1 calls_in=16
// strings: 

void FUN_01302888(int *param_1,undefined4 param_2,code *param_3)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar6 = *param_1;
  uVar1 = 1;
  if ((char)param_1[2] == '\0') {
    puVar5 = (undefined4 *)param_1[1];
    if ((*(byte *)((int)puVar5 + 10) & 0x80) == 0) {
      pcVar3 = "(";
      if (iVar6 != 0) {
        pcVar3 = ", newline\'`\'\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02\x02";
      }
      uVar4 = 2;
      if (iVar6 == 0) {
        uVar4 = 1;
      }
      iVar2 = (**(code **)(puVar5[1] + 0xc))(*puVar5,pcVar3,uVar4);
      if (iVar2 == 0) {
        uVar1 = (*param_3)(param_2,puVar5);
      }
    }
    else if ((iVar6 != 0) || (iVar2 = (**(code **)(puVar5[1] + 0xc))(*puVar5,"(\n",2), iVar2 == 0))
    {
      uStack_44 = *puVar5;
      uStack_40 = puVar5[1];
      local_30 = &DAT_01ce45f8;
      local_34 = &uStack_44;
      local_2c = puVar5[2];
      local_28 = puVar5[3];
      local_3c = &local_35;
      local_35 = 1;
      iVar2 = (*param_3)(param_2,&local_34);
      uVar1 = 1;
      if (iVar2 == 0) {
        uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
      }
    }
  }
  *param_1 = iVar6 + 1;
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}

