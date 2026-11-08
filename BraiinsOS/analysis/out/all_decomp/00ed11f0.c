// FUN_00ed11f0 @ 00ed11f0 size=260 calls_out=2 calls_in=1
// strings: 

int FUN_00ed11f0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  undefined4 *local_14;
  
  piVar2 = (int *)*param_2;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_18 = CONCAT22(local_18._2_2_,0x100);
  local_14 = param_2;
  iVar1 = FUN_00e61384(&local_18,&DAT_00418447,5,param_1);
  if (((iVar1 != 0) || ((local_18 & 0xff00) == 0)) || ((local_18 & 1) != 0)) {
    return iVar1;
  }
  piVar2 = (int *)*local_14;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
  piVar2[2] = iVar1 + 1;
  return 0;
}

