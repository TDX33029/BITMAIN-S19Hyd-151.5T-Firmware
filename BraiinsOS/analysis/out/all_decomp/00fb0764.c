// FUN_00fb0764 @ 00fb0764 size=524 calls_out=2 calls_in=1
// strings: 

void FUN_00fb0764(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4,short param_5,
                 short param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if ((param_12 <= param_10 && (uint)(param_9 <= param_11) <= param_12 - param_10) &&
     (uVar1 = param_10 - (param_12 + (param_9 < param_11)),
     param_12 <= uVar1 && (uint)(param_9 - param_11 <= param_11) <= param_12 - uVar1)) {
    uVar3 = param_10 - ((param_8 << 1 | param_7 >> 0x1f) + (uint)(param_9 < param_7 * 2));
    uVar1 = param_10 - (param_8 + (param_9 < param_7));
    if ((param_8 <= uVar1 && (uint)(param_9 - param_7 <= param_7) <= param_8 - uVar1) &&
       (uVar1 = param_12 << 1 | param_11 >> 0x1f,
       uVar1 < uVar3 || uVar3 - uVar1 < (uint)(param_11 << 1 <= param_9 + param_7 * -2))) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,param_4,param_3,&DAT_01880f6c);
      }
      *(short *)(param_1 + 2) = param_5;
      *param_1 = param_2;
      param_1[1] = param_4;
      return;
    }
    if (param_12 <= param_8 && (uint)(param_7 <= param_11) <= param_12 - param_8) {
      uVar1 = param_7 - param_11;
      param_8 = param_8 - (param_12 + (param_7 < param_11));
      param_10 = param_10 - (param_8 + (param_9 < uVar1));
      if (param_10 < param_8 || param_8 - param_10 < (uint)(param_9 - uVar1 <= uVar1)) {
        if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,param_4,param_3,&DAT_01880f5c);
        }
        uVar1 = param_4;
        do {
          uVar3 = uVar1;
          if (uVar3 == 0) {
            if (param_4 == 0) {
              uVar2 = 0x31;
            }
            else {
              *param_2 = 0x31;
              uVar2 = 0x30;
              FUN_016dd606(param_2 + 1,0x30,param_4 - 1);
            }
            param_5 = param_5 + 1;
            if ((param_6 < param_5) && (param_4 < param_3)) {
              param_2[param_4] = uVar2;
              param_4 = param_4 + 1;
            }
            goto LAB_00fb0930;
          }
          uVar1 = uVar3 - 1;
        } while (param_2[uVar3 - 1] == '9');
        param_2[uVar1] = param_2[uVar1] + '\x01';
        FUN_016dd606(param_2 + uVar3,0x30,param_4 - uVar3);
LAB_00fb0930:
        if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,param_4,param_3,&DAT_01880f4c);
        }
        *param_1 = param_2;
        *(short *)(param_1 + 2) = param_5;
        param_1[1] = param_4;
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

