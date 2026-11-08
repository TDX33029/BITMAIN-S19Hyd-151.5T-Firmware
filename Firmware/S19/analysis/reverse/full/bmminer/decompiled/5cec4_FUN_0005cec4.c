// FUN_0005cec4 @ 0005cec4  size=532  callers=2
// program: bmminer


undefined4 FUN_0005cec4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x448) != 0) {
    FUN_00064e94();
  }
  memset((void *)(param_1 + 0x408),0,0x20);
  iVar1 = FUN_00064dd4(0);
  *(int *)(param_1 + 0x448) = iVar1;
  if (iVar1 == 0) {
    FUN_000658a8(2,"src/category.c",0x48,"zc_arraylist_new fail");
    return 0xffffffff;
  }
  if (0 < *param_3) {
    iVar1 = 0;
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar5 = *(int *)(*param_2 + iVar6 * 4);
      iVar2 = FUN_000634fc(iVar5,param_1);
      if (iVar2 != 0) {
        iVar2 = FUN_00064fa8(*(undefined4 *)(param_1 + 0x448),iVar5);
        if (iVar2 != 0) {
          FUN_000658a8(2,"src/category.c",0x51,"zc_arrylist_add fail");
          goto LAB_0005d054;
        }
        pbVar4 = (byte *)(param_1 + 0x407);
        pbVar3 = (byte *)(iVar5 + 0x1007);
        do {
          pbVar4 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
          *pbVar4 = *pbVar4 | *pbVar3;
        } while (pbVar4 != (byte *)(param_1 + 0x427));
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar2 = FUN_000634b0(iVar5);
      if (iVar2 != 0) {
        iVar1 = iVar5;
      }
    } while (iVar6 < *param_3);
    if (iVar7 != 0) {
      return 0;
    }
    if (iVar1 != 0) {
      iVar6 = param_1;
      FUN_000658a8(0,"src/category.c",0x5f,"category[%s], no match rules, use wastebin_rule",param_1
                  );
      iVar7 = FUN_00064fa8(*(undefined4 *)(param_1 + 0x448),iVar1);
      if (iVar7 == 0) {
        pbVar4 = (byte *)(iVar1 + 0x1007);
        pbVar3 = (byte *)(param_1 + 0x407);
        do {
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
          *pbVar3 = *pbVar3 | *pbVar4;
        } while ((byte *)(param_1 + 0x427) != pbVar3);
        return 0;
      }
      FUN_000658a8(2,"src/category.c",0x61,"zc_arrylist_add fail",iVar6);
LAB_0005d054:
      FUN_00064e94(*(undefined4 *)(param_1 + 0x448));
      *(undefined4 *)(param_1 + 0x448) = 0;
      return 0xffffffff;
    }
  }
  FUN_000658a8(0,"src/category.c",0x67,"category[%s], no match rules & no wastebin_rule",param_1);
  return 0;
}

