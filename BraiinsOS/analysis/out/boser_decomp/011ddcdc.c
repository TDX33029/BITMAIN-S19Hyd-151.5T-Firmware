// FUN_011ddcdc @ 011ddcdc size=84 calls_out=0 calls_in=1
// strings: 

void FUN_011ddcdc(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x98);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x10))
              (param_2 + 0xa4,*(undefined4 *)(param_2 + 0x9c),*(undefined4 *)(param_2 + 0xa0));
  }
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  *(int *)(param_2 + 0x98) = *param_3;
  *(int *)(param_2 + 0x9c) = iVar1;
  *(int *)(param_2 + 0xa0) = iVar2;
  *(int *)(param_2 + 0xa4) = iVar3;
  FUN_01bed4e2(param_1,param_2,0xc0);
  return;
}

