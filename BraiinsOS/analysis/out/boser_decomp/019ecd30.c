// FUN_019ecd30 @ 019ecd30 size=192 calls_out=3 calls_in=1
// strings: The or

void FUN_019ecd30(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (param_3 <= (uint)param_2[2]) {
    param_2[2] = param_2[2] - param_3;
  }
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar5 = param_2[2];
  FUN_012fbd94(&local_2c,iVar2,iVar5);
  if (local_2c == 0) {
    iVar3 = iVar5;
    iVar4 = iVar1;
    iVar5 = iVar2;
  }
  else {
    iVar3 = local_28;
    iVar4 = iVar2;
    if (iVar1 != -0x80000000) {
      local_20 = local_28;
      local_1c = local_24;
      local_2c = iVar1;
      local_28 = iVar2;
      local_24 = iVar5;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("The or",0x26,&local_2c,&DAT_01d29574,&DAT_01d295e0);
    }
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  *param_1 = iVar4;
  param_1[1] = iVar5;
  param_1[2] = iVar3;
  return;
}

