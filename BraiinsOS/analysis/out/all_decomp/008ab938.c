// FUN_008ab938 @ 008ab938 size=208 calls_out=4 calls_in=1
// strings: 

void FUN_008ab938(char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x16e)) {
  case 0:
    param_2[0x52] = 5;
    param_2[0x50] = 500000000;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[0x4e] = 0;
    param_2[0x4f] = 0;
    *(undefined1 *)(param_2 + 0x4d) = 0;
    puVar1 = param_2 + 0x59;
    *puVar1 = param_2[0x58];
    puVar3 = (undefined1 *)((int)param_2 + 0x16d);
    *puVar3 = *(undefined1 *)(param_2 + 0x5b);
    param_2[0x54] = param_2[0x5a];
    param_2[0x55] = puVar3;
    param_2[0x56] = puVar1;
    param_2[0x57] = &LAB_0080b7e0;
    param_2[0x4a] = param_2[0x5a];
    param_2[0x4b] = puVar3;
    param_2[0x4c] = puVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01863d4c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01863d4c);
  }
  FUN_00816b40(param_1,param_2);
  uVar2 = 3;
  if (*param_1 != '\x05') {
    uVar2 = 1;
    FUN_008ab588(param_2);
  }
  *(undefined1 *)((int)param_2 + 0x16e) = uVar2;
  return;
}

