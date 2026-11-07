// FUN_00f25ebc @ 00f25ebc size=356 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00f25ebc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int *local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  
  piVar3 = (int *)*param_1;
  if ((undefined1 *)*piVar3 == &DAT_80000004) {
    iVar5 = *param_2;
    iVar6 = param_2[1];
    pcVar4 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar4)(iVar5,&DAT_00534240,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(iVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_019a6b74(piVar3 + 1,param_2);
    }
    else {
      iVar1 = (*pcVar4)(iVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = &local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = iVar5;
      local_3c = iVar6;
      iVar1 = FUN_019a6b74(piVar3 + 1,&local_30);
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
    local_30 = piVar3;
    uVar2 = FUN_013032f4(param_2,"Rpc",3,&local_30,FUN_0093f8a8);
  }
  return uVar2;
}

