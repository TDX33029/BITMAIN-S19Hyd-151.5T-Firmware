// FUN_00b51960 @ 00b51960 size=172 calls_out=1 calls_in=1
// strings: 

void FUN_00b51960(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined4 uStack_48;
  undefined3 uStack_44;
  int local_40;
  int iStack_3c;
  undefined3 uStack_38;
  undefined1 local_35;
  int local_34;
  int local_30;
  
  if ((*param_2 == 1) && (FUN_011e6e04(&local_40,param_2,param_2[1],0), local_40 == 0)) {
    uStack_44 = uStack_38;
    uStack_48 = iStack_3c;
    unaff_r8 = local_34;
    unaff_r9 = local_30;
  }
  else {
    local_35 = 1;
  }
  iVar1 = param_2[3];
  iVar2 = param_2[4];
  *param_1 = param_2[2];
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  iVar1 = param_2[6];
  iVar2 = param_2[7];
  param_1[3] = param_2[5];
  param_1[4] = iVar1;
  param_1[5] = iVar2;
  iVar1 = param_2[9];
  iVar2 = param_2[10];
  param_1[6] = param_2[8];
  param_1[7] = iVar1;
  param_1[8] = iVar2;
  *(uint *)((int)param_1 + 0x27) = CONCAT31(uStack_44,uStack_48._3_1_);
  param_1[0xb] = unaff_r8;
  param_1[0xc] = unaff_r9;
  *(undefined1 *)((int)param_1 + 0x2b) = local_35;
  param_1[9] = uStack_48;
  return;
}

