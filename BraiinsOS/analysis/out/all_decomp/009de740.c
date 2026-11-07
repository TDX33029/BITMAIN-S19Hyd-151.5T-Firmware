// FUN_009de740 @ 009de740 size=140 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_009de740(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int extraout_r2;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_016a0564(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_2);
  uVar6 = thunk_FUN_016de0ee(uVar1,uVar1,0x80);
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6 + extraout_r2;
  if (*(int *)(iVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ae4d8);
  }
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = 2;
  }
  if (*(char *)(iVar2 + 0xc) == '\x03') {
    *(undefined1 *)(iVar2 + 0xc) = uVar5;
    *(undefined4 *)(iVar2 + 8) = 0;
    return 2;
  }
  cVar4 = '\x02';
  if (iVar3 != 0) {
    cVar4 = '\0';
  }
  if (*(char *)(iVar2 + 0xc) == cVar4) {
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  return 2;
}

