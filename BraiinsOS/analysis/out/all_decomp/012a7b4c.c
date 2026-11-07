// FUN_012a7b4c @ 012a7b4c size=168 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_012a7b4c(undefined1 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *local_14;
  undefined4 **local_10;
  undefined4 ***local_c;
  
  local_14 = &DAT_018d8844;
  DataMemoryBarrier(0xb);
  if (DAT_018d8844 != 0) {
    local_10 = &local_14;
    local_c = &local_10;
    FUN_015eedc4(&DAT_018d8844,0,&local_c,&DAT_0188bdd8,&DAT_0188bca0);
  }
  piVar1 = (int *)FUN_0133c5fc(local_14[1],*param_1);
  uVar2 = 0;
  if ((*(int *)*piVar1 == 1) && (uVar2 = 0, ((int *)*piVar1)[1] != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

