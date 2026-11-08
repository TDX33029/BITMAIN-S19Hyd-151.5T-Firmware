// FUN_013c88d8 @ 013c88d8 size=120 calls_out=2 calls_in=0
// strings: 

void FUN_013c88d8(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r9;
  bool bVar4;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01894428);
  }
  uVar3 = *(uint *)(param_2 + 0x40);
  uVar2 = 0;
  if (uVar3 <= param_6 - param_5) {
    iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(param_2 + 0x3c),param_3 + param_5,uVar3);
    bVar4 = iVar1 == 0;
    if (bVar4) {
      unaff_r9 = uVar3 + param_5;
    }
    uVar2 = (uint)bVar4;
    if (bVar4) {
      param_1[1] = param_5;
      param_1[2] = unaff_r9;
    }
  }
  *param_1 = uVar2;
  return;
}

