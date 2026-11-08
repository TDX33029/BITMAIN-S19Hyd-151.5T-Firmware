// FUN_009dd3a4 @ 009dd3a4 size=92 calls_out=0 calls_in=2
// strings: 

longlong FUN_009dd3a4(uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = 3;
  uVar3 = *param_2;
  iVar2 = 3;
  if ((uint)(*param_1 < 3) <= -param_1[1]) {
    iVar2 = *param_1 - 3;
  }
  if ((uint)(uVar3 < 3) <= -param_2[1]) {
    iVar1 = uVar3 - 3;
  }
  if (iVar2 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x009dd3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*(code *)(&DAT_009dd3f8 + *(int *)(&DAT_009dd3f8 + iVar2 * 4)))
                      (1,param_1 + 2,param_2 + 2);
    return lVar4;
  }
  return (ulonglong)-(param_2[1] + (uint)(uVar3 >= 3)) << 0x20;
}

