// FUN_000931cc @ 000931cc  size=276  callers=0
// program: bmminer


undefined4 FUN_000931cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(*(int *)(param_2 + 0xc) + 4) = **(undefined4 **)(param_2 + 0xc);
  iVar1 = (**(code **)(param_1 + 0x2424))(param_1,param_2,*(undefined4 *)(param_2 + 0xc));
  if (iVar1 < 0) {
    FUN_00095b4c(2,"src/spec.c",0x1a2,"a_spec->gen_buf fail");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_000978c8(*(undefined4 *)(param_2 + 0x14),**(undefined4 **)(param_2 + 0xc),
                         *(int *)(*(int *)(param_2 + 0xc) + 4) - **(int **)(param_2 + 0xc),
                         *(undefined4 *)(param_1 + 0x2414),*(undefined4 *)(param_1 + 0x2418),
                         *(undefined4 *)(param_1 + 0x2420),*(undefined4 *)(param_1 + 0x241c));
  }
  return uVar2;
}

