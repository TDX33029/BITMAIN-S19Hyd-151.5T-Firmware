// FUN_005eaf04 @ 005eaf04 size=224 calls_out=1 calls_in=1
// strings: 

void FUN_005eaf04(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + 7;
  if (uVar1 < 0x78) {
    uVar2 = param_2 + 0xf;
    if (0x77 < uVar2) {
LAB_005eafc8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,0x78,&DAT_01856958);
    }
    *(undefined4 *)(param_1 + uVar2 * 4) = *(undefined4 *)(param_1 + uVar1 * 4);
    uVar1 = param_2 + 6;
    if (uVar1 < 0x78) {
      uVar2 = param_1 + param_2 * 4;
      *(undefined4 *)(uVar2 + 0x38) = *(undefined4 *)(param_1 + uVar1 * 4);
      uVar1 = param_2 + 5;
    }
    if (uVar1 < 0x78) {
      *(undefined4 *)(uVar2 + 0x34) = *(undefined4 *)(param_1 + uVar1 * 4);
      uVar1 = param_2 + 4;
      if (uVar1 < 0x78) {
        *(undefined4 *)(uVar2 + 0x30) = *(undefined4 *)(param_1 + uVar1 * 4);
        uVar1 = param_2 + 3;
      }
      if (uVar1 < 0x78) {
        *(undefined4 *)(uVar2 + 0x2c) = *(undefined4 *)(param_1 + uVar1 * 4);
        uVar1 = param_2 + 2;
        if (uVar1 < 0x78) {
          *(undefined4 *)(uVar2 + 0x28) = *(undefined4 *)(param_1 + uVar1 * 4);
          uVar1 = param_2 + 1;
        }
        if (uVar1 < 0x78) {
          *(undefined4 *)(uVar2 + 0x24) = *(undefined4 *)(param_1 + uVar1 * 4);
          if (param_2 < 0x78) {
            uVar2 = param_2 + 8;
            if (uVar2 < 0x78) {
              *(undefined4 *)(param_1 + uVar2 * 4) = *(undefined4 *)(param_1 + param_2 * 4);
              return;
            }
            goto LAB_005eafc8;
          }
          uVar1 = param_2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar1,0x78,&DAT_01856948);
}

