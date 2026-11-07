// FUN_005da138 @ 005da138 size=284 calls_out=2 calls_in=2
// strings: 

void FUN_005da138(undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = (undefined4 *)&DAT_00000008;
  uVar5 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  default:
    goto switchD_005da150_caseD_0;
  case 2:
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (undefined4 *)0x0) {
LAB_005da270:
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    *puVar4 = 0x1a;
    puVar4[1] = 0;
    uVar1 = 0x2e;
    break;
  case 3:
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (undefined4 *)0x0) goto LAB_005da270;
    uVar3 = 1;
    *puVar4 = 0x1bd;
    puVar4[1] = 0;
    uVar1 = 0x1be;
    goto LAB_005da21c;
  case 4:
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (undefined4 *)0x0) goto LAB_005da270;
    *puVar4 = 0x3af;
    puVar4[1] = 0;
    uVar1 = 0x399;
    break;
  case 5:
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar4 == (undefined4 *)0x0) goto LAB_005da270;
    *puVar4 = 0x196;
    puVar4[1] = 0;
    uVar1 = 0x1bf;
  }
  uVar3 = 3;
LAB_005da21c:
  uVar5 = 2;
  *(undefined1 *)((int)puVar4 + 0x19) = 0;
  *(undefined1 *)(puVar4 + 6) = uVar3;
  *(undefined1 *)((int)puVar4 + 9) = 1;
  *(undefined1 *)(puVar4 + 2) = uVar3;
  puVar4[4] = uVar1;
  puVar4[5] = 0;
switchD_005da150_caseD_0:
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  puVar2[3] = puVar4;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = uVar5;
  puVar2[4] = uVar5;
  return;
}

