// FUN_015786e4 @ 015786e4 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_015786e4(char *param_1)

{
  char *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  if (*param_1 == '\0') {
    local_14 = 0;
  }
  else {
    local_14 = FUN_016dd8a2(param_1 + 1);
    local_14 = local_14 + 1;
  }
  local_c = &DAT_0157d360;
  local_18 = param_1;
  local_10 = (undefined1 *)&local_18;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_005976d7,&local_10,&DAT_018a929c);
}

