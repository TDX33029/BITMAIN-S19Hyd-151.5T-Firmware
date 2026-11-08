// FUN_00088d14 @ 00088d14  size=180  callers=2
// program: bmminer


void FUN_00088d14(int param_1,undefined4 param_2)

{
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x15,"categories is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/category_table.c",0x16,"-category_table[%p]-",param_1);
    for (local_c = FUN_000958d8(param_1); local_c != 0; local_c = FUN_00095974(param_1,local_c)) {
      FUN_0008832c(*(undefined4 *)(local_c + 8),param_2);
    }
  }
  return;
}

