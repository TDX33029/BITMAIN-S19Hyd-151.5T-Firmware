// FUN_014140f4 @ 014140f4 size=428 calls_out=2 calls_in=1
// strings: \'failed to read field complete headersfailed to read headersfailed to decode field's raw header valueincomplete multipart streamfailed to read streamfailed to lock multipart stateContent-Type is not multipart/form-datafailed to decode Content-Typemultipart boundary not found in Content-Type

undefined4 FUN_014140f4(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  byte local_2d;
  byte *local_2c;
  code *local_28;
  
  uVar9 = *param_2;
  iVar11 = param_2[1];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar11 + 0xc);
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0141412c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*UNRECOVERED_JUMPTABLE)(uVar9,"Sensitive",9);
    return uVar9;
  }
  uVar5 = 1;
  iVar1 = (*UNRECOVERED_JUMPTABLE)(uVar9,"\"",1);
  if (iVar1 == 0) {
    uVar10 = *(uint *)(param_1 + 8);
    uVar2 = 0;
    iVar1 = *(int *)(param_1 + 4);
    if (uVar10 != 0) {
      uVar4 = extraout_r3;
      uVar6 = 0;
      do {
        local_2d = *(byte *)(iVar1 + uVar6);
        uVar8 = (uint)local_2d;
        uVar7 = uVar6 + 1;
        if (uVar8 != 0x22) {
          uVar4 = (uint)(uVar8 == 9);
        }
        if (uVar8 == 0x22 || uVar4 == 0 && 0x5e < uVar8 - 0x20) {
          if (uVar6 != uVar2) {
            if ((uVar10 < uVar6) || (uVar6 < uVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar2,uVar6,uVar10,&DAT_01cf42b0);
            }
            iVar3 = (*UNRECOVERED_JUMPTABLE)(uVar9,iVar1 + uVar2,uVar6 - uVar2);
            if (iVar3 != 0) {
              return 1;
            }
          }
          if (uVar8 == 0x22) {
            iVar3 = (*UNRECOVERED_JUMPTABLE)
                              (uVar9,
                               "\\\"failed to read field complete headersfailed to read headersfailed to decode field\'s raw header valueincomplete multipart streamfailed to read streamfailed to lock multipart stateContent-Type is not multipart/form-datafailed to decode Content-Typemultipart boundary not found in Content-Type"
                               ,2);
            uVar4 = extraout_r3_01;
          }
          else {
            local_2c = &local_2d;
            local_28 = FUN_012fd63c;
            iVar3 = FUN_012fa178(uVar9,iVar11,&DAT_00582d40,&local_2c);
            uVar4 = extraout_r3_00;
          }
          uVar2 = uVar7;
          if (iVar3 != 0) {
            return 1;
          }
        }
        uVar6 = uVar7;
      } while (uVar10 != uVar7);
      if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar2,uVar10,uVar10,&DAT_01cf42a0);
      }
    }
    iVar11 = (*UNRECOVERED_JUMPTABLE)(uVar9,iVar1 + uVar2,uVar10 - uVar2);
    if (iVar11 == 0) {
      uVar5 = (*UNRECOVERED_JUMPTABLE)(uVar9,"\"",1);
    }
  }
  return uVar5;
}

