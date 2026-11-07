// FUN_01646538 @ 01646538 size=712 calls_out=8 calls_in=2
// strings: filled must not become larger than initialized | filled overflowchannel empty

void FUN_01646538(uint *param_1,int param_2,undefined4 param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  if (uVar10 < uVar11) {
    FUN_01657318(&local_30,*(undefined4 *)(param_2 + 8),param_3,0);
    if (local_30 != 2) {
      if ((local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar11,uVar10,uVar10,&DAT_018ad12c);
      }
LAB_016467c4:
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      return;
    }
  }
  else {
    iVar14 = *(int *)(param_2 + 0xc);
    if (iVar14 == -1) {
      FUN_01657318(&local_30,*(undefined4 *)(param_2 + 8),param_3,0);
      if (local_30 != 2) {
        if ((local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ac92c);
        }
        goto LAB_016467c4;
      }
    }
    else {
      iVar5 = *param_4;
      iVar12 = *(int *)(param_2 + 8);
      puVar13 = (uint *)(iVar12 + 0x28);
LAB_01646588:
      FUN_01657318(&local_30,iVar12,param_3,0);
      uVar3 = uStack_28;
      uVar2 = local_2c;
      if (local_30 != 2) {
        uVar6 = uStack_28;
        if ((local_30 & 1) != 0) {
LAB_01646738:
          *param_1 = local_2c;
          param_1[1] = uVar6;
          return;
        }
        uVar6 = FUN_016e0250(iVar14,iVar5 + uVar11,uVar10 - uVar11);
        if (uVar6 != 0xffffffff) {
          if ((uVar6 == 0) || (uVar10 - uVar11 <= uVar6)) goto LAB_016466dc;
          puVar13 = (uint *)(*(int *)(param_2 + 8) + 0x28);
          DataMemoryBarrier(0xb);
          uVar10 = *(uint *)(*(int *)(param_2 + 8) + 0x28);
          goto LAB_016466a8;
        }
        puVar7 = (uint *)FUN_016d2bc8();
        uVar6 = *puVar7;
        cVar4 = FUN_005bc530(uVar6);
        if (cVar4 != '\r') {
          local_2c = 0;
          goto LAB_01646738;
        }
        DataMemoryBarrier(0xb);
        uVar6 = *puVar13;
        do {
          if ((uVar3 & 0xff) != (uVar6 & 0xffffff) >> 0x10) break;
          uVar8 = *puVar13;
          if (uVar8 == uVar6) {
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(puVar13);
            if (bVar1) {
              *puVar13 = uVar6 & (uVar2 & 0x33 ^ 0xff003f);
            }
            bVar9 = 0;
            if (bVar1) {
              bVar9 = 0xff;
            }
          }
          else {
            bVar9 = 0;
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
          uVar6 = uVar8;
        } while (!(bool)(bVar9 & 1));
        goto LAB_01646588;
      }
    }
  }
  *(undefined1 *)param_1 = 5;
  return;
  while( true ) {
    uVar8 = *puVar13;
    if (uVar8 == uVar10) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar13);
      if (bVar1) {
        *puVar13 = uVar10 & (uVar2 & 0x33 ^ 0xff003f);
      }
      bVar9 = 0;
      if (bVar1) {
        bVar9 = 0xff;
      }
    }
    else {
      bVar9 = 0;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar10 = uVar8;
    if ((bool)(bVar9 & 1)) break;
LAB_016466a8:
    if ((uVar3 & 0xff) != (uVar10 & 0xffffff) >> 0x10) break;
  }
LAB_016466dc:
  uVar6 = uVar6 + uVar11;
  uVar10 = param_4[3];
  if ((uint)param_4[3] < uVar6) {
    param_4[3] = uVar6;
    uVar10 = uVar6;
  }
  if (uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("filled overflowchannel empty",0xf,&DAT_018ac93c);
  }
  if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_018ac93c);
  }
  param_4[2] = uVar6;
  *(undefined1 *)param_1 = 4;
  return;
}

