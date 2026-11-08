// FUN_019051c4 @ 019051c4 size=220 calls_out=7 calls_in=0
// strings: 

void FUN_019051c4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_1238 [64];
  undefined1 auStack_11f8 [4567];
  undefined1 uStack_21;
  
  uVar3 = FUN_018fce10(*(undefined4 *)(*(int *)(param_2 + 4) + 8),param_3,param_4,0);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00522606,0x16,&uStack_21,&DAT_01d24da4,&DAT_01d24fe8);
  }
  if (iVar2 != 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0x40,iVar2,&DAT_01d2579c);
  }
  FUN_01bed4e2(auStack_1238,iVar1,0x40);
  FUN_01bed93e(auStack_11f8,0,0x11d3);
  thunk_FUN_01be4678(iVar1);
  FUN_0193a93c(param_1 + 1,auStack_1238,0x40);
  *param_1 = 0x80000029;
  return;
}

