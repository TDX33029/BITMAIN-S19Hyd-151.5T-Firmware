// FUN_0167b0f8 @ 0167b0f8 size=952 calls_out=4 calls_in=2
// strings: 

void FUN_0167b0f8(undefined4 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar6 = param_2[5];
  iVar4 = *param_2;
  uVar3 = param_2[1];
  iVar8 = *(int *)(param_3 + 8);
  uVar7 = *(uint *)(param_3 + 0xc);
  if (uVar6 == 0) {
    if (iVar4 != 0) goto LAB_0167b25c;
    if (uVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        bVar1 = *(byte *)(iVar8 + uVar3);
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
              if (bVar11 && !bVar10) goto LAB_0167b3c0;
            }
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar7 != uVar3);
      uVar3 = uVar7;
    }
LAB_0167b3c0:
    puVar5 = (undefined4 *)(uVar7 - uVar3);
LAB_0167b3c8:
    *(uint *)(param_3 + 8) = iVar8 + uVar3;
    *(undefined4 **)(param_3 + 0xc) = puVar5;
    FUN_00fab1e0(&local_44,iVar8,uVar3);
    if (local_44 != 1) {
      *param_1 = 3;
      param_1[1] = 0x80000000;
      param_1[2] = local_40;
      param_1[3] = local_3c;
      return;
    }
    *(int *)(param_3 + 8) = iVar8;
    local_2c = 0;
    local_30 = 0;
    local_38 = 0;
    *(uint *)(param_3 + 0xc) = uVar7;
    local_34 = 4;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar5 = local_40;
    puVar5[1] = local_3c;
  }
  else {
    if (uVar6 != 1) {
      if (iVar4 == 0) {
        uVar3 = 0xffffffff;
      }
LAB_0167b25c:
      if (uVar3 < uVar6) {
        uVar9 = 2;
        puVar5 = (undefined4 *)0x0;
        goto LAB_0167b43c;
      }
      uVar2 = 0;
      do {
        if (uVar7 == uVar2) {
          puVar5 = (undefined4 *)0x0;
          if (uVar7 < uVar6) goto LAB_0167b438;
          uVar3 = uVar7;
          goto LAB_0167b3c8;
        }
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
            if ((bVar11 && !bVar10) &&
               ((bVar1 < *(byte *)((int)param_2 + 0x12) || (*(byte *)((int)param_2 + 0x13) < bVar1))
               )) {
              uVar3 = uVar2;
              if (uVar2 < uVar6) {
                puVar5 = (undefined4 *)0x0;
                goto LAB_0167b438;
              }
              break;
            }
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar3 + 1 != uVar2);
      if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad9c8);
      }
      goto LAB_0167b3c0;
    }
    if (iVar4 != 0) goto LAB_0167b25c;
    uVar9 = 1;
    if (uVar7 == 0) {
      puVar5 = (undefined4 *)0x0;
      goto LAB_0167b43c;
    }
    uVar6 = 0;
    do {
      bVar1 = *(byte *)(iVar8 + uVar6);
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
            uVar3 = uVar6;
            if (bVar11 && !bVar10) break;
          }
        }
      }
      uVar6 = uVar6 + 1;
      uVar3 = uVar7;
    } while (uVar7 != uVar6);
    if (uVar3 != 0) goto LAB_0167b3c0;
    puVar5 = (undefined4 *)0x0;
  }
LAB_0167b438:
  uVar9 = 1;
LAB_0167b43c:
  *param_1 = uVar9;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = puVar5;
  param_1[5] = &DAT_018ada34;
  return;
}

