// FUN_007456c0 @ 007456c0 size=172 calls_out=3 calls_in=0
// strings: JoinHandle polled after completion

void FUN_007456c0(int param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = FUN_019d72c4(param_1,param_1 + 0x48,*param_3,param_3[1]);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    uVar7 = *(undefined4 *)(param_1 + 0x44);
    if (((*param_2 & 1) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
      FUN_01443048(*(int *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    }
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = uVar5;
    *(undefined4 *)(param_2 + 0x10) = uVar6;
    *(undefined4 *)(param_2 + 0x14) = uVar7;
  }
  return;
}

