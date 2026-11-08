// FUN_018969d8 @ 018969d8 size=316 calls_out=6 calls_in=0
// strings: 

void FUN_018969d8(int *param_1,undefined1 *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  if (0x30 < *(uint *)(*param_4 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(*param_4 + 0x10),0x30,&DAT_01d2136c);
  }
  iVar2 = *param_1;
  iVar3 = *(int *)(iVar2 + 0xc);
  FUN_01896374(&local_b4,iVar2,param_4 + 1);
  if (local_b4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_e8,&DAT_01d2186c,&DAT_01d218cc);
  }
  local_e8 = local_b0;
  uStack_e4 = uStack_ac;
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  uStack_d8 = uStack_a0;
  uStack_d4 = uStack_9c;
  local_d0 = local_98;
  uStack_cc = uStack_94;
  uStack_c8 = uStack_90;
  uStack_c4 = uStack_8c;
  uStack_c0 = uStack_88;
  uStack_bc = uStack_84;
  (*(code *)param_1[2])(&local_b4);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d2189c);
  }
  uVar1 = iVar3 * 4;
  *param_2 = 4;
  if (param_3 - 1U < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d218ac);
  }
  FUN_01896424(iVar2,param_1[1],param_2 + 1,uVar1,param_2 + 1 + uVar1,(param_3 - 1U) + iVar3 * -4,
               &local_b4);
  return;
}

