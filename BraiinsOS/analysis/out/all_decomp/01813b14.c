// FUN_01813b14 @ 01813b14 size=356 calls_out=3 calls_in=0
// strings: 

void FUN_01813b14(int param_1,int *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  if (((*(int *)(param_1 + 0x8c) == 0) && (param_2[1] == *param_2)) &&
     (param_4 - *(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) &&
      (8 < param_5 && *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)))) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    FUN_01807b10(param_1,param_2,&local_28,param_4,param_5,0);
    FUN_0179d3b4(param_2);
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - param_5;
    iVar1 = param_5 + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  FUN_01807b10(param_1,param_2,param_3,param_4,param_5,0);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return;
}

