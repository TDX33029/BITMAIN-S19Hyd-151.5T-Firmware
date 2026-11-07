// FUN_01605850 @ 01605850 size=288 calls_out=4 calls_in=0
// strings: 

/* WARNING: Removing unreachable block (ram,0x01604a90) */
/* WARNING: Removing unreachable block (ram,0x01604a98) */
/* WARNING: Removing unreachable block (ram,0x01604af4) */
/* WARNING: Removing unreachable block (ram,0x01604aa4) */
/* WARNING: Removing unreachable block (ram,0x01604ab0) */

void FUN_01605850(int *param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puStack_1f8;
  undefined4 *puStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  int local_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  int iStack_4c;
  int local_48;
  uint local_44;
  int local_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  iVar7 = *param_2;
  uVar10 = param_2[1];
  uVar1 = (undefined2)param_2[2];
  local_48 = iVar7;
  local_44 = uVar10;
  FUN_00fb3af4((int)&uStack_34 + 3,&local_48);
  if (uStack_34._3_1_ == '\0') {
    FUN_00fb3f68((int)&uStack_34 + 3,&local_48);
    if (uStack_34._3_1_ == '\x01') {
      local_40 = local_2c;
      puStack_3c = local_28;
      puStack_38 = local_24;
      if (local_44 == 0) {
        uVar6 = (undefined2)((uint)local_30 >> 0x10);
        iVar7 = local_30 << 0x10;
        uVar8 = 1;
        local_58 = local_2c;
        puStack_54 = local_28;
        puStack_50 = local_24;
        goto LAB_01605914;
      }
    }
  }
  else if (local_44 == 0) {
    uVar8 = 0;
    iVar7 = local_30;
    uVar6 = uVar1;
LAB_01605914:
    puVar4 = (undefined2 *)thunk_FUN_016d4a50(0x20);
    if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    puVar4[3] = uVar6;
    *(int *)(puVar4 + 4) = local_58;
    *(undefined4 **)(puVar4 + 6) = puStack_54;
    *(undefined4 **)(puVar4 + 8) = puStack_50;
    *(int *)(puVar4 + 1) = iVar7;
    *puVar4 = uVar8;
    puVar4[0xe] = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    *param_1 = (int)puVar4;
    param_1[1] = (int)puVar4;
    param_1[2] = 1;
    param_1[3] = (int)(puVar4 + 0x10);
    return;
  }
  puStack_38 = (undefined4 *)CONCAT22(puStack_38._2_2_,uVar1);
  if (2 < uVar10 >> 7) {
    FUN_01604ee0(&local_58,iVar7,uVar10,&puStack_38);
    goto LAB_01604b68;
  }
  FUN_016dd1aa(&uStack_1e8,iVar7,uVar10);
  uVar2 = 0;
  *(undefined1 *)((int)&uStack_1e8 + uVar10) = 0;
  if (uVar10 < 7) {
    if ((char)uStack_1e8 == '\0') {
      uVar2 = 0;
LAB_01604b28:
      if (uVar2 == uVar10) {
        FUN_01604d38(&local_58,&puStack_38,&uStack_1e8);
        goto LAB_01604b68;
      }
    }
    else if (uVar10 != 0) {
      if (uStack_1e8._1_1_ == '\0') {
        uVar2 = 1;
        goto LAB_01604b28;
      }
      if (uVar10 != 1) {
        if (uStack_1e8._2_1_ == '\0') {
          uVar2 = 2;
          goto LAB_01604b28;
        }
        if (uVar10 != 2) {
          if (uStack_1e8._3_1_ == '\0') {
            uVar2 = 3;
            goto LAB_01604b28;
          }
          if (uVar10 != 3) {
            if ((char)uStack_1e4 == '\0') {
              uVar2 = 4;
              goto LAB_01604b28;
            }
            if (uVar10 != 4) {
              if (uStack_1e4._1_1_ == '\0') {
                uVar2 = 5;
                goto LAB_01604b28;
              }
              if (uVar10 != 5) {
                uVar2 = 6;
                if (uStack_1e4._2_1_ == '\0') goto LAB_01604b28;
              }
            }
          }
        }
      }
    }
  }
  else {
    do {
      uVar9 = *(uint *)((int)&uStack_1e8 + uVar2);
      if (((0x1010100 - uVar9 | uVar9) & 0x80808080 &
          (0x1010100 - *(uint *)((int)&uStack_1e4 + uVar2) | *(uint *)((int)&uStack_1e4 + uVar2)))
          != 0x80808080) break;
      uVar2 = uVar2 + 8;
    } while (uVar2 <= uVar10 - 7);
    if (uVar10 + 1 != uVar2) {
      iVar7 = 0;
      do {
        if (*(char *)((int)&uStack_1e8 + iVar7 + uVar2) == '\0') {
          uVar2 = iVar7 + uVar2;
          goto LAB_01604b28;
        }
        iVar7 = iVar7 + 1;
      } while ((uVar10 + 1) - uVar2 != iVar7);
    }
  }
  puStack_54 = (undefined4 *)0x2;
  puStack_50 = &DAT_018aae48;
  local_58 = 1;
LAB_01604b68:
  if (local_58 == 1) {
    param_1[1] = (int)puStack_54;
    *param_1 = 0;
    param_1[2] = (int)puStack_50;
    return;
  }
  puStack_1f8 = puStack_54;
  iStack_1f0 = iStack_4c;
  puStack_1f4 = puStack_50;
  FUN_015ead4c(&local_58,&puStack_1f8);
  if ((short)local_58 == 2) {
    FUN_016d70b0(puStack_1f8);
    iStack_64 = 0;
    piVar5 = (int *)&DAT_00000004;
    iVar7 = 0;
  }
  else {
    piVar5 = (int *)thunk_FUN_016d4a50(0x80);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x80);
    }
    *piVar5 = local_58;
    piVar5[1] = (int)puStack_54;
    piVar5[2] = (int)puStack_50;
    piVar5[3] = iStack_4c;
    piVar5[4] = local_48;
    piVar5[5] = local_44;
    piVar5[6] = local_40;
    piVar5[7] = (int)puStack_3c;
    iStack_64 = 4;
    iStack_5c = 1;
    puStack_38 = puStack_1f8;
    uStack_34 = puStack_1f4;
    local_30 = iStack_1f0;
    piStack_60 = piVar5;
    while( true ) {
      iVar7 = iStack_5c;
      FUN_015ead4c(&uStack_1e8,&puStack_38);
      if ((short)uStack_1e8 == 2) break;
      if (iVar7 == iStack_64) {
        FUN_015bf41c(&iStack_64,iVar7,1,4,0x20);
        piVar5 = piStack_60;
      }
      piVar3 = piVar5 + iVar7 * 8;
      iStack_5c = iVar7 + 1;
      *piVar3 = uStack_1e8;
      piVar3[1] = uStack_1e4;
      piVar3[2] = iStack_1e0;
      piVar3[3] = iStack_1dc;
      piVar3[4] = iStack_1d8;
      piVar3[5] = iStack_1d4;
      piVar3[6] = iStack_1d0;
      piVar3[7] = iStack_1cc;
    }
    FUN_016d70b0(puStack_38);
  }
  *param_1 = (int)piVar5;
  param_1[1] = (int)piVar5;
  param_1[2] = iStack_64;
  param_1[3] = (int)(piVar5 + iVar7 * 8);
  return;
}

