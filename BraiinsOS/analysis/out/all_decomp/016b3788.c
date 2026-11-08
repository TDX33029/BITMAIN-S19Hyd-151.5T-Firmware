// FUN_016b3788 @ 016b3788 size=256 calls_out=1 calls_in=2
// strings: 

longlong FUN_016b3788(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_1 != 1) {
    return (ulonglong)*param_1 << 0x20;
  }
  uVar4 = param_1[5];
  uVar1 = param_1[6];
  uVar2 = param_1[1] + 1;
  if (param_1[2] == 0) {
    if (uVar2 != 0) {
      if (uVar2 < uVar1) {
        if (*(char *)(uVar4 + uVar2) < -0x40) {
LAB_016b3810:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(uVar4,uVar1,uVar2,uVar1,&DAT_018af080);
        }
      }
      else if (uVar1 != uVar2) goto LAB_016b3810;
    }
    return CONCAT44(uVar1 - uVar2,uVar4 + uVar2);
  }
  uVar3 = param_1[3];
  if (uVar3 < uVar2) goto LAB_016b3860;
  if (uVar2 != 0) {
    if (uVar2 < uVar1) {
      if (*(char *)(uVar4 + uVar2) < -0x40) goto LAB_016b3860;
    }
    else if (uVar1 != uVar2) goto LAB_016b3860;
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar1) {
      if (*(char *)(uVar4 + uVar3) < -0x40) {
LAB_016b3860:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(uVar4);
      }
    }
    else if (uVar3 != uVar1) goto LAB_016b3860;
  }
  return CONCAT44(uVar3 - uVar2,uVar4 + uVar2);
}

