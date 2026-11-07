// FUN_00ec9c1c @ 00ec9c1c size=308 calls_out=4 calls_in=1
// strings: 

void FUN_00ec9c1c(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *extraout_r2;
  int extraout_r3;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar6 = thunk_FUN_016de0ee();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar3 = (int)uVar6 + extraout_r3;
  local_38 = 2;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    cVar5 = '\0';
    cVar4 = '\0';
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_00ec9ca4;
    FUN_015e8e6c(iVar3,FUN_005bc49c);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar3 + 0x31);
  cVar5 = *(char *)(iVar3 + 0x30);
  cVar1 = cVar4;
  if (cVar5 == '\x01') {
    if (cVar4 == '\0') {
      FUN_016455a4(*extraout_r2,extraout_r2[1]);
      *param_1 = 2;
      FUN_00ec9d88(&local_38);
      return;
    }
    cVar1 = cVar4 + -1;
  }
  *(char *)(iVar3 + 0x31) = cVar1;
LAB_00ec9ca4:
  (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,&local_38);
  if (local_38 != 2) {
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
    param_1[4] = iStack_28;
    param_1[5] = iStack_24;
    return;
  }
  *param_1 = 2;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  param_1[3] = iStack_2c;
  param_1[4] = iStack_28;
  param_1[5] = iStack_24;
  if (cVar5 == '\0') {
    return;
  }
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(char *)(iVar3 + 0x31) = cVar4;
  *(undefined1 *)(iVar3 + 0x30) = 1;
  return;
}

