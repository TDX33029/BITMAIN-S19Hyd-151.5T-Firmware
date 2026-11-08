// FUN_012a41e8 @ 012a41e8 size=252 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_012a41e8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  int *local_5c;
  
  local_60 = *param_3;
  local_68 = (int *)param_3[1];
  local_5c = local_68 + param_3[2] * 3;
  local_64 = local_68;
  if (param_3[2] != 0) {
    local_64 = local_68 + 3;
    piVar3 = (int *)(param_2 + 0x28);
    if (*(int *)(param_2 + 0x28) == 5) {
      piVar3 = &DAT_0041fdf8;
    }
    iVar1 = *piVar3;
    if (*local_68 != -0x80000000) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
                    /* WARNING: Could not recover jumptable at 0x012a42c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      local_64 = local_68;
      uVar2 = (*(code *)(&DAT_012a42c4 + *(int *)(&DAT_012a42c4 + iVar1 * 4)))
                        (&UNK_01ce27e0,1,*(undefined4 *)(param_1 + 8));
      return uVar2;
    }
  }
  FUN_012c1dbc(&local_68);
  return 0;
}

