// FUN_018909c8 @ 018909c8 size=276 calls_out=6 calls_in=4
// strings: 

void FUN_018909c8(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1c0 [132];
  int local_13c;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [216];
  
  iVar3 = *(int *)(param_2 + 200);
  FUN_01bed93e(auStack_1c0,0,0x80);
  uVar2 = *(uint *)(iVar3 + 0x50);
  if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x80,&DAT_01d213cc);
  }
  uVar4 = *(uint *)(iVar3 + 0x48);
  if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar4,uVar2,&DAT_01d213dc);
  }
  FUN_01bed4e2(auStack_f8,param_2,0xd8);
  FUN_0189039c(&local_13c,auStack_f8);
  uVar1 = *(uint *)(local_13c + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  if (uVar4 != uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(uVar4,uVar1,&DAT_01d213ec);
  }
  FUN_01bed4e2(auStack_1c0,auStack_138,uVar4);
  FUN_01bed4e2(auStack_f8,param_2 + 0xd8,0x50);
  FUN_0189040c(param_1,auStack_f8,auStack_1c0,uVar2,uVar4);
  return;
}

