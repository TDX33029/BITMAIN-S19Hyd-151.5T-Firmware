// FUN_014833cc @ 014833cc size=504 calls_out=6 calls_in=0
// strings: 

void FUN_014833cc(undefined2 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint local_a0;
  undefined4 *local_9c;
  undefined2 local_28;
  
  bVar5 = *(byte *)(param_2 + 0x5b8);
  if (bVar5 < 2) {
    if (*(char *)(param_2 + 0x255) == '\0') {
      *(undefined2 *)(param_2 + 0x255) = 0x101;
      local_9c = (undefined4 *)0x0;
      local_a0 = 0x80000001;
      local_28 = 4;
      FUN_01525ed4(param_2,&local_a0,*(char *)(param_2 + 0x31) == '\x02');
      bVar5 = *(byte *)(param_2 + 0x5b8);
    }
    *(byte *)(param_2 + 0x5b8) = bVar5 | 2;
  }
  piVar8 = (int *)(param_2 + 0x2d0);
  if (*(int *)(param_2 + 0x208) != 0) {
    do {
      FUN_014bb9e8(&local_a0,piVar8,param_2,param_3);
      if ((local_a0 & 0xff) == 5) goto LAB_01483524;
      if ((local_a0 & 0xff) != 4) {
        uVar2 = *(undefined2 *)((uint)&local_a0 | 1);
        *(undefined4 **)(param_1 + 2) = local_9c;
        uVar1 = *(undefined1 *)((undefined2 *)((uint)&local_a0 | 1) + 1);
        *(char *)param_1 = (char)local_a0;
        *(undefined1 *)((int)param_1 + 3) = uVar1;
        *(undefined2 *)((int)param_1 + 1) = uVar2;
        return;
      }
      if (local_9c == (undefined4 *)0x0) {
        *param_1 = 0x1701;
        return;
      }
    } while (*(int *)(param_2 + 0x208) != 0);
  }
  if (*piVar8 == 2) {
    FUN_01642d70(&local_a0,*(undefined4 *)(param_2 + 0x2e0));
    uVar3 = local_a0;
    puVar4 = local_9c;
  }
  else {
    FUN_014ca13c(&local_a0,piVar8,param_3);
    uVar3 = local_a0;
    puVar4 = local_9c;
  }
  if ((char)local_a0 == '\x05') {
LAB_01483524:
    *(undefined1 *)param_1 = 5;
    return;
  }
  uVar6 = uVar3 >> 8;
  uVar9 = uVar3;
  local_a0 = uVar3;
  local_9c = puVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3 & 0xff) {
  case 0:
    uVar6 = FUN_005bc530(puVar4);
    uVar6 = uVar6 & 0xff;
    break;
  case 2:
    uVar6 = (uint)*(byte *)(puVar4 + 2);
    break;
  case 3:
    uVar9 = 3;
    if (*(char *)(puVar4 + 2) == '\a') {
      uVar10 = *puVar4;
      puVar11 = (undefined4 *)puVar4[1];
      pcVar7 = (code *)*puVar11;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar10);
      }
      if (puVar11[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      thunk_FUN_016d3fb4(puVar4);
      uVar9 = 4;
    }
  case 4:
    goto switchD_014834e0_caseD_4;
  }
  if ((uVar6 & 0xff) == 7) {
    uVar9 = 4;
  }
switchD_014834e0_caseD_4:
  *(undefined4 **)(param_1 + 2) = puVar4;
  param_1[1] = (short)(uVar3 >> 0x10);
  *(char *)((int)param_1 + 1) = (char)(uVar3 >> 8);
  *(char *)param_1 = (char)uVar9;
  return;
}

