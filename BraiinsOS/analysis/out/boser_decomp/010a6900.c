// FUN_010a6900 @ 010a6900 size=632 calls_out=6 calls_in=0
// strings: 

void FUN_010a6900(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *local_c8;
  undefined4 uStack_c4;
  undefined1 local_98;
  int *local_94;
  undefined4 local_90;
  undefined1 local_64;
  int local_60;
  int *local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  undefined1 local_24;
  
  if ((*(int *)(param_2 + 8) != 0x3b9aca01) && (*(int *)(param_2 + 0x58) == 0)) {
    piVar9 = (int *)(param_2 + 0x50);
    iVar6 = *piVar9;
    if (iVar6 == 0) {
      piVar3 = *(int **)(param_2 + 0x48);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + 1;
      if (-1 < iVar6) {
        puVar4 = (uint *)(piVar3 + 6);
        DataMemoryBarrier(0xb);
        uVar8 = piVar3[6];
LAB_010a69c4:
        if (((uVar8 & 1) == 0) && (1 < uVar8)) goto code_r0x010a69d4;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(piVar3);
        }
        if ((uVar8 & 1) == 0) {
          do {
            iVar6 = *piVar3;
            bVar2 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar2);
          *piVar3 = iVar6 + 1;
          if (iVar6 < 0) goto LAB_010a6b74;
          local_64 = 0;
          local_90 = 1;
          local_94 = piVar3;
          iVar6 = FUN_01a3af8c(&local_94);
          *(undefined4 *)(param_2 + 0x4c) = 1;
          *(int *)(param_2 + 0x50) = iVar6;
          *(undefined **)(param_2 + 0x54) = &DAT_01d2bba0;
          goto LAB_010a6aa8;
        }
        piVar3 = (int *)0x0;
LAB_010a6b44:
        uVar5 = 1;
        goto LAB_010a6b48;
      }
LAB_010a6b74:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x10a6b74);
      (*pcVar1)();
    }
    if (*(int *)(param_2 + 0x4c) != 1) {
      piVar3 = *(int **)(param_2 + 0x48);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_010a6b74;
      local_98 = 0;
      uStack_c4 = 1;
      local_c8 = piVar3;
      FUN_01a3afe8(piVar9,&local_c8);
      iVar6 = *(int *)(param_2 + 0x50);
      *(undefined4 *)(param_2 + 0x4c) = 1;
    }
LAB_010a6aa8:
    (**(code **)(*(int *)(param_2 + 0x54) + 0xc))(&local_60,iVar6,param_3);
    if (local_60 != 0) {
      uVar5 = 1;
      goto LAB_010a6b68;
    }
    local_54 = *(int **)(param_2 + 0x48);
    do {
      iVar6 = *local_54;
      bVar2 = (bool)hasExclusiveAccess(local_54);
    } while (!bVar2);
    *local_54 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_010a6b74;
    local_24 = 0;
    local_50 = 1;
    FUN_01a3afe8(piVar9,&local_54);
    piVar3 = local_5c;
    uVar5 = local_58;
    if (local_5c == (int *)0x0) {
      if (*piVar9 != 0) {
        FUN_01139b38(*piVar9,*(undefined4 *)(param_2 + 0x54));
      }
      piVar3 = (int *)0x0;
      *piVar9 = 0;
    }
LAB_010a6b48:
    if (*(int *)(param_2 + 0x58) != 0) {
      FUN_0119d304(*(int *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c));
    }
    *(int **)(param_2 + 0x58) = piVar3;
    *(undefined4 *)(param_2 + 0x5c) = uVar5;
  }
  uVar5 = 0;
  param_1[1] = 0;
LAB_010a6b68:
  *param_1 = uVar5;
  return;
code_r0x010a69d4:
  uVar7 = *puVar4;
  if (uVar7 == uVar8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar4);
      if (bVar2) {
        *puVar4 = uVar8 - 2;
        bVar2 = true;
        goto LAB_010a6a10;
      }
      uVar7 = *puVar4;
    } while (uVar7 == uVar8);
  }
  bVar2 = false;
  ClearExclusiveLocal();
LAB_010a6a10:
  DataMemoryBarrier(0xb);
  uVar8 = uVar7;
  if (bVar2) goto LAB_010a6b44;
  goto LAB_010a69c4;
}

