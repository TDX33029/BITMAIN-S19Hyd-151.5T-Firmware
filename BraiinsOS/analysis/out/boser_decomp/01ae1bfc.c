// FUN_01ae1bfc @ 01ae1bfc size=348 calls_out=2 calls_in=10
// strings: 

void FUN_01ae1bfc(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
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
  FUN_01bed93e(param_1,0,0x24);
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
        bVar1 = *(byte *)(param_2 + uVar3);
        *(undefined *)(param_1 + 1 + uVar5 + -1) = (&DAT_005679b8)[bVar1 >> 4];
        if (uVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0x24,0x24,&DAT_01d30030);
        }
        uVar3 = uVar3 + 1;
        *(undefined *)(param_1 + 1 + uVar5) = (&DAT_005679b8)[bVar1 & 0xf];
        uVar5 = uVar5 + 2;
      } while (uVar5 < uVar2);
    }
    if (iVar6 == 4) {
      return;
    }
    if (0x23 < uVar2) break;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(param_1 + uVar2) = 0x2d;
    uVar5 = auStack_4c[iVar6 * 2];
    uVar2 = auStack_4c[iVar6 * 2 + 1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar2,0x24,&DAT_01d30000);
}

