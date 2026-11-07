// FUN_01642c98 @ 01642c98 size=356 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01642c98(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  
  if (*param_1 == -0x80000000) {
    iVar4 = *param_2;
    iVar5 = param_2[1];
    pcVar3 = *(code **)(iVar5 + 0xc);
    iVar1 = (*pcVar3)(iVar4,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(iVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_019a6b74(param_1 + 1,param_2);
    }
    else {
      iVar1 = (*pcVar3)(iVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = &local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = iVar4;
      local_3c = iVar5;
      iVar1 = FUN_019a6b74(param_1 + 1,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  else {
    local_30 = param_1;
    uVar2 = FUN_013032f4(param_2,&DAT_0052e42c,2,&local_30,FUN_016429fc);
  }
  return uVar2;
}

