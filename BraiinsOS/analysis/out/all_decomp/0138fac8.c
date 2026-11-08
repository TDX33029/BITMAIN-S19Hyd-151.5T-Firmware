// FUN_0138fac8 @ 0138fac8 size=220 calls_out=2 calls_in=4
// strings: 

void FUN_0138fac8(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_98 [128];
  
  uVar1 = *(uint *)(param_2 + 0x7c);
  param_3 = param_3 & 0x7ffffff;
  if ((uVar1 <= param_3) ||
     (uVar2 = ~(-1 << (*(uint *)(param_1 + 0x27c) & 0x1f)), (param_3 & uVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0057b079,auStack_98 + 0x80,&DAT_01892f90);
  }
  if ((uVar1 <= (param_5 & 0x7ffffff)) || ((param_5 & 0x7ffffff & uVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00588d0e,auStack_98 + 0x80,&DAT_01892fa0);
  }
  if ((param_4 & 1) == 0) {
    param_4 = (uint)*(byte *)(param_1 + (param_4 >> 8 & 0xff) + 0x158);
  }
  else {
    param_4 = param_4 >> 0x10;
  }
  param_4 = param_4 + param_3;
  if (uVar1 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_4,uVar1,&DAT_01892fb0);
  }
  *(uint *)(*(int *)(param_2 + 0x78) + param_4 * 4) = param_5;
  return;
}

