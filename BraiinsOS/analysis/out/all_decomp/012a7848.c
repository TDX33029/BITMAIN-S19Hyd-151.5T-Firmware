// FUN_012a7848 @ 012a7848 size=56 calls_out=1 calls_in=0
// strings: 

void FUN_012a7848(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 10;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined **)(param_1 + 8) = &DAT_0188be30;
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_0188fa30);
}

