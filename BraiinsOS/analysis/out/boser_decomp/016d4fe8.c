// FUN_016d4fe8 @ 016d4fe8 size=328 calls_out=3 calls_in=20
// strings: 

bool FUN_016d4fe8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  iVar8 = *param_1;
  bVar11 = false;
  uVar7 = param_1[2];
  uVar6 = *(uint *)(iVar8 + 0x50);
  if (uVar6 != uVar7) {
    iVar9 = *(int *)(iVar8 + 0x54);
    uVar10 = *(uint *)(iVar8 + 0x58);
    iVar2 = FUN_016d4a28();
    if (iVar2 == 10) {
      bVar12 = iVar9 == -1;
      iVar9 = iVar9 + 1;
      iVar2 = 1;
      if (bVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d0a068);
      }
    }
    else {
      iVar2 = uVar10 + 1;
      if (0xfffffffe < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d0a078);
      }
    }
    uVar10 = FUN_016d4a28(param_1);
    iVar5 = 1;
    if (0x7f < uVar10) {
      iVar5 = 2;
    }
    if ((0x7ff < uVar10) && (iVar5 = 4, uVar10 < 0x10000)) {
      iVar5 = 3;
    }
    iVar3 = param_1[1];
    uVar6 = iVar5 + uVar6;
    *(uint *)(iVar8 + 0x50) = uVar6;
    *(int *)(iVar8 + 0x54) = iVar9;
    *(int *)(iVar8 + 0x58) = iVar2;
    if (uVar6 != 0) {
      if (uVar6 < uVar7) {
        if (*(char *)(iVar3 + uVar6) < -0x40) {
LAB_016d5088:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(iVar3,uVar7,uVar6,uVar7,&DAT_01d0a088);
        }
      }
      else if (uVar6 != uVar7) goto LAB_016d5088;
    }
    if (uVar6 != uVar7) {
      pbVar4 = (byte *)(iVar3 + uVar6);
      bVar11 = true;
      bVar1 = *pbVar4;
      if ((0x7fffffff < (uint)(int)(char)bVar1) && (0xef < bVar1)) {
        bVar11 = (undefined1 *)
                 ((pbVar4[2] & 0x3f) << 6 | (pbVar4[1] & 0x3f) << 0xc | pbVar4[3] & 0x3f |
                 (bVar1 & 7) << 0x12) != &DAT_00110000;
      }
    }
  }
  return bVar11;
}

