// FUN_01b564e4 @ 01b564e4 size=244 calls_out=7 calls_in=7
// strings: 

undefined4 FUN_01b564e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_01b6de24(param_1 + 0xb,0,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 8), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1,0,0);
  }
  FUN_01b0c518(&DAT_01d51b94,param_1,param_1 + 10);
  FUN_01b1f904(param_1[1]);
  FUN_01b1f904(param_1[2]);
  FUN_01b1f904(param_1[3]);
  FUN_01b1f904(param_1[4]);
  FUN_01b1f904(param_1[5]);
  FUN_01b1f904(param_1[6]);
  FUN_01b1f904(param_1[7]);
  FUN_01b1f904(param_1[8]);
  FUN_01b6e7b8(param_1[9]);
  FUN_01b56408(param_1);
  FUN_01b70758(param_1 + 0xd);
  uVar2 = FUN_01b6b1c4(param_1);
  return uVar2;
}

