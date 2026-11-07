// FUN_018aeb80 @ 018aeb80 size=516 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_018aeb80(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 == -0x80000000) {
    local_34 = piVar3 + 1;
    uVar1 = FUN_013032f4(param_2,&DAT_0052e437,7,&local_34,FUN_018bc318);
  }
  else {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar2 = (*pcVar4)(iVar5,&DAT_0056d3f4,4);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(iVar5,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_34 = piVar3 + 3;
      iVar2 = FUN_01303d90(param_2,&DAT_0051dbb0,0x1c,&DAT_0051dbcc,0xd,piVar3,FUN_018a7b54,
                           &DAT_00520f23,10,&local_34,FUN_018c3bb8);
    }
    else {
      iVar2 = (*pcVar4)(iVar5,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_24 = piVar3 + 3;
      local_30 = &DAT_01ce45f8;
      local_34 = &local_44;
      local_44 = iVar5;
      local_40 = iVar6;
      iVar2 = FUN_01303d90(&local_34,&DAT_0051dbb0,0x1c,&DAT_0051dbcc,0xd,piVar3,FUN_018a7b54,
                           &DAT_00520f23,10,&local_24,FUN_018c3bb8);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar1;
}

