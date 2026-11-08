// FUN_013e9180 @ 013e9180 size=292 calls_out=4 calls_in=2
// strings: 

int FUN_013e9180(char *param_1)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined2 local_60 [2];
  undefined4 *local_5c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case '\0':
    if (*(int *)(param_1 + 4) == 0x6e) {
      local_60[0] = 0x23;
      goto LAB_013e9270;
    }
    goto LAB_013e9244;
  case '\x01':
    pcVar3 = param_1 + 1;
    break;
  case '\x02':
    pcVar3 = (char *)(*(int *)(param_1 + 4) + 8);
    break;
  case '\x03':
    if (*(char *)(*(int *)(param_1 + 4) + 8) != '\x16') goto LAB_013e9244;
    puVar4 = *(undefined4 **)(param_1 + 4);
    goto LAB_013e920c;
  }
  if (*pcVar3 == '\x16') {
    puVar4 = *(undefined4 **)(param_1 + 4);
    local_60[0] = 0x23;
    if (*param_1 == '\x03') {
LAB_013e920c:
      local_60[0] = 0x23;
      uVar5 = *puVar4;
      puVar6 = (undefined4 *)puVar4[1];
      pcVar2 = (code *)*puVar6;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      thunk_FUN_01be4678(puVar4);
    }
  }
  else {
LAB_013e9244:
    uVar5 = *(undefined4 *)param_1;
    uVar7 = *(undefined4 *)(param_1 + 4);
    local_5c = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (local_5c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    *local_5c = 1;
    local_5c[1] = 1;
    local_5c[2] = uVar5;
    local_5c[3] = uVar7;
    local_60[0] = 0x1f;
  }
LAB_013e9270:
  iVar1 = thunk_FUN_01be5118(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x44);
  }
  FUN_01bed4e2(iVar1,local_60,0x44);
  return iVar1;
}

