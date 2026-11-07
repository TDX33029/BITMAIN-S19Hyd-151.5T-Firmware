// FUN_00088564 @ 00088564  size=656  callers=2
// program: bmminer


undefined4 FUN_00088564(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_14 = 0;
  if (*(int *)(param_1 + 0x448) != 0) {
    FUN_000947ac(*(undefined4 *)(param_1 + 0x448));
  }
  memset((void *)(param_1 + 0x408),0,0x20);
  uVar1 = FUN_000946a4(0);
  *(undefined4 *)(param_1 + 0x448) = uVar1;
  if (*(int *)(param_1 + 0x448) == 0) {
    FUN_00095b4c(2,"src/category.c",0x48,"zc_arraylist_new fail");
    uVar1 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < param_2[1]; local_c = local_c + 1) {
      iVar3 = *(int *)(*param_2 + local_c * 4);
      iVar2 = FUN_00091e44(iVar3,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_00094aa4(*(undefined4 *)(param_1 + 0x448),iVar3);
        if (iVar2 != 0) {
          FUN_00095b4c(2,"src/category.c",0x51,"zc_arrylist_add fail");
          goto LAB_000887c8;
        }
        FUN_000884c8(param_1,iVar3);
        local_10 = local_10 + 1;
      }
      iVar2 = FUN_00091dcc(iVar3);
      if (iVar2 != 0) {
        local_14 = iVar3;
      }
    }
    if (local_10 == 0) {
      if (local_14 == 0) {
        FUN_00095b4c(0,"src/category.c",0x67,"category[%s], no match rules & no wastebin_rule",
                     param_1);
      }
      else {
        iVar2 = param_1;
        FUN_00095b4c(0,"src/category.c",0x5f,"category[%s], no match rules, use wastebin_rule",
                     param_1);
        iVar3 = FUN_00094aa4(*(undefined4 *)(param_1 + 0x448),local_14);
        if (iVar3 != 0) {
          FUN_00095b4c(2,"src/category.c",0x61,"zc_arrylist_add fail",iVar2);
LAB_000887c8:
          FUN_000947ac(*(undefined4 *)(param_1 + 0x448));
          *(undefined4 *)(param_1 + 0x448) = 0;
          return 0xffffffff;
        }
        FUN_000884c8(param_1,local_14);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

