// FUN_01009aa0 @ 01009aa0 size=780 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01009aa0(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x102) == '\0' && *(char *)(param_1 + 0x101) == '\0') {
      if (*(char *)(param_1 + 0x100) == '\0') {
        cVar2 = *(char *)(param_1 + (uint)*param_2);
        while( true ) {
          if (cVar2 != '\x01') {
            return 0;
          }
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
          if (param_3 == 0) break;
          cVar2 = *(char *)(param_1 + (uint)*param_2);
        }
        return 1;
      }
      uVar5 = 0;
      do {
        uVar6 = (uint)param_2[uVar5];
        if (uVar6 == 0x25) {
          if (param_3 <= uVar5 + 2) {
            return 0;
          }
          iVar7 = 3;
          if (((&DAT_00378df2)[param_2[uVar5 + 2]] & (&DAT_00378df2)[(param_2 + uVar5)[1]]) == 0) {
            return 0;
          }
        }
        else {
          iVar7 = 1;
          if (*(char *)(param_1 + uVar6) == '\0') {
            return 0;
          }
        }
        uVar5 = uVar5 + iVar7;
      } while (uVar5 < param_3);
    }
    else {
      uVar5 = 0;
      do {
        while( true ) {
          bVar1 = param_2[uVar5];
          uVar6 = (uint)bVar1;
          if ((uVar6 != 0x25) || (*(char *)(param_1 + 0x100) == '\0')) break;
          if (param_3 <= uVar5 + 2) {
            return 0;
          }
          if (((&DAT_00378df2)[param_2[uVar5 + 2]] & (&DAT_00378df2)[(param_2 + uVar5)[1]]) == 0) {
            return 0;
          }
          uVar5 = uVar5 + 3;
joined_r0x01009c3c:
          if (param_3 <= uVar5) {
            return 1;
          }
        }
        iVar7 = 1;
        if ((char)bVar1 < '\0') {
          uVar3 = uVar5 + 1;
          if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar3,param_3,&DAT_018821c4);
          }
          if (uVar6 < 0xe0) {
            iVar7 = 2;
            uVar6 = param_2[uVar3] & 0x3f | (uVar6 & 0x1f) << 6;
          }
          else {
            uVar4 = uVar5 + 2;
            if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar4,param_3,&DAT_018821d4);
            }
            uVar3 = param_2[uVar4] & 0x3f | (param_2[uVar3] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar3 | (uVar6 & 0x1f) << 0xc;
              iVar7 = 3;
            }
            else {
              uVar4 = uVar5 + 3;
              if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar4,param_3,&DAT_018821e4);
              }
              iVar7 = 4;
              uVar6 = param_2[uVar4] & 0x3f | uVar3 << 6 | (uVar6 & 7) << 0x12;
            }
          }
          if (uVar6 < 0x80) goto LAB_01009ae8;
          if (*(char *)(param_1 + 0x101) == '\0') {
LAB_01009c00:
            if (*(char *)(param_1 + 0x102) == '\0') {
              return 0;
            }
            if (0x18ff < uVar6 - 0xe000) {
              if (uVar6 < 0xf0000) {
                return 0;
              }
              if ((uVar6 & 0xfffe) == 0xfffe) {
                return 0;
              }
            }
          }
          else if (0x1ff < uVar6 - 0xfdf0) {
            uVar3 = uVar6 - 0xa0;
            bVar8 = 0xd75f < uVar3;
            if (bVar8) {
              uVar3 = uVar6 - 0xf900;
            }
            if (bVar8 && 0x4cf < uVar3) {
              if (uVar6 - 0xe1000 < 0xeffe) {
                uVar5 = iVar7 + uVar5;
                goto joined_r0x01009c3c;
              }
              if (0xcffff < uVar6 - 0x10000 || (~uVar6 & 0xfffe) == 0) goto LAB_01009c00;
            }
          }
        }
        else {
LAB_01009ae8:
          if (*(char *)(param_1 + uVar6) != '\x01') {
            return 0;
          }
        }
        uVar5 = iVar7 + uVar5;
      } while (uVar5 < param_3);
    }
  }
  return 1;
}

