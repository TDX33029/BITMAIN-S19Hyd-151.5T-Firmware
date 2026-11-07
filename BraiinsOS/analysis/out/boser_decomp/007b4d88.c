// FUN_007b4d88 @ 007b4d88 size=216 calls_out=3 calls_in=0
// strings: 

void FUN_007b4d88(byte *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_60 [64];
  
  uVar4 = (uint)*(ushort *)((int)param_2 + 0xe);
  uVar3 = param_2[2];
  iVar2 = 0;
  FUN_01bed93e(local_60,0,0x40);
  if ((uVar3 & 0x10000000) == 0) {
    uVar4 = 0x40;
  }
  uVar3 = uVar4 - (uVar4 >> 1);
  if (0x1f < uVar3) {
    uVar3 = 0x20;
  }
  if (uVar4 != 0) {
    do {
      if (iVar2 == 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0x40,0x40,&DAT_01c0a280);
      }
      uVar1 = (&DAT_005679b8)[*param_1 & 0xf];
      local_60[iVar2] = (&DAT_005679b8)[*param_1 >> 4];
      *(undefined1 *)(((uint)local_60 | 1) + iVar2) = uVar1;
      iVar2 = iVar2 + 2;
      param_1 = param_1 + 1;
    } while (uVar3 * 2 != iVar2);
    if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,0x40,&DAT_01c0a270);
    }
  }
  (**(code **)(param_2[1] + 0xc))(*param_2,local_60,uVar4);
  return;
}

