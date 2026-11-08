// FUN_0195adb8 @ 0195adb8 size=60 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_0195adb8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = (**(code **)(iVar2 + 0xc))(uVar1);
  if (*(int *)(iVar2 + 4) != 0) {
    thunk_FUN_01be4678(uVar1);
  }
  return uVar3;
}

