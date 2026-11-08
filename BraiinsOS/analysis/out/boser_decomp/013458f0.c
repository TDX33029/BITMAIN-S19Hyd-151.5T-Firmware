// FUN_013458f0 @ 013458f0 size=104 calls_out=1 calls_in=2
// strings: 

longlong FUN_013458f0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  if (uVar2 == uVar1) {
    return (ulonglong)uVar1 << 0x20;
  }
  uVar3 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
LAB_0134594c:
    return CONCAT44(uVar1 - uVar3,*param_1 + uVar3);
  }
  if (uVar3 < uVar1) {
    if (-0x41 < *(char *)(*param_1 + uVar3)) goto LAB_0134594c;
  }
  else if (uVar1 == uVar3) goto LAB_0134594c;
                    /* WARNING: Subroutine does not return */
  FUN_012fb514();
}

