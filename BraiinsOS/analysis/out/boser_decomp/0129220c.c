// FUN_0129220c @ 0129220c size=132 calls_out=1 calls_in=2
// strings: 

int FUN_0129220c(int *param_1)

{
  int local_20;
  int local_1c;
  undefined1 *local_18;
  code *local_14;
  int *local_10;
  code *local_c;
  
  local_18 = (undefined1 *)&local_20;
  if (*param_1 == 0) {
    return param_1[1];
  }
  if (*param_1 == 1) {
    local_20 = param_1[1];
    local_1c = param_1[2];
    local_10 = &local_1c;
    local_c = FUN_0128e934;
    local_14 = FUN_0128e934;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00578fb3,&local_18,&DAT_01c263e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_00405211,0x25,&DAT_01c263e0);
}

