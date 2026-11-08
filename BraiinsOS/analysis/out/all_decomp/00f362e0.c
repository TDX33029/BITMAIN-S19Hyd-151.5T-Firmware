// FUN_00f362e0 @ 00f362e0 size=340 calls_out=4 calls_in=3
// strings: 

void FUN_00f362e0(undefined2 *param_1,char *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 uStack_11;
  
  if (*param_2 != '\x02') {
    uVar2 = FUN_00f36124(param_2,&uStack_11,&DAT_0187e8f8);
    *(undefined4 *)(param_1 + 2) = uVar2;
    *param_1 = 1;
    FUN_00f3615c(param_2);
    return;
  }
  puVar1 = (uint *)(param_2 + 0x10);
  uVar3 = *puVar1;
  uVar4 = *(uint *)(param_2 + 0x14);
  local_20 = *(undefined8 *)puVar1;
  if (*(int *)(param_2 + 8) == 0) {
    if (uVar4 != 0 || uVar3 >> 0x10 != 0) {
      local_28[0] = 1;
      uVar2 = FUN_0157cd6c(local_28,&uStack_11,&DAT_0187e8f8);
      *(undefined4 *)(param_1 + 2) = uVar2;
      *param_1 = 1;
      return;
    }
LAB_00f36368:
    param_1[1] = (short)uVar3;
    *param_1 = 0;
    return;
  }
  if (*(int *)(param_2 + 8) == 1) {
    if (uVar4 == 0 && (0xffff < uVar3) <= uVar4) goto LAB_00f36368;
    local_28[0] = 2;
    local_20 = *(undefined8 *)puVar1;
    uVar2 = FUN_0157cd6c(local_28,&uStack_11,&DAT_0187e8f8);
  }
  else {
    local_28[0] = 3;
    local_20 = *(undefined8 *)puVar1;
    uVar2 = FUN_0157cc00(local_28,&uStack_11,&DAT_0187e8f8);
  }
  *(undefined4 *)(param_1 + 2) = uVar2;
  *param_1 = 1;
  return;
}

