// FUN_01b2bdb4 @ 01b2bdb4 size=104 calls_out=2 calls_in=6
// strings: 

int FUN_01b2bdb4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  iVar1 = FUN_01b0ced4(uVar2,uVar3,param_2);
  if (iVar1 != 0) {
    FUN_01b2bb74(param_1,param_2,uVar2,uVar3);
  }
  return iVar1;
}

