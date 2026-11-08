// FUN_00088f88 @ 00088f88  size=136  callers=1
// program: bmminer


void FUN_00088f88(int param_1)

{
  int local_c;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/category_table.c",0x4e,"categories is null or 0");
  }
  else {
    for (local_c = FUN_000958d8(param_1); local_c != 0; local_c = FUN_00095974(param_1,local_c)) {
      FUN_00088aac(*(undefined4 *)(local_c + 8));
    }
  }
  return;
}

