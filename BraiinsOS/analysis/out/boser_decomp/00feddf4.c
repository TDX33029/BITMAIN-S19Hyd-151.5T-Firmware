// FUN_00feddf4 @ 00feddf4 size=48 calls_out=0 calls_in=3
// strings: 

void FUN_00feddf4(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  iVar1 = 0xc;
  if (uVar2 < 2) {
    iVar1 = 0x14;
  }
  uVar3 = (**(code **)(param_2[2] + iVar1))(param_2[1]);
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 1) = uVar3;
  return;
}

