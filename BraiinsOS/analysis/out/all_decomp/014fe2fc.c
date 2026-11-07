// FUN_014fe2fc @ 014fe2fc size=340 calls_out=3 calls_in=2
// strings: 

void FUN_014fe2fc(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar7;
  byte *pbVar6;
  undefined1 auStack_70 [68];
  int local_2c;
  int local_28;
  
  FUN_00fb6cfc(auStack_70,param_2,param_3,&DAT_00412ff6,1);
  do {
    FUN_014fb978(&local_2c,auStack_70);
  } while (local_2c == 0);
  uVar1 = 0;
  if (local_2c == 1) {
  }
  else {
    local_28 = param_3;
  }
  if ((uint)(param_3 - local_28) < 0x11) {
    uVar4 = 0;
    uVar3 = 0;
    if (param_3 != local_28) {
      uVar2 = 0;
      pbVar7 = (byte *)(param_2 + local_28);
      do {
        pbVar6 = pbVar7 + 1;
        uVar5 = (uint)*pbVar7;
        if (0x7fffffff < (uint)(int)(char)*pbVar7) {
          if (uVar5 < 0xe0) {
            uVar5 = pbVar7[1] & 0x3f | (uVar5 & 0x1f) << 6;
            pbVar6 = pbVar7 + 2;
          }
          else {
            uVar4 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
            if (uVar5 < 0xf0) {
              uVar5 = uVar4 | (uVar5 & 0x1f) << 0xc;
              pbVar6 = pbVar7 + 3;
            }
            else {
              uVar5 = pbVar7[3] & 0x3f | uVar4 << 6 | (uVar5 & 7) << 0x12;
              pbVar6 = pbVar7 + 4;
            }
          }
        }
        uVar4 = uVar5 - 0x30;
        if (0x39 < uVar5) {
          uVar4 = (uVar5 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a7208);
        }
        uVar4 = uVar4 | uVar2 << 4;
        uVar3 = uVar3 << 4 | uVar2 >> 0x1c;
        uVar2 = uVar4;
        pbVar7 = pbVar6;
      } while (pbVar6 != (byte *)(param_2 + param_3));
    }
    uVar1 = 1;
    param_1[2] = uVar4;
    param_1[3] = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  return;
}

