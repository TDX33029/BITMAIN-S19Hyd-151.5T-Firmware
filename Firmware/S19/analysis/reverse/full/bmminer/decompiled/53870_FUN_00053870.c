// FUN_00053870 @ 00053870  size=304  callers=9
// program: bmminer


void FUN_00053870(int param_1,int param_2,int param_3,char *param_4,undefined1 param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uStack00000000;
  char acStack_168 [159];
  undefined1 local_c9;
  char acStack_c8 [159];
  undefined1 local_29;
  
  if (param_1 == 0) {
    return;
  }
  vsnprintf(acStack_168,0xa0,param_4,&param_5);
  local_c9 = 0;
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
    pcVar1 = acStack_168;
    uVar3 = 0xffffffff;
    uVar4 = 0;
  }
  else {
    pcVar1 = (char *)FUN_0005516c(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      if (param_3 == 8) {
        param_3 = 6;
      }
      if (*(int *)(param_2 + 0x14) != -2) {
        snprintf(acStack_c8,0xa0,"%s near end of file",acStack_168);
        pcVar1 = acStack_c8;
        local_29 = 0;
        goto LAB_00053904;
      }
    }
    else if (*(uint *)(param_2 + 0x2c) < 0x15) {
      snprintf(acStack_c8,0xa0,"%s near \'%s\'",acStack_168,pcVar1);
      pcVar1 = acStack_c8;
      local_29 = 0;
      goto LAB_00053904;
    }
    pcVar1 = acStack_168;
  }
LAB_00053904:
  FUN_000570fc(param_1,uVar3,uVar2,uVar4,param_3,"%s",pcVar1);
  return;
}

