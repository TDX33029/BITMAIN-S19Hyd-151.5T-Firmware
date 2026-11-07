// FUN_015ea4e8 @ 015ea4e8 size=220 calls_out=3 calls_in=2
// strings: 

void FUN_015ea4e8(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  uint local_48;
  uint local_44;
  uint **local_3c;
  uint *local_14;
  int local_10;
  int *local_c;
  
  local_14 = (uint *)*param_1;
  local_10 = param_1[1];
  local_3c = &local_14;
  local_c = param_1;
  if ((local_14[1] & 1) == 0) {
    local_48 = 0x80000000;
    FUN_015be95c(&local_48,&DAT_018ab198,local_10,(char)param_1[2],*(undefined1 *)((int)param_1 + 9)
                );
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15ea560);
    (*pcVar1)();
  }
  local_48 = *local_14;
  local_44 = local_14[1] >> 1;
  uVar2 = FUN_015be95c(&local_48,&DAT_018ab17c,local_10,(char)param_1[2],
                       *(undefined1 *)((int)param_1 + 9));
  if ((local_48 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01842e60();
  }
  thunk_FUN_016d3fb4(local_44);
                    /* WARNING: Subroutine does not return */
  FUN_01842e60(uVar2);
}

