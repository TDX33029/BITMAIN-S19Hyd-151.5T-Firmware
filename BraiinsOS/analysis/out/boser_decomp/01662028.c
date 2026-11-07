// FUN_01662028 @ 01662028 size=116 calls_out=2 calls_in=2
// strings: ./0123456789ABCDEFGHIJKLMNOPQRST

void FUN_01662028(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar3 = FUN_01661a1c(0,0,param_3,param_4,param_5,param_6);
  local_14 = 0;
  local_18 = 0;
  iVar1 = 7;
  do {
    *(char *)((int)&local_18 + iVar1) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  FUN_0166306c(param_1,&local_18,8,"./0123456789ABCDEFGHIJKLMNOPQRST");
  return;
}

