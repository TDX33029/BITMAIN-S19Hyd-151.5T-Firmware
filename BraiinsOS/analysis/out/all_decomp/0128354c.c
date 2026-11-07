// FUN_0128354c @ 0128354c size=344 calls_out=2 calls_in=1
// strings: 

void FUN_0128354c(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  int iVar6;
  int iVar7;
  undefined4 unaff_r6;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 unaff_lr;
  undefined4 in_stack_00000000;
  undefined1 auStackY_a8 [128];
  
  iVar4 = *param_1;
  if (iVar4 != -0x80000000) {
    iVar10 = param_1[1];
    iVar9 = param_1[2];
    iVar6 = 0;
    while (iVar6 != iVar9) {
      iVar7 = iVar6 + 1;
      iVar8 = iVar10 + iVar6 * 0x1c;
      iVar2 = *(int *)(iVar8 + 0x10);
      iVar6 = iVar7;
      if (iVar2 != -0x80000000) {
        iVar7 = *(int *)(iVar8 + 0x14);
        iVar12 = *(int *)(iVar8 + 0x18);
        if (iVar12 != 0) {
          puVar11 = (uint *)(iVar7 + 0x18);
          do {
            if ((*puVar11 & 0x7fffffff) == 0) {
              uVar3 = puVar11[3];
            }
            else {
              thunk_FUN_016d3fb4(puVar11[1]);
              uVar3 = puVar11[3];
            }
            if ((uVar3 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(puVar11[4]);
            }
            puVar11 = puVar11 + 0xc;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          iVar2 = *(int *)(iVar8 + 0x10);
        }
        if (iVar2 != 0) {
          thunk_FUN_016d3fb4(iVar7);
        }
      }
    }
    if (iVar4 != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    piVar5 = (int *)param_1[4];
    if ((((char)param_1[5] == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(piVar5 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = 0;
    if (iVar4 == 2) {
      software_interrupt(0);
      FUN_016d3496(piVar5,0x81,1,in_stack_00000000,param_1,auStackY_a8 + 0x9c,unaff_r4,unaff_r5,
                   unaff_r6,unaff_lr,0xf0);
      return;
    }
  }
  return;
}

