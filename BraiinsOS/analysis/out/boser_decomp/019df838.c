// FUN_019df838 @ 019df838 size=88 calls_out=2 calls_in=3
// strings: 

void FUN_019df838(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  if (iVar2 == -1) {
    return;
  }
  FUN_019e7070(&local_18,param_1,iVar2);
  if ((local_18 & 0xff) != 4) {
    FUN_0069263c(local_18 & 0xff,local_14);
  }
  uVar1 = FUN_01beaf68(iVar2);
  local_14 = 0;
  local_18 = 0;
  iVar2 = thunk_FUN_01bee080(6,uVar1,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

