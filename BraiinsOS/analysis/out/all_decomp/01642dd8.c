// FUN_01642dd8 @ 01642dd8 size=348 calls_out=5 calls_in=8
// strings: 

void FUN_01642dd8(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  iVar10 = *(int *)(param_2 + 8);
  iVar11 = *(int *)(param_2 + 0xc);
  puVar9 = (uint *)(iVar10 + 0x28);
  if (0x3ff < param_5) {
    param_5 = 0x400;
  }
  do {
    FUN_01657318(&local_30,iVar10,param_3,1);
    uVar3 = uStack_28;
    uVar2 = local_2c;
    if (local_30 == 2) {
      *(undefined1 *)param_1 = 5;
      return;
    }
    if ((local_30 & 1) != 0) {
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      return;
    }
    if (iVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ad10c);
    }
    uVar5 = FUN_016e0370(iVar11,param_4,param_5);
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)param_1 = 4;
      param_1[1] = uVar5;
      return;
    }
    puVar6 = (uint *)FUN_016d2bc8();
    uVar5 = *puVar6;
    cVar4 = FUN_005bc530(uVar5);
    if (cVar4 != '\r') {
      *param_1 = 0;
      param_1[1] = uVar5;
      return;
    }
    DataMemoryBarrier(0xb);
    uVar5 = *puVar9;
    do {
      if ((uVar3 & 0xff) != (uVar5 & 0xffffff) >> 0x10) break;
      uVar7 = *puVar9;
      if (uVar7 == uVar5) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar9);
        if (bVar1) {
          *puVar9 = uVar5 & (uVar2 & 0x33 ^ 0xff003f);
        }
        bVar8 = 0;
        if (bVar1) {
          bVar8 = 0xff;
        }
      }
      else {
        bVar8 = 0;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      uVar5 = uVar7;
    } while (!(bool)(bVar8 & 1));
  } while( true );
}

