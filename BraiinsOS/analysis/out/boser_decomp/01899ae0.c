// FUN_01899ae0 @ 01899ae0 size=712 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_01899ae0(int *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  uint local_46c;
  byte local_468 [1024];
  int local_68;
  undefined1 auStack_64 [64];
  
  if (param_4 != 0) {
    iVar17 = *param_1;
    uVar11 = param_4 - 1;
    uVar4 = (uint)((uVar11 & 7) != 0);
    uVar13 = uVar4 + (uVar11 >> 3);
    uVar8 = *(uint *)(iVar17 + 0x48);
    uVar14 = uVar8 + 1;
    uVar7 = uVar13 - uVar14;
    if (uVar14 <= uVar13 && uVar14 <= uVar7) {
      uVar15 = -uVar11 & 7;
      if (uVar15 == 0) {
        uVar6 = param_3[1];
        uVar10 = param_3[2];
        if (uVar6 <= uVar10) {
          return 1;
        }
        cVar1 = *(char *)(*param_3 + uVar10);
        uVar10 = uVar10 + 1;
        param_3[2] = uVar10;
        local_46c = uVar15;
        if (cVar1 != '\0') {
          return 1;
        }
      }
      else {
        uVar6 = param_3[1];
        uVar10 = param_3[2];
      }
      uVar12 = uVar10 + uVar7;
      if (!CARRY4(uVar10,uVar7)) {
        bVar18 = uVar6 <= uVar12;
        uVar16 = uVar15;
        if (uVar12 <= uVar6) {
          param_3[2] = uVar12;
          bVar18 = CARRY4(uVar12,uVar8);
          uVar16 = uVar12 + uVar8;
          local_46c = uVar15;
        }
        if (!bVar18) {
          bVar18 = uVar16 < uVar6;
          if (uVar16 <= uVar6) {
            uVar6 = *param_3;
            param_3[2] = uVar16;
          }
          if ((bVar18) &&
             (cVar1 = *(char *)(uVar6 + uVar16), param_3[2] = uVar16 + 1, cVar1 == -0x44)) {
            FUN_01bed93e(local_468,0,0x400);
            if (0x400 < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar7,0x400,&DAT_01d21d6c);
            }
            FUN_01894954(iVar17,uVar6 + uVar12,uVar8,local_468,uVar7);
            if (uVar13 != uVar14) {
              uVar13 = 0xff >> (local_46c & 0xff);
              bVar2 = *(byte *)(uVar6 + uVar10);
              if (bVar2 <= uVar13) {
                uVar15 = 1;
                if (uVar7 != 1) {
                  uVar15 = (uint)local_468 | 1;
                  iVar5 = 0;
                  do {
                    iVar3 = iVar5;
                    *(byte *)(uVar15 + iVar3) =
                         *(byte *)(uVar15 + iVar3) ^ *(byte *)(uVar10 + uVar6 + 1 + iVar3);
                    iVar5 = iVar3 + 1;
                  } while ((((uVar11 >> 3) + uVar4) - uVar8) + -2 != iVar3 + 1);
                  uVar15 = iVar3 + 2;
                }
                if (uVar15 == uVar7) {
                  iVar3 = uVar7 - uVar14;
                  local_468[0] = (local_468[0] ^ bVar2) & (byte)uVar13;
                  iVar5 = iVar3;
                  pbVar9 = local_468;
                  do {
                    if (iVar5 == 0) {
                      if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_012fb12c(iVar3,uVar7,&DAT_01d21d7c);
                      }
                      if (local_468[iVar3] != 1) {
                        return 1;
                      }
                      if (uVar7 < uVar8) {
                    /* WARNING: Subroutine does not return */
                        FUN_012faff4(uVar7 - uVar8,uVar7,uVar7,&DAT_01d21d8c);
                      }
                      FUN_018999f0(&local_68,iVar17,param_2,local_468 + (uVar7 - uVar8),uVar8);
                      uVar4 = *(uint *)(local_68 + 0x48);
                      if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
                        FUN_012faff4(0,uVar4,0x40,&DAT_01d2571c);
                      }
                      if ((uVar8 == uVar4) &&
                         (iVar17 = thunk_FUN_01bed842(uVar6 + uVar12,auStack_64,uVar8), iVar17 == 0)
                         ) {
                        return 0;
                      }
                      return 1;
                    }
                    bVar2 = *pbVar9;
                    iVar5 = iVar5 + -1;
                    pbVar9 = pbVar9 + 1;
                  } while (bVar2 == 0);
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

