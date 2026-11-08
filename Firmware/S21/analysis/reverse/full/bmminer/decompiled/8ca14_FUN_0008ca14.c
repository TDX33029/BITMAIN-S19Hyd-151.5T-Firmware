// FUN_0008ca14 @ 0008ca14  size=180  callers=2
// program: bmminer


void FUN_0008ca14(int param_1,undefined4 param_2)

{
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/record_table.c",0x15,"records is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/record_table.c",0x16,"-record_table[%p]-",param_1);
    for (local_c = FUN_000958d8(param_1); local_c != 0; local_c = FUN_00095974(param_1,local_c)) {
      FUN_0008c7d0(*(undefined4 *)(local_c + 8),param_2);
    }
  }
  return;
}

