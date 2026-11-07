// FUN_0150a430 @ 0150a430 size=208 calls_out=2 calls_in=0
// strings: 

void FUN_0150a430(ushort *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  
  iVar2 = param_3[2];
  iVar1 = iVar2;
  if (*param_3 == iVar2) {
    FUN_0154e5f8(param_3,iVar2,1,1,1);
    iVar1 = param_3[2];
  }
  *(undefined1 *)(param_3[1] + iVar1) = 0xff;
  param_3[2] = iVar1 + 1;
  local_30 = &DAT_00566070;
  local_38 = 0x18;
  local_34 = 0x16;
  local_2c = 0x20;
  local_28 = param_3;
  local_24 = iVar2;
  if (param_2 == 0) {
    FUN_0152f8f8(&local_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0150a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0150a4c4 + *(int *)(&DAT_0150a4c4 + (uint)*param_1 * 4)))();
  return;
}

