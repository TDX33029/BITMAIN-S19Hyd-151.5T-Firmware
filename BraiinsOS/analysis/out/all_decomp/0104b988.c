// FUN_0104b988 @ 0104b988 size=280 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0104b988(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  
  if (*param_1 == 1) {
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      if (iVar4 != param_1[2]) {
        uVar1 = *(ushort *)(iVar4 + 0x48);
        uVar3 = 0x10;
        param_1[1] = iVar4 + 0xe8;
        if (1 < uVar1) {
          uVar3 = uVar1 - 2;
        }
                    /* WARNING: Could not recover jumptable at 0x0104b9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&DAT_0104b9fc + *(int *)(&DAT_0104b9fc + (uint)uVar3 * 4)))(iVar4,0x58);
        return uVar2;
      }
      param_1[1] = 0;
    }
    iVar4 = param_1[3];
    if ((iVar4 != 0) && (iVar4 != param_1[4])) {
      uVar1 = *(ushort *)(iVar4 + 0x48);
      uVar3 = 0x10;
      param_1[3] = iVar4 + 0xe8;
      if (1 < uVar1) {
        uVar3 = uVar1 - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x0104bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_0104badc + *(int *)(&DAT_0104badc + (uint)uVar3 * 4)))(iVar4,0x58);
      return uVar2;
    }
    *param_1 = 0;
  }
  iVar4 = param_1[5];
  if ((iVar4 == 0) || (iVar4 == param_1[6])) {
    return 0;
  }
  uVar1 = *(ushort *)(iVar4 + 0x48);
  uVar3 = 0x10;
  param_1[5] = iVar4 + 0xe8;
  if (1 < uVar1) {
    uVar3 = uVar1 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0104bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&DAT_0104bbc0 + *(int *)(&DAT_0104bbc0 + (uint)uVar3 * 4)))(iVar4,0x58);
  return uVar2;
}

