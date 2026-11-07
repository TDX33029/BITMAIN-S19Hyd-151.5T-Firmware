// FUN_00705838 @ 00705838 size=164 calls_out=10 calls_in=7
// strings: 

void FUN_00705838(undefined1 *param_1)

{
  int iVar1;
  undefined1 **ppuStack_20;
  code *pcStack_1c;
  undefined1 *local_c;
  
  local_c = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    iVar1 = FUN_01b3be88();
    break;
  case 1:
    iVar1 = FUN_01b3c308();
    break;
  case 2:
    iVar1 = FUN_01b3c354();
    break;
  case 3:
    iVar1 = FUN_01b3c3a0();
    break;
  case 4:
    iVar1 = FUN_01b3c3ec();
    break;
  case 5:
    iVar1 = FUN_01b3c484();
    break;
  case 6:
    iVar1 = FUN_01b3c51c();
    break;
  case 7:
    iVar1 = FUN_01b3c568();
    break;
  case 8:
    iVar1 = FUN_01b3c5b4();
  }
  if (iVar1 == 0) {
    ppuStack_20 = &local_c;
    pcStack_1c = FUN_007057cc;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00582b9d,&ppuStack_20,&DAT_01c06708);
  }
  return;
}

