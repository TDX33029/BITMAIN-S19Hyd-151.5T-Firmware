// FUN_00faec78 @ 00faec78 size=360 calls_out=3 calls_in=3
// strings: assertion failed: digits < 40

void FUN_00faec78(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (0x4ff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: digits < 40",0x1d,&DAT_01880e5c);
  }
  uVar6 = *(uint *)(param_1 + 0xa0);
  uVar1 = param_2 >> 5;
  if (uVar6 != 0) {
    uVar2 = uVar6;
    do {
      uVar4 = uVar2 - 1;
      if (0x28 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar4,0x28,&DAT_01880e5c);
      }
      uVar3 = (uVar1 - 1) + uVar2;
      if (0x27 < uVar3) goto LAB_00faeda4;
      *(undefined4 *)(param_1 + -4 + uVar1 * 4 + uVar2 * 4) =
           *(undefined4 *)(param_1 + -4 + uVar2 * 4);
      uVar2 = uVar4;
    } while (uVar4 != 0);
  }
  uVar6 = param_2 & 0x1f;
  if (0x1f < param_2) {
    FUN_016dd606(param_1,0,uVar1 << 2);
  }
  uVar2 = *(int *)(param_1 + 0xa0) + uVar1;
  if (uVar6 == 0) {
    *(uint *)(param_1 + 0xa0) = uVar2;
    return;
  }
  uVar3 = uVar2 - 1;
  if (uVar3 < 0x28) {
    uVar4 = *(uint *)(param_1 + uVar3 * 4) >> (0x20 - uVar6 & 0xff);
    uVar3 = uVar2;
    if (uVar4 != 0) {
      if (0x27 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,0x28,&DAT_01880e5c);
      }
      *(uint *)(param_1 + uVar2 * 4) = uVar4;
      uVar3 = uVar2 + 1;
    }
    if (uVar1 + 1 < uVar2) {
      puVar5 = (uint *)(param_1 + uVar2 * 4 + -4);
      do {
        uVar2 = uVar2 - 1;
        *puVar5 = puVar5[-1] >> (0x20 - uVar6 & 0xff) | *puVar5 << uVar6;
        puVar5 = puVar5 + -1;
      } while (uVar1 + 1 < uVar2);
    }
    *(int *)(param_1 + uVar1 * 4) = *(int *)(param_1 + uVar1 * 4) << uVar6;
    *(uint *)(param_1 + 0xa0) = uVar3;
    return;
  }
LAB_00faeda4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar3,0x28,&DAT_01880e5c);
}

