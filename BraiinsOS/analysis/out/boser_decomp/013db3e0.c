// FUN_013db3e0 @ 013db3e0 size=300 calls_out=6 calls_in=0
// strings: 

int FUN_013db3e0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short sVar7;
  short *psVar8;
  short *psVar9;
  ulonglong uVar10;
  undefined2 local_68 [2];
  undefined *local_64;
  undefined4 local_60;
  
  iVar4 = FUN_013e1dc0(param_2,*(undefined2 *)(param_1 + 0x50));
  if ((iVar4 == 0) &&
     (iVar4 = FUN_013c80e8(param_1 + 0xc,param_2,*(undefined1 *)(param_2 + 0x19)), iVar4 == 0)) {
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 != 0) {
      psVar8 = *(short **)(param_1 + 4);
      sVar7 = 10;
      psVar9 = psVar8;
      do {
        sVar1 = psVar9[1];
        sVar2 = *psVar9;
        if ((sVar7 != 10) && (cVar3 = FUN_013db6d4(sVar2,sVar1), cVar3 < '\x01')) {
          local_60 = 0x16;
          local_68[0] = 0x10;
          local_64 = &DAT_0047454e;
          iVar4 = FUN_013e649c(local_68);
          goto LAB_013db420;
        }
        iVar4 = FUN_013db744(sVar2,sVar1,param_2);
        if (iVar4 != 0) goto LAB_013db420;
        uVar10 = FUN_013e1d2c(param_2);
        iVar4 = (int)(uVar10 >> 0x20);
        if ((uVar10 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x013db4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (*(code *)(&DAT_013db4b4 + *(int *)(&DAT_013db4b4 + (uint)(ushort)psVar9[2] * 4)))
                            ();
          return iVar4;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        psVar6 = psVar9 + 10;
        sVar7 = *psVar9;
        psVar9 = psVar6;
      } while (psVar6 != psVar8 + iVar5 * 10);
    }
    iVar4 = 0;
  }
LAB_013db420:
  return iVar4;
}

