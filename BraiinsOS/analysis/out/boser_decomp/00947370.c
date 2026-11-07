// FUN_00947370 @ 00947370 size=128 calls_out=1 calls_in=8
// strings: 

void FUN_00947370(uint *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = param_2[1];
  if (7 < uVar2) {
    param_2[1] = uVar2 - 8;
    uVar1 = *(undefined8 *)*param_2;
    *param_2 = (undefined8 *)*param_2 + 1;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  else {
    local_c = 0;
    local_10 = 0x2501;
    local_14 = 0x80000000;
    uVar3 = FUN_0073696c(&local_14);
    param_1[1] = uVar3;
  }
  *param_1 = (uint)(7 >= uVar2);
  return;
}

