// FUN_019b4530 @ 019b4530 size=24 calls_out=2 calls_in=1
// strings: 

void FUN_019b4530(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int unaff_r8;
  uint unaff_r9;
  int **ppiVar7;
  bool bVar8;
  undefined4 in_cr7;
  undefined4 in_cr12;
  int *piStack_18;
  code *pcStack_14;
  
  FUN_019b4548();
  FUN_01be3370(param_1);
  pcStack_14 = FUN_019b4548;
  ppiVar7 = &piStack_18;
  piStack_18 = (int *)((int)register0x00000054 + -8);
  iVar1 = FUN_01be3244();
  iVar6 = DAT_01d51a68;
  do {
    if (DAT_01d51a68 != 0) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_019b4588;
    }
    bVar8 = (bool)hasExclusiveAccess(0x1d51a68);
  } while (!bVar8);
  DataMemoryBarrier(0xb);
  bVar8 = true;
  DAT_01d51a68 = iVar1;
LAB_019b4588:
  if (bVar8) {
    return;
  }
  bVar8 = iVar6 == iVar1;
  if (bVar8) {
    puVar2 = (undefined1 *)FUN_01307bf0("std::process::exit called re-entrantly");
    if (bVar8) {
      ppiVar7 = (int **)(unaff_r9 ^ unaff_r8 << 10);
    }
    piVar5 = (int *)coprocessor_movefromRt(9,5,3,in_cr7,in_cr12);
    *(undefined4 *)((int)ppiVar7 + -4) = 0x19b45ac;
    *(int ***)((int)ppiVar7 + -8) = &piStack_18;
    *(undefined4 *)((int)ppiVar7 + -0xc) = unaff_r7;
    *(undefined4 *)((int)ppiVar7 + -0x10) = unaff_r6;
    *(undefined4 *)((int)ppiVar7 + -0x14) = unaff_r5;
    *(undefined4 *)((int)ppiVar7 + -0x18) = param_1;
    if (*piVar5 == 1) {
      iVar6 = piVar5[1];
      *puVar2 = 4;
      *(int *)(puVar2 + 4) = iVar6;
      return;
    }
    if (piVar5[3] == -1) {
      iVar6 = piVar5[2];
      *(undefined4 *)((int)ppiVar7 + -0x24) = 0;
      while (iVar1 = FUN_01bea62a(iVar6,(undefined1 *)((int)ppiVar7 + -0x24),0), iVar1 == -1) {
        piVar4 = (int *)FUN_01be3244();
        if (*piVar4 != 4) {
          *(int *)(puVar2 + 4) = *piVar4;
          puVar2[3] = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
          *puVar2 = 0;
          return;
        }
      }
      iVar6 = *(int *)((int)ppiVar7 + -0x24);
    }
    else {
      FUN_019a8b40((undefined1 *)((int)ppiVar7 + -0x24),piVar5[3],4);
      uVar3 = *(uint *)((int)ppiVar7 + -0x20);
      iVar6 = *(int *)((int)ppiVar7 + -0x1c);
      if (*(int *)((int)ppiVar7 + -0x24) == 0) {
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: waitid with WEXITED should not return None"
                       ,0xa9,&DAT_01d27984);
        }
      }
      else if ((uVar3 & 0xff) != 4) {
        *(int *)(puVar2 + 4) = iVar6;
        *puVar2 = (char)uVar3;
        puVar2[3] = (char)(uVar3 >> 0x18);
        *(short *)(puVar2 + 1) = (short)(uVar3 >> 8);
        return;
      }
    }
    *(int *)(puVar2 + 4) = iVar6;
    *piVar5 = 1;
    piVar5[1] = iVar6;
    *puVar2 = 4;
    return;
  }
  do {
    FUN_01bf036a();
  } while( true );
}

