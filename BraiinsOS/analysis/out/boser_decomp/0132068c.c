// FUN_0132068c @ 0132068c size=520 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_0132068c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  char *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  
  pcVar4 = (char *)*param_1;
  pcVar5 = pcVar4 + 4;
  if (*pcVar5 == '\x04') {
    local_34 = pcVar4;
    uVar1 = FUN_013032f4(param_2,&DAT_0052e42c,2,&local_34,&LAB_006616e8);
  }
  else {
    uVar1 = *param_2;
    iVar6 = param_2[1];
    pcVar3 = *(code **)(iVar6 + 0xc);
    iVar2 = (*pcVar3)(uVar1,&DAT_0052c2af,3);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      local_34 = pcVar5;
      iVar2 = FUN_01303d90(param_2,&DAT_00522e68,0xb,&DAT_00570c28,8,pcVar4,&LAB_01a6a304,
                           &DAT_0056f2ec,4,&local_34,FUN_013201fc);
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_35 = 1;
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_30 = &DAT_01ce45f8;
      local_34 = (char *)&local_44;
      local_44 = uVar1;
      local_40 = iVar6;
      local_24 = pcVar5;
      iVar2 = FUN_01303d90(&local_34,&DAT_00522e68,0xb,&DAT_00570c28,8,pcVar4,&LAB_01a6a304,
                           &DAT_0056f2ec,4,&local_24,FUN_013201fc);
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

