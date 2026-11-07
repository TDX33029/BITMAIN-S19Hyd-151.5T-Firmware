// FUN_0070590c @ 0070590c size=148 calls_out=5 calls_in=1
// strings: 

void FUN_0070590c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_00705838(param_2 + 0x18);
  FUN_01b3b838(&local_38);
  iVar2 = FUN_01b4aa54(&local_38,uVar1,0);
  if (iVar2 != 1) {
    FUN_01b3b854(&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01c066f8);
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  param_1[4] = uStack_28;
  param_1[5] = uStack_24;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  return;
}

