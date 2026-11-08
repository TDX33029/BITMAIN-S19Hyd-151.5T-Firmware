// FUN_016d6590 @ 016d6590 size=160 calls_out=2 calls_in=17
// strings: 

void FUN_016d6590(int param_1,int param_2,undefined4 param_3)

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
    piVar3 = &DAT_0042797c;
    while (param_2 != iVar1) {
      iVar2 = iVar2 + 1;
      if (iVar2 == 0x14) {
        param_1 = -0x19;
        goto LAB_016d660e;
      }
      iVar1 = *piVar3;
      piVar3 = piVar3 + 5;
    }
    FUN_016d6452(&UNK_00427968 + iVar2 * 0x14,auStack_120,param_3,1);
    param_2 = *(int *)(&UNK_0042796c + iVar2 * 0x14);
    software_interrupt(0);
    if (-1 < param_1) {
      FUN_016d6452(&UNK_00427968 + iVar2 * 0x14,auStack_120,param_3,2);
      param_2 = extraout_r1;
    }
  }
LAB_016d660e:
  FUN_016d3496(param_1,param_2);
  return;
}

