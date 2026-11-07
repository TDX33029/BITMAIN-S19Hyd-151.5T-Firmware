// FUN_00ed1a90 @ 00ed1a90 size=388 calls_out=2 calls_in=1
// strings: 

int FUN_00ed1a90(uint param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  undefined4 *local_14;
  
  local_14 = param_2;
  if ((param_1 & 1) == 0) {
    piVar2 = (int *)*param_2;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
    piVar2[2] = iVar1 + 1;
    local_18 = CONCAT22(local_18._2_2_,0x100);
    iVar1 = FUN_00e62550(&local_18,&DAT_0035c48b,0xf);
  }
  else {
    piVar2 = (int *)*param_2;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
    piVar2[2] = iVar1 + 1;
    local_18 = CONCAT22(local_18._2_2_,0x100);
    iVar1 = FUN_00e62550(&local_18,&DAT_00568f3c,4);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (((local_18 & 0xff00) != 0) && ((local_18 & 1) == 0)) {
    piVar2 = (int *)*local_14;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
    piVar2[2] = iVar1 + 1;
  }
  return 0;
}

