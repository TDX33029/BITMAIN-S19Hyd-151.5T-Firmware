// FUN_015a24ec @ 015a24ec size=504 calls_out=1 calls_in=1
// strings: 

uint FUN_015a24ec(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte local_2b [7];
  
  uVar13 = 1;
  if (*param_2 == '\x03') {
    uVar2 = *(uint *)(param_2 + 0xc);
    uVar13 = 0;
    if ((1 < uVar2) && (pcVar3 = *(char **)(param_2 + 8), *pcVar3 == 'P')) {
      local_2b[0] = 0x59;
      local_2b[1] = 0x4d;
      local_2b[2] = 0x57;
      local_2b[3] = 0x44;
      local_2b[6] = 0x53;
      local_2b[4] = 0x48;
      local_2b[5] = 0x4d;
      uVar11 = 0;
      uVar1 = 1;
      uVar13 = 0;
      uVar7 = 0;
      uVar10 = 0;
      uVar12 = 0;
      uVar9 = 0;
      uVar8 = 0;
      do {
        while (pcVar3[uVar1] != 'T') {
          uVar4 = uVar1;
          if (uVar2 <= uVar1) {
            if (uVar1 != uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar1,uVar2,&DAT_01cfc480);
            }
            return 0;
          }
          while (uVar5 = (uint)(byte)pcVar3[uVar4], uVar5 - 0x30 < 10) {
            uVar4 = uVar4 + 1;
            if (uVar2 <= uVar4) {
              return 0;
            }
          }
          if (uVar4 == uVar1) {
            return 0;
          }
          uVar1 = 0;
          if (uVar7 == 0) {
            while (local_2b[uVar1] != uVar5) {
              uVar1 = uVar1 + 1;
              if (uVar1 == 4) {
                return 0;
              }
            }
            if (uVar5 == 0x57) {
              uVar9 = uVar13 | uVar1 < uVar10;
            }
            else {
              uVar9 = uVar9 | uVar1 < uVar10;
            }
            uVar10 = uVar9;
            if (uVar9 == 0) {
              uVar13 = 1;
              uVar10 = uVar8;
            }
            if (uVar9 != 0 || (uVar10 & uVar13 << (uVar1 & 0xff)) != 0) {
              return 0;
            }
            uVar6 = uVar13 << (uVar1 & 0xff);
            uVar9 = (uint)(uVar5 == 0x57);
            uVar10 = uVar1;
          }
          else {
            while (local_2b[uVar1 + 4] != uVar5) {
              uVar1 = uVar1 + 1;
              if (uVar1 == 3) {
                return 0;
              }
            }
            if (uVar1 < uVar12) {
              return 0;
            }
            if ((uVar8 & 0x10 << (uVar1 & 0xff)) != 0) {
              return 0;
            }
            uVar6 = 0x10 << (uVar1 & 0xff);
            uVar11 = 1;
            uVar12 = uVar1;
          }
          uVar1 = uVar4 + 1;
          uVar13 = 1;
          uVar8 = uVar6 | uVar8;
          if (uVar2 <= uVar1) {
            return uVar7 ^ 1 | uVar11;
          }
        }
        if (uVar7 != 0) {
          return 0;
        }
        uVar1 = uVar1 + 1;
        uVar7 = 1;
      } while (uVar1 < uVar2);
      uVar13 = uVar13 & uVar11;
    }
  }
  return uVar13;
}

