// FUN_01a4fe90 @ 01a4fe90 size=900 calls_out=5 calls_in=2
// strings: 

void FUN_01a4fe90(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = param_2[5];
  iVar5 = *param_2;
  uVar6 = param_2[1];
  iVar8 = *(int *)(param_3 + 8);
  uVar9 = *(uint *)(param_3 + 0xc);
  if (uVar2 == 0) {
    if (iVar5 != 0) goto LAB_01a4ffec;
    if (uVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar2 = 0;
      do {
        bVar1 = *(byte *)(iVar8 + uVar2);
        if ((*(byte *)((int)param_2 + 0xe) != bVar1) &&
           (*(byte *)((int)param_2 + 0xf) != bVar1 && *(byte *)(param_2 + 4) != bVar1)) {
          bVar11 = bVar1 <= *(byte *)((int)param_2 + 9);
          bVar10 = *(byte *)((int)param_2 + 9) == bVar1;
          if (!bVar11 || bVar10) {
            bVar11 = *(byte *)((int)param_2 + 10) <= bVar1;
            bVar10 = bVar1 == *(byte *)((int)param_2 + 10);
          }
          if (bVar11 && !bVar10) {
            bVar11 = bVar1 <= *(byte *)(param_2 + 3);
            bVar10 = *(byte *)(param_2 + 3) == bVar1;
            if (!bVar11 || bVar10) {
              bVar11 = *(byte *)((int)param_2 + 0xd) <= bVar1;
              bVar10 = bVar1 == *(byte *)((int)param_2 + 0xd);
            }
            if (bVar11 && !bVar10) {
              bVar11 = bVar1 <= *(byte *)((int)param_2 + 0x12);
              bVar10 = *(byte *)((int)param_2 + 0x12) == bVar1;
              if (!bVar11 || bVar10) {
                bVar11 = *(byte *)((int)param_2 + 0x13) <= bVar1;
                bVar10 = bVar1 == *(byte *)((int)param_2 + 0x13);
              }
              uVar7 = uVar2;
              if (bVar11 && !bVar10) break;
            }
          }
        }
        uVar2 = uVar2 + 1;
        uVar7 = uVar9;
      } while (uVar9 != uVar2);
    }
LAB_01a50144:
    iVar5 = uVar9 - uVar7;
LAB_01a5014c:
    *(uint *)(param_3 + 8) = iVar8 + uVar7;
    *(int *)(param_3 + 0xc) = iVar5;
    FUN_012fbd94(&local_44,iVar8,uVar7);
    if (local_44 != 1) {
      *param_1 = 3;
      param_1[1] = 0x80000000;
      param_1[2] = local_40;
      param_1[3] = local_3c;
      return;
    }
    *(int *)(param_3 + 8) = iVar8;
    *(uint *)(param_3 + 0xc) = uVar9;
    local_2c = 0;
    local_30 = 0;
    local_38 = 0;
    local_34 = 4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,8);
    }
    *puVar4 = local_40;
    puVar4[1] = local_3c;
    FUN_012d40d0(0);
    uVar3 = 1;
  }
  else {
    if (uVar2 == 1) {
      if (iVar5 != 0) goto LAB_01a4ffec;
      uVar3 = 1;
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          bVar1 = *(byte *)(iVar8 + uVar7);
          if ((*(byte *)((int)param_2 + 0xe) != bVar1) &&
             (*(byte *)((int)param_2 + 0xf) != bVar1 && *(byte *)(param_2 + 4) != bVar1)) {
            bVar11 = bVar1 <= *(byte *)((int)param_2 + 9);
            bVar10 = *(byte *)((int)param_2 + 9) == bVar1;
            if (!bVar11 || bVar10) {
              bVar11 = *(byte *)((int)param_2 + 10) <= bVar1;
              bVar10 = bVar1 == *(byte *)((int)param_2 + 10);
            }
            if (bVar11 && !bVar10) {
              bVar11 = bVar1 <= *(byte *)(param_2 + 3);
              bVar10 = *(byte *)(param_2 + 3) == bVar1;
              if (!bVar11 || bVar10) {
                bVar11 = *(byte *)((int)param_2 + 0xd) <= bVar1;
                bVar10 = bVar1 == *(byte *)((int)param_2 + 0xd);
              }
              if (bVar11 && !bVar10) {
                bVar11 = bVar1 <= *(byte *)((int)param_2 + 0x12);
                bVar10 = *(byte *)((int)param_2 + 0x12) == bVar1;
                if (!bVar11 || bVar10) {
                  bVar11 = *(byte *)((int)param_2 + 0x13) <= bVar1;
                  bVar10 = bVar1 == *(byte *)((int)param_2 + 0x13);
                }
                if (bVar11 && !bVar10) goto LAB_01a50128;
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar9 != uVar7);
        uVar7 = uVar9;
LAB_01a50128:
        if (uVar7 != 0) goto LAB_01a50144;
      }
    }
    else {
      if (iVar5 == 0) {
        uVar6 = 0xffffffff;
      }
LAB_01a4ffec:
      if (uVar2 <= uVar6) {
        uVar7 = 0;
        do {
          if (uVar9 == uVar7) {
            iVar5 = 0;
            if (uVar2 <= uVar9) {
              uVar7 = uVar9;
              goto LAB_01a5014c;
            }
LAB_01a500d0:
            puVar4 = (undefined4 *)0x0;
            uVar3 = 1;
            goto LAB_01a501bc;
          }
          bVar1 = *(byte *)(iVar8 + uVar7);
          if ((*(byte *)((int)param_2 + 0xe) != bVar1) &&
             (*(byte *)((int)param_2 + 0xf) != bVar1 && *(byte *)(param_2 + 4) != bVar1)) {
            bVar11 = bVar1 <= *(byte *)((int)param_2 + 9);
            bVar10 = *(byte *)((int)param_2 + 9) == bVar1;
            if (!bVar11 || bVar10) {
              bVar11 = *(byte *)((int)param_2 + 10) <= bVar1;
              bVar10 = bVar1 == *(byte *)((int)param_2 + 10);
            }
            if (bVar11 && !bVar10) {
              bVar11 = bVar1 <= *(byte *)(param_2 + 3);
              bVar10 = *(byte *)(param_2 + 3) == bVar1;
              if (!bVar11 || bVar10) {
                bVar11 = *(byte *)((int)param_2 + 0xd) <= bVar1;
                bVar10 = bVar1 == *(byte *)((int)param_2 + 0xd);
              }
              if (bVar11 && !bVar10) {
                bVar11 = bVar1 <= *(byte *)((int)param_2 + 0x12);
                bVar10 = *(byte *)((int)param_2 + 0x12) == bVar1;
                if (!bVar11 || bVar10) {
                  bVar11 = *(byte *)((int)param_2 + 0x13) <= bVar1;
                  bVar10 = bVar1 == *(byte *)((int)param_2 + 0x13);
                }
                if (bVar11 && !bVar10) {
                  if (uVar7 < uVar2) goto LAB_01a500d0;
                  goto LAB_01a500ec;
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 + 1 != uVar7);
        uVar7 = uVar6;
LAB_01a500ec:
        if (uVar9 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2c054);
        }
        goto LAB_01a50144;
      }
      uVar3 = 2;
    }
    puVar4 = (undefined4 *)0x0;
  }
LAB_01a501bc:
  *param_1 = uVar3;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = puVar4;
  param_1[5] = &DAT_01d2c25c;
  return;
}

