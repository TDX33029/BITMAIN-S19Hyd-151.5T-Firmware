// FUN_015e6ab4 @ 015e6ab4 size=528 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x015e6b04) */
/* WARNING: Removing unreachable block (ram,0x015e6b08) */
/* WARNING: Removing unreachable block (ram,0x015e6bb0) */
/* WARNING: Removing unreachable block (ram,0x015e6b14) */
/* WARNING: Removing unreachable block (ram,0x015e6b20) */

void FUN_015e6ab4(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined1 *local_19c;
  char local_198 [376];
  
  builtin_strncpy(local_198,"lf/exe",7);
  local_19c = &DAT_65732f63;
  local_1a0 = 0x6f72702f;
  iVar4 = 0;
  do {
    if (local_198[iVar4] == '\0') {
      if (iVar4 == 6) {
        FUN_015e6d48(&local_1b0,&local_1a0);
        if (local_1b0 != -0x80000000) goto LAB_015e6ca0;
        uVar3 = local_1ac & 0xff;
        goto LAB_015e6be0;
      }
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  uVar3 = 2;
  local_1a8 = &DAT_018aae48;
  local_1b0 = -0x80000000;
  local_1ac = uVar3;
LAB_015e6be0:
  puVar1 = local_1a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    cVar2 = FUN_015e6e98(local_1a8);
    if (cVar2 != '\0') goto LAB_015e6ca0;
    goto LAB_015e6cb0;
  case 1:
    cVar2 = local_1ac._1_1_;
    break;
  case 2:
    cVar2 = *(char *)(local_1a8 + 2);
    break;
  case 3:
    if (*(char *)(local_1a8 + 2) == '\0') {
      uVar6 = *local_1a8;
      puVar7 = (undefined4 *)local_1a8[1];
      *(undefined1 *)(param_1 + 1) = 2;
      pcVar5 = (code *)*puVar7;
      *param_1 = -0x80000000;
      param_1[2] = (int)&DAT_018aad20;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      thunk_FUN_016d3fb4(puVar1);
      return;
    }
    goto LAB_015e6ca0;
  }
  if (cVar2 == '\0') {
LAB_015e6cb0:
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = -0x80000000;
    param_1[2] = (int)&DAT_018aad20;
    return;
  }
LAB_015e6ca0:
  *param_1 = local_1b0;
  param_1[1] = local_1ac;
  param_1[2] = (int)local_1a8;
  return;
}

