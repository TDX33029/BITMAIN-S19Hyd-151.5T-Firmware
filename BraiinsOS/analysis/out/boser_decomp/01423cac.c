// FUN_01423cac @ 01423cac size=100 calls_out=1 calls_in=2
// strings: 

void FUN_01423cac(undefined2 *param_1,undefined4 *param_2,uint param_3,int param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_4 + 1U < (uint)(0xfffffffd < param_3)) &&
     (iVar1 = FUN_0137c924(param_2,param_3 + 2), iVar1 != 0)) {
    param_4 = 0;
    param_3 = 0;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0xe) = param_4;
  *(undefined4 *)(param_1 + 2) = param_5;
  *param_1 = 2;
  return;
}

