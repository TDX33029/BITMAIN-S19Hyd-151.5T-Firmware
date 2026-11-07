// FUN_012032a4 @ 012032a4 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_012032a4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_1;
  iVar1 = 2;
  if ((uint)(uVar2 < 2) <= -param_1[1]) {
    iVar1 = uVar2 - 2;
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x012032e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0,-(param_1[1] + (uint)(uVar2 >= 2)));
    return;
  }
  if (iVar1 == 1) {
    puVar3 = param_1 + 2;
    if (*puVar3 == 0) {
      puVar3 = param_1 + 4;
    }
    FUN_01139b38(*puVar3,puVar3[1]);
    return;
  }
  FUN_007af1e8(param_1);
  if (*param_1 != 0 || param_1[1] != 0) {
    puVar3 = param_1 + 2;
    if (*puVar3 == 0) {
      puVar3 = param_1 + 4;
    }
    FUN_01139b38(*puVar3,puVar3[1]);
  }
  FUN_01340e1c(param_1[0x40e]);
  FUN_019bb7e0(param_1[0x410],param_1[0x411]);
  return;
}

