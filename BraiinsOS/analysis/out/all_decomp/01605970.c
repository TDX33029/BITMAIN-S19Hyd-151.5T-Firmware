// FUN_01605970 @ 01605970 size=1356 calls_out=11 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01604a90) */
/* WARNING: Removing unreachable block (ram,0x01604a98) */
/* WARNING: Removing unreachable block (ram,0x01604af4) */
/* WARNING: Removing unreachable block (ram,0x01604aa4) */
/* WARNING: Removing unreachable block (ram,0x01604ab0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01605970(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_1f8;
  undefined4 *local_1f4;
  int local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  int local_1e0;
  int iStack_1dc;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int in_stack_ffffffdc;
  uint in_stack_ffffffe0;
  int in_stack_ffffffe4;
  
  FUN_00fb4860(&local_48);
  if ((short)local_48 != 2) {
    piVar7 = (int *)thunk_FUN_016d4a50(0x20);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x20);
    }
    *piVar7 = local_48;
    piVar7[1] = iStack_44;
    piVar7[2] = iStack_40;
    piVar7[3] = iStack_3c;
    piVar7[4] = local_38;
    piVar7[5] = (int)local_34;
    piVar7[6] = local_30;
    piVar7[7] = iStack_2c;
    *param_1 = (int)piVar7;
    param_1[1] = (int)piVar7;
    param_1[2] = 1;
    param_1[3] = (int)(piVar7 + 8);
    return;
  }
  local_30 = CONCAT31(local_30._1_3_,1);
  local_48 = 0x3a;
  local_34 = (undefined4 *)0x3a;
  iStack_3c = 0;
  iStack_44 = param_2;
  iStack_40 = param_3;
  local_38 = param_3;
  FUN_015fba7c(auStack_28 + 4,&local_48);
  if (in_stack_ffffffdc == 0) {
    *param_1 = 0;
    param_1[2] = (int)&DAT_018ab4e0;
    *(undefined1 *)(param_1 + 1) = 2;
    return;
  }
  uVar2 = param_3 - in_stack_ffffffe4;
  if (uVar2 == 0) {
LAB_01605b18:
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = 0;
    param_1[2] = (int)&DAT_018ab4d4;
    return;
  }
  pbVar3 = (byte *)(param_2 + in_stack_ffffffe4);
  if (uVar2 == 1) {
    bVar4 = *pbVar3;
    if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_01605b18;
  }
  else {
    bVar4 = *pbVar3;
  }
  uVar6 = 0;
  uVar5 = 0;
  if (bVar4 == 0x2b) {
    pbVar3 = pbVar3 + 1;
    uVar2 = uVar2 - 1;
  }
  if (4 < uVar2) {
    do {
      uVar5 = (undefined2)uVar6;
      if (uVar2 == 0) goto LAB_01605abc;
      uVar6 = (uVar6 & 0xffff) * 4 + (uVar6 & 0xffff);
      if (uVar6 >> 0xf != 0) break;
      if (9 < *pbVar3 - 0x30) break;
      uVar2 = uVar2 - 1;
      uVar6 = (uVar6 * 2 & 0xffff) + (*pbVar3 - 0x30 & 0xffff);
      pbVar3 = pbVar3 + 1;
    } while (uVar6 >> 0x10 == 0);
    goto LAB_01605b18;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    bVar4 = *pbVar3;
    if (9 < bVar4 - 0x30) goto LAB_01605b18;
    pbVar3 = pbVar3 + 1;
    uVar6 = (bVar4 - 0x30) + uVar6 * 10;
    uVar5 = (undefined2)uVar6;
  }
LAB_01605abc:
  local_38 = CONCAT22(local_38._2_2_,uVar5);
  if (2 < in_stack_ffffffe0 >> 7) {
    FUN_01604ee0(&local_58,param_2,in_stack_ffffffe0,&local_38);
    goto LAB_01604b68;
  }
  FUN_016dd1aa(&local_1e8,param_2,in_stack_ffffffe0);
  uVar2 = 0;
  *(undefined1 *)((int)&local_1e8 + in_stack_ffffffe0) = 0;
  if (in_stack_ffffffe0 < 7) {
    if ((char)local_1e8 == '\0') {
      uVar2 = 0;
LAB_01604b28:
      if (uVar2 == in_stack_ffffffe0) {
        FUN_01604d38(&local_58,&local_38,&local_1e8);
        goto LAB_01604b68;
      }
    }
    else if (in_stack_ffffffe0 != 0) {
      if (local_1e8._1_1_ == '\0') {
        uVar2 = 1;
        goto LAB_01604b28;
      }
      if (in_stack_ffffffe0 != 1) {
        if (local_1e8._2_1_ == '\0') {
          uVar2 = 2;
          goto LAB_01604b28;
        }
        if (in_stack_ffffffe0 != 2) {
          if (local_1e8._3_1_ == '\0') {
            uVar2 = 3;
            goto LAB_01604b28;
          }
          if (in_stack_ffffffe0 != 3) {
            if ((char)local_1e4 == '\0') {
              uVar2 = 4;
              goto LAB_01604b28;
            }
            if (in_stack_ffffffe0 != 4) {
              if (local_1e4._1_1_ == '\0') {
                uVar2 = 5;
                goto LAB_01604b28;
              }
              if (in_stack_ffffffe0 != 5) {
                uVar2 = 6;
                if (local_1e4._2_1_ == '\0') goto LAB_01604b28;
              }
            }
          }
        }
      }
    }
  }
  else {
    do {
      uVar6 = *(uint *)((int)&local_1e8 + uVar2);
      if (((0x1010100 - uVar6 | uVar6) & 0x80808080 &
          (0x1010100 - *(uint *)((int)&local_1e4 + uVar2) | *(uint *)((int)&local_1e4 + uVar2))) !=
          0x80808080) break;
      uVar2 = uVar2 + 8;
    } while (uVar2 <= in_stack_ffffffe0 - 7);
    if (in_stack_ffffffe0 + 1 != uVar2) {
      iVar8 = 0;
      do {
        if (*(char *)((int)&local_1e8 + iVar8 + uVar2) == '\0') {
          uVar2 = iVar8 + uVar2;
          goto LAB_01604b28;
        }
        iVar8 = iVar8 + 1;
      } while ((in_stack_ffffffe0 + 1) - uVar2 != iVar8);
    }
  }
  local_54 = 2;
  local_50 = &DAT_018aae48;
  local_58 = 1;
LAB_01604b68:
  if (local_58 == 1) {
    param_1[1] = local_54;
    *param_1 = 0;
    param_1[2] = (int)local_50;
    return;
  }
  local_1f8 = local_54;
  local_1f0 = local_4c;
  local_1f4 = local_50;
  FUN_015ead4c(&local_58,&local_1f8);
  if ((short)local_58 == 2) {
    FUN_016d70b0(local_1f8);
    local_64 = 0;
    piVar7 = (int *)&DAT_00000004;
    iVar8 = 0;
  }
  else {
    piVar7 = (int *)thunk_FUN_016d4a50(0x80);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x80);
    }
    *piVar7 = local_58;
    piVar7[1] = local_54;
    piVar7[2] = (int)local_50;
    piVar7[3] = local_4c;
    piVar7[4] = local_48;
    piVar7[5] = iStack_44;
    piVar7[6] = iStack_40;
    piVar7[7] = iStack_3c;
    local_64 = 4;
    local_5c = 1;
    local_38 = local_1f8;
    local_34 = local_1f4;
    local_30 = local_1f0;
    local_60 = piVar7;
    while( true ) {
      iVar8 = local_5c;
      FUN_015ead4c(&local_1e8,&local_38);
      if ((short)local_1e8 == 2) break;
      if (iVar8 == local_64) {
        FUN_015bf41c(&local_64,iVar8,1,4,0x20);
        piVar7 = local_60;
      }
      piVar1 = piVar7 + iVar8 * 8;
      local_5c = iVar8 + 1;
      *piVar1 = local_1e8;
      piVar1[1] = local_1e4;
      piVar1[2] = local_1e0;
      piVar1[3] = iStack_1dc;
      piVar1[4] = local_1d8;
      piVar1[5] = iStack_1d4;
      piVar1[6] = iStack_1d0;
      piVar1[7] = iStack_1cc;
    }
    FUN_016d70b0(local_38);
  }
  *param_1 = (int)piVar7;
  param_1[1] = (int)piVar7;
  param_1[2] = local_64;
  param_1[3] = (int)(piVar7 + iVar8 * 8);
  return;
}

