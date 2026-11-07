// FUN_00699cf4 @ 00699cf4 size=128 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00699cf4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  
  iVar1 = (**(code **)(param_2[1] + 0x10))(*param_2,0x22);
  uVar2 = 1;
  if (iVar1 == 0) {
    local_14 = &LAB_0193a90c;
    puStack_1c = param_2;
    uStack_18 = param_1;
    iVar1 = FUN_012fa178(&puStack_1c,&DAT_01c0531c,&DAT_00590e5f,&uStack_18);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(param_2[1] + 0x10))(*param_2,0x22);
    }
  }
  return uVar2;
}

