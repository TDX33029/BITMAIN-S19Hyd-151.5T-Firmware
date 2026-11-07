// FUN_016a9570 @ 016a9570 size=832 calls_out=5 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x016aa0ac) */
/* WARNING: Removing unreachable block (ram,0x016aa0b4) */
/* WARNING: Removing unreachable block (ram,0x016aa0f8) */
/* WARNING: Removing unreachable block (ram,0x016aa100) */
/* WARNING: Removing unreachable block (ram,0x016aa114) */
/* WARNING: Removing unreachable block (ram,0x016aa0cc) */
/* WARNING: Removing unreachable block (ram,0x016aa198) */
/* WARNING: Removing unreachable block (ram,0x016aa1a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_016a9570(undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *extraout_r2;
  int extraout_r3;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *local_54c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  
  iVar1 = *param_2;
  iVar2 = thunk_FUN_016de0ee();
  puVar8 = (uint *)(iVar2 + extraout_r3);
  puVar5 = (undefined1 *)param_4[2];
  uVar12 = param_4[3];
  if ((char)puVar8[4] == '\x01') {
    local_120 = puVar8[2];
    local_11c = puVar8[3];
    local_128 = *puVar8;
    local_124 = puVar8[1];
  }
  else {
    FUN_015f62e4(&local_128);
    *(undefined1 *)(puVar8 + 4) = 1;
    puVar8[2] = local_120;
    puVar8[3] = local_11c;
  }
  *puVar8 = local_128 + 1;
  puVar8[1] = local_124 + (0xfffffffe < local_128);
  if (uVar12 != 0) {
    local_54c = puVar5;
    do {
      iVar2 = *(int *)(iVar1 + 0x20);
      if (iVar2 == 0) {
LAB_016aa1c0:
        uVar12 = *param_4;
        if (*extraout_r2 == 6) {
          *extraout_r2 = uVar12;
        }
        else if (uVar12 < *extraout_r2) {
          *extraout_r2 = uVar12;
        }
        param_1[8] = 6;
        return;
      }
      iVar2 = iVar2 << 3;
      iVar7 = *(int *)(iVar1 + 0x1c);
      iVar10 = 0;
      puVar6 = local_54c + 0x20;
      uVar9 = *(undefined4 *)(local_54c + 0x14);
      iVar11 = *(int *)(local_54c + 0x18);
      while ((puVar3 = (undefined4 *)(iVar7 + iVar10 * 8), puVar3[1] != iVar11 ||
             (iVar4 = thunk_FUN_016dd50a(*puVar3,uVar9,iVar11), iVar4 != 0))) {
        iVar10 = iVar10 + 1;
        iVar2 = iVar2 + -8;
        if (iVar2 == 0) goto LAB_016aa1c0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*local_54c) {
      case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      local_54c = puVar6;
    } while (puVar6 != puVar5 + uVar12 * 0x20);
  }
  uVar12 = *param_4;
  *param_1 = &DAT_005674cc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = local_128;
  param_1[5] = local_124;
  param_1[6] = local_120;
  param_1[7] = local_11c;
  param_1[8] = uVar12;
  return;
}

