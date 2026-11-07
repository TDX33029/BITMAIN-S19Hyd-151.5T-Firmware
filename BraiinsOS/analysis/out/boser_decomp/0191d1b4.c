// FUN_0191d1b4 @ 0191d1b4 size=168 calls_out=1 calls_in=1
// strings: 

void FUN_0191d1b4(uint *param_1,int param_2,uint *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = 0xb;
  if (0x80000012 < *param_3) {
    iVar1 = *param_3 + 0x7fffffed;
  }
  if (iVar1 == 3) {
    if (*(char *)(param_2 + 0x259) != '\0') {
      *(undefined1 *)(param_2 + 0x1cc) = 0x10;
LAB_0191d230:
      uVar2 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      uVar2 = param_3[5];
      uVar4 = param_3[6];
      uVar5 = param_3[7];
      param_1[4] = param_3[4];
      param_1[5] = uVar2;
      param_1[6] = uVar4;
      param_1[7] = uVar5;
      return;
    }
    uVar3 = 0x10;
  }
  else if (iVar1 == 6) {
    (**(code **)(param_5 + 0x1c))(param_4);
    uVar3 = 2;
  }
  else {
    if (iVar1 != 0x11) goto LAB_0191d230;
    uVar3 = 4;
  }
  FUN_018f1f40(param_1,param_2,uVar3,param_3);
  return;
}

