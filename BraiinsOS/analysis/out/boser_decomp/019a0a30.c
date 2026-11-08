// FUN_019a0a30 @ 019a0a30 size=392 calls_out=4 calls_in=2
// strings: 

void FUN_019a0a30(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 *local_1b8;
  undefined4 local_1b0;
  undefined1 *local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  int local_2c;
  undefined4 local_28;
  
  local_1a4 = 0x6578;
  local_1a8 = 0x652f666c;
  local_1ac = &DAT_65732f63;
  local_1b0 = 0x6f72702f;
  local_1a2 = 0;
  FUN_012fbc58(&local_2c,&local_1b0,0xf);
  if (local_2c == 1) {
    uVar3 = 2;
    local_1b8 = &DAT_01d27a70;
    local_1c0 = -0x80000000;
    local_1bc = uVar3;
  }
  else {
    FUN_019a0c3c(&local_1c0,local_28);
    if (local_1c0 != -0x80000000) goto LAB_019a0b94;
    uVar3 = local_1bc & 0xff;
  }
  puVar1 = local_1b8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    cVar2 = FUN_019a0d94(local_1b8);
    if (cVar2 != '\0') goto LAB_019a0b94;
    goto LAB_019a0ba4;
  case 1:
    cVar2 = local_1bc._1_1_;
    break;
  case 2:
    cVar2 = *(char *)(local_1b8 + 2);
    break;
  case 3:
    if (*(char *)(local_1b8 + 2) == '\0') {
      uVar5 = *local_1b8;
      puVar6 = (undefined4 *)local_1b8[1];
      *(undefined1 *)(param_1 + 1) = 2;
      pcVar4 = (code *)*puVar6;
      *param_1 = -0x80000000;
      param_1[2] = (int)&DAT_01d2794c;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      thunk_FUN_01be4678(puVar1);
      return;
    }
    goto LAB_019a0b94;
  }
  if (cVar2 == '\0') {
LAB_019a0ba4:
    *(undefined1 *)(param_1 + 1) = 2;
    *param_1 = -0x80000000;
    param_1[2] = (int)&DAT_01d2794c;
    return;
  }
LAB_019a0b94:
  *param_1 = local_1c0;
  param_1[1] = local_1bc;
  param_1[2] = (int)local_1b8;
  return;
}

