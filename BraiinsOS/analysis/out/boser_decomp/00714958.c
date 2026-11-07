// FUN_00714958 @ 00714958 size=568 calls_out=6 calls_in=2
// strings: 

bool FUN_00714958(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if (param_2 < 0x8001) {
    psVar10 = *(short **)(param_1 + 0x18);
    uVar11 = *(uint *)(param_1 + 0x1c);
    if (uVar11 != 0) {
      puVar4 = (ushort *)(psVar10 + 1);
      iVar3 = uVar11 << 2;
      uVar8 = 0;
      do {
        if ((puVar4[-1] != 0xffff) &&
           ((uVar8 - (*(ushort *)(param_1 + 0x38) & *puVar4) & (uint)*(ushort *)(param_1 + 0x38)) ==
            0)) goto LAB_007149c4;
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -4;
      } while (iVar3 != 0);
    }
    uVar8 = 0;
LAB_007149c4:
    FUN_01412b3c(&local_30,param_2);
    uVar13 = FUN_01410d80(&local_30);
    uVar7 = (uint)((ulonglong)uVar13 >> 0x20);
    iVar3 = (int)uVar13;
    uVar12 = param_2 - 1;
    *(int *)(param_1 + 0x18) = iVar3;
    *(short *)(param_1 + 0x38) = (short)uVar12;
    *(uint *)(param_1 + 0x1c) = uVar7;
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar8,uVar11,uVar11,&DAT_01d2f43c);
    }
    if (uVar8 != uVar11) {
      psVar5 = psVar10 + uVar8 * 2;
      do {
        sVar1 = *psVar5;
        if (sVar1 != -1) {
          uVar2 = (ushort)psVar5[1] & uVar12;
          while( true ) {
            do {
              uVar9 = uVar2;
              uVar2 = 0;
            } while (uVar7 <= uVar9);
            psVar6 = (short *)(iVar3 + uVar9 * 4);
            if (*psVar6 == -1) break;
            uVar2 = uVar9 + 1;
          }
          psVar6[1] = psVar5[1];
          *psVar6 = sVar1;
        }
        psVar5 = psVar5 + 2;
      } while (psVar5 != psVar10 + uVar11 * 2);
    }
    if (uVar8 != 0) {
      psVar5 = psVar10;
      do {
        sVar1 = *psVar5;
        if (sVar1 != -1) {
          uVar2 = uVar12 & (ushort)psVar5[1];
          while( true ) {
            do {
              uVar9 = uVar2;
              uVar2 = 0;
            } while (uVar7 <= uVar9);
            psVar6 = (short *)(iVar3 + uVar9 * 4);
            if (*psVar6 == -1) break;
            uVar2 = uVar9 + 1;
          }
          psVar6[1] = psVar5[1];
          *psVar6 = sVar1;
        }
        psVar5 = psVar5 + 2;
      } while (psVar5 != psVar10 + uVar8 * 2);
    }
    uVar8 = *(uint *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x20);
    uVar7 = uVar7 - (uVar8 + (uVar7 >> 2));
    if (iVar3 - uVar8 < uVar7) {
      if (CARRY4(uVar7,uVar8)) {
        local_2c = 0;
LAB_00714b7c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(local_2c,iVar3);
      }
      FUN_0134b234(&local_30,iVar3,*(undefined4 *)(param_1 + 0x24),uVar7 + uVar8,4,0x34);
      if (local_30 == 1) {
        iVar3 = local_28;
        goto LAB_00714b7c;
      }
      *(uint *)(param_1 + 0x20) = uVar7 + uVar8;
      *(undefined4 *)(param_1 + 0x24) = local_2c;
    }
    if (uVar11 != 0) {
      thunk_FUN_01be4678(psVar10);
    }
  }
  return 0x8000 < param_2;
}

