// FUN_013b1200 @ 013b1200 size=64 calls_out=1 calls_in=7
// strings: 

undefined8 FUN_013b1200(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  if (iVar2 == iVar1) {
    FUN_01283c9c(param_1,0x40);
    iVar1 = param_1[1];
    iVar2 = param_1[2];
  }
  uVar3 = iVar2 - iVar1;
  if (param_2 < (uint)(iVar2 - iVar1)) {
    uVar3 = param_2;
  }
  return CONCAT44(uVar3,*param_1 + iVar1);
}

