// FUN_01b04ba0 @ 01b04ba0 size=244 calls_out=3 calls_in=3
// strings: 

void FUN_01b04ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  uint local_24;
  
  local_24 = DAT_01d53560;
  uVar4 = FUN_01b45384(param_2,param_3,param_4,0,0,param_5);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  iVar2 = (int)uVar4;
  if ((iVar2 == 0) ||
     (uVar4 = FUN_01afcf38(param_1,&local_28,iVar2), uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 == 0)) {
    bVar1 = false;
  }
  else {
    uVar4 = FUN_01b45384(param_2,param_3,param_4,local_28,iVar2,param_5);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    bVar1 = (int)uVar4 == iVar2;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar3,local_24 ^ DAT_01d53560,0);
  }
  return;
}

