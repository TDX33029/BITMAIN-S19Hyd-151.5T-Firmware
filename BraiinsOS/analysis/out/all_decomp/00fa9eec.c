// FUN_00fa9eec @ 00fa9eec size=832 calls_out=2 calls_in=6
// strings: 

bool FUN_00fa9eec(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  bVar8 = 0x1f < param_1;
  if (0x7e < param_1) {
    if (param_1 < 0x10000) {
      uVar7 = 0;
      iVar4 = 0;
      do {
        iVar3 = iVar4 + 2;
        uVar5 = (uint)(byte)(&DAT_003696f9)[iVar4];
        uVar1 = uVar7 + uVar5;
        if ((uint)(byte)(&DAT_003696f8)[iVar4] == param_1 >> 8) {
          if ((uVar1 < uVar7) || (0x11c < uVar1)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar7,uVar1,0x11c,&DAT_0188120c);
          }
          if (uVar5 != 0) {
            pbVar2 = &DAT_00369744 + uVar7;
            do {
              if ((uint)*pbVar2 == (param_1 & 0xff)) {
                return false;
              }
              pbVar2 = pbVar2 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
        }
        else if (param_1 >> 8 < (uint)(byte)(&DAT_003696f8)[iVar4]) break;
        uVar7 = uVar1;
        iVar4 = iVar3;
      } while (iVar3 != 0x4c);
      iVar4 = 0;
      bVar8 = true;
      do {
        uVar7 = (uint)(char)(&DAT_00369860)[iVar4];
        iVar3 = iVar4 + 1;
        if ((int)uVar7 < 0) {
          if (iVar4 + 1 == 0x124) {
LAB_00faa220:
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0188121c);
          }
          uVar7 = (uint)(byte)(&DAT_00369861)[iVar4] | (uVar7 & 0x7f) << 8;
          iVar3 = iVar4 + 2;
        }
        iVar4 = iVar3;
        param_1 = param_1 - uVar7;
      } while ((-1 < (int)param_1) && (bVar8 = (bool)(bVar8 ^ 1), iVar4 != 0x124));
    }
    else {
      if (0x1ffff < param_1) {
        return (((((((param_1 & 0x1ffffe) != 0x2ceae &&
                    ((param_1 & 0x1fffe0) != 0x2a6e0 && (param_1 & 0x1ffffe) != 0x2b81e)) &&
                   param_1 - 0x2ebf0 < 0xfffffff1) && param_1 - 0x2f800 < 0xfffff65e) &&
                 param_1 - 0x30000 < 0xfffffa1e) && param_1 - 0x31350 < 0xfffffffb) &&
               param_1 - 0xe0100 < 0xfff5337a) && param_1 < 0xe01f0;
      }
      uVar1 = (param_1 & 0xffff) >> 8;
      uVar7 = 0;
      iVar4 = 0;
      do {
        iVar3 = iVar4 + 2;
        uVar6 = (uint)(byte)(&DAT_003693d1)[iVar4];
        uVar5 = uVar7 + uVar6;
        if ((byte)(&DAT_003693d0)[iVar4] == uVar1) {
          if ((uVar5 < uVar7) || (0xd4 < uVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar7,uVar5,0xd4,&DAT_0188120c);
          }
          if (uVar6 != 0) {
            pbVar2 = &DAT_0036942c + uVar7;
            do {
              if ((uint)*pbVar2 == (param_1 & 0xff)) {
                return false;
              }
              pbVar2 = pbVar2 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else if (uVar1 < (byte)(&DAT_003693d0)[iVar4]) break;
        uVar7 = uVar5;
        iVar4 = iVar3;
      } while (iVar3 != 0x5c);
      param_1 = param_1 & 0xffff;
      iVar4 = 0;
      bVar8 = true;
      do {
        uVar7 = (uint)(char)(&DAT_00369500)[iVar4];
        iVar3 = iVar4 + 1;
        if ((int)uVar7 < 0) {
          if (iVar4 + 1 == 0x1f8) goto LAB_00faa220;
          uVar7 = (uint)(byte)(&DAT_00369501)[iVar4] | (uVar7 & 0x7f) << 8;
          iVar3 = iVar4 + 2;
        }
        iVar4 = iVar3;
        param_1 = param_1 - uVar7;
      } while ((-1 < (int)param_1) && (bVar8 = (bool)(bVar8 ^ 1), iVar4 != 0x1f8));
    }
  }
  return bVar8;
}

