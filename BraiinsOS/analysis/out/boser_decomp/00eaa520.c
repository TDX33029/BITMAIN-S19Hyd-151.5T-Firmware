// FUN_00eaa520 @ 00eaa520 size=368 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_00eaa520(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_70 [36];
  uint auStack_4c [10];
  
  auStack_4c[9] = 0x24;
  auStack_4c[8] = 0x18;
  auStack_4c[7] = 0x17;
  auStack_4c[6] = 0x13;
  auStack_4c[5] = 0x12;
  auStack_4c[4] = 0xe;
  auStack_4c[3] = 0xd;
  auStack_4c[2] = 9;
  uVar5 = 0;
  FUN_01bed93e(local_70,0,0x24);
  uVar2 = 8;
  iVar6 = 0;
  uVar3 = 0;
  while( true ) {
    if (uVar5 < uVar2) {
      uVar4 = uVar3;
      if (uVar3 < 0x11) {
        uVar4 = 0x10;
      }
      do {
        if (uVar4 == uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar4,0x10,&DAT_01d30010);
        }
        if (0x23 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar5,0x24,&DAT_01d30020);
        }
        bVar1 = *(byte *)(param_1 + uVar3);
        local_70[uVar5] = (&DAT_005679b8)[bVar1 >> 4];
        if (uVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0x24,0x24,&DAT_01d30030);
        }
        uVar3 = uVar3 + 1;
        *(undefined *)(((uint)local_70 | 1) + uVar5) = (&DAT_005679b8)[bVar1 & 0xf];
        uVar5 = uVar5 + 2;
      } while (uVar5 < uVar2);
    }
    if (iVar6 == 4) {
      FUN_01bed4e2(param_2,local_70,0x24);
      return param_2;
    }
    if (0x23 < uVar2) break;
    iVar6 = iVar6 + 1;
    local_70[uVar2] = 0x2d;
    uVar5 = auStack_4c[iVar6 * 2];
    uVar2 = auStack_4c[iVar6 * 2 + 1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar2,0x24,&DAT_01d30000);
}

