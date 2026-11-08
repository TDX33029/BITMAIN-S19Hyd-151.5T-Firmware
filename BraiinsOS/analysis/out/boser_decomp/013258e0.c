// FUN_013258e0 @ 013258e0 size=736 calls_out=1 calls_in=1
// strings: 

uint FUN_013258e0(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    iVar7 = param_1 + uVar9;
    uVar8 = param_2 - uVar9;
    uVar6 = 0;
    uVar3 = -iVar7 & 3;
    if ((uVar3 | 8) <= uVar8) {
      if (uVar3 != 0) {
        do {
          uVar1 = (uint)*(char *)(iVar7 + uVar6);
          if ((int)uVar1 < 0) goto LAB_01325998;
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      uVar6 = uVar3;
      do {
        uVar4 = *(uint *)(iVar7 + uVar6);
        uVar3 = ((uint *)(iVar7 + uVar6))[1];
        uVar5 = uVar4 & 0x80808080;
        uVar1 = uVar3 & 0x80808080;
        if (uVar1 != 0 || uVar5 != 0) {
          uVar8 = (uint)LZCOUNT((uVar4 >> 7 & 1) << 0x18 | (uVar5 >> 0xf & 1) << 0x10 |
                                (uVar5 >> 0x17 & 1) << 8 | uVar4 >> 0x1f) >> 3;
          if (uVar5 == 0) {
            uVar8 = ((uint)LZCOUNT((uVar3 >> 7 & 1) << 0x18 | (uVar1 >> 0xf & 1) << 0x10 |
                                   (uVar1 >> 0x17 & 1) << 8 | uVar3 >> 0x1f) >> 3) + 4;
          }
          uVar6 = uVar8 + uVar6;
          uVar1 = (uint)*(byte *)(iVar7 + uVar6);
          goto LAB_013259c4;
        }
        uVar6 = uVar6 + 8;
      } while (uVar6 <= uVar8 - 8);
    }
    while( true ) {
      if (uVar8 <= uVar6) {
        return param_2;
      }
      uVar1 = (uint)*(char *)(iVar7 + uVar6);
      if ((int)uVar1 < 0) break;
      uVar6 = uVar6 + 1;
    }
LAB_01325998:
    uVar1 = uVar1 & 0xff;
LAB_013259c4:
    uVar6 = uVar6 + uVar9;
    if (param_2 < uVar6 + 4) {
LAB_01325b04:
      if (param_2 <= uVar6) {
        return uVar6;
      }
      do {
        pbVar2 = (byte *)(param_1 + uVar6);
        if ((char)*pbVar2 < '\0') {
          uVar9 = (uint)*pbVar2;
          if (0x1d < uVar9 - 0xc2) {
            if (((uVar9 < 0xf0) && (uVar6 + 3 <= param_2)) &&
               ((byte)((&DAT_00532b80)[uVar9] & (&DAT_00532b00)[pbVar2[1]] | pbVar2[2] >> 6) == 2))
            {
              uVar6 = uVar6 + 3;
            }
            return uVar6;
          }
          uVar9 = uVar6 + 2;
          if (param_2 < uVar9) {
            return uVar6;
          }
          if (-0x41 < (char)pbVar2[1]) {
            return uVar6;
          }
        }
        else {
          uVar9 = uVar6 + 1;
        }
        uVar6 = uVar9;
        if (param_2 <= uVar9) {
          return uVar9;
        }
      } while( true );
    }
    do {
      while (uVar9 = uVar6, 0x1d < uVar1 - 0xc2) {
        if (uVar1 < 0xf0) {
          do {
            uVar3 = uVar9;
            iVar7 = param_1 + uVar3;
            if ((byte)((&DAT_00532b80)[uVar1] & (&DAT_00532b00)[*(byte *)(iVar7 + 1)] |
                      *(byte *)(iVar7 + 2) >> 6) != 2) {
              return uVar3;
            }
            uVar6 = uVar3 + 3;
            if (param_2 < uVar3 + 7) goto LAB_01325b04;
            uVar1 = (uint)*(byte *)(iVar7 + 3);
            uVar9 = uVar6;
          } while ((uVar1 & 0xf0) == 0xe0);
          if (-1 < (char)*(byte *)(iVar7 + 3)) {
            uVar9 = uVar3 + 4;
            goto LAB_01325ae4;
          }
        }
        else {
          iVar7 = uVar9 + param_1;
          if (((uint)(byte)((&DAT_00532b80)[uVar1] & (&DAT_00532b00)[*(byte *)(iVar7 + 1)] |
                           *(byte *)(iVar7 + 2) >> 6) | (*(byte *)(iVar7 + 3) & 0xc0) << 2) != 0x202
             ) {
            return uVar9;
          }
          uVar6 = uVar9 + 4;
          if (param_2 < uVar9 + 8) goto LAB_01325b04;
          uVar1 = (uint)*(byte *)(param_1 + uVar6);
          if (-1 < (char)*(byte *)(param_1 + uVar6)) {
            uVar9 = uVar9 + 5;
            goto LAB_01325ae4;
          }
        }
      }
      if (-0x41 < *(char *)(uVar9 + param_1 + 1)) {
        return uVar9;
      }
      uVar6 = uVar9 + 2;
      if (param_2 < uVar9 + 6) goto LAB_01325b04;
      uVar1 = (uint)*(byte *)(param_1 + uVar6);
    } while ((char)*(byte *)(param_1 + uVar6) < '\0');
    uVar9 = uVar9 + 3;
LAB_01325ae4:
    if (param_2 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar9,param_2,param_2,&DAT_01ce5f3c);
    }
  } while( true );
}

