// FUN_017558f4 @ 017558f4 size=96 calls_out=3 calls_in=4
// strings: 

void FUN_017558f4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  iVar1 = 2;
  if ((uint)(uVar2 < 3) <= -param_1[1]) {
    iVar1 = uVar2 - 3;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
    }
    else {
      FUN_017793c0(param_1,-(param_1[1] + (uint)(uVar2 >= 3)));
    }
  }
  FUN_0182c8b4(param_1 + 0x10);
  FUN_01435814(param_1 + 0x17);
  return;
}

