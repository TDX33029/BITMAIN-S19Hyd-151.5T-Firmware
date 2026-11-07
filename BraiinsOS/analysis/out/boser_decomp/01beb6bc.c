// FUN_01beb6bc @ 01beb6bc size=198 calls_out=7 calls_in=4
// strings: 

void FUN_01beb6bc(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)FUN_01be3244();
  uVar2 = FUN_01be3278(*puVar1);
  uVar5 = DAT_01d51060;
  uVar6 = DAT_01d51020;
  if (DAT_01d51024 < 0) {
    if (param_1 == (char *)0x0) {
      uVar3 = FUN_01bedbda();
      FUN_01beb584(uVar2,uVar3,1,&DAT_01d50fd8);
      FUN_01beb490(10,&DAT_01d50fd8);
      DAT_01d51020 = uVar6;
      DAT_01d51060 = uVar5;
      return;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_01beae30(&DAT_01d50fd8);
    uVar5 = DAT_01d51060;
    uVar6 = DAT_01d51020;
    if (param_1 == (char *)0x0) goto LAB_01beb6ea;
  }
  uVar5 = DAT_01d51060;
  uVar6 = DAT_01d51020;
  if (*param_1 != '\0') {
    uVar3 = FUN_01bedbda(param_1);
    FUN_01beb584(param_1,uVar3,1,&DAT_01d50fd8);
    FUN_01beb490(0x3a,&DAT_01d50fd8);
    FUN_01beb490(0x20,&DAT_01d50fd8);
  }
LAB_01beb6ea:
  uVar3 = FUN_01bedbda(uVar2);
  FUN_01beb584(uVar2,uVar3,1,&DAT_01d50fd8);
  FUN_01beb490(10,&DAT_01d50fd8);
  if (iVar4 == 0) {
    DAT_01d51060 = uVar5;
    DAT_01d51020 = uVar6;
    return;
  }
  DAT_01d51020 = uVar6;
  DAT_01d51060 = uVar5;
  FUN_01beaed6(&DAT_01d50fd8);
  return;
}

