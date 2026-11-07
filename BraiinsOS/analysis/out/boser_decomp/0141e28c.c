// FUN_0141e28c @ 0141e28c size=728 calls_out=11 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_0141e28c(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auStack_30 [12];
  
  uVar15 = *(uint *)(param_1 + 0x28);
  uVar3 = uVar15 + param_2;
  if (CARRY4(uVar15,param_2)) {
LAB_0141e524:
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,auStack_30,&DAT_01d2f38c,&DAT_01cf45b0);
  }
  uVar14 = *(uint *)(param_1 + 0x1c);
  if (uVar14 < uVar3) {
    uVar6 = 0xffffffff >> LZCOUNT(uVar3 - 1);
    if (uVar3 < 2) {
      uVar6 = 0;
    }
    if (uVar6 >> 0xf != 0) goto LAB_0141e524;
    uVar3 = uVar6 + 1;
    if (uVar15 == 0) {
      *(short *)(param_1 + 0x38) = (short)uVar3 + -1;
      iVar4 = 0x2762762;
      FUN_01412b3c(auStack_30,uVar3);
      uVar16 = FUN_01410d80(auStack_30);
      if (uVar14 != 0) {
        thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x18));
      }
      uVar3 = uVar3 - (uVar3 >> 2);
      *(undefined8 *)(param_1 + 0x18) = uVar16;
      if (uVar3 < 0x2762763) {
        iVar4 = uVar3 * 0x34;
        uVar13 = 4;
        iVar5 = FUN_01298504(iVar4,4);
        if (iVar5 != 0) {
          uVar13 = *(undefined4 *)(param_1 + 0x24);
          FUN_01410ec8(uVar13,0);
          FUN_0134aee0(*(undefined4 *)(param_1 + 0x20),uVar13,4,0x34);
          *(uint *)(param_1 + 0x20) = uVar3;
          *(int *)(param_1 + 0x24) = iVar5;
          *(undefined4 *)(param_1 + 0x28) = 0;
          return;
        }
      }
      else {
        uVar13 = 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,iVar4);
    }
    psVar9 = *(short **)(param_1 + 0x18);
    if (uVar14 != 0) {
      puVar7 = (ushort *)(psVar9 + 1);
      iVar4 = uVar14 << 2;
      uVar11 = 0;
      do {
        if ((puVar7[-1] != 0xffff) &&
           ((uVar11 - (*puVar7 & *(ushort *)(param_1 + 0x38)) & (uint)*(ushort *)(param_1 + 0x38))
            == 0)) goto LAB_0141e334;
        uVar11 = uVar11 + 1;
        puVar7 = puVar7 + 2;
        iVar4 = iVar4 + -4;
      } while (iVar4 != 0);
    }
    uVar11 = 0;
LAB_0141e334:
    FUN_01412b3c(auStack_30,uVar3);
    uVar16 = FUN_01410d80(auStack_30);
    uVar3 = (uint)((ulonglong)uVar16 >> 0x20);
    *(short *)(param_1 + 0x38) = (short)uVar6;
    *(undefined8 *)(param_1 + 0x18) = uVar16;
    if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar11,uVar14,uVar14,&DAT_01d2f43c);
    }
    psVar12 = psVar9 + uVar11 * 2;
    while (psVar12 != psVar9 + uVar14 * 2) {
      sVar1 = *psVar12;
      puVar7 = (ushort *)(psVar12 + 1);
      psVar12 = psVar12 + 2;
      if (sVar1 != -1) {
        uVar2 = uVar6 & *puVar7;
        while( true ) {
          do {
            uVar10 = uVar2;
            uVar2 = 0;
          } while (uVar3 <= uVar10);
          psVar8 = (short *)((int)uVar16 + uVar10 * 4);
          if (*psVar8 == -1) break;
          uVar2 = uVar10 + 1;
        }
        psVar8[1] = *puVar7;
        *psVar8 = sVar1;
      }
    }
    psVar12 = psVar9;
    while (psVar12 != psVar9 + uVar11 * 2) {
      sVar1 = *psVar12;
      puVar7 = (ushort *)(psVar12 + 1);
      psVar12 = psVar12 + 2;
      if (sVar1 != -1) {
        uVar2 = uVar6 & *puVar7;
        while( true ) {
          do {
            uVar10 = uVar2;
            uVar2 = 0;
          } while (uVar3 <= uVar10);
          psVar8 = (short *)((int)uVar16 + uVar10 * 4);
          if (*psVar8 == -1) break;
          uVar2 = uVar10 + 1;
        }
        psVar8[1] = *puVar7;
        *psVar8 = sVar1;
      }
    }
    FUN_01651c38(param_1 + 0x20,uVar15,uVar3 - (uVar15 + (uVar3 >> 2)),0x34);
    if (uVar14 != 0) {
      thunk_FUN_01be4678(psVar9);
      return;
    }
  }
  return;
}

