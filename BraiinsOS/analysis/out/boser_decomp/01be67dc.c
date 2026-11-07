// FUN_01be67dc @ 01be67dc size=160 calls_out=2 calls_in=8
// strings: 

void FUN_01be67dc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_120 [256];
  
  software_interrupt(0);
  if (param_1 == -0x19 && param_2 != 0) {
    iVar2 = 0;
    iVar1 = -0x7fef76fa;
    piVar3 = &DAT_00566fec;
    while (param_2 != iVar1) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x14) {
        param_1 = -0x19;
        goto LAB_01be685a;
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 5;
    }
    FUN_01be669c(&UNK_00566fd8 + iVar2 * 0x14,auStack_120,param_3,1);
    param_2 = *(int *)(&UNK_00566fdc + iVar2 * 0x14);
    software_interrupt(0);
    if (-1 < param_1) {
      FUN_01be669c(&UNK_00566fd8 + iVar2 * 0x14,auStack_120,param_3,2);
      param_2 = extraout_r1;
    }
  }
LAB_01be685a:
  FUN_01be3b5a(param_1,param_2);
  return;
}

