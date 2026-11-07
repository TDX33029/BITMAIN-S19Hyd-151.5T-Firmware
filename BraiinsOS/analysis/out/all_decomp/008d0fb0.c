// FUN_008d0fb0 @ 008d0fb0 size=224 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_008d0fb0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x9c)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x90);
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x9d);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x94);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01864f70);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01864f70);
  }
  iVar2 = FUN_008d094c(param_1,*param_2);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x9c) = 3;
    return 1;
  }
  if (*(char *)(param_1 + 0x19) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x88);
    iVar2 = 0x28;
  }
  else {
    if (*(char *)(param_1 + 0x19) != '\x04') goto LAB_008d107c;
    cVar1 = *(char *)(param_1 + 0x78);
    iVar2 = 0x20;
  }
  if (cVar1 == '\x03') {
    FUN_00a07b4c(param_1 + iVar2);
    *(undefined1 *)(param_1 + 0x9c) = 1;
    return 0;
  }
LAB_008d107c:
  *(undefined1 *)(param_1 + 0x9c) = 1;
  return 0;
}

