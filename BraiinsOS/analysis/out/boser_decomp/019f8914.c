// FUN_019f8914 @ 019f8914 size=164 calls_out=4 calls_in=21
// strings: 

undefined4 FUN_019f8914(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = thunk_FUN_01bee35a(param_1,0x20);
  iVar3 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d301c0);
    }
    FUN_019a2bcc(iVar3,&LAB_019efb68);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
    uVar4 = FUN_019e9e08();
    if ((uint)uVar4 < 2) {
      uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),1);
    }
  }
  else {
    uVar4 = CONCAT44(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c));
  }
  uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar2 = (uint)uVar4;
  uVar1 = uVar1 ^ uVar1 << 0x11;
  *(uint *)(iVar3 + 0x28) = uVar2;
  uVar1 = uVar2 >> 0x10 ^ uVar1 >> 7 ^ uVar2 ^ uVar1;
  *(uint *)(iVar3 + 0x2c) = uVar1;
  *(undefined4 *)(iVar3 + 0x24) = 1;
  return (int)((ulonglong)param_1 * (ulonglong)(uVar1 + uVar2) >> 0x20);
}

