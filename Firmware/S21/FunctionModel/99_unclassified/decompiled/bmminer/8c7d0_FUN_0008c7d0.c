// FUN_0008c7d0 @ 0008c7d0  size=132  callers=2
// program: bmminer


void FUN_0008c7d0(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/record.c",0xe,"a_record is null or 0");
  }
  else {
    FUN_00095b4c(param_2,"src/record.c",0xf,"--record:[%p][%s:%p]--",param_1,param_1,
                 *(undefined4 *)(param_1 + 0x404));
  }
  return;
}

