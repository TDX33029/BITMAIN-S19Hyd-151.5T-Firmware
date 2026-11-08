// FUN_01aa96ec @ 01aa96ec size=456 calls_out=2 calls_in=1
// strings: 

uint FUN_01aa96ec(byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_20;
  byte *local_1c;
  
  if (param_2 != 0) {
    do {
      uVar4 = 0;
      while (pbVar5 = param_1 + uVar4, -1 < (char)*pbVar5) {
        uVar4 = uVar4 + 1;
        if (param_2 == uVar4) {
          local_20 = param_1;
          local_1c = param_1 + param_2;
          uVar4 = FUN_01aa8fd8(&local_20);
          return uVar4 ^ 1;
        }
      }
      if (uVar4 == 0) {
        pbVar5 = param_1;
      }
      else {
        if (uVar4 < param_2) {
          if ((char)param_1[uVar4] < -0x40) {
LAB_01aa987c:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(param_1,param_2,0,uVar4,&DAT_01d2e668);
          }
        }
        else if (param_2 != uVar4) goto LAB_01aa987c;
        local_20 = param_1;
        local_1c = pbVar5;
        iVar2 = FUN_01aa8fd8(&local_20);
        if (iVar2 != 0) {
          return 0;
        }
        param_2 = param_2 - uVar4;
      }
      if (param_2 == 0) {
        return 1;
      }
      uVar3 = 0;
      do {
        if ((uint)(int)(char)param_1[uVar3 + uVar4] < 0x80000000) {
          if (uVar3 != 0) {
            if (uVar3 < param_2) {
              if ((char)pbVar5[uVar3] < -0x40) {
LAB_01aa989c:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(pbVar5,param_2,0,uVar3,&DAT_01d2e668);
              }
            }
            else if (param_2 != uVar3) goto LAB_01aa989c;
          }
          uVar4 = param_2 - uVar3;
          param_1 = pbVar5 + uVar3;
          goto LAB_01aa97ec;
        }
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
      uVar4 = 0;
      param_1 = &DAT_00000001;
      uVar3 = param_2;
LAB_01aa97ec:
      if (uVar3 != 0) {
        bVar1 = *pbVar5;
        if ((uint)(int)(char)bVar1 < 0x80000000) {
          return 0;
        }
        if (bVar1 < 0xf0) {
          return 0;
        }
        if ((undefined1 *)
            ((pbVar5[2] & 0x3f) << 6 | (pbVar5[1] & 0x3f) << 0xc | pbVar5[3] & 0x3f |
            (bVar1 & 7) << 0x12) != &DAT_00110000) {
          return 0;
        }
      }
      param_2 = uVar4;
    } while (uVar4 != 0);
  }
  return 1;
}

