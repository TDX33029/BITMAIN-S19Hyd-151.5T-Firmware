// FUN_0101a360 @ 0101a360 size=264 calls_out=2 calls_in=1
// strings: 

void FUN_0101a360(undefined2 *param_1,int *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if ((((char)*param_2 != '\x03') ||
      (puVar2 = (undefined4 *)param_2[1], *(char *)(puVar2 + 2) != '\x15')) ||
     ((**(code **)(puVar2[1] + 0x1c))(&local_28,*puVar2),
     (local_28 != -0x2579315 || iStack_20 != -0x233346a5) ||
     (iStack_24 != 0x2c0b2c40 || iStack_1c != -0x3c8a74f6))) {
    local_28 = *param_2;
    iStack_24 = param_2[1];
    FUN_0102e79c(param_1,&local_28);
    return;
  }
  uVar3 = *puVar2;
  puVar4 = (undefined4 *)puVar2[1];
  pcVar1 = (code *)*puVar4;
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 6;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_018824ec;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar3);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  thunk_FUN_016d3fb4(puVar2);
  return;
}

