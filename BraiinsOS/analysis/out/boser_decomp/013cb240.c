// FUN_013cb240 @ 013cb240 size=360 calls_out=9 calls_in=2
// strings: assertion failed: len <= u16::MAX as usizemnamernameserialretryexpire

uint FUN_013cb240(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = FUN_013c80e8(param_1,param_2,*(undefined1 *)(param_2 + 0x19));
  if (uVar1 == 0) {
    psVar4 = (short *)(param_1 + 0x48);
    FUN_013c7920(psVar4);
    uVar2 = FUN_013d9758();
    uVar1 = FUN_013e1dc0(param_2,uVar2);
    if (((uVar1 == 0) &&
        (uVar1 = FUN_013d3adc(*(undefined2 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x46),
                              param_2), uVar1 == 0)) &&
       (uVar1 = FUN_013e1d74(param_2,*(undefined4 *)(param_1 + 0xe4)), uVar1 == 0)) {
      uVar6 = FUN_013e1d2c(param_2);
      uVar1 = (uint)(uVar6 >> 0x20);
      if ((uVar6 & 1) != 0) {
        return uVar1;
      }
      if ((*psVar4 != 0x19) && (uVar3 = FUN_013bcfa8(psVar4,param_2), uVar3 != 0)) {
        return uVar3;
      }
      uVar3 = (*(int *)(param_2 + 0x14) - uVar1) - 2;
      if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: len <= u16::MAX as usizemnamernameserialretryexpire",0x2a,
                     &DAT_01cf1fbc);
      }
      uVar5 = *(uint *)(param_2 + 0x14);
      if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00474a39,0x33,&DAT_01cf2f48);
      }
      *(uint *)(param_2 + 0x14) = uVar1;
      uVar3 = FUN_013e1dc0(param_2,uVar3);
      if (*(int *)(param_2 + 0x14) - uVar1 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00474a6c,0x46,&DAT_01cf2f58);
      }
      *(uint *)(param_2 + 0x14) = uVar5;
      return uVar3;
    }
  }
  return uVar1;
}

