// FUN_014bf0a8 @ 014bf0a8 size=232 calls_out=5 calls_in=1
// strings: 

void FUN_014bf0a8(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  undefined4 **local_24;
  
  local_31 = 0x20;
  local_3c = (undefined4 *)CONCAT31(local_3c._1_3_,0x5f);
  local_24 = &local_3c;
  local_28 = &local_31;
  local_2c = param_2 + param_3;
  local_30 = param_2;
  FUN_01655f14(&local_48,&local_30);
  local_38 = &LAB_00632348;
  local_3c = &local_48;
  FUN_00664898(&local_30,&DAT_0058890d,&local_3c);
  puVar3 = local_28;
  iVar2 = local_2c;
  iVar1 = local_30;
  sVar4 = FUN_01297c94(local_44,local_40);
  if (sVar4 == 0x255) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(iVar2,puVar3,&local_30,&DAT_01cf9bc4,&DAT_01cf9bd4);
  }
  *(short *)(param_1 + 2) = sVar4;
  *param_1 = param_4;
  param_1[1] = param_5;
  FUN_019bb7e0(iVar1,iVar2);
  FUN_019bb7e0(local_48,local_44);
  return;
}

