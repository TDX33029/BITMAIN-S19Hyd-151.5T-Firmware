// FUN_016dec88 @ 016dec88 size=80 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_016dec88(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  undefined1 auStack_98 [132];
  
  iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  FUN_016da498(auStack_98);
  FUN_016df682(&DAT_018de3b0);
  FUN_016de2d4();
  iVar1 = iVar2 + -0x70;
  do {
    *(undefined4 *)(*(int *)(iVar1 + 0x40) + param_1 * 4) = 0;
    iVar1 = *(int *)(iVar1 + 8);
  } while (iVar2 + -0x70 != iVar1);
  FUN_016de338();
  *(undefined4 *)(&DAT_018de3d0 + param_1 * 4) = 0;
  FUN_016df5fe(&DAT_018de3b0);
  FUN_016da4b4(auStack_98);
  return 0;
}

