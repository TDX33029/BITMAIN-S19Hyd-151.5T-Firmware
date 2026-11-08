// FUN_00fbae0c @ 00fbae0c size=164 calls_out=2 calls_in=0
// strings: 

void FUN_00fbae0c(uint *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  code *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = *param_1 & 0xffffffe0;
  uVar1 = *(uint *)(uVar4 + 0x408);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018813d4);
  }
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)(uVar4 | 8);
    iVar3 = uVar1 << 4;
    do {
      local_38 = (code *)*puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      *puVar2 = &DAT_01040efc;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      (*local_38)((uint)&local_38 | 4);
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -0x10;
    } while (iVar3 != 0);
  }
  thunk_FUN_016d3fb4(uVar4);
  return;
}

