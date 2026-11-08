// FUN_01642b4c @ 01642b4c size=544 calls_out=5 calls_in=5
// strings: 

void FUN_01642b4c(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  iVar10 = *(int *)(param_2 + 0xc);
  if (iVar10 == -1) {
    FUN_01657318(&local_30,*(undefined4 *)(param_2 + 8),param_3,1);
    if (local_30 != 2) {
      if ((local_30 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac8ec);
      }
LAB_01642d50:
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      return;
    }
  }
  else {
    iVar12 = *(int *)(param_2 + 8);
    puVar11 = (uint *)(iVar12 + 0x28);
LAB_01642b84:
    FUN_01657318(&local_30,iVar12,param_3,1);
    uVar3 = uStack_28;
    uVar2 = local_2c;
    if (local_30 != 2) {
      if ((local_30 & 1) != 0) goto LAB_01642d50;
      uVar5 = FUN_016d9844(iVar10,param_4,param_5,0x4000);
      if (uVar5 != 0xffffffff) {
        if ((uVar5 == 0) || (param_5 <= uVar5)) goto LAB_01642ce0;
        puVar11 = (uint *)(*(int *)(param_2 + 8) + 0x28);
        DataMemoryBarrier(0xb);
        uVar7 = *(uint *)(*(int *)(param_2 + 8) + 0x28);
        goto LAB_01642cac;
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
      uVar5 = *puVar11;
      do {
        if ((uVar3 & 0xff) != (uVar5 & 0xffffff) >> 0x10) break;
        uVar7 = *puVar11;
        if (uVar7 == uVar5) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(puVar11);
          if (bVar1) {
            *puVar11 = uVar5 & (uVar2 & 0x33 ^ 0xff003f);
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
      goto LAB_01642b84;
    }
  }
  *(undefined1 *)param_1 = 5;
  return;
  while( true ) {
    uVar9 = *puVar11;
    if (uVar9 == uVar7) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar11);
      if (bVar1) {
        *puVar11 = uVar7 & (uVar2 & 0x33 ^ 0xff003f);
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
    uVar7 = uVar9;
    if ((bool)(bVar8 & 1)) break;
LAB_01642cac:
    if ((uVar3 & 0xff) != (uVar7 & 0xffffff) >> 0x10) break;
  }
LAB_01642ce0:
  param_1[1] = uVar5;
  *(undefined1 *)param_1 = 4;
  return;
}

