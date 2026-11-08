// FUN_006bea0c @ 006bea0c size=344 calls_out=4 calls_in=2
// strings: 

uint FUN_006bea0c(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else if (*param_1 == 1) {
    if (*param_2 != 1) {
      return 0;
    }
  }
  else {
    if (*param_2 == 0) {
      return 0;
    }
    if (*param_2 != 1) {
      if (param_1[2] == param_2[2]) {
        iVar2 = thunk_FUN_01bed842(param_1[1],param_2[1]);
        return (uint)(iVar2 == 0);
      }
      return 0;
    }
  }
  iVar2 = param_1[2];
  iVar3 = param_1[1];
  uVar5 = *(undefined8 *)(param_1 + 1);
  uVar4 = FUN_00700b3c(iVar3,iVar2,0x21);
  if ((int)uVar4 == 0) {
    uVar4 = FUN_006a4c58(iVar3,iVar2);
    if ((int)uVar4 == 0) {
      local_28 = 2;
    }
    else {
      local_28 = 0;
      uVar5 = uVar4;
    }
  }
  else {
    local_28 = 1;
    uVar5 = uVar4;
  }
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  uVar4 = *(undefined8 *)(param_2 + 1);
  local_24 = uVar5;
  uVar5 = FUN_00700b3c(iVar2,iVar3,0x21);
  if ((int)uVar5 == 0) {
    uVar5 = FUN_006a4c58(iVar2,iVar3);
    if ((int)uVar5 == 0) {
      local_1c = 2;
    }
    else {
      local_1c = 0;
      uVar4 = uVar5;
    }
  }
  else {
    local_1c = 1;
    uVar4 = uVar5;
  }
  local_18 = uVar4;
  uVar1 = FUN_006bea0c(&local_28,&local_1c);
  return uVar1;
}

