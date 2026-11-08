// FUN_00e7b4e0 @ 00e7b4e0 size=112 calls_out=0 calls_in=7
// strings: 

int FUN_00e7b4e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x150);
  iVar2 = *(int *)(param_2 + 0x148);
  iVar1 = *(int *)(param_2 + 0x14c);
  *(int *)(param_2 + 0x148) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x14c) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7b53c;
    }
LAB_00e7b530:
    *(int *)(iVar1 + 0x148) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x14c) = iVar1;
    if (iVar1 != 0) goto LAB_00e7b530;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x150) = iVar4 + -1;
LAB_00e7b53c:
  return param_2 + -8;
}

