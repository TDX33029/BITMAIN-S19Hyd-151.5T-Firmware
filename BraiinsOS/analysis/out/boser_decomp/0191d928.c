// FUN_0191d928 @ 0191d928 size=116 calls_out=3 calls_in=3
// strings: 

void FUN_0191d928(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_4 << 1;
  iVar4 = 1;
  iVar3 = FUN_01298504(iVar1,1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar1);
  }
  FUN_01bed4e2(iVar3,param_3,iVar1);
  if (0x80000000 < param_2) {
    iVar4 = param_2 + 0x7fffffff;
  }
  *param_1 = 0x80000013;
  param_1[1] = param_4;
  param_1[2] = iVar3;
  uVar2 = (&UNK_00538b78)[iVar4];
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}

