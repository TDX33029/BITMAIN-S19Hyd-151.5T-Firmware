// FUN_0005fd28 @ 0005fd28  size=144  callers=1
// program: bmminer


void FUN_0005fd28(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/record_table.c",0x15,"records is null or 0");
    return;
  }
  FUN_000658a8(param_2,"src/record_table.c",0x16,"-record_table[%p]-",param_1);
  for (iVar1 = FUN_00065770(param_1); iVar1 != 0; iVar1 = FUN_000657b8(param_1,iVar1)) {
    FUN_0005fb54(*(undefined4 *)(iVar1 + 8),param_2);
  }
  return;
}

