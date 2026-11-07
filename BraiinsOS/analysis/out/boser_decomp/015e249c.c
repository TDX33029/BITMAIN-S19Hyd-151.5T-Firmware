// FUN_015e249c @ 015e249c size=72 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015e249c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_015e1f38();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(param_3 + 0x10))(param_2);
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x18) >> 1 < *(uint *)(iVar1 + 0x18)) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

