// FUN_00089010 @ 00089010  size=136  callers=1
// program: bmminer


void FUN_00089010(int param_1)

{
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x5b,"categories is null or 0");
  }
  else {
    for (local_c = FUN_000958d8(param_1); local_c != 0; local_c = FUN_00095974(param_1,local_c)) {
      FUN_00088b5c(*(undefined4 *)(local_c + 8));
    }
  }
  return;
}

