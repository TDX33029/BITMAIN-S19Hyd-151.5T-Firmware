// FUN_01917558 @ 01917558 size=192 calls_out=3 calls_in=3
// strings: 

void FUN_01917558(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  puVar2 = (undefined1 *)*param_2;
  puVar3 = (undefined1 *)0x1;
  if ((undefined1 *)0x80000000 < puVar2) {
    puVar3 = puVar2 + 0x7fffffff;
  }
  uVar1 = (&DAT_00538b2a)[(int)puVar3];
  if (puVar2 == &DAT_80000005) {
    local_38 = param_2[1];
    uStack_34 = param_2[2];
    uStack_30 = param_2[3];
    FUN_01935918(&local_48);
  }
  else {
    local_24 = 1;
    local_20 = 0;
    local_28 = 0;
    FUN_01917674(param_2,&local_28);
    local_48 = local_28;
    uStack_44 = local_24;
    uStack_40 = local_20;
  }
  param_1[3] = param_2[0x1e];
  *(undefined1 *)(param_1 + 4) = uVar1;
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  if ((undefined1 *)*param_2 == &DAT_80000005) {
    return;
  }
  FUN_01917930(param_2);
  return;
}

