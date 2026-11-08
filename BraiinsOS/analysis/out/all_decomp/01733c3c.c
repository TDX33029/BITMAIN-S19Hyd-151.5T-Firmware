// FUN_01733c3c @ 01733c3c size=216 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01733c3c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (iVar1 = FUN_017147ac(param_2,param_1 + 0x118), iVar1 == 0)) ||
     ((param_3 != 0 && (iVar1 = FUN_0172ea24(param_1,param_3,param_1 + 0x134), iVar1 == 0)))) {
    return 0;
  }
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0172ea24(param_1,param_4,param_1 + 0x178);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

