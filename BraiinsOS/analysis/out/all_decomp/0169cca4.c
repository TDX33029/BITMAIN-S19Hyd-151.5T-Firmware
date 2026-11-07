// FUN_0169cca4 @ 0169cca4 size=412 calls_out=3 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0169cca4(uint *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 unaff_r10;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_4f8;
  uint local_4f4;
  undefined2 local_128;
  undefined1 local_126;
  
  uVar8 = param_3 * 0x20;
  bVar10 = 0x7fffffe < param_3;
  bVar9 = param_3 == 0x7ffffff;
  if (param_3 < 0x8000000) {
    bVar10 = 0x7ffffff7 < uVar8;
    bVar9 = uVar8 == 0x7ffffff8;
  }
  if (bVar10 && !bVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (uVar8 == 0) {
    local_4f4 = 8;
    local_4f8 = 0;
  }
  else {
    local_4f4 = thunk_FUN_016d4a50(uVar8);
    if (local_4f4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar8);
    }
    local_4f8 = param_3;
    if (param_3 != 0) {
      puVar2 = param_2 + param_3 * 0x20;
      iVar4 = 0;
      uVar8 = param_3;
      do {
        if (param_2 == puVar2) break;
        iVar5 = *(int *)(param_2 + 0x18);
        uVar7 = *(undefined4 *)(param_2 + 0x14);
        if (iVar5 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(iVar5);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,iVar5);
          }
        }
        uVar11 = FUN_016dd1aa(iVar3,uVar7,iVar5);
        uVar1 = *param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(uVar1) {
        case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 0x20;
        puVar6 = (undefined1 *)(local_4f4 + iVar4 * 0x20);
        *puVar6 = uVar1;
        *(int *)(puVar6 + 8) = (int)uVar11;
        *(undefined2 *)(puVar6 + 1) = local_128;
        puVar6[3] = local_126;
        *(undefined4 *)(puVar6 + 4) = unaff_r10;
        *(int *)(puVar6 + 0xc) = (int)((ulonglong)uVar11 >> 0x20);
        *(int *)(puVar6 + 0x10) = iVar5;
        *(int *)(puVar6 + 0x14) = iVar3;
        *(int *)(puVar6 + 0x18) = iVar5;
        iVar4 = iVar4 + 1;
      } while (uVar8 != 0);
    }
  }
  *param_1 = local_4f8;
  param_1[1] = local_4f4;
  param_1[2] = param_3;
  return;
}

