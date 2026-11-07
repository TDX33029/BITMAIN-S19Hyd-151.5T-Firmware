// FUN_008d0628 @ 008d0628 size=564 calls_out=5 calls_in=0
// strings: BUG: wrong size register

void FUN_008d0628(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uStack_21;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x21)) {
  case 0:
    iVar4 = param_1[5];
    param_1[4] = iVar4;
    if (param_1[3] != 4) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: wrong size register",0x18,&uStack_21,&DAT_01865104,&DAT_01864f40);
    }
    bVar1 = *(byte *)(iVar4 + 0x1d);
    iVar3 = *(int *)param_1[2];
    *(undefined1 *)((int)param_1 + 0x1a) = 9;
    uVar5 = bVar1 & 0xf;
    *(char *)((int)param_1 + 0x19) = (char)uVar5;
    if (*(byte *)((int)param_1 + 0x22) == 0) {
      uVar5 = uVar5 | 0x10;
    }
    param_1[0x11] = iVar4;
    *(byte *)(param_1 + 6) = *(byte *)((int)param_1 + 0x22) ^ 1;
    *(int *)((int)param_1 + 0x1d) = iVar3;
    *(char *)(param_1 + 7) = (char)*param_1;
    *(byte *)((int)param_1 + 0x1b) = *(byte *)((int)param_1 + 0x23);
    *(undefined2 *)((int)param_1 + 0x49) = 0x100;
    param_1[0xe] = (int)(param_1 + 9);
    param_1[0xf] = 8;
    param_1[9] = uVar5 | (uint)*(byte *)((int)param_1 + 0x23) << 0x10 | 0x940 | *param_1 << 0x18;
    param_1[10] = iVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864f50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864f50);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xc]) {
    case '\0':
      iVar4 = param_1[9];
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018650e0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018650e0);
    case '\x03':
      if ((char)param_1[0xb] != '\0') {
        if ((char)param_1[0xb] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_00fb7ca0(&DAT_01865040);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_01865040);
      }
      iVar4 = *(int *)(param_1[10] + 8);
      goto LAB_008d07dc;
    }
    goto LAB_008d07c4;
  }
  iVar4 = FUN_008d094c(param_1 + 0xc,*param_2);
  if (iVar4 != 0) {
    *(undefined1 *)((int)param_1 + 0x21) = 3;
    return;
  }
  if (*(char *)((int)param_1 + 0x49) == '\x03') {
    cVar2 = (char)param_1[0x2e];
    iVar4 = 0x28;
joined_r0x008d07a8:
    if (cVar2 == '\x03') {
      FUN_00a07b4c((int)(param_1 + 0xc) + iVar4);
    }
  }
  else if (*(char *)((int)param_1 + 0x49) == '\x04') {
    cVar2 = (char)param_1[0x2a];
    iVar4 = 0x20;
    goto joined_r0x008d07a8;
  }
  iVar4 = param_1[4];
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[9] = iVar4;
LAB_008d07c4:
  param_1[10] = iVar4;
  param_1[0xb] = 0;
  iVar4 = *(int *)(iVar4 + 8);
LAB_008d07dc:
  do {
  } while ((*(uint *)(iVar4 + 0xc) & 1) == 0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  return;
}

