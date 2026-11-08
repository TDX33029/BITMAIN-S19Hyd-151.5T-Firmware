// FUN_012abc80 @ 012abc80 size=212 calls_out=5 calls_in=1
// strings: 

void FUN_012abc80(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(param_1 + 0x15) == '\0') {
    piVar5 = (int *)(iVar3 + 0xa4);
    iVar1 = *piVar5;
  }
  else {
    piVar4 = (int *)(iVar3 + 0xb0);
    iVar1 = *(int *)(iVar3 + 0xa4);
    piVar5 = (int *)0x0;
    if (iVar1 != -0x80000000) {
      piVar5 = (int *)(iVar3 + 0xa4);
    }
    if (*piVar4 != -0x80000000) goto LAB_012abcd0;
  }
  piVar4 = piVar5;
  if (iVar1 == -0x80000000) {
    return;
  }
LAB_012abcd0:
  if (param_2 != 0) {
    FUN_012b2fd4(*(undefined4 *)(param_1 + 4),"\n",1);
  }
  FUN_006666fc(&local_24,piVar4[1],piVar4[2]);
  FUN_012b25d0(&local_24);
  uVar2 = *(undefined4 *)(param_1 + 4);
  FUN_012b255c(uVar2,local_20,local_1c);
  if (param_3 != 0) {
    FUN_012b2fd4(uVar2,"\n",1);
  }
  FUN_0134bd64(local_24,local_20);
  return;
}

