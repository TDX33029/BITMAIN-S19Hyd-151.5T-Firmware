// FUN_013459e4 @ 013459e4 size=108 calls_out=1 calls_in=2
// strings: 

ulonglong FUN_013459e4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[2] == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = *param_1;
  uVar3 = param_1[2] - 1;
  if (uVar3 == 0) {
    return (ulonglong)uVar1;
  }
  uVar2 = param_1[1];
  if (uVar3 < uVar2) {
    if (-0x41 < *(char *)(uVar1 + uVar3)) {
      return CONCAT44(uVar3,uVar1);
    }
  }
  else if (uVar3 == uVar2) {
    return CONCAT44(uVar2,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(uVar1,uVar2,0,uVar3,&DAT_01ce6b6c);
}

