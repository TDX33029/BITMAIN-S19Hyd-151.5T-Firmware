// FUN_0003d2bc @ 0003d2bc  size=368  callers=1
// program: bmminer


int FUN_0003d2bc(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_858;
  undefined4 local_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  char local_828 [2052];
  
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = param_3 * param_4 * 0x34;
    iVar3 = 0;
    while( true ) {
      iVar5 = iVar3 + 1;
      iVar6 = *(int *)(DAT_00507488 + (int)(&DAT_00202a2a + param_2) * 4 + 4);
      sVar1 = fread(&uStack_858,1,0x30,(FILE *)*param_1);
      iVar2 = iVar6 + iVar4;
      if (sVar1 != 0x30) break;
      *(undefined4 *)(iVar2 + 4) = uStack_858;
      *(undefined4 *)(iVar2 + 0x14) = local_848;
      *(undefined4 *)(iVar2 + 0x18) = uStack_844;
      *(undefined4 *)(iVar2 + 0x1c) = uStack_840;
      *(undefined4 *)(iVar2 + 0x20) = uStack_83c;
      *(undefined4 *)(iVar2 + 0x24) = local_838;
      *(undefined4 *)(iVar2 + 0x28) = uStack_834;
      *(undefined4 *)(iVar2 + 0x2c) = uStack_830;
      *(undefined4 *)(iVar2 + 0x30) = uStack_82c;
      *(undefined4 *)(iVar2 + 8) = local_854;
      *(undefined4 *)(iVar2 + 0xc) = uStack_850;
      *(undefined4 *)(iVar2 + 0x10) = uStack_84c;
      *(int *)(iVar6 + iVar4) = iVar3;
      iVar4 = iVar4 + 0x34;
      iVar3 = iVar5;
      if (iVar5 == param_4) {
        return iVar5;
      }
    }
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"Load core pattern failed!\n",0x1b);
      FUN_00032218(3,local_828,0);
      return iVar3;
    }
  }
  return iVar3;
}

