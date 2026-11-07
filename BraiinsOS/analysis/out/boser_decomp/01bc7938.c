// FUN_01bc7938 @ 01bc7938 size=340 calls_out=3 calls_in=0
// strings: 

void FUN_01bc7938(int param_1,int *param_2,undefined4 *param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  local_24 = DAT_01d53560;
  if (((*(int *)(param_1 + 0x8c) == 0) && (param_2[1] == *param_2)) &&
     (param_4 - *(int *)(param_1 + 4) == *(int *)(param_1 + 0xc) &&
      (8 < param_5 && *(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xc)))) {
    local_30 = *param_3;
    uStack_2c = param_3[1];
    local_28 = param_3[2];
    FUN_01bc6b2c(param_1,param_2,&local_30,param_4,param_5,0);
    FUN_01b89104(param_2);
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) - param_5;
    iVar1 = param_5 + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  FUN_01bc6b2c(param_1,param_2,param_3,param_4,param_5,0);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

