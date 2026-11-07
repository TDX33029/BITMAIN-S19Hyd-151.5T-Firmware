// FUN_0196747c @ 0196747c size=64 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_0196747c(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 != 1) {
    return 0;
  }
  if ((char)piVar2[1] == '\x03') {
    uVar1 = (**(code **)(((undefined4 *)piVar2[2])[1] + 0x18))(*(undefined4 *)piVar2[2]);
    return uVar1;
  }
  return 0;
}

