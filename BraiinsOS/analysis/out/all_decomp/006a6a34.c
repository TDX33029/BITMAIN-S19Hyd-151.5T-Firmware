// FUN_006a6a34 @ 006a6a34 size=288 calls_out=0 calls_in=2
// strings: 

void FUN_006a6a34(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 *local_48;
  int aiStack_44 [4];
  undefined1 *local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  puVar2 = (undefined1 *)*param_2;
  if (puVar2 == (undefined1 *)0x80000000) {
    puVar1 = (undefined4 *)param_2[5];
LAB_006a6a50:
    (**(code **)(puVar1[1] + 0x14))(&local_34,*puVar1,param_3);
    if (local_34 == &DAT_8000000d) {
      *param_1 = &DAT_8000000d;
      return;
    }
    if (local_34 == (undefined1 *)0x8000000e) {
LAB_006a6abc:
      *param_1 = local_34;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)param_2[5];
    (**(code **)(puVar1[1] + 0xc))(&local_34,*puVar1);
    if (local_34 == &DAT_8000000d) {
      *param_2 = 0x80000000;
      local_30 = param_2[1];
      iStack_2c = param_2[2];
      iStack_28 = param_2[3];
      iStack_24 = param_2[4];
      local_34 = puVar2;
      (**(code **)(puVar1[1] + 0x10))(&local_48,*puVar1,&local_34);
      if (local_48 == &DAT_8000000d) goto LAB_006a6a50;
      piVar3 = aiStack_44;
      local_34 = local_48;
    }
    else {
      if (local_34 == (undefined1 *)0x8000000e) {
        local_34 = (undefined1 *)0x8000000e;
        goto LAB_006a6abc;
      }
      piVar3 = &local_30;
    }
    local_30 = *piVar3;
    iStack_2c = piVar3[1];
    iStack_28 = piVar3[2];
    iStack_24 = piVar3[3];
  }
  param_1[1] = local_30;
  param_1[2] = iStack_2c;
  param_1[3] = iStack_28;
  param_1[4] = iStack_24;
  *param_1 = local_34;
  return;
}

