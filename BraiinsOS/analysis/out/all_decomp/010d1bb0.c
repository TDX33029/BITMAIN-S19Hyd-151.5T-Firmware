// FUN_010d1bb0 @ 010d1bb0 size=128 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_010d1bb0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  
  iVar1 = (**(code **)(param_2[1] + 0x10))(*param_2,0x22);
  uVar2 = 1;
  if (iVar1 == 0) {
    local_14 = &LAB_008b9b38;
    puStack_1c = param_2;
    uStack_18 = param_1;
    iVar1 = FUN_00fa948c(&puStack_1c,&DAT_0188560c,&DAT_00590e71,&uStack_18);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(param_2[1] + 0x10))(*param_2,0x22);
    }
  }
  return uVar2;
}

