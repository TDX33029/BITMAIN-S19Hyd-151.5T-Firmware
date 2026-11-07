// FUN_00704948 @ 00704948 size=332 calls_out=8 calls_in=2
// strings: 

void FUN_00704948(undefined4 *param_1,undefined1 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    if (param_3 != 0) {
      iVar1 = FUN_00705380(param_4,param_5,0);
      goto LAB_00704a90;
    }
    iVar1 = 0xc;
    if (param_5 != 0x10) goto LAB_00704a90;
    uVar2 = FUN_01b38318();
    iVar3 = FUN_01b6ad8c(0x248);
    if (iVar3 == 0) goto LAB_00704a90;
    FUN_01b37aa8();
    iVar1 = FUN_01b37ac4(iVar3,uVar2,param_4,0x10,0x10,0);
    if (iVar1 == 1) {
      iVar1 = 7;
      goto LAB_00704a90;
    }
    break;
  default:
    *param_1 = 0xc;
    return;
  case 2:
    if (param_3 != 0) {
      iVar1 = FUN_00705400(param_4,param_5,0);
      goto LAB_00704a90;
    }
    iVar1 = 0xc;
    if (param_5 != 0x20) goto LAB_00704a90;
    uVar2 = FUN_01b38364();
    iVar3 = FUN_01b6ad8c(0x248);
    if (iVar3 == 0) goto LAB_00704a90;
    FUN_01b37aa8();
    iVar1 = FUN_01b37ac4(iVar3,uVar2,param_4,0x20,0x10,0);
    if (iVar1 == 1) {
      iVar1 = 8;
      goto LAB_00704a90;
    }
  }
  iVar1 = 0xc;
  FUN_01b37c50(iVar3);
LAB_00704a90:
                    /* WARNING: Could not recover jumptable at 0x00704aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00704aa4 + *(int *)(&DAT_00704aa4 + iVar1 * 4)))(&UNK_01c066a0);
  return;
}

