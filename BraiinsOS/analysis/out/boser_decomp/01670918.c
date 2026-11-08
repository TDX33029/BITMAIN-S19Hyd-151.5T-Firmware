// FUN_01670918 @ 01670918 size=296 calls_out=1 calls_in=0
// strings: Parse | is_reference | Resolve

void FUN_01670918(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int **ppiVar7;
  code *pcVar8;
  int *local_20;
  int *local_1c;
  
  param_1 = (int *)*param_1;
  if (*param_1 == -0x80000000) {
    local_20 = param_1 + 4;
    ppiVar7 = &local_20;
    pcVar1 = "Parse";
    piVar6 = param_1 + 6;
    param_1 = param_1 + 1;
    pcVar8 = FUN_016753b4;
    pcVar4 = "is_reference";
    uVar2 = 5;
    pcVar3 = (code *)&LAB_01a705e0;
    uVar5 = 0xc;
  }
  else {
    local_1c = param_1 + 0xd;
    pcVar3 = FUN_01676dec;
    ppiVar7 = &local_1c;
    pcVar8 = FUN_01678d40;
    piVar6 = param_1 + 3;
    pcVar4 = &DAT_0056e188;
    pcVar1 = "Resolve";
    uVar5 = 4;
    uVar2 = 7;
  }
  FUN_01303e54(param_2,pcVar1,uVar2,"uri",3,param_1,&LAB_005fdc1c,pcVar4,uVar5,piVar6,pcVar3,
               &DAT_0053268a,5,ppiVar7,pcVar8);
  return;
}

