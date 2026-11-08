// FUN_00fbac80 @ 00fbac80 size=284 calls_out=3 calls_in=1
// strings: 

void FUN_00fbac80(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_34;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar4 = *param_1;
  while( true ) {
    if ((uint *)(uVar4 & 0xfffffffc) == (uint *)0x0) {
      return;
    }
    uVar5 = *(uint *)(uVar4 & 0xfffffffc);
    local_34 = uVar5 & 3;
    if (local_34 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_34,&DAT_00568c80,0);
    }
    local_30 = (code *)(uVar4 & 0x1c);
    if (local_30 != (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,&local_30,&DAT_00568f30,&DAT_0036de28,0x23,&DAT_0188139c);
    }
    uVar4 = uVar4 & 0xffffffe0;
    uVar1 = *(uint *)(uVar4 + 0x408);
    if (0x40 < uVar1) break;
    local_34 = 1;
    local_30 = (code *)0x0;
    if (uVar1 != 0) {
      puVar3 = (undefined4 *)(uVar4 + 8);
      iVar2 = uVar1 << 4;
      do {
        local_30 = (code *)*puVar3;
        uStack_2c = puVar3[1];
        uStack_28 = puVar3[2];
        uStack_24 = puVar3[3];
        *puVar3 = &DAT_01040efc;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        (*local_30)((uint)&local_30 | 4);
        puVar3 = puVar3 + 4;
        iVar2 = iVar2 + -0x10;
      } while (iVar2 != 0);
    }
    thunk_FUN_016d3fb4(uVar4);
    uVar4 = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar1,0x40,&DAT_018813d4);
}

