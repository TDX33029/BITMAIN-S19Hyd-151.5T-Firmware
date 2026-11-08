// FUN_00eabb28 @ 00eabb28 size=276 calls_out=1 calls_in=2
// strings: Out of bounds access

void FUN_00eabb28(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [20];
  
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  bVar5 = uVar2 < param_2;
  bVar1 = !bVar5 && uVar2 != param_2;
  if (bVar1 == bVar5) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if ((char)(bVar1 - bVar5) == '\x01') {
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (param_2 != uVar2) {
      uVar4 = *(uint *)(param_1 + 0x10);
      uVar2 = *(uint *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("Out of bounds access",0x14,&DAT_01d20b28,param_1,auStack_38,auStack_3c,
                     (uint)auStack_50 | 4,auStack_48,auStack_44,auStack_40,uVar4);
      }
      uVar3 = uVar2 - uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x00eabc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00eabc1c +
                *(int *)(&DAT_00eabc1c + *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 0x28) * 4)))();
      return;
    }
  }
  return;
}

