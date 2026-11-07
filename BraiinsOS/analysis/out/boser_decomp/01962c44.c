// FUN_01962c44 @ 01962c44 size=108 calls_out=2 calls_in=7
// strings: 

void FUN_01962c44(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*param_2 != -0x7fffffeb) {
    uVar4 = FUN_01962cb0(param_2);
    if (((int)uVar4 != 0) &&
       (iVar1 = FUN_01962be4((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,param_4), iVar1 != 0
       )) {
      iVar1 = param_2[1];
      iVar2 = param_2[2];
      iVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      iVar1 = param_2[5];
      iVar2 = param_2[6];
      iVar3 = param_2[7];
      param_1[4] = param_2[4];
      param_1[5] = iVar1;
      param_1[6] = iVar2;
      param_1[7] = iVar3;
      param_1 = param_2;
    }
  }
  *param_1 = -0x7fffffeb;
  return;
}

