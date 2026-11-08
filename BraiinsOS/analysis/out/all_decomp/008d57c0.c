// FUN_008d57c0 @ 008d57c0 size=476 calls_out=6 calls_in=2
// strings: BUG: impossible

void FUN_008d57c0(undefined4 *param_1,uint *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  uint *local_78;
  uint *local_74;
  undefined1 *local_3c;
  code *local_38;
  int *local_34;
  code *local_30;
  int *local_2c;
  code *local_28;
  
  local_3c = (undefined1 *)&local_78;
  uVar3 = *param_2;
  iVar2 = 2;
  if ((uint)(uVar3 < 5) <= -param_2[1]) {
    iVar2 = uVar3 - 5;
  }
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_016d4a50(0x21,param_2,uVar3,-(param_2[1] + (uint)(uVar3 >= 5)));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x21);
    }
    FUN_016dd1aa(iVar2,&DAT_00346188,0x21);
    *param_1 = 0x21;
    param_1[1] = iVar2;
    param_1[2] = 0x21;
    return;
  }
  if (iVar2 != 1) {
    local_74 = param_2;
    cVar1 = FUN_010e1310(param_2,param_3);
    if ((cVar1 < '\0') || (cVar1 = FUN_010e1310(param_2,param_3 + 6), '\0' < cVar1)) {
                    /* WARNING: Could not recover jumptable at 0x008d58cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_008d58d0 + *(int *)(&LAB_008d58d0 + *param_3 * 4)))
                (param_3[2],param_3[3],param_3[4],param_3[5]);
      return;
    }
LAB_008d5a98:
    *param_1 = 0x80000000;
    return;
  }
  dVar4 = *(double *)(param_2 + 2);
  local_78 = param_2 + 2;
  if (NAN(dVar4)) {
    if (NAN(*(double *)(param_3 + 0x14))) goto LAB_008d5a98;
  }
  else {
    dVar5 = *(double *)(param_3 + 0x12);
    if (NAN(dVar5)) goto LAB_008d5928;
    if (dVar4 <= dVar5) {
      if (dVar4 < dVar5) goto LAB_008d5928;
    }
    else if (dVar4 < dVar5) goto LAB_008d5a70;
    if (dVar4 <= *(double *)(param_3 + 0x14)) goto LAB_008d5a98;
    if (dVar4 < *(double *)(param_3 + 0x14)) {
LAB_008d5a70:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
    }
  }
LAB_008d5928:
  local_34 = param_3 + 0x12;
  local_2c = param_3 + 0x14;
  local_28 = FUN_00f5c774;
  local_30 = FUN_00f5c774;
  local_38 = FUN_008d6cdc;
  FUN_00600d2c(param_1,&DAT_00579070,&local_3c);
  return;
}

