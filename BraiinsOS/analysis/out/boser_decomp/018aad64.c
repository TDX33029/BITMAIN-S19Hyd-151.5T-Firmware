// FUN_018aad64 @ 018aad64 size=232 calls_out=5 calls_in=0
// strings: 

void FUN_018aad64(ushort *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = *(int *)(param_3 + 8);
  FUN_0189baf4(param_3,"",2);
  if (param_2 != 0) {
    FUN_018a82b8(param_1);
    uVar2 = FUN_018bd358();
    local_34 = CONCAT22(local_34._2_2_,(ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff);
    FUN_01ac6d2c(param_3,&local_34,(int)&local_34 + 2);
    local_2c = 0;
    local_30 = 1;
    local_34 = 0;
                    /* WARNING: Could not recover jumptable at 0x018aae08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_018aae0c + *(int *)(&DAT_018aae0c + (uint)*param_1 * 4)))();
    return;
  }
  uVar2 = *(uint *)(param_3 + 8);
  if (uVar2 < iVar1 + 2U) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(iVar1,iVar1 + 2U,uVar2,&DAT_01d22404);
  }
  uVar2 = (uVar2 - iVar1) - 2;
  *(ushort *)(*(int *)(param_3 + 4) + iVar1) =
       (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  return;
}

