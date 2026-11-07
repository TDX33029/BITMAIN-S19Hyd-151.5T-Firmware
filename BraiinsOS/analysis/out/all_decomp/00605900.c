// FUN_00605900 @ 00605900 size=152 calls_out=10 calls_in=8
// strings: 

void FUN_00605900(undefined1 *param_1)

{
  int iVar1;
  undefined1 *local_14;
  undefined1 **ppuStack_10;
  code *pcStack_c;
  
  local_14 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    iVar1 = FUN_0172b1f4();
    break;
  case 1:
    iVar1 = FUN_0172b788();
    break;
  case 2:
    iVar1 = FUN_0172b7d4();
    break;
  case 3:
    iVar1 = FUN_0172b820();
    break;
  case 4:
    iVar1 = FUN_0172b86c();
    break;
  case 5:
    iVar1 = FUN_0172b904();
    break;
  case 6:
    iVar1 = FUN_0172b99c();
    break;
  case 7:
    iVar1 = FUN_0172b9e8();
    break;
  case 8:
    iVar1 = FUN_0172ba34();
  }
  if (iVar1 == 0) {
    ppuStack_10 = &local_14;
    pcStack_c = FUN_006059c8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00580b25,&ppuStack_10,&DAT_01857800);
  }
  return;
}

