// FUN_01ac98e4 @ 01ac98e4 size=104 calls_out=1 calls_in=3
// strings: 

longlong FUN_01ac98e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 8) != 1) {
    return (ulonglong)*(uint *)(param_1 + 8) << 0x20;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(param_1 + 0xc) == -1) {
LAB_01ac9940:
    return CONCAT44(uVar1 - uVar2,*(int *)(param_1 + 0x14) + uVar2);
  }
  if (uVar2 < uVar1) {
    if (-0x41 < *(char *)(*(int *)(param_1 + 0x14) + uVar2)) goto LAB_01ac9940;
  }
  else if (uVar1 == uVar2) goto LAB_01ac9940;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

