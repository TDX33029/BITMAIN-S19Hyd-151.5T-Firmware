// FUN_00fbbbcc @ 00fbbbcc size=148 calls_out=1 calls_in=0
// strings: 

void FUN_00fbbbcc(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018813d4);
  }
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 8);
    iVar3 = uVar1 << 4;
    do {
      uStack_2c = puVar2[1];
      uStack_28 = puVar2[2];
      uStack_24 = puVar2[3];
      local_30 = (code *)*puVar2;
      *puVar2 = &DAT_01040efc;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      (*local_30)((uint)&local_30 | 4);
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -0x10;
    } while (iVar3 != 0);
  }
  return;
}

