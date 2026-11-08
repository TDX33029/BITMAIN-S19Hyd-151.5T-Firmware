// FUN_0113b9f0 @ 0113b9f0 size=364 calls_out=1 calls_in=0
// strings: InvalidHexCharacterOddLengthInvalidStringLength | indexUnsupportedCaptures

uint FUN_0113b9f0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *local_24;
  undefined4 *local_20;
  byte local_1c;
  byte local_1b;
  
  iVar3 = *param_1 - 0x10ffff;
  if (*param_1 < 0x10ffff) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0113ba3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"OddLengthInvalidStringLength",9);
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0113bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidStringLength",0x13);
    return uVar1;
  }
  local_24 = param_1 + 1;
  local_1c = (**(code **)(param_2[1] + 0xc))
                       (*param_2,"InvalidHexCharacterOddLengthInvalidStringLength",0x13);
  local_1b = 0;
  local_20 = param_2;
  uVar2 = FUN_00fb2258(&local_20,&DAT_003e8518,1,param_1,FUN_00fa93dc);
  FUN_00fb2258(uVar2,"indexUnsupportedCaptures",5,&local_24,FUN_00d47d08);
  if (local_1b != 1 || (local_1c & 1) != 0) {
    return (local_1b | local_1c) & 1;
  }
  if ((*(byte *)((int)local_20 + 10) & 0x80) == 0) {
    uVar1 = (**(code **)(local_20[1] + 0xc))(*local_20," }",2);
    return uVar1 & 1;
  }
  uVar1 = (**(code **)(local_20[1] + 0xc))(*local_20,"}",1);
  return uVar1 & 1;
}

