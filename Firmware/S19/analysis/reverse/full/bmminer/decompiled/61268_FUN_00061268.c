// FUN_00061268 @ 00061268  size=184  callers=2
// program: bmminer


int FUN_00061268(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int unaff_r4;
  
  piVar3 = *(int **)(param_1 + 0x185c);
  if (piVar3 == (int *)0x0) {
    return param_1 + 0x1458;
  }
  iVar1 = piVar3[1];
  puVar2 = (undefined1 *)**(undefined4 **)(param_2 + 0x14);
  if (0 < iVar1) {
    unaff_r4 = 0;
  }
  (*(undefined4 **)(param_2 + 0x14))[1] = puVar2;
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*piVar3 + unaff_r4 * 4);
      unaff_r4 = unaff_r4 + 1;
      iVar1 = (**(code **)(iVar1 + 0x2430))(iVar1,param_2);
      if (iVar1 != 0) {
        FUN_000658a8(2,"src/rule.c",0x97,"zlog_spec_gen_path fail");
        return 0;
      }
      piVar3 = *(int **)(param_1 + 0x185c);
    } while (unaff_r4 < piVar3[1]);
    puVar2 = *(undefined1 **)(*(int *)(param_2 + 0x14) + 4);
  }
  *puVar2 = 0;
  return **(int **)(param_2 + 0x14);
}

