// FUN_01969520 @ 01969520 size=108 calls_out=3 calls_in=3
// strings: 

void FUN_01969520(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_2 == 1) {
    iVar3 = param_2[2];
    *param_1 = param_2[1];
    param_1[1] = iVar3;
    thunk_FUN_01be4678(param_2);
    return;
  }
  if (*param_2 - 2U < 4) {
    uVar2 = 0x25;
  }
  else {
    uVar2 = 0x15;
  }
  uVar1 = FUN_01969590(param_2);
  FUN_019a6b0c(param_1,uVar2,uVar1,&DAT_01d27384);
  return;
}

