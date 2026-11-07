// FUN_0133b260 @ 0133b260 size=216 calls_out=3 calls_in=1
// strings: 

void FUN_0133b260(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_0056bee8,0x20,&DAT_01ce662c);
  }
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  FUN_01338394(&local_48,iVar5,iVar6,param_3);
  uVar2 = uStack_40;
  uVar1 = uStack_44;
  if (local_48 == 0x12) {
    FUN_006666fc(&local_48,iVar5,iVar6);
    param_1[1] = (uint)(iVar3 != iVar4);
    param_1[2] = iVar3;
    param_1[3] = iVar4;
    *param_1 = 0x15;
    param_1[4] = local_48;
    param_1[5] = uStack_44;
    param_1[6] = uStack_40;
    param_1[7] = uVar1;
    param_1[8] = uVar2;
  }
  else {
    *param_1 = 0x18;
    param_1[1] = local_48;
    param_1[2] = uStack_44;
    param_1[3] = uStack_40;
    param_1[4] = local_3c;
    param_1[5] = local_38;
  }
  return;
}

