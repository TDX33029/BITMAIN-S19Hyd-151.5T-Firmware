// FUN_01339d38 @ 01339d38 size=100 calls_out=2 calls_in=0
// strings: mutating instruction other than Repeat

void FUN_01339d38(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,param_2,&DAT_01ce6764);
  }
  puVar1 = (uint *)(param_1 + param_3 * 0x28);
  uVar3 = *puVar1;
  uVar2 = 0xc;
  if (1 < uVar3) {
    uVar2 = uVar3 - 0xc;
  }
  if (3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74("mutating instruction other than Repeat",0x26,&DAT_01ce6774);
  }
  *(undefined4 *)((int)puVar1 + *(int *)(&DAT_00569c88 + uVar2 * 4)) = param_4;
  return;
}

