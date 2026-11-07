// FUN_005eafec @ 005eafec size=560 calls_out=1 calls_in=1
// strings: 

void FUN_005eafec(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x78 - param_2;
  uVar1 = param_2 - 0x10;
  if (0x78 < param_2) {
    iVar4 = 0;
  }
  if (0x77 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,0x78,&DAT_01856968);
  }
  if (param_2 < 0x78) {
    uVar2 = *(uint *)(param_1 + param_2 * 4);
    uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
            *(uint *)(param_1 + uVar1 * 4);
    uVar1 = param_2 + 1;
    *(uint *)(param_1 + param_2 * 4) =
         (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^ uVar2;
    if (iVar4 != 1) {
      uVar2 = *(uint *)(param_1 + uVar1 * 4);
      iVar3 = param_1 + param_2 * 4;
      uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
              *(uint *)(iVar3 + -0x3c);
      *(uint *)(param_1 + uVar1 * 4) =
           (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^ uVar2;
      uVar1 = param_2 + 2;
      if (iVar4 != 2) {
        uVar2 = *(uint *)(param_1 + uVar1 * 4);
        uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
                *(uint *)(iVar3 + -0x38);
        *(uint *)(param_1 + uVar1 * 4) =
             (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^ uVar2
        ;
        uVar1 = param_2 + 3;
        if (iVar4 != 3) {
          uVar2 = *(uint *)(param_1 + uVar1 * 4);
          uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
                  *(uint *)(iVar3 + -0x34);
          *(uint *)(param_1 + uVar1 * 4) =
               (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^
               uVar2;
          uVar1 = param_2 + 4;
          if (iVar4 != 4) {
            uVar2 = *(uint *)(param_1 + uVar1 * 4);
            uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
                    *(uint *)(iVar3 + -0x30);
            *(uint *)(param_1 + uVar1 * 4) =
                 (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^
                 uVar2;
            uVar1 = param_2 + 5;
            if (iVar4 != 5) {
              uVar2 = *(uint *)(param_1 + uVar1 * 4);
              uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
                      *(uint *)(iVar3 + -0x2c);
              *(uint *)(param_1 + uVar1 * 4) =
                   (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6 ^
                   uVar2;
              uVar1 = param_2 + 6;
              if (iVar4 != 6) {
                uVar2 = *(uint *)(param_1 + uVar1 * 4);
                param_2 = param_2 + 7;
                uVar2 = (uVar2 >> (param_3 & 0x1f) | uVar2 << 0x20 - (param_3 & 0x1f)) & 0x3030303 ^
                        *(uint *)(iVar3 + -0x28);
                *(uint *)(param_1 + uVar1 * 4) =
                     (uVar2 & 0xf0f0f0f) << 4 ^ (uVar2 & 0x3f3f3f3f) << 2 ^ (uVar2 & 0x3030303) << 6
                     ^ uVar2;
                if (iVar4 != 7) {
                  uVar1 = *(uint *)(param_1 + param_2 * 4);
                  uVar1 = (uVar1 >> (param_3 & 0x1f) | uVar1 << 0x20 - (param_3 & 0x1f)) & 0x3030303
                          ^ *(uint *)(iVar3 + -0x24);
                  *(uint *)(param_1 + param_2 * 4) =
                       (uVar1 & 0xf0f0f0f) << 4 ^ (uVar1 & 0x3f3f3f3f) << 2 ^
                       (uVar1 & 0x3030303) << 6 ^ uVar1;
                  return;
                }
                goto LAB_005eb1ec;
              }
            }
          }
        }
      }
    }
    param_2 = uVar1;
  }
LAB_005eb1ec:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(param_2,0x78,&DAT_01856978);
}

