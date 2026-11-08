// FUN_018e8e60 @ 018e8e60 size=168 calls_out=3 calls_in=2
// strings: 

void FUN_018e8e60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  iVar1 = param_2[2];
  if ((iVar1 != 0) && (iVar3 = param_2[1], *(char *)(iVar3 + iVar1 + -1) == '.')) {
    iVar1 = iVar1 + -1;
    if ((iVar1 == 0) || (iVar2 = FUN_01938820(iVar3,iVar1), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d23380,&DAT_01d233b0);
    }
    param_2 = &local_1c;
    local_1c = 0x80000000;
    local_18 = iVar3;
    local_14 = iVar1;
  }
  FUN_01938d70(&local_28,param_2);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}

