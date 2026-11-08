// FUN_0138430c @ 0138430c size=664 calls_out=6 calls_in=1
// strings: 

byte FUN_0138430c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbStack_2c;
  byte *pbStack_28;
  int local_24;
  byte *local_20;
  int local_1c;
  
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_3,param_2,&DAT_01893d20);
  }
  bVar1 = 0;
  if (param_3 != 0) {
    uVar3 = param_3 - 1;
    uVar6 = param_3 - 4;
    if (param_3 < 4) {
      uVar6 = 0;
    }
    uVar5 = uVar3;
    if (uVar6 < uVar3) {
      uVar5 = uVar6;
    }
    do {
      uVar4 = uVar3;
      if (uVar4 <= uVar6) goto LAB_0138436c;
      if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar4,param_3,&DAT_01893d30);
      }
      uVar3 = uVar4 - 1;
    } while (*(char *)(param_1 + uVar4) < -0x40);
    uVar5 = uVar4;
LAB_0138436c:
    if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar5,param_3,param_3,&DAT_01893d40);
    }
    bVar1 = 0;
    if (param_3 != uVar5) {
      bVar2 = *(byte *)(param_1 + uVar5);
      uVar3 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if (0xbf < uVar3) {
          uVar6 = 2;
          if (0xdf < uVar3) {
            uVar6 = 3;
          }
          if ((((uVar3 < 0xf0) || (uVar6 = 4, uVar3 < 0xf8)) && (uVar6 <= param_3 - uVar5)) &&
             (FUN_00fab1e0(&local_24,(byte *)(param_1 + uVar5),uVar6), local_24 != 1)) {
            pbStack_28 = local_20 + local_1c;
            pbStack_2c = local_20;
            uVar7 = FUN_00f65b48(&pbStack_2c);
            uVar3 = (uint)(uVar7 >> 0x20);
            if ((uVar7 & 1) == 0) goto LAB_01384598;
            goto LAB_01384394;
          }
        }
      }
      else {
LAB_01384394:
        bVar1 = FUN_013fbc60(uVar3);
      }
    }
  }
  if (param_2 != param_3) {
    uVar3 = (uint)*(byte *)(param_1 + param_3);
    if (-1 < (char)*(byte *)(param_1 + param_3)) {
LAB_0138447c:
      bVar2 = FUN_013fbc60(uVar3);
      return bVar1 ^ bVar2;
    }
    if (0xbf < uVar3) {
      uVar6 = 2;
      if (0xdf < uVar3) {
        uVar6 = 3;
      }
      if (((uVar3 < 0xf0) || (uVar6 = 4, uVar3 < 0xf8)) &&
         ((uVar6 <= param_2 - param_3 && (FUN_00fab1e0(&local_24), local_24 != 1)))) {
        if (local_1c == 0) {
LAB_01384598:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01893d50);
        }
        uVar3 = (uint)*local_20;
        if (0x7fffffff < (uint)(int)(char)*local_20) {
          if (uVar3 < 0xe0) {
            uVar3 = local_20[1] & 0x3f | (uVar3 & 0x1f) << 6;
          }
          else {
            uVar6 = local_20[2] & 0x3f | (local_20[1] & 0x3f) << 6;
            if (uVar3 < 0xf0) {
              uVar3 = uVar6 | (uVar3 & 0x1f) << 0xc;
            }
            else {
              uVar3 = local_20[3] & 0x3f | uVar6 << 6 | (uVar3 & 7) << 0x12;
            }
          }
        }
        goto LAB_0138447c;
      }
    }
  }
  return bVar1;
}

