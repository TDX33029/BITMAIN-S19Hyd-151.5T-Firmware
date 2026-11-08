// FUN_01325f18 @ 01325f18 size=164 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01325f18(undefined1 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 **local_14;
  
  local_1c = &DAT_018d8934;
  DataMemoryBarrier(0xb);
  if (DAT_018d8934 != 0) {
    local_18 = &local_1c;
    local_14 = &local_18;
    FUN_015eedc4(&DAT_018d8934,0,&local_14,&DAT_0188f078,&DAT_0188e9dc);
  }
  piVar1 = (int *)FUN_0133c5fc(DAT_018d8938,*param_1);
  uVar2 = 0;
  if ((*(int *)*piVar1 == 1) && (uVar2 = 0, ((int *)*piVar1)[1] != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

