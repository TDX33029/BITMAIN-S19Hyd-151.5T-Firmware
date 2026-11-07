// FUN_0104c840 @ 0104c840 size=88 calls_out=1 calls_in=2
// strings: 

void FUN_0104c840(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_01039bf4(param_1,param_2,*(undefined1 *)(param_2 + 0x19));
  if (iVar2 != 0) {
    return;
  }
  uVar1 = 0x10;
  if (1 < *(ushort *)(param_1 + 0x48)) {
    uVar1 = *(ushort *)(param_1 + 0x48) - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0104c894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0104c898 + *(int *)(&DAT_0104c898 + (uint)uVar1 * 4)))(1,0x5a,0x58);
  return;
}

