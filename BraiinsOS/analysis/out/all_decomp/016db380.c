// FUN_016db380 @ 016db380 size=198 calls_out=7 calls_in=4
// strings: 

void FUN_016db380(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)FUN_016d2bc8();
  uVar2 = FUN_016d2bfc(*puVar1);
  uVar5 = DAT_018db648;
  uVar6 = DAT_018db608;
  if (switchD_0066f9f0::caseD_4 < 0) {
    if (param_1 == (char *)0x0) {
      uVar3 = FUN_016dd8a2();
      FUN_016db246(uVar2,uVar3,1,&DAT_018db5c0);
      FUN_016db178(10,&DAT_018db5c0);
      DAT_018db608 = uVar6;
      DAT_018db648 = uVar5;
      return;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_016dab18(&DAT_018db5c0);
    uVar5 = DAT_018db648;
    uVar6 = DAT_018db608;
    if (param_1 == (char *)0x0) goto LAB_016db3ae;
  }
  uVar5 = DAT_018db648;
  uVar6 = DAT_018db608;
  if (*param_1 != '\0') {
    uVar3 = FUN_016dd8a2(param_1);
    FUN_016db246(param_1,uVar3,1,&DAT_018db5c0);
    FUN_016db178(0x3a,&DAT_018db5c0);
    FUN_016db178(0x20,&DAT_018db5c0);
  }
LAB_016db3ae:
  uVar3 = FUN_016dd8a2(uVar2);
  FUN_016db246(uVar2,uVar3,1,&DAT_018db5c0);
  FUN_016db178(10,&DAT_018db5c0);
  if (iVar4 == 0) {
    DAT_018db648 = uVar5;
    DAT_018db608 = uVar6;
    return;
  }
  DAT_018db608 = uVar6;
  DAT_018db648 = uVar5;
  FUN_016dabbe(&DAT_018db5c0);
  return;
}

