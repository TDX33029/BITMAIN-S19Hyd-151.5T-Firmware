// FUN_00a6475c @ 00a6475c size=736 calls_out=6 calls_in=0
// strings: 

bool FUN_00a6475c(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint local_40;
  undefined2 *puStack_3c;
  uint uStack_38;
  uint local_30;
  undefined2 *local_2c;
  int local_28;
  
  if (0x8000 < param_2) goto LAB_00a64938;
  psVar11 = *(short **)(param_1 + 0x18);
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (uVar12 == 0) {
    uVar8 = 0;
    if (param_2 != 0) goto LAB_00a647d8;
LAB_00a6483c:
    uStack_38 = 0;
    local_2c = (undefined2 *)&SUB_00000002;
    local_30 = 0;
  }
  else {
    puVar4 = (ushort *)(psVar11 + 1);
    iVar6 = uVar12 << 2;
    uVar8 = 0;
    do {
      if ((puVar4[-1] != 0xffff) &&
         ((uVar8 - (*(ushort *)(param_1 + 0x38) & *puVar4) & (uint)*(ushort *)(param_1 + 0x38)) == 0
         )) goto LAB_00a647d0;
      uVar8 = uVar8 + 1;
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    uVar8 = 0;
LAB_00a647d0:
    if (param_2 == 0) goto LAB_00a6483c;
LAB_00a647d8:
    local_2c = (undefined2 *)thunk_FUN_016d4a50(param_2 << 2);
    if (local_2c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,param_2 << 2);
    }
    puVar3 = local_2c;
    uStack_38 = 1;
    if (1 < param_2) {
      iVar6 = param_2 - 1;
      do {
        puVar3[1] = 0;
        iVar6 = iVar6 + -1;
        *puVar3 = 0xffff;
        puVar3 = puVar3 + 2;
      } while (iVar6 != 0);
      uStack_38 = param_2;
    }
    puVar3[1] = 0;
    *puVar3 = 0xffff;
    local_30 = param_2;
  }
  local_28 = 0;
  local_40 = local_30;
  puStack_3c = local_2c;
  uVar14 = FUN_00a5ee50(&local_40);
  uVar7 = (uint)((ulonglong)uVar14 >> 0x20);
  iVar6 = (int)uVar14;
  uVar13 = param_2 - 1;
  *(int *)(param_1 + 0x18) = iVar6;
  *(short *)(param_1 + 0x38) = (short)uVar13;
  *(uint *)(param_1 + 0x1c) = uVar7;
  if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,uVar12,uVar12,&DAT_018a63d4);
  }
  if (uVar8 != uVar12) {
    psVar5 = psVar11 + uVar8 * 2;
    do {
      sVar1 = *psVar5;
      if (sVar1 != -1) {
        uVar2 = (ushort)psVar5[1] & uVar13;
        while( true ) {
          do {
            uVar9 = uVar2;
            uVar2 = 0;
          } while (uVar7 <= uVar9);
          psVar10 = (short *)(iVar6 + uVar9 * 4);
          if (*psVar10 == -1) break;
          uVar2 = uVar9 + 1;
        }
        psVar10[1] = psVar5[1];
        *psVar10 = sVar1;
      }
      psVar5 = psVar5 + 2;
    } while (psVar5 != psVar11 + uVar12 * 2);
  }
  if (uVar8 != 0) {
    psVar5 = psVar11;
    do {
      sVar1 = *psVar5;
      if (sVar1 != -1) {
        uVar2 = uVar13 & (ushort)psVar5[1];
        while( true ) {
          do {
            uVar9 = uVar2;
            uVar2 = 0;
          } while (uVar7 <= uVar9);
          psVar10 = (short *)(iVar6 + uVar9 * 4);
          if (*psVar10 == -1) break;
          uVar2 = uVar9 + 1;
        }
        psVar10[1] = psVar5[1];
        *psVar10 = sVar1;
      }
      psVar5 = psVar5 + 2;
    } while (psVar5 != psVar11 + uVar8 * 2);
  }
  uVar8 = *(uint *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x20);
  uVar7 = uVar7 - (uVar8 + (uVar7 >> 2));
  if (iVar6 - uVar8 < uVar7) {
    if (CARRY4(uVar7,uVar8)) {
      puVar3 = (undefined2 *)0x0;
LAB_00a64a1c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(puVar3,iVar6);
    }
    FUN_00a8a1c8(&local_30,iVar6,*(undefined4 *)(param_1 + 0x24),uVar7 + uVar8,4,0x34);
    if (local_30 == 1) {
      puVar3 = local_2c;
      iVar6 = local_28;
      goto LAB_00a64a1c;
    }
    *(uint *)(param_1 + 0x20) = uVar7 + uVar8;
    *(undefined2 **)(param_1 + 0x24) = local_2c;
  }
  if (uVar12 != 0) {
    thunk_FUN_016d3fb4(psVar11);
  }
LAB_00a64938:
  return 0x8000 < param_2;
}

