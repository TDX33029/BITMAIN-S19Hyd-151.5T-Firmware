// FUN_010bdd80 @ 010bdd80 size=456 calls_out=2 calls_in=1
// strings: \'SensitiveInvalidHeaderValuefailed to parse header value

undefined4 FUN_010bdd80(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_2d;
  byte *local_2c;
  code *local_28;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x010bddb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (param_2,"SensitiveInvalidHeaderValuefailed to parse header value",9);
    return uVar1;
  }
  uVar1 = 1;
  iVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,&DAT_004144ec,1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar8 = *(uint *)(param_1 + 8);
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        local_2d = *(byte *)(iVar2 + uVar6);
        uVar5 = (uint)local_2d;
        uVar7 = uVar6 + 1;
        if (uVar5 - 0x20 < 0x5f) {
          if (uVar5 == 0x22) {
LAB_010bde58:
            if (uVar6 != uVar3) {
              if ((uVar8 < uVar6) || (uVar6 < uVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(uVar3,uVar6,uVar8,&DAT_018845ac);
              }
              iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,iVar2 + uVar3,uVar6 - uVar3);
              if (iVar4 != 0) {
                return 1;
              }
              uVar5 = (uint)local_2d;
            }
            if (uVar5 == 0x22) {
              iVar4 = (*UNRECOVERED_JUMPTABLE)
                                (param_2,
                                 "\\\"SensitiveInvalidHeaderValuefailed to parse header value",2);
            }
            else {
              local_2c = &local_2d;
              local_28 = FUN_00facb58;
              iVar4 = FUN_00fa948c(param_2,param_3,&DAT_00580bfb,&local_2c);
            }
            uVar3 = uVar7;
            if (iVar4 != 0) {
              return 1;
            }
          }
        }
        else if (uVar5 != 9) goto LAB_010bde58;
        uVar6 = uVar7;
      } while (uVar8 != uVar7);
      if (uVar8 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar3,uVar8,uVar8,&DAT_0188459c);
      }
    }
    iVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,iVar2 + uVar3,uVar8 - uVar3);
    if (iVar2 == 0) {
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,&DAT_004144ec,1);
    }
  }
  return uVar1;
}

