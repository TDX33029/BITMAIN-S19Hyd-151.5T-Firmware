// FUN_0130128c @ 0130128c size=516 calls_out=2 calls_in=1
// strings: 

void FUN_0130128c(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4,short param_5,
                 short param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                 uint param_12)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((param_12 <= param_10 && (uint)(param_9 <= param_11) <= param_12 - param_10) &&
     (uVar2 = param_10 - (param_12 + (param_9 < param_11)),
     param_12 <= uVar2 && (uint)(param_9 - param_11 <= param_11) <= param_12 - uVar2)) {
    uVar4 = param_10 - ((param_8 << 1 | param_7 >> 0x1f) + (uint)(param_9 < param_7 * 2));
    uVar2 = param_10 - (param_8 + (param_9 < param_7));
    if ((param_8 <= uVar2 && (uint)(param_9 - param_7 <= param_7) <= param_8 - uVar2) &&
       (uVar2 = param_12 << 1 | param_11 >> 0x1f,
       uVar2 < uVar4 || uVar4 - uVar2 < (uint)(param_11 << 1 <= param_9 + param_7 * -2))) {
      if (param_3 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_4,param_3,&DAT_01ce47a0);
      }
      *(short *)(param_1 + 2) = param_5;
      *param_1 = param_2;
      param_1[1] = param_4;
      return;
    }
    if (param_12 <= param_8 && (uint)(param_7 <= param_11) <= param_12 - param_8) {
      uVar2 = param_7 - param_11;
      param_8 = param_8 - (param_12 + (param_7 < param_11));
      param_10 = param_10 - (param_8 + (param_9 < uVar2));
      if (param_10 < param_8 || param_8 - param_10 < (uint)(param_9 - uVar2 <= uVar2)) {
        if (param_3 < param_4) {
          puVar1 = &DAT_01ce4790;
        }
        else {
          uVar2 = param_4;
          do {
            uVar4 = uVar2;
            if (uVar4 == 0) {
              if (param_4 == 0) {
                uVar3 = 0x31;
              }
              else {
                *param_2 = 0x31;
                uVar3 = 0x30;
                FUN_01bed93e(param_2 + 1,0x30,param_4 - 1);
              }
              param_5 = param_5 + 1;
              if ((param_6 < param_5) && (param_4 < param_3)) {
                param_2[param_4] = uVar3;
                param_4 = param_4 + 1;
              }
              goto LAB_01301458;
            }
            uVar2 = uVar4 - 1;
          } while (param_2[uVar4 - 1] == '9');
          param_2[uVar2] = param_2[uVar2] + '\x01';
          FUN_01bed93e(param_2 + uVar4,0x30,param_4 - uVar4);
LAB_01301458:
          if (param_4 <= param_3) {
            *param_1 = param_2;
            *(short *)(param_1 + 2) = param_5;
            param_1[1] = param_4;
            return;
          }
          puVar1 = &DAT_01ce4780;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_4,param_3,puVar1);
      }
    }
  }
  *param_1 = 0;
  return;
}

