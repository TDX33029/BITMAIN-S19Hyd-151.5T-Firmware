// FUN_016b3214 @ 016b3214 size=272 calls_out=2 calls_in=2
// strings: 

void FUN_016b3214(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint local_30;
  uint local_2c;
  uint *local_28;
  code *local_24;
  
  local_28 = &local_30;
  uVar3 = *(uint *)(param_1 + 0x58);
  local_30 = param_2;
  local_2c = param_3;
  if ((param_2 < uVar3) &&
     (uVar5 = ~(-1 << (*(uint *)(param_1 + 0x15c) & 0x1f)), (param_2 & uVar5) == 0)) {
    if ((param_3 < uVar3) && ((param_3 & uVar5) == 0)) {
      bVar1 = *(byte *)(param_1 + 0x15b);
      iVar11 = uVar3 - param_2;
      iVar7 = *(int *)(param_1 + 0x54) + param_2 * 4;
      iVar8 = *(int *)(param_1 + 0x54) + param_3 * 4;
      iVar6 = 0;
      if (uVar3 < param_2) {
        iVar11 = 0;
      }
      while( true ) {
        if (iVar11 == iVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(param_2 + iVar6,uVar3,&DAT_01d0880c);
        }
        if (uVar3 - param_3 == iVar6) break;
        iVar10 = iVar6 + 1;
        uVar9 = *(undefined4 *)(iVar7 + iVar6 * 4);
        *(undefined4 *)(iVar7 + iVar6 * 4) = *(undefined4 *)(iVar8 + iVar6 * 4);
        *(undefined4 *)(iVar8 + iVar6 * 4) = uVar9;
        iVar6 = iVar10;
        if (bVar1 + 2 == iVar10) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_3 + iVar6,uVar3,&DAT_01d0880c);
    }
    local_28 = &local_2c;
    puVar2 = &DAT_0059924b;
    puVar4 = &DAT_01d087fc;
  }
  else {
    puVar2 = &DAT_0057e528;
    puVar4 = &DAT_01d087ec;
  }
  local_24 = FUN_016cbc48;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar2,&local_28,puVar4);
}

