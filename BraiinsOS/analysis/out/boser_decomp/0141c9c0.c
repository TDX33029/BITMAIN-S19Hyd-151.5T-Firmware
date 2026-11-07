// FUN_0141c9c0 @ 0141c9c0 size=480 calls_out=5 calls_in=1
// strings: 

bool FUN_0141c9c0(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 auStack_30 [12];
  
  if (param_2 < 0x8001) {
    uVar11 = *(uint *)(param_1 + 0x1c);
    psVar10 = *(short **)(param_1 + 0x18);
    if (uVar11 != 0) {
      puVar4 = (ushort *)(psVar10 + 1);
      iVar3 = uVar11 << 2;
      uVar8 = 0;
      do {
        if ((puVar4[-1] != 0xffff) &&
           ((uVar8 - (*(ushort *)(param_1 + 0x38) & *puVar4) & (uint)*(ushort *)(param_1 + 0x38)) ==
            0)) goto LAB_0141ca30;
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 + -4;
      } while (iVar3 != 0);
    }
    uVar8 = 0;
LAB_0141ca30:
    FUN_01412b3c(auStack_30,param_2);
    uVar13 = FUN_01410d80(auStack_30);
    uVar5 = (uint)((ulonglong)uVar13 >> 0x20);
    iVar3 = (int)uVar13;
    uVar12 = param_2 - 1;
    *(int *)(param_1 + 0x18) = iVar3;
    *(short *)(param_1 + 0x38) = (short)uVar12;
    *(uint *)(param_1 + 0x1c) = uVar5;
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar8,uVar11,uVar11,&DAT_01d2f43c);
    }
    if (uVar8 != uVar11) {
      psVar6 = psVar10 + uVar8 * 2;
      do {
        sVar1 = *psVar6;
        if (sVar1 != -1) {
          uVar2 = (ushort)psVar6[1] & uVar12;
          while( true ) {
            do {
              uVar9 = uVar2;
              uVar2 = 0;
            } while (uVar5 <= uVar9);
            psVar7 = (short *)(iVar3 + uVar9 * 4);
            if (*psVar7 == -1) break;
            uVar2 = uVar9 + 1;
          }
          psVar7[1] = psVar6[1];
          *psVar7 = sVar1;
        }
        psVar6 = psVar6 + 2;
      } while (psVar6 != psVar10 + uVar11 * 2);
    }
    if (uVar8 != 0) {
      psVar6 = psVar10;
      do {
        sVar1 = *psVar6;
        if (sVar1 != -1) {
          uVar2 = uVar12 & (ushort)psVar6[1];
          while( true ) {
            do {
              uVar9 = uVar2;
              uVar2 = 0;
            } while (uVar5 <= uVar9);
            psVar7 = (short *)(iVar3 + uVar9 * 4);
            if (*psVar7 == -1) break;
            uVar2 = uVar9 + 1;
          }
          psVar7[1] = psVar6[1];
          *psVar7 = sVar1;
        }
        psVar6 = psVar6 + 2;
      } while (psVar6 != psVar10 + uVar8 * 2);
    }
    FUN_01651c38(param_1 + 0x20,*(int *)(param_1 + 0x28),
                 uVar5 - (*(int *)(param_1 + 0x28) + (uVar5 >> 2)),0x30);
    if (uVar11 != 0) {
      thunk_FUN_01be4678(psVar10);
    }
  }
  return 0x8000 < param_2;
}

