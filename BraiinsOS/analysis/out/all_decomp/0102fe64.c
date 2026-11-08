// FUN_0102fe64 @ 0102fe64 size=184 calls_out=3 calls_in=2
// strings: 

void FUN_0102fe64(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_a8 [136];
  undefined4 local_20;
  
  FUN_016dd1aa(auStack_a8,param_3,0x88);
  iVar2 = *(int *)(param_2 + 0x10);
  local_20 = 0;
  FUN_01029f4c(param_2,iVar2,auStack_a8);
  if (*param_1 != 1) {
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = iVar2;
    return;
  }
  if ((*(uint *)(param_2 + 8) <= (uint)param_1[2]) ||
     (piVar1 = (int *)(*(int *)(param_2 + 4) + param_1[2] * 0x90), *piVar1 == 6 && piVar1[1] == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ec);
  }
  piVar1[0x22] = 1;
  piVar1[0x23] = iVar2;
  param_1[2] = iVar2;
  return;
}

