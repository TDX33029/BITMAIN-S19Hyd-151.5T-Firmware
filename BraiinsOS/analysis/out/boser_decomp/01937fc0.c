// FUN_01937fc0 @ 01937fc0 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_01937fc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_019afae4(&local_28,param_5,param_6);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == *(int *)(param_1 + 0xc)) {
    FUN_015f5b48();
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 0x1c);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[5] = param_7;
  puVar1[6] = param_8;
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  return;
}

