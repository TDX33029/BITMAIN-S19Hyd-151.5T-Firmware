// FUN_015f0bb0 @ 015f0bb0 size=64 calls_out=1 calls_in=1
// strings: 

bool FUN_015f0bb0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(param_3 + 0x3c))(param_2);
  bVar2 = false;
  if ((int)((ulonglong)uVar3 >> 0x20) == param_1[1]) {
    iVar1 = thunk_FUN_01bed842((int)uVar3,*param_1);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

