// FUN_01b34254 @ 01b34254 size=184 calls_out=6 calls_in=4
// strings: 

bool FUN_01b34254(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  FUN_01b2e894(param_5);
  iVar1 = FUN_01b2e970(param_5);
  if (iVar1 != 0) {
    if (param_2 == param_3) {
      iVar2 = FUN_01b332c4(iVar1,param_2,param_5);
    }
    else {
      iVar2 = FUN_01b32c54(iVar1,param_2,param_3,param_5);
    }
    if (iVar2 != 0) {
      iVar1 = FUN_01b341a0(param_1,iVar1,param_4,param_5);
      bVar3 = iVar1 != 0;
      goto LAB_01b34298;
    }
  }
  bVar3 = false;
LAB_01b34298:
  FUN_01b2ebbc(param_5);
  return bVar3;
}

