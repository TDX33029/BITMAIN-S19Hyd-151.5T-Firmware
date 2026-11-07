// FUN_0100bcb0 @ 0100bcb0 size=160 calls_out=1 calls_in=1
// strings: 

longlong FUN_0100bcb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_1[2];
  uVar3 = *(uint *)(uVar2 + 0xc);
  if (uVar3 == 0) {
    return (ulonglong)uVar2 << 0x20;
  }
  iVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = *(int *)(uVar2 + 4) + 1;
  if (uVar3 < uVar2) goto LAB_0100bd28;
  if (uVar2 != 0) {
    if (uVar2 < uVar4) {
      if (*(char *)(iVar1 + uVar2) < -0x40) goto LAB_0100bd28;
    }
    else if (uVar2 != uVar4) goto LAB_0100bd28;
  }
  if (uVar3 < uVar4) {
    if (-0x41 < *(char *)(iVar1 + uVar3)) {
LAB_0100bd40:
      return CONCAT44(uVar3 - uVar2,iVar1 + uVar2);
    }
  }
  else if (uVar3 == uVar4) goto LAB_0100bd40;
LAB_0100bd28:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(iVar1,uVar4,uVar2,uVar3,&DAT_018821a4);
}

