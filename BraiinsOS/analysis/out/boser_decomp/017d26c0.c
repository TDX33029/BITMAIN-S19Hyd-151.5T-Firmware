// FUN_017d26c0 @ 017d26c0 size=592 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_017d26c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == 0) {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0052e42c,2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb940(param_2,"()",2);
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
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_012fb940(&local_30,"()",2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01302620(&local_40,&DAT_005312e2,2);
    }
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  }
  else {
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
      iVar1 = FUN_017e2744(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = *param_2;
      pcVar2 = *(code **)(param_2[1] + 0xc);
    }
    else {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_017e2744(param_1,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar3 = (*pcVar2)(uVar3,&DAT_0053341b,1);
  }
  return uVar3;
}

