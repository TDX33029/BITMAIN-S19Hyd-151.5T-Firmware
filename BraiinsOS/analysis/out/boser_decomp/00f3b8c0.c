// FUN_00f3b8c0 @ 00f3b8c0 size=356 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00f3b8c0(char *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  char *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\x01') {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0052c2af,3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00667b70(*(undefined4 *)(param_1 + 4),param_2);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_2c = &DAT_01ce45f8;
      local_30 = (char *)&local_40;
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      iVar1 = FUN_00667b70(*(undefined4 *)(param_1 + 4),&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  else {
    local_30 = param_1 + 1;
    uVar3 = FUN_013032f4(param_2,&DAT_0052e42c,2,&local_30,FUN_005ef88c);
  }
  return uVar3;
}

