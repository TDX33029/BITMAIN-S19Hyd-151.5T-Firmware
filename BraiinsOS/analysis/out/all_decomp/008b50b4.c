// FUN_008b50b4 @ 008b50b4 size=132 calls_out=1 calls_in=0
// strings: 

void FUN_008b50b4(int param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = DAT_018d8000;
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess((uint *)(DAT_018d8000 + 8));
    } while (!bVar1);
    *(uint *)(DAT_018d8000 + 8) = param_2;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    iVar2 = DAT_018d8004;
    do {
      bVar1 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d8004 + 8));
    } while (!bVar1);
    *(undefined4 *)(DAT_018d8004 + 8) = param_3;
    *(undefined4 *)(iVar2 + 0xc) = 0;
  }
  if (100 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00345b0d,0x39,&DAT_01864668);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(iVar2 + 0x10) = param_2;
  *(uint *)(iVar2 + 0x14) = param_2;
  return;
}

