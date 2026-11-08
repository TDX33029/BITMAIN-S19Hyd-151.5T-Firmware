// FUN_00d42d7c @ 00d42d7c size=320 calls_out=3 calls_in=1
// strings: 

void FUN_00d42d7c(int *param_1)

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
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar6 = thunk_FUN_016de0ee();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar3 = (int)uVar6 + extraout_r3;
  local_38 = 9;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    cVar4 = '\0';
    cVar5 = '\0';
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_00d42e08;
    FUN_015e8e6c(iVar3,FUN_00bacf28);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  cVar5 = *(char *)(iVar3 + 0x31);
  cVar4 = *(char *)(iVar3 + 0x30);
  cVar1 = cVar5;
  if (cVar4 == '\x01') {
    if (cVar5 == '\0') {
      FUN_016455a4(*extraout_r2,extraout_r2[1]);
      *param_1 = 9;
      return;
    }
    cVar1 = cVar5 + -1;
  }
  *(char *)(iVar3 + 0x31) = cVar1;
LAB_00d42e08:
  (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,&local_38);
  if (local_38 != 9) {
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
    param_1[4] = local_28;
    param_1[5] = iStack_24;
    param_1[6] = iStack_20;
    param_1[7] = iStack_1c;
    return;
  }
  *param_1 = 9;
  param_1[1] = iStack_34;
  param_1[2] = iStack_30;
  param_1[3] = iStack_2c;
  param_1[4] = local_28;
  param_1[5] = iStack_24;
  param_1[6] = iStack_20;
  param_1[7] = iStack_1c;
  if (cVar4 == '\0') {
    return;
  }
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(char *)(iVar3 + 0x31) = cVar5;
  *(undefined1 *)(iVar3 + 0x30) = 1;
  return;
}

