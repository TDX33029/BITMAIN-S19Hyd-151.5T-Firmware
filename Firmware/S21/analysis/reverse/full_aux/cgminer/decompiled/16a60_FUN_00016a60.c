// FUN_00016a60 @ 00016a60  size=392  callers=7
// program: cgminer


void FUN_00016a60(int param_1,int param_2,int param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *__format;
  char acStack_50 [52];
  
  memset(acStack_50,0,0x30);
  if (param_4 != (char *)0x0 && param_1 != 0) {
    uVar1 = FUN_00048fb8();
    uVar2 = FUN_00048c28();
    uVar3 = FUN_000491bc();
    FUN_00049a4c(uVar2,"STATUS",uVar3);
    uVar3 = FUN_00049408(DAT_000685b0,DAT_000685b0 >> 0x1f);
    FUN_00049a4c(uVar2,&DAT_0004b200,uVar3);
    uVar3 = FUN_00049408(param_3,param_3 >> 0x1f);
    FUN_00049a4c(uVar2,&DAT_0004b208,uVar3);
    if (param_3 == 7) {
      __format = param_4;
      param_4 = DAT_00072e70;
    }
    else {
      __format = "%s";
    }
    snprintf(acStack_50,0x30,__format,param_4);
    uVar3 = FUN_000491bc(acStack_50);
    FUN_00049a4c(uVar2,&DAT_0004b210,uVar3);
    uVar3 = FUN_000491bc(DAT_000682d0);
    FUN_00049a4c(uVar2,"Description",uVar3);
    FUN_00049f0c(uVar1,uVar2);
    FUN_00049a4c(param_1,"STATUS",uVar1);
    if (param_2 == 0) {
      uVar1 = FUN_00049408(1,0);
      FUN_00049a4c(param_1,&DAT_0004b220,uVar1);
      return;
    }
  }
  return;
}

