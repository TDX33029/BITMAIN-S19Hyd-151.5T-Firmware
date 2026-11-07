// FUN_016e956c @ 016e956c size=252 calls_out=3 calls_in=4
// strings: 

void FUN_016e956c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar4 = FUN_0173724c(param_2,param_3,param_4,0,0,param_5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if ((iVar2 == 0) ||
     (uVar4 = FUN_016e15ac(param_1,&local_28,iVar2), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 == 0)) {
    bVar1 = false;
  }
  else {
    uVar4 = FUN_0173724c(param_2,param_3,param_4,local_28,iVar2,param_5);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    bVar1 = (int)uVar4 == iVar2;
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(bVar1,uVar3,local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

