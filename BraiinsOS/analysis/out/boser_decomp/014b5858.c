// FUN_014b5858 @ 014b5858 size=216 calls_out=2 calls_in=1
// strings: 

void FUN_014b5858(undefined2 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined2 uVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  puVar3 = (uint *)(param_2 + 2);
  if (*param_2 == 1) {
    uVar1 = *puVar3;
    local_20 = *(undefined8 *)puVar3;
    if (param_2[3] != 0 || (uint)param_2[3] < (uint)(0xffff < uVar1)) {
      uVar4 = 1;
      local_28[0] = 1;
      uVar2 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9924);
      *(undefined4 *)(param_1 + 2) = uVar2;
      goto LAB_014b58c8;
    }
LAB_014b58c0:
    uVar4 = 0;
    param_1[1] = (short)uVar1;
  }
  else {
    if (*param_2 == 2) {
      uVar1 = *puVar3;
      local_20 = *(undefined8 *)puVar3;
      if (param_2[3] == 0 && (uint)(0xffff < uVar1) <= (uint)param_2[3]) goto LAB_014b58c0;
      local_28[0] = 2;
      uVar2 = FUN_01967740(local_28,&uStack_11,&DAT_01cf9924);
    }
    else {
      local_20 = *(undefined8 *)puVar3;
      local_28[0] = 3;
      uVar2 = FUN_01967538(local_28,&uStack_11,&DAT_01cf9924);
    }
    *(undefined4 *)(param_1 + 2) = uVar2;
    uVar4 = 1;
  }
LAB_014b58c8:
  *param_1 = uVar4;
  return;
}

