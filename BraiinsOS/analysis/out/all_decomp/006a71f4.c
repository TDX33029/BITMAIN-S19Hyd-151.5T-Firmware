// FUN_006a71f4 @ 006a71f4 size=1580 calls_out=14 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006a71f4(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int local_1f0 [26];
  int local_188;
  undefined4 local_184;
  undefined1 auStack_178 [112];
  int *local_108;
  undefined1 local_104;
  int *local_98;
  undefined1 local_94 [112];
  
  iVar7 = *param_1;
  if (iVar7 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar7 + 0x1c)) {
      puVar6 = (uint *)(iVar7 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar2);
      *puVar6 = *puVar6 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    while (piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10), piVar3 != (int *)0x0) {
      piVar8 = piVar3 + 2;
      do {
        if (*piVar8 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar8);
          goto joined_r0x006a733c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 1;
      DataMemoryBarrier(0xb);
joined_r0x006a733c:
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        uVar5 = 0;
        cVar1 = (char)piVar3[3];
      }
      else {
        uVar5 = FUN_015bf3f8();
        uVar5 = uVar5 ^ 1;
        cVar1 = (char)piVar3[3];
      }
      if (cVar1 != '\0') {
        local_94[0] = (undefined1)uVar5;
        local_98 = piVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_01858988,&DAT_018a4b20);
      }
      iVar4 = piVar3[4];
      *(undefined1 *)(piVar3 + 6) = 0;
      piVar3[4] = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(piVar3[5]);
      }
      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar3 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar8,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar3);
      }
    }
    iVar7 = *param_1;
    if (iVar7 != 0) {
      do {
        while( true ) {
          piVar3 = *(int **)(iVar7 + 0xc);
          puVar6 = (uint *)piVar3[0x1d];
          DataMemoryBarrier(0xb);
          if (puVar6 == (uint *)0x0) {
            piVar8 = (int *)0x80000002;
            DataMemoryBarrier(0xb);
            if (*(int **)(iVar7 + 8) == piVar3) {
              piVar8 = (int *)0x80000001;
            }
          }
          else {
            *(uint **)(iVar7 + 0xc) = puVar6;
            if (*piVar3 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
            }
            piVar8 = (int *)*puVar6;
            if (piVar8 == (int *)0x80000001) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
            }
            FUN_016dd1aa(local_94,puVar6 + 1,0x70);
            *puVar6 = 0x80000001;
            local_98 = piVar8;
            if (*piVar3 == -0x80000000) {
              FUN_006a6e14(piVar3 + 1);
            }
            else if ((*piVar3 != -0x7fffffff) && (FUN_006a7ac0(piVar3), piVar3[0x1a] != 0)) {
              thunk_FUN_016d3fb4(piVar3[0x1b]);
            }
            thunk_FUN_016d3fb4(piVar3);
            FUN_016dd1aa(&local_108,local_94,0x70);
          }
          piVar3 = piVar8;
          if (piVar8 < (int *)0x80000001) {
            piVar3 = (int *)0x0;
          }
          if (((uint)piVar3 & 0x7fffffff) != 2) break;
          FUN_016da3a8();
        }
        if ((((uint)piVar3 & 0x7fffffff) == 0) &&
           (FUN_016dd1aa(auStack_178,&local_108,0x70), piVar8 != (int *)0x80000001)) {
          local_98 = piVar8;
          FUN_016dd1aa((uint)&local_98 | 4,auStack_178,0x70);
          iVar7 = *param_1;
          if (iVar7 != 0) {
            piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10);
            if (piVar3 != (int *)0x0) {
              piVar8 = piVar3 + 2;
              do {
                if (*piVar8 != 0) {
                  ClearExclusiveLocal();
                  FUN_015bf680(piVar8);
                  goto LAB_006a7564;
                }
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = 1;
              DataMemoryBarrier(0xb);
LAB_006a7564:
              uVar5 = 0;
              if ((DAT_018dd988 & 0x7fffffff) == 0) {
                cVar1 = (char)piVar3[3];
              }
              else {
                uVar5 = FUN_015bf3f8();
                uVar5 = uVar5 ^ 1;
                cVar1 = (char)piVar3[3];
              }
              if (cVar1 != '\0') {
                local_104 = (undefined1)uVar5;
                local_108 = piVar8;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_108,&DAT_01858988,&DAT_018a4b10);
              }
              iVar7 = piVar3[4];
              *(undefined1 *)(piVar3 + 6) = 0;
              piVar3[4] = 0;
              if (iVar7 != 0) {
                (**(code **)(iVar7 + 4))(piVar3[5]);
              }
              if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                 (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
                *(undefined1 *)(piVar3 + 3) = 1;
              }
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *piVar8;
                bVar2 = (bool)hasExclusiveAccess(piVar8);
              } while (!bVar2);
              *piVar8 = 0;
              if (iVar7 == 2) {
                FUN_016d6968(0xf0,piVar8,0x81,1);
              }
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *piVar3;
                bVar2 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar2);
              *piVar3 = iVar7 + -1;
              if (iVar7 == 1) {
                DataMemoryBarrier(0xb);
                FUN_010b4e7c(piVar3);
              }
              iVar7 = *param_1;
              if (iVar7 == 0) goto LAB_006a7644;
            }
            piVar3 = (int *)(iVar7 + 0x1c);
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = *piVar3 + -1;
            DataMemoryBarrier(0xb);
          }
LAB_006a7644:
          FUN_016dd1aa(local_1f0,&local_98,0x74);
          if (local_1f0[0] == -0x7ffffffe) goto LAB_006a74c8;
          if (local_1f0[0] == -0x7fffffff) {
            return;
          }
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x1c) == 0) {
            piVar3 = (int *)*param_1;
            if (piVar3 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar7 = *piVar3;
                bVar2 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar2);
              *piVar3 = iVar7 + -1;
              if (iVar7 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0105a2c8(*param_1);
              }
            }
            *param_1 = 0;
            return;
          }
          local_1f0[0] = -0x7ffffffe;
LAB_006a74c8:
          if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018a4cc8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*param_1 + 0x1c) == 0) {
            if (local_1f0[0] + 0x7fffffffU < 2) {
              return;
            }
            if (local_1f0[0] == -0x80000000) {
              FUN_006a6e14((uint)local_1f0 | 4);
              return;
            }
            FUN_006a7ac0(local_1f0);
            if (local_188 == 0) {
              return;
            }
            thunk_FUN_016d3fb4(local_184);
            return;
          }
          FUN_016da3a8();
        }
        if (1 < local_1f0[0] + 0x7fffffffU) {
          if (local_1f0[0] == -0x80000000) {
            FUN_006a6e14((uint)local_1f0 | 4);
          }
          else {
            FUN_006a7ac0(local_1f0);
            if (local_188 != 0) {
              thunk_FUN_016d3fb4(local_184);
            }
          }
        }
        iVar7 = *param_1;
      } while (iVar7 != 0);
    }
  }
  return;
}

