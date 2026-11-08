// FUN_01beeef4 @ 01beeef4 size=80 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_01beeef4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined1 auStack_98 [132];
  
  iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  FUN_01bea6d4(auStack_98);
  FUN_01bef8ee(&DAT_01d53e18);
  FUN_01bee540();
  iVar1 = iVar2 + -0x70;
  do {
    *(undefined4 *)(*(int *)(iVar1 + 0x40) + param_1 * 4) = 0;
    iVar1 = *(int *)(iVar1 + 8);
  } while (iVar2 + -0x70 != iVar1);
  FUN_01bee5a4();
  *(undefined4 *)(&DAT_01d53e38 + param_1 * 4) = 0;
  FUN_01bef86a(&DAT_01d53e18);
  FUN_01bea6f0(auStack_98);
  return 0;
}

