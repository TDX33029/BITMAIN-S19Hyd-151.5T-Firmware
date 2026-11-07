// FUN_0094ef18 @ 0094ef18 size=104 calls_out=1 calls_in=3
// strings: 

void FUN_0094ef18(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = param_2[1];
  if (3 < uVar1) {
    puVar3 = (uint *)*param_2;
    param_1[1] = *puVar3;
    *param_2 = puVar3 + 1;
    param_2[1] = uVar1 - 4;
  }
  else {
    local_14 = 0;
    local_18 = 0x2501;
    local_1c = 0x80000000;
    uVar2 = FUN_0073696c(&local_1c);
    param_1[1] = uVar2;
  }
  *param_1 = (uint)(3 >= uVar1);
  return;
}

