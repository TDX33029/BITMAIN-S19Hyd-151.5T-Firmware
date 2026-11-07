// FUN_015321bc @ 015321bc size=476 calls_out=2 calls_in=1
// strings: 

bool FUN_015321bc(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *local_20;
  undefined4 *local_1c;
  
  iVar7 = *param_3;
  piVar3 = (int *)(iVar7 + 4);
  do {
    iVar4 = *piVar3;
    while (iVar4 != -1) {
      if (iVar4 < 0) goto LAB_01532368;
      iVar8 = *piVar3;
      if (iVar8 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = iVar4 + 1;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      iVar4 = iVar8;
      if (bVar2) {
        if (iVar7 != -1) {
          iVar4 = param_3[1];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar3;
            bVar2 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar2);
          *piVar3 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            uVar5 = *(uint *)(iVar4 + 8);
            if (uVar5 < 5) {
              uVar5 = 4;
            }
            if ((*(int *)(iVar4 + 4) + uVar5 + 7 & -uVar5) != 0) {
              thunk_FUN_016d3fb4(iVar7);
            }
          }
        }
        iVar4 = *param_4;
        piVar3 = (int *)(iVar4 + 4);
        do {
          iVar8 = *piVar3;
          while (iVar8 != -1) {
            if (iVar8 < 0) {
LAB_01532368:
              local_1c = &DAT_0157d360;
              local_20 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_20,&DAT_018ae278);
            }
            iVar6 = *piVar3;
            if (iVar6 == iVar8) {
              bVar1 = (bool)hasExclusiveAccess(piVar3);
              if (bVar1) {
                *piVar3 = iVar8 + 1;
              }
              bVar2 = false;
              if (bVar1) {
                DataMemoryBarrier(0xb);
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
              ClearExclusiveLocal();
            }
            iVar8 = iVar6;
            if (bVar2) {
              if (iVar4 != -1) {
                iVar8 = param_4[1];
                DataMemoryBarrier(0xb);
                do {
                  iVar6 = *piVar3;
                  bVar2 = (bool)hasExclusiveAccess(piVar3);
                } while (!bVar2);
                *piVar3 = iVar6 + -1;
                if (iVar6 == 1) {
                  DataMemoryBarrier(0xb);
                  uVar5 = *(uint *)(iVar8 + 8);
                  if (uVar5 < 5) {
                    uVar5 = 4;
                  }
                  if ((*(int *)(iVar8 + 4) + uVar5 + 7 & -uVar5) != 0) {
                    thunk_FUN_016d3fb4(iVar4);
                  }
                }
              }
              return iVar7 == param_1 && iVar4 == param_2;
            }
          }
          HintYield();
        } while( true );
      }
    }
    HintYield();
  } while( true );
}

