// FUN_01b9530c @ 01b9530c size=120 calls_out=1 calls_in=2
// strings: 

int FUN_01b9530c(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 + (param_4 - param_2);
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  iVar1 = FUN_01b95220(param_1,param_2,uVar3);
  if (param_4 == param_2 + iVar1) {
    iVar2 = FUN_01b95220(param_1 + iVar1,param_5,param_3);
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

