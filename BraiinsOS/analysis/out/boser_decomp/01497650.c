// FUN_01497650 @ 01497650 size=80 calls_out=2 calls_in=16
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01497650(undefined4 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_01298504(2,1);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,2);
  }
  *puVar1 = param_2;
  *param_1 = 2;
  param_1[1] = puVar1;
  param_1[2] = 2;
  return;
}

