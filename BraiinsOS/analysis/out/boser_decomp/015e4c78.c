// FUN_015e4c78 @ 015e4c78 size=140 calls_out=1 calls_in=0
// strings: 

int FUN_015e4c78(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x46);
  uVar2 = (**(code **)(param_3 + 0x34))(param_2);
  if (uVar1 != uVar2) {
    return (uint)(uVar1 >= uVar2 && uVar1 != uVar2) - (uint)(uVar1 < uVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x44);
  uVar2 = (**(code **)(param_3 + 0x40))(param_2);
  if (uVar1 != uVar2) {
    return (uint)(uVar1 >= uVar2 && uVar1 != uVar2) - (uint)(uVar1 < uVar2);
  }
  iVar3 = FUN_015e4a90(param_1,param_2,param_3);
  return iVar3;
}

