// FUN_012fc81c @ 012fc81c size=324 calls_out=1 calls_in=21
// strings: 

int FUN_012fc81c(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 10;
  uVar5 = param_1;
  if (999 < param_1) {
    uVar4 = param_1;
    iVar3 = 0;
    do {
      iVar6 = iVar3;
      if (9 < iVar6 + 6U) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xfffffffe,10,&DAT_01ce45d8);
      }
      uVar5 = uVar4 / 10000;
      uVar2 = (uint)((short)(uVar4 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(param_2 + iVar6 + 6) = *(undefined2 *)(&DAT_00534998 + uVar2 * 2);
      *(undefined2 *)(param_2 + iVar6 + 8) =
           *(undefined2 *)(&DAT_00534998 + (uVar4 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 9999999 < uVar4;
      uVar4 = uVar5;
      iVar3 = iVar6 + -4;
    } while (bVar1);
    iVar6 = iVar6 + 6;
  }
  if (9 < uVar5) {
    iVar6 = iVar6 + -2;
    uVar4 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(param_2 + iVar6) =
         *(undefined2 *)(&DAT_00534998 + (uVar5 + uVar4 * -100 & 0xffff) * 2);
    uVar5 = uVar4;
  }
  if ((param_1 == 0) || (uVar5 != 0)) {
    iVar6 = iVar6 + -1;
    *(undefined1 *)(param_2 + iVar6) = (&DAT_00534999)[(uVar5 & 0xf) * 2];
  }
  return iVar6;
}

