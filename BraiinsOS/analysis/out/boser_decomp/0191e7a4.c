// FUN_0191e7a4 @ 0191e7a4 size=224 calls_out=6 calls_in=0
// strings: 

void FUN_0191e7a4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_108 [30];
  undefined2 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  
  FUN_018f3128(local_108,param_3);
  if (local_108[0] == -0x7fffffd7) {
    local_88 = 1;
    local_8c = 0x80000011;
    FUN_0191d7c0(local_108,&local_8c);
    local_90 = 5;
    FUN_01917558(&local_8c,local_108);
    FUN_018f2280(param_3,&local_8c);
    FUN_018fec60(local_108,param_2 + 0x40,*(undefined1 *)(param_3 + 0x250));
    FUN_018fe45c(*(undefined4 *)(param_2 + 0x48),local_108,param_3);
    iVar1 = 0;
    *param_1 = -0x7fffffd7;
    do {
      *(undefined1 *)((int)local_108 + iVar1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x40);
  }
  else {
    piVar2 = (int *)((uint)local_108 | 4);
    iVar1 = piVar2[1];
    iVar3 = piVar2[2];
    param_1[1] = *piVar2;
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    iVar1 = piVar2[4];
    iVar3 = piVar2[5];
    iVar4 = piVar2[6];
    param_1[4] = piVar2[3];
    param_1[5] = iVar1;
    param_1[6] = iVar3;
    param_1[7] = iVar4;
    *param_1 = local_108[0];
  }
  return;
}

