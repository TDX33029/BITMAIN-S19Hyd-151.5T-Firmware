// FUN_0005fb54 @ 0005fb54  size=96  callers=2
// program: bmminer


void FUN_0005fb54(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    FUN_000658a8(2,"src/record.c",0xe,"a_record is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/record.c",0xf,"--record:[%p][%s:%p]--",param_1,param_1,
               *(undefined4 *)(param_1 + 0x404));
  return;
}

