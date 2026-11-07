// FUN_01367b3c @ 01367b3c size=228 calls_out=2 calls_in=4
// strings: 

void FUN_01367b3c(undefined2 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if ((((char)*param_2 == '\x03') &&
      (puVar1 = (undefined4 *)param_2[1], *(char *)(puVar1 + 2) == '\x15')) &&
     ((**(code **)(puVar1[1] + 0x1c))(&local_20,*puVar1),
     (local_20 == -0x2a2c1679 && iStack_18 == 0x59b1b086) &&
     (iStack_1c == -0x18d4842f && iStack_14 == -0x19fd1563))) {
    *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *param_1 = 0x101;
    *(undefined4 *)(param_1 + 2) = 6;
    *(undefined4 *)(param_1 + 6) = 1;
    FUN_0069d8a4(3,puVar1);
    return;
  }
  local_20 = *param_2;
  iStack_1c = param_2[1];
  FUN_01386464(param_1,&local_20);
  return;
}

