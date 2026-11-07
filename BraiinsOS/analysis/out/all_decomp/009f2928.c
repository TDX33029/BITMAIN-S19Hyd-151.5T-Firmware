// FUN_009f2928 @ 009f2928 size=188 calls_out=4 calls_in=8
// strings: 

void FUN_009f2928(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  undefined1 *local_18;
  undefined1 *local_14;
  
  uVar1 = param_2[4];
  local_30 = param_3;
  uStack_2c = param_4;
  if ((uint)param_2[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,param_2[1],&DAT_018ae7cc);
  }
  puVar2 = (undefined4 *)(*param_2 + uVar1 * 8);
  if ((puVar2[1] != 7) || (iVar3 = thunk_FUN_016dd50a(*puVar2,&DAT_00418440,7), iVar3 != 0)) {
    return;
  }
  local_14 = &LAB_0153f908;
  local_18 = (undefined1 *)&local_30;
  FUN_00600d2c(&local_28,&DAT_00590e71,&local_18);
  if ((*param_1 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}

